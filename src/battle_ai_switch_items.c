#include "global.h"
#include "battle.h"
#include "battle_ai_main.h"
#include "battle_ai_util.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "battle_setup.h"
#include "data.h"
#include "pokemon.h"
#include "random.h"
#include "util.h"
#include "constants/abilities.h"
#include "constants/item_effects.h"
#include "constants/items.h"
#include "constants/moves.h"

// this file's functions
static bool8 HasSuperEffectiveMoveAgainstOpponents(bool8 noRng);
static bool8 FindMonWithFlagsAndSuperEffective(u16 flags, u8 moduloPercent);
static bool8 ShouldUseItem(void);

static s8 switchScores[6];


void GetAIPartyIndexes(u32 battlerId, s32 *firstId, s32 *lastId)
{
    if (BATTLE_TWO_VS_ONE_OPPONENT && (battlerId & BIT_SIDE) == B_SIDE_OPPONENT)
    {
        *firstId = 0, *lastId = 6;
    }
    else if (gBattleTypeFlags & (BATTLE_TYPE_TWO_OPPONENTS | BATTLE_TYPE_INGAME_PARTNER | BATTLE_TYPE_TOWER_LINK_MULTI))
    {
        if ((battlerId & BIT_FLANK) == B_FLANK_LEFT)
            *firstId = 0, *lastId = 3;
        else
            *firstId = 3, *lastId = 6;
    }
    else
    {
        *firstId = 0, *lastId = 6;
    }
}

static bool8 ShouldSwitchIfAllBadMoves(void)
{
    if (gBattleResources->ai->switchMon)
    {
        gBattleResources->ai->switchMon = 0;
        *(gBattleStruct->AI_monToSwitchIntoId + gActiveBattler) = PARTY_SIZE;
        //BtlController_EmitTwoReturnValues(BUFFER_B, B_ACTION_SWITCH, 0);
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

static bool8 ShouldSwitchSleepClause(void)
{
    if (gBattleMons[gActiveBattler].status1 & STATUS1_SLEEP) // consider adding case not to switch if the mon with sleep move is dead or not out
    {
        *(gBattleStruct->AI_monToSwitchIntoId + gActiveBattler) = PARTY_SIZE;
        //BtlController_EmitTwoReturnValues(BUFFER_B, B_ACTION_SWITCH, 0);
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

static bool8 ShouldSwitchIfPerishSong(void)
{
    if (gStatuses3[gActiveBattler] & STATUS3_PERISH_SONG
        && gDisableStructs[gActiveBattler].perishSongTimer == 0)
    {
        *(gBattleStruct->AI_monToSwitchIntoId + gActiveBattler) = PARTY_SIZE;
        //BtlController_EmitTwoReturnValues(BUFFER_B, B_ACTION_SWITCH, 0);
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

static bool8 ShouldSwitchIfWonderGuard(void)
{
    u8 opposingPosition;
    u8 opposingBattler;
    s32 i, j;
    s32 firstId;
    s32 lastId; // + 1
    struct Pokemon *party = NULL;
    u16 move;

    if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
        return FALSE;

    opposingPosition = BATTLE_OPPOSITE(GetBattlerPosition(gActiveBattler));

    if (GetBattlerAbility(GetBattlerAtPosition(opposingPosition)) != ABILITY_WONDER_GUARD)
        return FALSE;

    // Check if Pokemon has a super effective move.
    for (opposingBattler = GetBattlerAtPosition(opposingPosition), i = 0; i < MAX_MON_MOVES; i++)
    {
        move = gBattleMons[gActiveBattler].moves[i];
        if (move != MOVE_NONE)
        {
            if (AI_GetTypeEffectiveness(move, gActiveBattler, opposingBattler) >= UQ_4_12(2.0))
                return FALSE;
        }
    }

    // Get party information.
    GetAIPartyIndexes(gActiveBattler, &firstId, &lastId);

    if (GetBattlerSide(gActiveBattler) == B_SIDE_PLAYER)
        party = gPlayerParty;
    else
        party = gEnemyParty;

    // Find a Pokemon in the party that has a super effective move.
    for (i = firstId; i < lastId; i++)
    {
        if (GetMonData(&party[i], MON_DATA_HP) == 0)
            continue;
        if (GetMonData(&party[i], MON_DATA_SPECIES2) == SPECIES_NONE)
            continue;
        if (GetMonData(&party[i], MON_DATA_SPECIES2) == SPECIES_EGG)
            continue;
        if (i == gBattlerPartyIndexes[gActiveBattler])
            continue;

        for (opposingBattler = GetBattlerAtPosition(opposingPosition), j = 0; j < MAX_MON_MOVES; j++)
        {
            move = GetMonData(&party[i], MON_DATA_MOVE1 + j);
            if (move != MOVE_NONE)
            {
                if (AI_GetTypeEffectiveness(move, gActiveBattler, opposingBattler) >= UQ_4_12(2.0) && Random() % 3 < 2)
                {
                    // We found a mon.
                    *(gBattleStruct->AI_monToSwitchIntoId + gActiveBattler) = i;
                    BtlController_EmitTwoReturnValues(BUFFER_B, B_ACTION_SWITCH, 0);
                    return TRUE;
                }
            }
        }
    }

    return FALSE; // There is not a single Pokemon in the party that has a super effective move against a mon with Wonder Guard.
}

static bool8 FindMonThatAbsorbsOpponentsMove(void)
{
    u8 battlerIn1, battlerIn2;
    u16 absorbingTypeAbility;
    s32 firstId;
    s32 lastId; // + 1
    struct Pokemon *party;
    s32 i;

    if (gLastLandedMoves[gActiveBattler] == 0)
        return FALSE;
    if (gLastLandedMoves[gActiveBattler] == 0xFFFF)
        return FALSE;
    if (gBattleMoves[gLastLandedMoves[gActiveBattler]].power == 0)
        return FALSE;

    if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
    {
        battlerIn1 = gActiveBattler;
        if (gAbsentBattlerFlags & gBitTable[GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(gActiveBattler)))])
            battlerIn2 = gActiveBattler;
        else
            battlerIn2 = GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(gActiveBattler)));
    }
    else
    {
        battlerIn1 = gActiveBattler;
        battlerIn2 = gActiveBattler;
    }

    if (gBattleMoves[gLastLandedMoves[gActiveBattler]].type == TYPE_FIRE)
        absorbingTypeAbility = ABILITY_FLASH_FIRE;
    else if (gBattleMoves[gLastLandedMoves[gActiveBattler]].type == TYPE_WATER)
        absorbingTypeAbility = ABILITY_WATER_ABSORB;
    else if (gBattleMoves[gLastLandedMoves[gActiveBattler]].type == TYPE_ELECTRIC)
        absorbingTypeAbility = ABILITY_VOLT_ABSORB;
    else
        return FALSE;

    if (AI_GetAbility(gActiveBattler) == absorbingTypeAbility)
        return FALSE;

    GetAIPartyIndexes(gActiveBattler, &firstId, &lastId);

    if (GetBattlerSide(gActiveBattler) == B_SIDE_PLAYER)
        party = gPlayerParty;
    else
        party = gEnemyParty;

    for (i = firstId; i < lastId; i++)
    {
        u16 species;
        u16 monAbility;

        if (GetMonData(&party[i], MON_DATA_HP) == 0)
            continue;
        if (GetMonData(&party[i], MON_DATA_SPECIES2) == SPECIES_NONE)
            continue;
        if (GetMonData(&party[i], MON_DATA_SPECIES2) == SPECIES_EGG)
            continue;
        if (i == gBattlerPartyIndexes[battlerIn1])
            continue;
        if (i == gBattlerPartyIndexes[battlerIn2])
            continue;
        if (i == *(gBattleStruct->monToSwitchIntoId + battlerIn1))
            continue;
        if (i == *(gBattleStruct->monToSwitchIntoId + battlerIn2))
            continue;

        species = GetMonData(&party[i], MON_DATA_SPECIES);
        monAbility = gBaseStats[species].abilities[GetMonData(&party[i], MON_DATA_ABILITY_NUM)];

        if (absorbingTypeAbility == monAbility)
        {
            // we found a mon.
            *(gBattleStruct->AI_monToSwitchIntoId + gActiveBattler) = i;
            //BtlController_EmitTwoReturnValues(BUFFER_B, B_ACTION_SWITCH, 0);
            return TRUE;
        }
    }

    return FALSE;
}

static bool8 ShouldSwitchIfNaturalCure(void)
{
    if (!(gBattleMons[gActiveBattler].status1 & STATUS1_ANY))
        return FALSE;
    if (AI_GetAbility(gActiveBattler) != ABILITY_NATURAL_CURE)
        return FALSE;

    if (gBattleMons[gActiveBattler].status1 & STATUS1_FREEZE && gBattleMons[gActiveBattler].spAttack > gBattleMons[gActiveBattler].attack)
        return TRUE;
        
    if (gBattleMons[gActiveBattler].status1 & STATUS1_BURN && gBattleMons[gActiveBattler].spAttack < gBattleMons[gActiveBattler].attack)
        return TRUE;

    if (gBattleMons[gActiveBattler].status1 & STATUS1_PARALYSIS 
        && !WillAIStrikeFirst())
        return TRUE;
    
    if (gBattleMons[gActiveBattler].hp < gBattleMons[gActiveBattler].maxHP / 3)
        return FALSE;
    
    if (gBattleMons[gActiveBattler].status1 & STATUS1_PSN_ANY)
        return TRUE;
    
    return TRUE;
}

static bool8 HasSuperEffectiveMoveAgainstOpponents(bool8 noRng)
{
    u8 opposingPosition;
    u8 opposingBattler;
    s32 i;
    u16 move;

    opposingPosition = BATTLE_OPPOSITE(GetBattlerPosition(gActiveBattler));
    opposingBattler = GetBattlerAtPosition(opposingPosition);

    if (!(gAbsentBattlerFlags & gBitTable[opposingBattler]))
    {
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            move = gBattleMons[gActiveBattler].moves[i];
            if (move == MOVE_NONE)
                continue;

            if (AI_GetTypeEffectiveness(move, gActiveBattler, opposingBattler) >= UQ_4_12(2.0))
            {
                if (noRng)
                    return TRUE;
                if (Random() % 10 != 0)
                    return TRUE;
            }
        }
    }
    if (!(gBattleTypeFlags & BATTLE_TYPE_DOUBLE))
        return FALSE;

    opposingBattler = GetBattlerAtPosition(BATTLE_PARTNER(opposingPosition));

    if (!(gAbsentBattlerFlags & gBitTable[opposingBattler]))
    {
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            move = gBattleMons[gActiveBattler].moves[i];
            if (move == MOVE_NONE)
                continue;

            if (AI_GetTypeEffectiveness(move, gActiveBattler, opposingBattler) >= UQ_4_12(2.0))
            {
                if (noRng)
                    return TRUE;
                if (Random() % 10 != 0)
                    return TRUE;
            }
        }
    }

    return FALSE;
}

static s8 AreStatsChanged(void)
{
    u8 buffedStatsValue = 0;
    s32 i;

    for (i = 0; i < NUM_BATTLE_STATS; i++)
    {
        if (gBattleMons[gActiveBattler].statStages[i] > DEFAULT_STAT_STAGE)
            buffedStatsValue += gBattleMons[gActiveBattler].statStages[i] - DEFAULT_STAT_STAGE;
        if (gBattleMons[gActiveBattler].statStages[i] < DEFAULT_STAT_STAGE)
            buffedStatsValue -= gBattleMons[gActiveBattler].statStages[i] - DEFAULT_STAT_STAGE;
    }

    return buffedStatsValue;
}

static bool8 FindMonWithFlagsAndSuperEffective(u16 flags, u8 moduloPercent)
{
    u8 battlerIn1, battlerIn2;
    s32 firstId;
    s32 lastId; // + 1
    struct Pokemon *party;
    s32 i, j;
    u16 move;
    u8 opposingPosition;
    u8 opposingBattler;

    opposingPosition = BATTLE_OPPOSITE(GetBattlerPosition(gActiveBattler));
    opposingBattler = GetBattlerAtPosition(opposingPosition);

    if (gLastLandedMoves[gActiveBattler] == 0)
        return FALSE;
    if (gLastLandedMoves[gActiveBattler] == 0xFFFF)
        return FALSE;
    if (gLastHitBy[gActiveBattler] == 0xFF)
        return FALSE;
    if (gBattleMoves[gLastLandedMoves[gActiveBattler]].power == 0)
        return FALSE;

    if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
    {
        battlerIn1 = gActiveBattler;
        if (gAbsentBattlerFlags & gBitTable[GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(gActiveBattler)))])
            battlerIn2 = gActiveBattler;
        else
            battlerIn2 = GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(gActiveBattler)));
    }
    else
    {
        battlerIn1 = gActiveBattler;
        battlerIn2 = gActiveBattler;
    }

    GetAIPartyIndexes(gActiveBattler, &firstId, &lastId);

    party = gEnemyParty;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        u16 species;
        u16 monAbility;

        if (GetMonData(&party[i], MON_DATA_HP) == 0)
            continue;
        if (GetMonData(&party[i], MON_DATA_SPECIES2) == SPECIES_NONE)
            continue;
        if (GetMonData(&party[i], MON_DATA_SPECIES2) == SPECIES_EGG)
            continue;
        if (i == gBattlerPartyIndexes[battlerIn1]) // not sure if this works? it's checking the the AI indexes and vs player index
            continue;
        if (i == gBattlerPartyIndexes[battlerIn2])
            continue;
        if (i == *(gBattleStruct->monToSwitchIntoId + battlerIn1)) 
            continue;
        if (i == *(gBattleStruct->monToSwitchIntoId + battlerIn2))
            continue;

        species = GetMonData(&party[i], MON_DATA_SPECIES);
        monAbility = GetMonData(&party[i], MON_DATA_ABILITY_NUM);

        // if mon in party resists and has SA attack back, for known moves
        for (u8 x = 0; x < MAX_MON_MOVES; x++)
        {
            u32 unusable = CheckMoveLimitations(opposingBattler, 0, MOVE_LIMITATIONS_ALL);
            u16 *moves = gBattleResources->battleHistory->usedMoves[opposingBattler];
            if (moves[x] != MOVE_NONE && moves[x] != 0xFFFF && !(unusable & gBitTable[x]))
            {
                // if player attack is not very effective or AI has immunity
                CalcPartyMonTypeEffectivenessMultiplier(moves[x], species, monAbility);
                if (gMoveResultFlags & flags)
                {
                    for (j = 0; j < MAX_MON_MOVES; j++)
                    {
                        move = GetMonData(&party[i], MON_DATA_MOVE1 + j);
                        if (move == 0)
                            continue;
                        if (AI_GetTypeEffectiveness(move, gActiveBattler, opposingBattler) >= UQ_4_12(2.0)) //active battler should be the partymon but that's a big change
                        {
                            *(gBattleStruct->AI_monToSwitchIntoId + gActiveBattler) = i;
                            return TRUE;
                        }
                    }
                }
            }
            if (IsDoubleBattle() && IsBattlerAlive(BATTLE_PARTNER(opposingBattler)))
            {
                u32 unusable = CheckMoveLimitations(BATTLE_PARTNER(opposingBattler), 0, MOVE_LIMITATIONS_ALL);
                u16 *moves = gBattleResources->battleHistory->usedMoves[BATTLE_PARTNER(opposingBattler)];
                if (moves[x] != MOVE_NONE && moves[x] != 0xFFFF && !(unusable & gBitTable[x]))
                {
                    // if player attack is not very effective or AI has immunity
                    CalcPartyMonTypeEffectivenessMultiplier(moves[x], species, monAbility);
                    if (gMoveResultFlags & flags)
                    {
                        for (j = 0; j < MAX_MON_MOVES; j++)
                        {
                            move = GetMonData(&party[i], MON_DATA_MOVE1 + j);
                            if (move == 0)
                                continue;
                            if (AI_GetTypeEffectiveness(move, gActiveBattler, BATTLE_PARTNER(opposingBattler)) >= UQ_4_12(2.0)) //active battler should be the partymon but that's a big change
                            {
                                *(gBattleStruct->AI_monToSwitchIntoId + gActiveBattler) = i;
                                return TRUE;
                            }
                        }
                    }
                }
            }
        }
    }

    return FALSE;
}

static void MulModifier(u32 *modifier, u16 val)
{
	*modifier = UQ_4_12_TO_INT((*modifier * val) + UQ_4_12_ROUND);
}

// could use some cleaning up
static bool8 IsWeakToEnemyType()
{
    u32 mod1 = GetTypeModifier(gBattleMons[GetBattlerAtPosition(BATTLE_OPPOSITE(GetBattlerPosition(gActiveBattler)))].type1, gBattleMons[gActiveBattler].type1);
    //u32 mod2;
    if (gBattleMons[GetBattlerAtPosition(BATTLE_OPPOSITE(GetBattlerPosition(gActiveBattler)))].type1 != gBattleMons[GetBattlerAtPosition(BATTLE_OPPOSITE(GetBattlerPosition(gActiveBattler)))].type2)
    {
        u32 mod2 = GetTypeModifier(gBattleMons[GetBattlerAtPosition(BATTLE_OPPOSITE(GetBattlerPosition(gActiveBattler)))].type1, gBattleMons[gActiveBattler].type2);
        MulModifier(&mod1, mod2);
    }
    if (mod1 >= UQ_4_12(2.0))
    {
        return TRUE;
    }

    mod1 = GetTypeModifier(gBattleMons[GetBattlerAtPosition(BATTLE_OPPOSITE(GetBattlerPosition(gActiveBattler)))].type2, gBattleMons[gActiveBattler].type1);
    if (gBattleMons[gActiveBattler].type1 != gBattleMons[gActiveBattler].type2)
    {
        u32 mod2 = GetTypeModifier(gBattleMons[GetBattlerAtPosition(BATTLE_OPPOSITE(GetBattlerPosition(gActiveBattler)))].type2, gBattleMons[gActiveBattler].type2);
        MulModifier(&mod1, mod2);
    }
    if (mod1 >= UQ_4_12(2.0))
    {
        return TRUE;
    }

    if (IsDoubleBattle && IsBattlerAlive(BATTLE_PARTNER(BATTLE_OPPOSITE(GetBattlerPosition(gActiveBattler)))))
    {
        mod1 = GetTypeModifier(gBattleMons[GetBattlerAtPosition(BATTLE_PARTNER(BATTLE_OPPOSITE(GetBattlerPosition(gActiveBattler))))].type1, gBattleMons[gActiveBattler].type1);
        if (gBattleMons[GetBattlerAtPosition(BATTLE_PARTNER(BATTLE_OPPOSITE(GetBattlerPosition(gActiveBattler))))].type1 != gBattleMons[GetBattlerAtPosition(BATTLE_OPPOSITE(GetBattlerPosition(gActiveBattler)))].type2)
        {
            u32 mod2 = GetTypeModifier(gBattleMons[BATTLE_PARTNER(BATTLE_OPPOSITE(GetBattlerPosition(gActiveBattler)))].type1, gBattleMons[gActiveBattler].type2);
            MulModifier(&mod1, mod2);
        }
        if (mod1 >= UQ_4_12(2.0))
        {
            return TRUE;
        }

        mod1 = GetTypeModifier(gBattleMons[GetBattlerAtPosition(BATTLE_PARTNER(BATTLE_OPPOSITE(GetBattlerPosition(gActiveBattler))))].type2, gBattleMons[gActiveBattler].type1);
        if (gBattleMons[gActiveBattler].type1 != gBattleMons[gActiveBattler].type2)
        {
            u32 mod2 = GetTypeModifier(gBattleMons[GetBattlerAtPosition(BATTLE_PARTNER(BATTLE_OPPOSITE(GetBattlerPosition(gActiveBattler))))].type2, gBattleMons[gActiveBattler].type2);
            MulModifier(&mod1, mod2);
        }
        if (mod1 >= UQ_4_12(2.0))
        {
            return TRUE;
        }
    }

    return FALSE;
}

u8 SwitchScoreHazards()
{
    u8 hazardScore = 0;
    u32 flags = gSideStatuses[GetBattlerSide(gActiveBattler)];
    
    if (flags & SIDE_STATUS_STEALTH_ROCK)
        hazardScore += 20;
    if (flags & SIDE_STATUS_SPIKES)
        hazardScore += 10;
    if (flags & SIDE_STATUS_TOXIC_SPIKES)
        hazardScore += 20;
    if (flags & SIDE_STATUS_STICKY_WEB)
        hazardScore += 25;
    
    return hazardScore;
}

bool32 ShouldSwitch(void)
{
    // runs once per enemy poke
    // only return true after setting switch mon and setting action to switch
    u8 battlerIn1, battlerIn2;
    s32 firstId;
    s32 lastId; // + 1
    struct Pokemon *party;
    s32 i;
    s32 availableToSwitch;
    s16 switchPercent = 10; // higher is better chance to switch

    if (gBattleMons[gActiveBattler].status2 & (STATUS2_WRAPPED | STATUS2_ESCAPE_PREVENTION))
        return FALSE;
    if (gStatuses3[gActiveBattler] & STATUS3_ROOTED)
        return FALSE;
    if (IsAbilityPreventingEscape(gActiveBattler))
        return FALSE;
    if (gBattleTypeFlags & BATTLE_TYPE_ARENA)
        return FALSE;

    availableToSwitch = 0;

    if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
    {
        battlerIn1 = gActiveBattler;
        if (gAbsentBattlerFlags & gBitTable[GetBattlerAtPosition(GetBattlerPosition(gActiveBattler) ^ BIT_FLANK)])
            battlerIn2 = gActiveBattler;
        else
            battlerIn2 = GetBattlerAtPosition(GetBattlerPosition(gActiveBattler) ^ BIT_FLANK);
    }
    else
    {
        battlerIn1 = gActiveBattler;
        battlerIn2 = gActiveBattler;
    }

    GetAIPartyIndexes(gActiveBattler, &firstId, &lastId);

    if (GetBattlerSide(gActiveBattler) == B_SIDE_PLAYER)
        party = gPlayerParty;
    else
        party = gEnemyParty;

    for (i = firstId; i < lastId; i++)
    {
        if (GetMonData(&party[i], MON_DATA_HP) == 0)
            continue;
        if (GetMonData(&party[i], MON_DATA_SPECIES2) == SPECIES_NONE)
            continue;
        if (GetMonData(&party[i], MON_DATA_SPECIES2) == SPECIES_EGG)
            continue;
        if (i == gBattlerPartyIndexes[battlerIn1])
            continue;
        if (i == gBattlerPartyIndexes[battlerIn2])
            continue;
        if (i == *(gBattleStruct->monToSwitchIntoId + battlerIn1))
            continue;
        if (i == *(gBattleStruct->monToSwitchIntoId + battlerIn2))
            continue;

        availableToSwitch++;
    }

    if (availableToSwitch == 0)
        return FALSE;

    if (ShouldSwitchIfPerishSong()) // working
        switchPercent += 120;
    //if (ShouldSwitchIfWonderGuard()) // don't give out wonder guard, bad design
    //    return TRUE;
    if (ShouldSwitchSleepClause()) // working
        switchPercent += 70;
    if (ShouldSwitchIfAllBadMoves()) // not sure when this is set
        switchPercent += 70;
    if (FindMonThatAbsorbsOpponentsMove())  // perhaps add stab type attack check if moves unknown
        switchPercent += 50;
    if (ShouldSwitchIfNaturalCure()) // working
        switchPercent += 50;
    if (HasSuperEffectiveMoveAgainstOpponents(TRUE)) // didn't test thoroughly but seems fine
    {
        if (WillAIStrikeFirst())
            switchPercent -= 60;
        else if (gBattleMons[gActiveBattler].hp > 75) // assume 75% hp you'll live most attacks
            switchPercent -= 40;
        else
            switchPercent -= 20;
    }

    switchPercent -= SwitchScoreHazards(); // less likely to switch if there are more hazards

    if (FindMonWithFlagsAndSuperEffective(MOVE_RESULT_DOESNT_AFFECT_FOE, 1)) //add stab type check if super effective type
        switchPercent += 50;
    if (FindMonWithFlagsAndSuperEffective(MOVE_RESULT_NOT_VERY_EFFECTIVE, 1))
        switchPercent += 20;
    
    if (IsWeakToEnemyType()) // working, does not check abilities
    {
        switchPercent += 20;
    }

    // if can get KO
    if (CanIndexMoveFaintTarget(gActiveBattler, BATTLE_OPPOSITE(gActiveBattler), AI_THINKING_STRUCT->movesetIndex, 0)
        || (IsDoubleBattle() && CanIndexMoveFaintTarget(gActiveBattler, BATTLE_PARTNER(BATTLE_OPPOSITE(gActiveBattler)), AI_THINKING_STRUCT->movesetIndex, 0)))
    {
        if (WillAIStrikeFirst())
            switchPercent -= 60;
        else if (gBattleMons[gActiveBattler].hp > 75) // assume 75% hp you'll live most attacks
            switchPercent -= 40;
        else
            switchPercent -= 20;
    }


    // could use some more complexity. every stat is equal for every mon currently
    switchPercent -= AreStatsChanged() * 20; // decrease (subtract) chance to switch if positive stat boosts, increase for negative stats


    // roll dice for switch based on above factors
    // if no specific mon has been selected, mark selected mon as party size
    if((Random() % 100) + 1 <= switchPercent && !(switchPercent <= 0))
    {
        bool8 foundSwap = FALSE;
        for (i = firstId; i < lastId; i++)
        {
            if (*(gBattleStruct->AI_monToSwitchIntoId + gActiveBattler) == i)   
                foundSwap == TRUE;
        }
        if (!foundSwap)
            *(gBattleStruct->AI_monToSwitchIntoId + gActiveBattler) = PARTY_SIZE;

        BtlController_EmitTwoReturnValues(BUFFER_B, B_ACTION_SWITCH, 0); // change mon choice function
        return TRUE;
    }

    return FALSE;
}

bool8 AI_TrySwitchOrUseItem(void)
{
    struct Pokemon *party;
    u8 battlerIn1, battlerIn2;
    s32 firstId;
    s32 lastId; // + 1
    u8 battlerIdentity = GetBattlerPosition(gActiveBattler);

    if (GetBattlerSide(gActiveBattler) == B_SIDE_PLAYER)
        party = gPlayerParty;
    else
        party = gEnemyParty;

    if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)
    {
        if (ShouldSwitch())
        {
            if (*(gBattleStruct->AI_monToSwitchIntoId + gActiveBattler) == PARTY_SIZE)
            {
                s32 monToSwitchId = GetMostSuitableMonToSwitchInto();
                if (monToSwitchId == PARTY_SIZE)
                {
                    if (!(gBattleTypeFlags & BATTLE_TYPE_DOUBLE))
                    {
                        battlerIn1 = GetBattlerAtPosition(battlerIdentity);
                        battlerIn2 = battlerIn1;
                    }
                    else
                    {
                        battlerIn1 = GetBattlerAtPosition(battlerIdentity);
                        battlerIn2 = GetBattlerAtPosition(battlerIdentity ^ BIT_FLANK);
                    }

                    GetAIPartyIndexes(gActiveBattler, &firstId, &lastId);

                    for (monToSwitchId = firstId; monToSwitchId < lastId; monToSwitchId++)
                    {
                        if (GetMonData(&party[monToSwitchId], MON_DATA_HP) == 0)
                            continue;
                        if (monToSwitchId == gBattlerPartyIndexes[battlerIn1])
                            continue;
                        if (monToSwitchId == gBattlerPartyIndexes[battlerIn2])
                            continue;
                        if (monToSwitchId == *(gBattleStruct->monToSwitchIntoId + battlerIn1))
                            continue;
                        if (monToSwitchId == *(gBattleStruct->monToSwitchIntoId + battlerIn2))
                            continue;

                        break;
                    }
                }

                *(gBattleStruct->AI_monToSwitchIntoId + gActiveBattler) = monToSwitchId;
            }

            *(gBattleStruct->monToSwitchIntoId + gActiveBattler) = *(gBattleStruct->AI_monToSwitchIntoId + gActiveBattler);
            return TRUE;
        }
        else if (ShouldUseItem())
        {
            return FALSE;
        }
    }

    BtlController_EmitTwoReturnValues(BUFFER_B, B_ACTION_USE_MOVE, (gActiveBattler ^ BIT_SIDE) << 8);
    return FALSE;
}

// If there are two(or more) mons to choose from, always choose one that has baton pass
// as most often it can't do much on its own.
static u32 GetBestMonBatonPass(struct Pokemon *party, int firstId, int lastId, u8 invalidMons, int aliveCount)
{
    int i, j, bits = 0;

    for (i = firstId; i < lastId; i++)
    {
        if (invalidMons & gBitTable[i])
            continue;

        for (j = 0; j < MAX_MON_MOVES; j++)
        {
            if (GetMonData(&party[i], MON_DATA_MOVE1 + j, NULL) == MOVE_BATON_PASS)
            {
                bits |= gBitTable[i];
                break;
            }
        }
    }

    if ((aliveCount == 2 || (aliveCount > 2 && Random() % 3 == 0)) && bits)
    {
        do
        {
            i = (Random() % (lastId - firstId)) + firstId;
        } while (!(bits & gBitTable[i]));
        return i;
    }

    return PARTY_SIZE;
}

static void GestBestMonOffensive(struct Pokemon *party, int firstId, int lastId, u8 invalidMons, u32 opposingBattler)
{
    int i, j, bits = 0;
    int bestDmg = 0;
    // look for super effective types and moves
    for (i = firstId; i < lastId; i++)
    {
        if (!gBitTable[i] & invalidMons)
        {
            u16 species = GetMonData(&party[i], MON_DATA_SPECIES);
            u32 typeDmg = UQ_4_12(1.0);

            u8 atkType1 = gBaseStats[species].type1;
            u8 atkType2 = gBaseStats[species].type2;
            u8 defType1 = gBattleMons[opposingBattler].type1;
            u8 defType2 = gBattleMons[opposingBattler].type2;

            typeDmg = GetTypeModifier(atkType1, defType1);
            if (atkType2 != atkType1)   
                if (atkType2 != atkType1)
            if (atkType2 != atkType1)   
                MulModifier(&typeDmg, GetTypeModifier(atkType2, defType1));
            if (defType2 != defType1)
            {
                MulModifier(&typeDmg, GetTypeModifier(atkType1, defType2));
                if (atkType2 != atkType1)
                    MulModifier(&typeDmg, GetTypeModifier(atkType2, defType2));
            }

            // if a stab type advantage
            if (typeDmg >= UQ_4_12(4.0))
            {
                switchScores[i] += 5;
            }
            else if (typeDmg >= UQ_4_12(2.0))
            {
                switchScores[i] += 3;
            }
            else if (typeDmg >= UQ_4_12(1.25))
            {
                switchScores[i] += 2;
            }
            else if (typeDmg >= UQ_4_12(1.0))
            {
                switchScores[i] += 1;
            }
            else if (typeDmg >= UQ_4_12(.75))
            {
                switchScores[i] -= 2;
            }
            else if (typeDmg >= UQ_4_12(.5))
            {
                switchScores[i] -= 3;
            }
            else
            {
                switchScores[i] -= 5;
            }
        }

        
        for (j = 0; j < MAX_MON_MOVES; j++)
        {
            u32 move = GetMonData(&party[i], MON_DATA_MOVE1 + j);
            if (move != MOVE_NONE && AI_GetTypeEffectiveness(move, gActiveBattler, opposingBattler) >= UQ_4_12(4.0)) // uses the wrong AI attacker (gActiveBattler)
                switchScores[i] += 6;
            else if (move != MOVE_NONE && AI_GetTypeEffectiveness(move, gActiveBattler, opposingBattler) >= UQ_4_12(2.0)) // uses the wrong AI attacker (gActiveBattler)
                switchScores[i] += 3;
        }
    }

    return;
}

static void GetBestMonDmg(struct Pokemon *party, int firstId, int lastId, u8 invalidMons, u32 opposingBattler)
{
    int i, j;
    int bestDmg = 0;
    int bestMonId = PARTY_SIZE;

    gMoveResultFlags = 0;
    // If we couldn't find the best mon in terms of typing, find the one that deals most damage.
    for (i = firstId; i < lastId; i++)
    {
        if (gBitTable[i] & invalidMons)
            continue;

        for (j = 0; j < MAX_MON_MOVES; j++)
        {
            u32 move = GetMonData(&party[i], MON_DATA_MOVE1 + j);
            if (move != MOVE_NONE && gBattleMoves[move].power != 0)
            {
                s32 dmg = AI_CalcPartyMonDamage(move, gActiveBattler, opposingBattler, &party[i]);
                if (bestDmg < dmg)
                {
                    bestDmg = dmg;
                    bestMonId = i;
                }
            }
        }
    }
    
    // give a bonus to mon with biggest damage roll
    switchScores[bestMonId] += 5;
    return;

}

static void GestBestMonDeffensive(struct Pokemon *party, int firstId, int lastId, u8 invalidMons, u32 opposingBattler)
{
    int i;
    // Find the mon whose type is the most suitable deffensively. 
    for (i = firstId; i < lastId; i++)
    {
        if (!gBitTable[i] & invalidMons)
        {
            u16 species = GetMonData(&party[i], MON_DATA_SPECIES);
            u32 typeDmg = UQ_4_12(1.0);

            u8 defType1 = gBaseStats[species].type1;
            u8 defType2 = gBaseStats[species].type2;
            u8 atkType1 = gBattleMons[opposingBattler].type1;
            u8 atkType2 = gBattleMons[opposingBattler].type2;

            typeDmg = GetTypeModifier(atkType1, defType1);
            if (atkType2 != atkType1)   
                MulModifier(&typeDmg, GetTypeModifier(atkType2, defType1));
            if (defType2 != defType1)
            {
                MulModifier(&typeDmg, GetTypeModifier(atkType1, defType2));
                if (atkType2 != atkType1)
                    MulModifier(&typeDmg, GetTypeModifier(atkType2, defType2));
            }
            if (typeDmg <= UQ_4_12(0.25))
            {
                switchScores[i] += 5;
            }
            else if (typeDmg <= UQ_4_12(.5))
            {
                switchScores[i] += 3;
            }
            else if (typeDmg <= UQ_4_12(.75))
            {
                switchScores[i] += 2;
            }
            else if (typeDmg <= UQ_4_12(1.0))
            {
                switchScores[i] += 1;
            }
            else if (typeDmg <= UQ_4_12(1.5))
            {
                switchScores[i] -= 2;
            }
            else if (typeDmg <= UQ_4_12(2.0))
            {
                switchScores[i] -= 3;
            }
            else
            {
                switchScores[i] -= 5;
            }
        }
    }

    // for now assume player has supper effecive stab moves
    // and ignore coverage moves
    return;
}

static void GestBestMonStatusImpact(struct Pokemon *party, int firstId, int lastId, u8 invalidMons, u32 opposingBattler)
{
    int i;
    // Find the mon whose type is the most suitable deffensively. 
    for (i = firstId; i < lastId; i++)
    {
        if (!(gBitTable[i] & invalidMons))
        {   
            // consider adding impact of current mon HP

            // impact of status on mon
            u16 status = GetMonData(&party[i], MON_DATA_STATUS);
            if (status & STATUS1_SLEEP)
                switchScores[i] -= 10;
            else if (status & STATUS1_PARALYSIS)
                switchScores[i] -= 2;
            else if (status & STATUS1_FREEZE && GetMonData(&party[i], MON_DATA_SPATK) > GetMonData(&party[i], MON_DATA_ATK))
                switchScores[i] -= 5;
            else if (status & STATUS1_BURN && GetMonData(&party[i], MON_DATA_SPATK) < GetMonData(&party[i], MON_DATA_ATK))
                switchScores[i] -= 5;
            else if (status & STATUS1_POISON)
                switchScores[i] -= 2;
            else if (status & STATUS1_TOXIC_POISON)
                switchScores[i] -= 3;
        }
    }
}

void AbilitySwitchChecks(struct Pokemon *party, int firstId, int lastId, u8 invalidMons, u32 opposingBattler)
{
    int i;
    u16 species;
    u16 ability;
    u32 flags = gSideStatuses[GetBattlerSide(gActiveBattler)];

    // look for optimal ability options
    for (i = firstId; i < lastId; i++)
    {
        if (!(gBitTable[i] & invalidMons))
        {   
            species = GetMonData(&party[i], MON_DATA_SPECIES);
            ability = gBaseStats[species].abilities[GetMonData(&party[i], MON_DATA_ABILITY_NUM)];

            if (ability == ABILITY_HAZARD_CREW && flags & SIDE_STATUS_STEALTH_ROCK)
                switchScores[i] += 10;

            // consider adding intimidate/opression
        }
    }
}

u8 GetMostSuitableMonToSwitchInto(void)
{
    u32 opposingBattler = 0;
    u32 bestDmg = 0;
    u32 bestMonId = 0;
    u8 battlerIn1 = 0, battlerIn2 = 0;
    s32 firstId = 0;
    s32 lastId = 0; // + 1
    struct Pokemon *party;
    s32 i, j, aliveCount = 0;
    u8 invalidMons = 0;

    if (*(gBattleStruct->monToSwitchIntoId + gActiveBattler) != PARTY_SIZE)
        return *(gBattleStruct->monToSwitchIntoId + gActiveBattler);
    if (gBattleTypeFlags & BATTLE_TYPE_ARENA)
        return gBattlerPartyIndexes[gActiveBattler] + 1;


    if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
    {
        battlerIn1 = gActiveBattler;
        if (gAbsentBattlerFlags & gBitTable[GetBattlerAtPosition(GetBattlerPosition(gActiveBattler) ^ BIT_FLANK)])
            battlerIn2 = gActiveBattler;
        else
            battlerIn2 = GetBattlerAtPosition(GetBattlerPosition(gActiveBattler) ^ BIT_FLANK);

        opposingBattler = BATTLE_OPPOSITE(battlerIn1);
        if (gAbsentBattlerFlags & gBitTable[opposingBattler])
            opposingBattler ^= BIT_FLANK;
    }
    else
    {
        opposingBattler = GetBattlerAtPosition(GetBattlerPosition(gActiveBattler) ^ BIT_SIDE);
        battlerIn1 = gActiveBattler;
        battlerIn2 = gActiveBattler;
    }

    // first / last Id should be 0-6? will break otherwise
    // since switchScores array is 0-5
    GetAIPartyIndexes(gActiveBattler, &firstId, &lastId);

    party = gEnemyParty;

    // Get invalid slots ids.
    for (i = firstId; i < lastId; i++)
    {
        if (GetMonData(&party[i], MON_DATA_SPECIES) == SPECIES_NONE
            || GetMonData(&party[i], MON_DATA_HP) == 0
            || gBattlerPartyIndexes[battlerIn1] == i
            || gBattlerPartyIndexes[battlerIn2] == i
            || i == *(gBattleStruct->monToSwitchIntoId + battlerIn1)
            || i == *(gBattleStruct->monToSwitchIntoId + battlerIn2)
            || (GetMonAbility(&party[i]) == ABILITY_TRUANT && IsTruantMonVulnerable(gActiveBattler, opposingBattler))) // While not really invalid per say, not really wise to switch into this mon.
            invalidMons |= gBitTable[i];
        else
            aliveCount++;
        
        switchScores[i] = 0;
    }

    // edit these three functions. they are only ever called from this function

    // give switch priority to anymon with baton pass
    // disregards all other factors
    // fix later
    // GetBestMonBatonPass(party, firstId, lastId, invalidMons, aliveCount);

    // checks for super effective stab attacks
    // working
    GestBestMonOffensive(party, firstId, lastId, invalidMons, opposingBattler);

    // increase score of the single mon that does the most damage
    GetBestMonDmg(party, firstId, lastId, invalidMons, opposingBattler);
    
    // add get best mon defensive
    // working
    GestBestMonDeffensive(party, firstId, lastId, invalidMons, opposingBattler);

    // check for statuses impact
    // working
    GestBestMonStatusImpact(party, firstId, lastId, invalidMons, opposingBattler);

    AbilitySwitchChecks(party, firstId, lastId, invalidMons, opposingBattler);


    if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
    {
        u32 opposingBattler2 = BATTLE_PARTNER(BATTLE_OPPOSITE(gActiveBattler));
        if (IsBattlerAlive(opposingBattler2))
        {
            GestBestMonOffensive(party, firstId, lastId, invalidMons, opposingBattler2);
            GetBestMonDmg(party, firstId, lastId, invalidMons, opposingBattler2);
            GestBestMonDeffensive(party, firstId, lastId, invalidMons, opposingBattler2);
        }
    }

    // Get best mon based on scores
    s8 bestMonIdScore = INT8_MIN;
    for (i = firstId; i < lastId; i++)
    {
        switchScores[i] += (Random() % 2); // introduce a very small amouont randomness of switch while maintaining strong options
        if (!(gBitTable[i] & invalidMons)
            && (switchScores[i] > bestMonIdScore))
        {
            bestMonIdScore = switchScores[i];
            bestMonId = i;
        }
    }

    if (bestMonId != PARTY_SIZE)
        return bestMonId;

    return PARTY_SIZE;
}

static u8 GetAI_ItemType(u16 itemId, const u8 *itemEffect)
{
    if (itemId == ITEM_FULL_RESTORE)
        return AI_ITEM_FULL_RESTORE;
    else if (itemEffect[4] & ITEM4_HEAL_HP)
        return AI_ITEM_HEAL_HP;
    else if (itemEffect[3] & ITEM3_STATUS_ALL)
        return AI_ITEM_CURE_CONDITION;
#ifdef ITEM_EXPANSION
    else if ((itemEffect[0] & ITEM0_DIRE_HIT) || itemEffect[1])
#else
    else if (itemEffect[0] & (ITEM0_DIRE_HIT | ITEM0_X_ATTACK) || itemEffect[1] != 0 || itemEffect[2] != 0)
#endif
        return AI_ITEM_X_STAT;
    else if (itemEffect[3] & ITEM3_GUARD_SPEC)
        return AI_ITEM_GUARD_SPEC;
    else
        return AI_ITEM_NOT_RECOGNIZABLE;
}

static bool8 ShouldUseItem(void)
{
    struct Pokemon *party;
    s32 i;
    u8 validMons = 0;
    bool8 shouldUse = FALSE;

    if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER && GetBattlerPosition(gActiveBattler) == B_POSITION_PLAYER_RIGHT)
        return FALSE;
    
    if (gStatuses3[gActiveBattler] & STATUS3_EMBARGO)
        return FALSE;

    if (GetBattlerSide(gActiveBattler) == B_SIDE_PLAYER)
        party = gPlayerParty;
    else
        party = gEnemyParty;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (GetMonData(&party[i], MON_DATA_HP) != 0
            && GetMonData(&party[i], MON_DATA_SPECIES2) != SPECIES_NONE
            && GetMonData(&party[i], MON_DATA_SPECIES2) != SPECIES_EGG)
        {
            validMons++;
        }
    }

    for (i = 0; i < MAX_TRAINER_ITEMS; i++)
    {
        u16 item;
        const u8 *itemEffects;
        u8 paramOffset;
        u8 battlerSide;

        if (i != 0 && validMons > (gBattleResources->battleHistory->itemsNo - i) + 1)
            continue;
        item = gBattleResources->battleHistory->trainerItems[i];
        if (item == ITEM_NONE)
            continue;
        if (gItemEffectTable[item - ITEM_POTION] == NULL)
            continue;

        if (item == ITEM_ENIGMA_BERRY_E_READER)
            itemEffects = gSaveBlock1Ptr->enigmaBerry.itemEffect;
        else
            itemEffects = gItemEffectTable[item - ITEM_POTION];

        *(gBattleStruct->AI_itemType + gActiveBattler / 2) = GetAI_ItemType(item, itemEffects);

        switch (*(gBattleStruct->AI_itemType + gActiveBattler / 2))
        {
        case AI_ITEM_FULL_RESTORE:
            if (gBattleMons[gActiveBattler].hp >= gBattleMons[gActiveBattler].maxHP / 4)
                break;
            if (gBattleMons[gActiveBattler].hp == 0)
                break;
            shouldUse = TRUE;
            break;
        case AI_ITEM_HEAL_HP:
            paramOffset = GetItemEffectParamOffset(item, 4, 4);
            if (paramOffset == 0)
                break;
            if (gBattleMons[gActiveBattler].hp == 0)
                break;
            if (gBattleMons[gActiveBattler].hp < gBattleMons[gActiveBattler].maxHP / 4
                || gBattleMons[gActiveBattler].maxHP - gBattleMons[gActiveBattler].hp > itemEffects[paramOffset])
                shouldUse = TRUE;
            break;
        case AI_ITEM_CURE_CONDITION:
            *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) = 0;
            if (itemEffects[3] & ITEM3_SLEEP && gBattleMons[gActiveBattler].status1 & STATUS1_SLEEP)
            {
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_HEAL_SLEEP);
                shouldUse = TRUE;
            }
            if (itemEffects[3] & ITEM3_POISON && (gBattleMons[gActiveBattler].status1 & STATUS1_POISON
                                               || gBattleMons[gActiveBattler].status1 & STATUS1_TOXIC_POISON))
            {
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_HEAL_POISON);
                shouldUse = TRUE;
            }
            if (itemEffects[3] & ITEM3_BURN && gBattleMons[gActiveBattler].status1 & STATUS1_BURN)
            {
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_HEAL_BURN);
                shouldUse = TRUE;
            }
            if (itemEffects[3] & ITEM3_FREEZE && gBattleMons[gActiveBattler].status1 & STATUS1_FREEZE)
            {
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_HEAL_FREEZE);
                shouldUse = TRUE;
            }
            if (itemEffects[3] & ITEM3_PARALYSIS && gBattleMons[gActiveBattler].status1 & STATUS1_PARALYSIS)
            {
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_HEAL_PARALYSIS);
                shouldUse = TRUE;
            }
            if (itemEffects[3] & ITEM3_CONFUSION && gBattleMons[gActiveBattler].status2 & STATUS2_CONFUSION)
            {
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_HEAL_CONFUSION);
                shouldUse = TRUE;
            }
            break;
        case AI_ITEM_X_STAT:
            *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) = 0;
            if (gDisableStructs[gActiveBattler].isFirstTurn == 0)
                break;
        #ifndef ITEM_EXPANSION
            if (itemEffects[0] & ITEM0_X_ATTACK)
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_X_ATTACK);
            if (itemEffects[1] & ITEM1_X_DEFEND)
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_X_DEFEND);
            if (itemEffects[1] & ITEM1_X_SPEED)
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_X_SPEED);
            if (itemEffects[2] & ITEM2_X_SPATK)
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_X_SPATK);
            if (itemEffects[2] & ITEM2_X_ACCURACY)
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_X_ACCURACY);
            if (itemEffects[0] & ITEM0_DIRE_HIT)
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_DIRE_HIT);
        #else
            if (itemEffects[1] & ITEM1_X_ATTACK)
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_X_ATTACK);
            if (itemEffects[1] & ITEM1_X_DEFENSE)
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_X_DEFEND);
            if (itemEffects[1] & ITEM1_X_SPEED)
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_X_SPEED);
            if (itemEffects[1] & ITEM1_X_SPATK)
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_X_SPATK);
            if (itemEffects[1] & ITEM1_X_SPDEF)
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_X_SPDEF);
            if (itemEffects[1] & ITEM1_X_ACCURACY)
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_X_ACCURACY);
            if (itemEffects[0] & ITEM0_DIRE_HIT)
                *(gBattleStruct->AI_itemFlags + gActiveBattler / 2) |= (1 << AI_DIRE_HIT);
        #endif
            shouldUse = TRUE;
            break;
        case AI_ITEM_GUARD_SPEC:
            battlerSide = GetBattlerSide(gActiveBattler);
            if (gDisableStructs[gActiveBattler].isFirstTurn != 0 && gSideTimers[battlerSide].mistTimer == 0)
                shouldUse = TRUE;
            break;
        case AI_ITEM_NOT_RECOGNIZABLE:
            return FALSE;
        }

        if (shouldUse)
        {
            BtlController_EmitTwoReturnValues(BUFFER_B, B_ACTION_USE_ITEM, 0);
            *(gBattleStruct->chosenItem + (gActiveBattler / 2) * 2) = item;
            gBattleResources->battleHistory->trainerItems[i] = 0;
            return shouldUse;
        }
    }

    return FALSE;
}

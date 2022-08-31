@ this floors specific battle data
@ copy from here down for new maps
.set ROOM_BATTLE_COUNT, 1
.set ROOM_BATTLE_TYPE, 2
.set FLOORMONEY, 7000
.set FLOORBP, 7
.set FLOORHS, 5
.set FLOORFLAG, FLAG_ROOM_20_CLEAR
.set FLOORFLAG_PREV, FLAG_ROOM_19_CLEAR
.set FLAG_NUZ_GIFT, FLAG_NZ_GIFT_19

@ this floors trainer ids
.set TRAINER1ID, TRAINER_TD_5_BOSS

@ this floors trainer npc ids
.set TRAINER1, 10
Prime5_Trainer1_text:
	.string "My hot new strategy is\n"
	.string "called quickdisquake.$"

Prime5_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Ascent_OnWarp
	map_script MAP_SCRIPT_ON_TRANSITION, Prime5_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, Prime5_OnLoad
	.byte 0

Prime5_OnTransition:
	setrespawn HEAL_LOCATION_FLOOR_PRIME_5
	end

Prime5_OnLoad:
	call_if_set FLOORFLAG, PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	end

Prime5_PokeShop_event::
	faceplayer
	goto_if_unset FLAG_RANDOM_GIFTS, PokeShop_event
	goto_if_unset FLAG_NUZ_GIFT, Prime5_Nuzlocke_gift
	msgbox Nuzlocke_no_gifts_left_text, MSGBOX_DEFAULT
	waitmessage
	releaseall
	end

Prime5_Nuzlocke_gift:
	msgbox Nuzlocke_gift_text_confirm, MSGBOX_DEFAULT
	yesnobox 3, 8
	switch VAR_RESULT
	case NO, MoveRelearners_EventScript_CantTeach
	case MULTI_B_PRESSED, MoveRelearners_EventScript_CantTeach
	setorcopyvar VAR_0x8002, 2 @ which nz shop is it?
	setorcopyvar VAR_0x8004, FLOORFLAG_PREV @ previous floor clear flag
	special NuzlockeGift
	setorcopyvar VAR_0x8004, VAR_RESULT
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setorcopyvar VAR_0x8007, VAR_0x8004 @setname for pic
	setorcopyvar VAR_0x8008, 0 @is shiny
	special ShowFrontierExchangeCornerItemIconWindow
	special FillFrontierPokeBlock
	msgbox Nuzlocke_gift_text, MSGBOX_DEFAULT
	waitbuttonpress
	givemon VAR_0x8004, 50, ITEM_NONE
	hidemonpic
	special CloseFrontierExchangeCornerItemIconWindow
	setflag FLAG_NUZ_GIFT
	release
	end

Prime5_ReadyOrNot::
	faceplayer
	goto_if_set FLOORFLAG, Gauntlet1_Already_clear_event
	goto_if_set FLAG_NUZ_LOSE, Gauntlet1_nuzlocke_lost
	buffernumberstring STR_VAR_1, ROOM_BATTLE_COUNT
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_TYPE
	switch VAR_TEMP_A
	case 1, Prime5_TextSingleBattles
	case 2, Prime5_TextDoubleBattles

Prime5_TextSingleBattles::
	msgbox Prime5_readyText1, MSGBOX_YESNO
	goto Prime5_TryBattle

Prime5_TextDoubleBattles::
	msgbox Prime5_readyText2, MSGBOX_YESNO
	goto Prime5_TryBattle

Prime5_readyText1:
	.string "This floor features {STR_VAR_1} single battles.\n"
	.string "Are you ready?$"

Prime5_readyText2:
	.string "This floor features {STR_VAR_1} double battles.\n"
	.string "Are you ready?$"

Prime5_TryBattle::
	releaseall
	switch VAR_RESULT
	case NO, MoveRelearners_EventScript_CantTeach
	case MULTI_B_PRESSED, MoveRelearners_EventScript_CantTeach
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Prime5_walk_start
	waitmovement 0
	goto Prime5_start_battles
	end

Prime5_walk_start::
	walk_down
	walk_down
	walk_left
	walk_left
	face_up
	step_end

Prime5_start_battles::
	goto Prime5_npc_walk1

Prime5_end_battles::
	lockall
	setflag FLOORFLAG
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	delay 20
	giveitem ITEM_HEART_SCALE, FLOORHS
	releaseall
	delay 10
	special ShowBattlePointsWindow
	delay 50
	setvar VAR_0x8007, FLOORBP
	special GiveBattlePointsGauntlet
	special UpdateBattlePointsWindow
	playse SE_PIN
	waitse
	delay 30
	special CloseBattlePointsWindow
	delay 10
	showmoneybox 15, 0
	delay 20
	addmoney FLOORMONEY
	updatemoneybox
	playse SE_PIN
	waitse
	delay 20
	hidemoneybox
	releaseall
	end

Prime5_npc_walk1::
	applymovement TRAINER1, Prime5_npc_walk1_move
	waitmovement 0
	trainerbattle_single TRAINER1ID, Route110_Text_MayDefeated, Route110_Text_MayDefeated, Prime5_npc_finish1

Prime5_npc_finish1::
	special HealPlayerParty
	applymovement TRAINER1, Prime5_npc_walk1_move_back
	waitmovement 0
	waitmessage
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_COUNT
	goto_if_eq VAR_TEMP_A, 1, Prime5_end_battles
	call_if_set FLAG_HAS_DEATH, Nuzlocke_allow_withdrawl
	goto Prime5_npc_walk2
	
Prime5_npc_walk2::
	applymovement TRAINER2, Prime5_npc_walk2_move
	waitmovement 0
	trainerbattle_single TRAINER2ID, Route110_Text_MayDefeated, Route110_Text_MayDefeated, Prime5_npc_finish2

Prime5_npc_finish2::
	special HealPlayerParty
	applymovement TRAINER2, Prime5_npc_walk2_move_back
	waitmovement 0
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_COUNT
	goto_if_eq VAR_TEMP_A, 2, Prime5_end_battles
	call_if_set FLAG_HAS_DEATH, Nuzlocke_allow_withdrawl
	goto Prime5_npc_walk3

Prime5_npc_walk3:
	releaseall
	end

Prime5_npc_walk1_move::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

Prime5_npc_walk1_move_back::
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_down
	step_end

Prime5_npc_walk2_move::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

Prime5_npc_walk2_move_back::
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_down
	step_end

Prime5_Trainer1_event::
	faceplayer
	lockall
	msgbox Prime5_Trainer1_text, MSGBOX_DEFAULT
 	release
 	end

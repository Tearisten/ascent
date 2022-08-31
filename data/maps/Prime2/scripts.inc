@ this floors specific battle data
@ copy from here down for new maps
@ also set the nz gift to the right area
.set ROOM_BATTLE_COUNT, 3
.set ROOM_BATTLE_TYPE, 1
.set FLOORMONEY, 5900
.set FLOORBP, 6
.set FLOORHS, 4
.set FLOORFLAG, FLAG_ROOM_17_CLEAR
.set FLOORFLAG_PREV, FLAG_ROOM_16_CLEAR
.set FLAG_NUZ_GIFT, FLAG_NZ_GIFT_16

@ this floors trainer ids
.set TRAINER1ID, TRAINER_TD_1_INTRO
.set TRAINER2ID, TRAINER_TD_1_MID
.set TRAINER3ID, TRAINER_TD_1_ELITE

@ this floors trainer npc ids
.set TRAINER1, 10
Prime2_Trainer1_text:
	.string "Balance is healthy for life.\n"
	.string "and battles.$"

.set TRAINER2, 11
Prime2_Trainer2_text:
	.string "My sun is so bright.\n"
	.string "Watch out for the fire.$"

.set TRAINER3, 12
Prime2_Trainer3_text:
	.string "Night is always so peaceful.\n"
	.string "I sleep better in the rain.$"

Prime2_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Ascent_OnWarp
	map_script MAP_SCRIPT_ON_TRANSITION, Prime2_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, Prime2_OnLoad
	.byte 0

Prime2_OnTransition:
	setrespawn HEAL_LOCATION_FLOOR_PRIME_2
	end

Prime2_OnLoad:
	call_if_set FLOORFLAG, PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	end

Prime2_PokeShop_event::
	faceplayer
	goto_if_unset FLAG_RANDOM_GIFTS, PokeShop_event
	goto_if_unset FLAG_NUZ_GIFT, Prime2_Nuzlocke_gift
	msgbox Nuzlocke_no_gifts_left_text, MSGBOX_DEFAULT
	waitmessage
	releaseall
	end

@ unused since no gifts on this floor
Prime2_Nuzlocke_gift: 
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

Prime2_ReadyOrNot::
	faceplayer
	goto_if_set FLOORFLAG, Gauntlet1_Already_clear_event
	goto_if_set FLAG_NUZ_LOSE, Gauntlet1_nuzlocke_lost
	buffernumberstring STR_VAR_1, ROOM_BATTLE_COUNT
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_TYPE
	switch VAR_TEMP_A
	case 1, Prime2_TextSingleBattles
	case 2, Prime2_TextDoubleBattles

Prime2_TextSingleBattles::
	msgbox Prime2_readyText1, MSGBOX_YESNO
	goto Prime2_TryBattle

Prime2_TextDoubleBattles::
	msgbox Prime2_readyText2, MSGBOX_YESNO
	goto Prime2_TryBattle

Prime2_readyText1:
	.string "This floor features {STR_VAR_1} single battles.\n"
	.string "Are you ready?$"

Prime2_readyText2:
	.string "This floor features {STR_VAR_1} double battles.\n"
	.string "Are you ready?$"

Prime2_TryBattle::
	releaseall
	switch VAR_RESULT
	case NO, MoveRelearners_EventScript_CantTeach
	case MULTI_B_PRESSED, MoveRelearners_EventScript_CantTeach
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Prime2_walk_start
	waitmovement 0
	goto Prime2_start_battles
	end

Prime2_walk_start::
	walk_down
	walk_down
	walk_left
	walk_left
	face_up
	step_end

Prime2_start_battles::
	goto Prime2_npc_walk1

Prime2_end_battles::
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

Prime2_npc_walk1::
	applymovement TRAINER1, Prime2_npc_walk1_move
	waitmovement 0
	trainerbattle_single TRAINER1ID, Route110_Text_MayDefeated, Route110_Text_MayDefeated, Prime2_npc_finish1

Prime2_npc_finish1::
	special HealPlayerParty
	applymovement TRAINER1, Prime2_npc_walk1_move_back
	waitmovement 0
	waitmessage
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_COUNT
	goto_if_eq VAR_TEMP_A, 1, Prime2_end_battles
	call_if_set FLAG_HAS_DEATH, Nuzlocke_allow_withdrawl
	goto Prime2_npc_walk2
	
Prime2_npc_walk2::
	applymovement TRAINER2, Prime2_npc_walk2_move
	waitmovement 0
	trainerbattle_single TRAINER2ID, Route110_Text_MayDefeated, Route110_Text_MayDefeated, Prime2_npc_finish2

Prime2_npc_finish2::
	special HealPlayerParty
	applymovement TRAINER2, Prime2_npc_walk2_move_back
	waitmovement 0
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_COUNT
	goto_if_eq VAR_TEMP_A, 2, Prime2_end_battles
	call_if_set FLAG_HAS_DEATH, Nuzlocke_allow_withdrawl
	goto Prime2_npc_walk3

Prime2_npc_walk3::
	applymovement TRAINER3, GrowingPains3_npc_walk3_move
	waitmovement 0
	trainerbattle_single TRAINER3ID, Route110_Text_MayDefeated, Route110_Text_MayDefeated, GrowingPains3_npc_finish3

Prime2_npc_finish3::
	special HealPlayerParty
	applymovement TRAINER3, GrowingPains3_npc_walk3_move_back
	waitmovement 0
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_COUNT
	goto_if_eq VAR_TEMP_A, 3, Prime2_end_battles
	call_if_set FLAG_HAS_DEATH, Nuzlocke_allow_withdrawl
	goto GrowingPains3_npc_walk4

Prime2_npc_walk4:
	releaseall
	end

Prime2_npc_walk1_move::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

Prime2_npc_walk1_move_back::
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

Prime2_npc_walk2_move::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

Prime2_npc_walk2_move_back::
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_down
	step_end

Prime2_npc_walk3_move::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

Prime2_npc_walk3_move_back::
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_down
	step_end

Prime2_Trainer1_event::
	faceplayer
	lockall
	msgbox Prime2_Trainer1_text, MSGBOX_DEFAULT
 	release
 	end

Prime2_Trainer2_event::
	faceplayer
	lockall
	msgbox Prime2_Trainer2_text, MSGBOX_DEFAULT
 	release
 	end


Prime2_Trainer3_event::
	faceplayer
	lockall
	msgbox Prime2_Trainer3_text, MSGBOX_DEFAULT
 	release
 	end

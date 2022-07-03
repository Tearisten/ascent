@ this floors specific battle data
@ copy from here down for new maps
@ also set the nz gift to the right area
.set ROOM_BATTLE_COUNT, 3
.set ROOM_BATTLE_TYPE, 1
.set FLOORMONEY, 4500
.set FLOORBP, 3
.set FLOORHS, 3
.set FLOORFLAG, FLAG_ROOM_11_CLEAR
.set FLOORFLAG_PREV, FLAG_ROOM_10_CLEAR
.set FLAG_NUZ_GIFT, FLAG_NZ_GIFT_10

@ this floors trainer ids
.set TRAINER1ID, TRAINER_TD_1_INTRO
.set TRAINER2ID, TRAINER_TD_1_MID
.set TRAINER3ID, TRAINER_TD_1_ELITE

@ this floors trainer npc ids
.set TRAINER1, 10
TeenageDaydream1_Trainer1_text:
	.string "Balance is healthy for life.\n"
	.string "and battles.$"

.set TRAINER2, 11
TeenageDaydream1_Trainer2_text:
	.string "My sun is so bright.\n"
	.string "Watch out for the fire.$"

.set TRAINER3, 12
TeenageDaydream1_Trainer3_text:
	.string "Night is always so peaceful.\n"
	.string "I sleep better in the rain.$"

TeenageDaydream1_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Ascent_OnWarp
	map_script MAP_SCRIPT_ON_TRANSITION, TeenageDaydream1_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, TeenageDaydream1_OnLoad
	.byte 0

TeenageDaydream1_OnTransition:
	setrespawn HEAL_LOCATION_FLOOR_TEENAGE_DAYDREAM_1
	end

TeenageDaydream1_OnLoad:
	call_if_set FLOORFLAG, PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	end

TeenageDaydream1_PokeShop_event::
	faceplayer
	goto_if_unset FLAG_RANDOM_GIFTS, PokeShop_event
	goto_if_unset FLAG_NUZ_GIFT, TeenageDaydream1_Nuzlocke_gift
	msgbox Nuzlocke_no_gifts_left_text, MSGBOX_DEFAULT
	waitmessage
	releaseall
	end

@ unused since no gifts on this floor
TeenageDaydream1_Nuzlocke_gift: 
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

TeenageDaydream1_ReadyOrNot::
	faceplayer
	goto_if_set FLOORFLAG, Gauntlet1_Already_clear_event
	goto_if_set FLAG_NUZ_LOSE, Gauntlet1_nuzlocke_lost
	buffernumberstring STR_VAR_1, ROOM_BATTLE_COUNT
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_TYPE
	switch VAR_TEMP_A
	case 1, TeenageDaydream1_TextSingleBattles
	case 2, TeenageDaydream1_TextDoubleBattles

TeenageDaydream1_TextSingleBattles::
	msgbox TeenageDaydream1_readyText1, MSGBOX_DEFAULT
	waitmessage
	goto TeenageDaydream1_TryBattle

TeenageDaydream1_TextDoubleBattles::
	msgbox TeenageDaydream1_readyText2, MSGBOX_DEFAULT
	goto TeenageDaydream1_TryBattle

TeenageDaydream1_readyText1:
	.string "This floor features {STR_VAR_1} single battles.\n"
	.string "Are you ready?$"

TeenageDaydream1_readyText2:
	.string "This floor features {STR_VAR_1} double battles.\n"
	.string "Are you ready?$"

TeenageDaydream1_TryBattle::
	yesnobox 3, 8
	releaseall
	switch VAR_RESULT
	case NO, MoveRelearners_EventScript_CantTeach
	case MULTI_B_PRESSED, MoveRelearners_EventScript_CantTeach
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, TeenageDaydream1_walk_start
	waitmovement 0
	goto TeenageDaydream1_start_battles
	end

TeenageDaydream1_walk_start::
	walk_down
	walk_down
	walk_left
	walk_left
	face_up
	step_end

TeenageDaydream1_start_battles::
	goto TeenageDaydream1_npc_walk1

TeenageDaydream1_end_battles::
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

TeenageDaydream1_npc_walk1::
	applymovement TRAINER1, TeenageDaydream1_npc_walk1_move
	waitmovement 0
	trainerbattle_single TRAINER1ID, Route110_Text_MayDefeated, Route110_Text_MayDefeated, TeenageDaydream1_npc_finish1

TeenageDaydream1_npc_finish1::
	special HealPlayerParty
	applymovement TRAINER1, TeenageDaydream1_npc_walk1_move_back
	waitmovement 0
	waitmessage
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_COUNT
	goto_if_eq VAR_TEMP_A, 1, TeenageDaydream1_end_battles
	call_if_set FLAG_HAS_DEATH, Nuzlocke_allow_withdrawl
	goto TeenageDaydream1_npc_walk2
	
TeenageDaydream1_npc_walk2::
	applymovement TRAINER2, TeenageDaydream1_npc_walk2_move
	waitmovement 0
	trainerbattle_single TRAINER2ID, Route110_Text_MayDefeated, Route110_Text_MayDefeated, TeenageDaydream1_npc_finish2

TeenageDaydream1_npc_finish2::
	special HealPlayerParty
	applymovement TRAINER2, TeenageDaydream1_npc_walk2_move_back
	waitmovement 0
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_COUNT
	goto_if_eq VAR_TEMP_A, 2, TeenageDaydream1_end_battles
	call_if_set FLAG_HAS_DEATH, Nuzlocke_allow_withdrawl
	goto TeenageDaydream1_npc_walk3

TeenageDaydream1_npc_walk3::
	applymovement TRAINER3, GrowingPains3_npc_walk3_move
	waitmovement 0
	trainerbattle_single TRAINER3ID, Route110_Text_MayDefeated, Route110_Text_MayDefeated, GrowingPains3_npc_finish3

TeenageDaydream1_npc_finish3::
	special HealPlayerParty
	applymovement TRAINER3, GrowingPains3_npc_walk3_move_back
	waitmovement 0
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_COUNT
	goto_if_eq VAR_TEMP_A, 3, TeenageDaydream1_end_battles
	call_if_set FLAG_HAS_DEATH, Nuzlocke_allow_withdrawl
	goto GrowingPains3_npc_walk4

TeenageDaydream1_npc_walk4:
	releaseall
	end

TeenageDaydream1_npc_walk1_move::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

TeenageDaydream1_npc_walk1_move_back::
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

TeenageDaydream1_npc_walk2_move::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

TeenageDaydream1_npc_walk2_move_back::
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_down
	step_end

TeenageDaydream1_npc_walk3_move::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

TeenageDaydream1_npc_walk3_move_back::
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_down
	step_end

TeenageDaydream1_Trainer1_event::
	faceplayer
	lockall
	msgbox TeenageDaydream1_Trainer1_text, MSGBOX_DEFAULT
 	release
 	end

TeenageDaydream1_Trainer2_event::
	faceplayer
	lockall
	msgbox TeenageDaydream1_Trainer2_text, MSGBOX_DEFAULT
 	release
 	end


TeenageDaydream1_Trainer3_event::
	faceplayer
	lockall
	msgbox TeenageDaydream1_Trainer3_text, MSGBOX_DEFAULT
 	release
 	end

@ this floors specific battle data
@ copy from here down for new maps
.set ROOM_BATTLE_COUNT, 4
.set ROOM_BATTLE_TYPE, 2
.set FLOORMONEY, 5200
.set FLOORBP, 5
.set FLOORHS, 4
.set FLOORFLAG, FLAG_ROOM_14_CLEAR
.set FLOORFLAG_PREV, FLAG_ROOM_13_CLEAR
.set FLAG_NUZ_GIFT, FLAG_NZ_GIFT_13

@ this floors trainer ids
.set TRAINER1ID, TRAINER_TD_4_INTRO
.set TRAINER2ID, TRAINER_TD_4_EARLY
.set TRAINER3ID, TRAINER_TD_4_LATE
.set TRAINER4ID, TRAINER_TD_4_ELITE

@ this floors trainer npc ids
.set TRAINER1, 10
TeenageDaydream4_Trainer1_text:
	.string "I can't stand anything too\n"
	.string "popular. I like hidden gems.$"

.set TRAINER2, 11
TeenageDaydream4_Trainer2_text:
	.string "I'm aiming for employee\n"
	.string "of the month.$"

.set TRAINER3, 12
TeenageDaydream4_Trainer3_text:
	.string "Rock, Paper, Scissors...\n"
	.string "SHOOT!$"

.set TRAINER4, 13
TeenageDaydream4_Trainer4_text:
	.string "BOOP. It's just a prank bro.\n"
	.string "I did it on a whim for real.$"

TeenageDaydream4_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Ascent_OnWarp
	map_script MAP_SCRIPT_ON_TRANSITION, TeenageDaydream4_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, TeenageDaydream4_OnLoad
	.byte 0

TeenageDaydream4_OnTransition:
	setrespawn HEAL_LOCATION_FLOOR_TEENAGE_DAYDREAM_4
	end

TeenageDaydream4_OnLoad:
	call_if_set FLOORFLAG, PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	end

TeenageDaydream4_PokeShop_event::
	faceplayer
	goto_if_unset FLAG_RANDOM_GIFTS, PokeShop_event
	goto_if_unset FLAG_NUZ_GIFT, TeenageDaydream4_Nuzlocke_gift
	msgbox Nuzlocke_no_gifts_left_text, MSGBOX_DEFAULT
	waitmessage
	releaseall
	end

TeenageDaydream4_Nuzlocke_gift:
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

TeenageDaydream4_ReadyOrNot::
	faceplayer
	goto_if_set FLOORFLAG, Gauntlet1_Already_clear_event
	goto_if_set FLAG_NUZ_LOSE, Gauntlet1_nuzlocke_lost
	buffernumberstring STR_VAR_1, ROOM_BATTLE_COUNT
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_TYPE
	switch VAR_TEMP_A
	case 1, TeenageDaydream4_TextSingleBattles
	case 2, TeenageDaydream4_TextDoubleBattles

TeenageDaydream4_TextSingleBattles::
	msgbox TeenageDaydream4_readyText1, MSGBOX_DEFAULT
	waitmessage
	goto TeenageDaydream4_TryBattle

TeenageDaydream4_TextDoubleBattles::
	msgbox TeenageDaydream4_readyText2, MSGBOX_DEFAULT
	goto TeenageDaydream4_TryBattle

TeenageDaydream4_readyText1:
	.string "This floor features {STR_VAR_1} single battles.\n"
	.string "Are you ready?$"

TeenageDaydream4_readyText2:
	.string "This floor features {STR_VAR_1} double battles.\n"
	.string "Are you ready?$"

TeenageDaydream4_TryBattle::
	yesnobox 3, 8
	releaseall
	switch VAR_RESULT
	case NO, MoveRelearners_EventScript_CantTeach
	case MULTI_B_PRESSED, MoveRelearners_EventScript_CantTeach
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, TeenageDaydream4_walk_start
	waitmovement 0
	goto TeenageDaydream4_start_battles
	end

TeenageDaydream4_walk_start::
	walk_down
	walk_down
	walk_left
	walk_left
	face_up
	step_end

TeenageDaydream4_start_battles::
	goto TeenageDaydream4_npc_walk1

TeenageDaydream4_end_battles::
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


TeenageDaydream4_npc_walk1::
	applymovement TRAINER1, TeenageDaydream4_npc_walk1_move
	waitmovement 0
	trainerbattle_single TRAINER1ID, Route110_Text_MayDefeated, Route110_Text_MayDefeated, TeenageDaydream4_npc_finish1

TeenageDaydream4_npc_finish1::
	special HealPlayerParty
	applymovement TRAINER1, TeenageDaydream4_npc_walk1_move_back
	waitmovement 0
	waitmessage
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_COUNT
	goto_if_eq VAR_TEMP_A, 1, TeenageDaydream4_end_battles
	goto TeenageDaydream4_npc_walk2
	
TeenageDaydream4_npc_walk2::
	applymovement TRAINER2, TeenageDaydream4_npc_walk2_move
	waitmovement 0
	trainerbattle_single TRAINER2ID, Route110_Text_MayDefeated, Route110_Text_MayDefeated, TeenageDaydream4_npc_finish2

TeenageDaydream4_npc_finish2::
	special HealPlayerParty
	applymovement TRAINER2, TeenageDaydream4_npc_walk2_move_back
	waitmovement 0
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_COUNT
	goto_if_eq VAR_TEMP_A, 2, TeenageDaydream4_end_battles
	call_if_set FLAG_HAS_DEATH, Nuzlocke_allow_withdrawl
	goto TeenageDaydream4_npc_walk3

TeenageDaydream4_npc_walk3::
	applymovement TRAINER3, TeenageDaydream4_npc_walk3_move
	waitmovement 0
	trainerbattle_single TRAINER3ID, Route110_Text_MayDefeated, Route110_Text_MayDefeated, TeenageDaydream4_npc_finish3

TeenageDaydream4_npc_finish3::
	special HealPlayerParty
	applymovement TRAINER3, TeenageDaydream4_npc_walk3_move_back
	waitmovement 0
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_COUNT
	goto_if_eq VAR_TEMP_A, 3, TeenageDaydream4_end_battles
	call_if_set FLAG_HAS_DEATH, Nuzlocke_allow_withdrawl
	goto TeenageDaydream4_npc_walk4

TeenageDaydream4_npc_walk4::
	applymovement TRAINER4, TeenageDaydream4_npc_walk4_move
	waitmovement 0
	trainerbattle_single TRAINER4ID, Route110_Text_MayDefeated, Route110_Text_MayDefeated, TeenageDaydream4_npc_finish4

TeenageDaydream4_npc_finish4::
	special HealPlayerParty
	applymovement TRAINER4, TeenageDaydream4_npc_walk4_move_back
	waitmovement 0
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_COUNT
	goto_if_eq VAR_TEMP_A, 4, TeenageDaydream4_end_battles
	call_if_set FLAG_HAS_DEATH, Nuzlocke_allow_withdrawl
	goto TeenageDaydream4_npc_walk5

TeenageDaydream4_npc_walk5:
	releaseall
	end


TeenageDaydream4_npc_walk1_move::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

TeenageDaydream4_npc_walk1_move_back::
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

TeenageDaydream4_npc_walk2_move::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

TeenageDaydream4_npc_walk2_move_back::
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_down
	step_end

TeenageDaydream4_npc_walk3_move::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

TeenageDaydream4_npc_walk3_move_back::
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_down
	step_end

TeenageDaydream4_npc_walk4_move::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

TeenageDaydream4_npc_walk4_move_back::
	walk_up
	walk_left
	walk_left
	walk_left
	walk_up
	face_down
	step_end

TeenageDaydream4_Trainer1_event::
	faceplayer
	lockall
	msgbox TeenageDaydream4_Trainer1_text, MSGBOX_DEFAULT
 	release
 	end

TeenageDaydream4_Trainer2_event::
	faceplayer
	lockall
	msgbox TeenageDaydream4_Trainer2_text, MSGBOX_DEFAULT
 	release
 	end

TeenageDaydream4_Trainer3_event::
	faceplayer
	lockall
	msgbox TeenageDaydream4_Trainer3_text, MSGBOX_DEFAULT
 	release
 	end

TeenageDaydream4_Trainer4_event::
	faceplayer
	lockall
	msgbox TeenageDaydream4_Trainer4_text, MSGBOX_DEFAULT
 	release
 	end

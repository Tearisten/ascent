@ this floors specific battle data
@ copy from here down for new maps
.set ROOM_BATTLE_COUNT, 3
.set ROOM_BATTLE_TYPE, 2
.set FLOORMONEY, 3500
.set FLOORBP, 2
.set FLOORHS, 3
.set FLOORFLAG, FLAG_ROOM_8_CLEAR
.set FLOORFLAG_PREV, FLAG_ROOM_7_CLEAR
.set FLAG_NUZ_GIFT, FLAG_NZ_GIFT_7

@ this floors trainer ids
.set TRAINER1ID, TRAINER_GP_3_INTRO
.set TRAINER2ID, TRAINER_GP_3_MID
.set TRAINER3ID, TRAINER_GP_3_ELITE

@ this floors trainer npc ids
.set TRAINER1, 10
TeenageDaydream3_Trainer1_text:
	.string "Rodents are so cute.\n"
	.string "Want to hold mine?$"

.set TRAINER2, 11
TeenageDaydream3_Trainer2_text:
	.string "Indimidate is just the\n"
	.string "best ability in the game.$"

.set TRAINER3, 12
TeenageDaydream3_Trainer3_text:
	.string "I scammed some noobs for\n"
	.string "their starter pokemon.$"

TeenageDaydream3_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TeenageDaydream3_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, TeenageDaydream3_OnLoad
	.byte 0

TeenageDaydream3_OnTransition:
	setrespawn HEAL_LOCATION_FLOOR_GROWING_PAINS_3
	end

TeenageDaydream3_OnLoad:
	call_if_set FLOORFLAG, PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	end

TeenageDaydream3_PokeShop_event::
	faceplayer
	goto_if_unset Nuzlocke_Mode, PokeShop_event
	goto_if_unset FLAG_NUZ_GIFT, TeenageDaydream3_Nuzlocke_gift
	msgbox Nuzlocke_no_gifts_left_text, MSGBOX_DEFAULT
	waitmessage
	releaseall
	end

TeenageDaydream3_Nuzlocke_gift:
	msgbox Nuzlocke_gift_text_confirm, MSGBOX_DEFAULT
	yesnobox 3, 8
	switch VAR_RESULT
	case NO, MoveRelearners_EventScript_CantTeach
	case MULTI_B_PRESSED, MoveRelearners_EventScript_CantTeach
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
	releaseall
	end

TeenageDaydream3_ReadyOrNot::
	faceplayer
	goto_if_set FLOORFLAG, Gauntlet1_Already_clear_event
	goto_if_set FLAG_NUZ_LOSE, Gauntlet1_nuzlocke_lost
	buffernumberstring STR_VAR_1, ROOM_BATTLE_COUNT
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_TYPE
	switch VAR_TEMP_A
	case 1, TeenageDaydream3_TextSingleBattles
	case 2, TeenageDaydream3_TextDoubleBattles

TeenageDaydream3_TextSingleBattles::
	msgbox TeenageDaydream3_readyText1, MSGBOX_DEFAULT
	waitmessage
	goto TeenageDaydream3_TryBattle

TeenageDaydream3_TextDoubleBattles::
	msgbox TeenageDaydream3_readyText2, MSGBOX_DEFAULT
	goto TeenageDaydream3_TryBattle

TeenageDaydream3_readyText1:
	.string "This floor features {STR_VAR_1} single battles.\n"
	.string "Are you ready?$"

TeenageDaydream3_readyText2:
	.string "This floor features {STR_VAR_1} double battles.\n"
	.string "Are you ready?$"

TeenageDaydream3_TryBattle::
	yesnobox 3, 8
	releaseall
	switch VAR_RESULT
	case NO, MoveRelearners_EventScript_CantTeach
	case MULTI_B_PRESSED, MoveRelearners_EventScript_CantTeach
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, TeenageDaydream3_walk_start
	waitmovement 0
	goto TeenageDaydream3_start_battles
	end

TeenageDaydream3_walk_start::
	walk_down
	walk_down
	walk_left
	walk_left
	face_up
	step_end

TeenageDaydream3_start_battles::
	goto TeenageDaydream3_npc_walk1

TeenageDaydream3_end_battles::
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


TeenageDaydream3_npc_walk1::
	applymovement TRAINER1, TeenageDaydream3_npc_walk1_move
	waitmovement 0
	trainerbattle_single TRAINER1ID, Route110_Text_MayDefeated, Route110_Text_MayDefeated, TeenageDaydream3_npc_finish1

TeenageDaydream3_npc_finish1::
	special HealPlayerParty
	applymovement TRAINER1, TeenageDaydream3_npc_walk1_move_back
	waitmovement 0
	waitmessage
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_COUNT
	goto_if_eq VAR_TEMP_A, 1, TeenageDaydream3_end_battles
	goto TeenageDaydream3_npc_walk2
	
TeenageDaydream3_npc_walk2::
	applymovement TRAINER2, TeenageDaydream3_npc_walk2_move
	waitmovement 0
	trainerbattle_single TRAINER2ID, Route110_Text_MayDefeated, Route110_Text_MayDefeated, TeenageDaydream3_npc_finish2

TeenageDaydream3_npc_finish2::
	special HealPlayerParty
	applymovement TRAINER2, TeenageDaydream3_npc_walk2_move_back
	waitmovement 0
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_COUNT
	goto_if_eq VAR_TEMP_A, 2, TeenageDaydream3_end_battles
	goto TeenageDaydream3_npc_walk3

TeenageDaydream3_npc_walk3::
	applymovement TRAINER3, TeenageDaydream3_npc_walk3_move
	waitmovement 0
	trainerbattle_single TRAINER3ID, Route110_Text_MayDefeated, Route110_Text_MayDefeated, TeenageDaydream3_npc_finish3

TeenageDaydream3_npc_finish3::
	special HealPlayerParty
	applymovement TRAINER3, TeenageDaydream3_npc_walk3_move_back
	waitmovement 0
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_COUNT
	goto_if_eq VAR_TEMP_A, 3, TeenageDaydream3_end_battles
	goto TeenageDaydream3_npc_walk4

TeenageDaydream3_npc_walk4:
	releaseall
	end

TeenageDaydream3_npc_walk1_move::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

TeenageDaydream3_npc_walk1_move_back::
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

TeenageDaydream3_npc_walk2_move::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

TeenageDaydream3_npc_walk2_move_back::
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_down
	step_end

TeenageDaydream3_npc_walk3_move::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

TeenageDaydream3_npc_walk3_move_back::
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_down
	step_end

TeenageDaydream3_Trainer1_event::
	faceplayer
	lockall
	msgbox TeenageDaydream3_Trainer1_text, MSGBOX_DEFAULT
	releaseall
	end

TeenageDaydream3_Trainer2_event::
	faceplayer
	lockall
	msgbox TeenageDaydream3_Trainer2_text, MSGBOX_DEFAULT
	releaseall
	end

TeenageDaydream3_Trainer3_event::
	faceplayer
	lockall
	msgbox TeenageDaydream3_Trainer3_text, MSGBOX_DEFAULT
	releaseall
	end
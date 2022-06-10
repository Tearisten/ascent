@ this floors specific battle data
@ copy from here down for new maps
.set ROOM_BATTLE_COUNT, 3
.set ROOM_BATTLE_TYPE, 1
.set FLOORMONEY, 3300
.set FLOORBP, 2
.set FLOORHS, 3
.set FLOORFLAG, FLAG_ROOM_7_CLEAR
.set FLOORFLAG_PREV, FLAG_ROOM_6_CLEAR
.set FLAG_NUZ_GIFT, FLAG_NZ_GIFT_6

@ this floors trainer ids
.set TRAINER1ID, TRAINER_GP_2_INTRO
.set TRAINER2ID, TRAINER_GP_2_MID
.set TRAINER3ID, TRAINER_GP_2_ELITE

@ this floors trainer npc ids
.set TRAINER1, 10
GrowingPains2_Trainer1_text:
	.string "I like pokemon with\n"
	.string "multiple forms.$"

.set TRAINER2, 11
GrowingPains2_Trainer2_text:
	.string "Bugs are so cool. They \n"
	.string "are great for battles.$"

.set TRAINER3, 12
GrowingPains2_Trainer3_text:
	.string "Ready to get wet?\n"
	.string "Splash splash loser.$"

GrowingPains2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GrowingPains2_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, GrowingPains2_OnLoad
	.byte 0

GrowingPains2_OnTransition:
	setrespawn HEAL_LOCATION_FLOOR_GROWING_PAINS_2
	end

GrowingPains2_OnLoad:
	call_if_set FLOORFLAG, PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	end


GrowingPains2_PokeShop_event::
	faceplayer
	goto_if_unset FLAG_RANDOM_GIFTS, PokeShop_event
	goto_if_unset FLAG_NUZ_GIFT, GrowingPains2_Nuzlocke_gift
	msgbox Nuzlocke_no_gifts_left_text, MSGBOX_DEFAULT
	waitmessage
	releaseall
	end

GrowingPains2_Nuzlocke_gift:
	msgbox Nuzlocke_gift_text_confirm, MSGBOX_DEFAULT
	yesnobox 3, 8
	switch VAR_RESULT
	case NO, MoveRelearners_EventScript_CantTeach
	case MULTI_B_PRESSED, MoveRelearners_EventScript_CantTeach
	setorcopyvar VAR_0x8002, 1 @ which nz shop is it?
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

GrowingPains2_ReadyOrNot::
	faceplayer
	goto_if_set FLOORFLAG, Gauntlet1_Already_clear_event
	goto_if_set FLAG_NUZ_LOSE, Gauntlet1_nuzlocke_lost
	buffernumberstring STR_VAR_1, ROOM_BATTLE_COUNT
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_TYPE
	switch VAR_TEMP_A
	case 1, GrowingPains2_TextSingleBattles
	case 2, GrowingPains2_TextDoubleBattles

GrowingPains2_TextSingleBattles::
	msgbox GrowingPains2_readyText1, MSGBOX_DEFAULT
	waitmessage
	goto GrowingPains2_TryBattle

GrowingPains2_TextDoubleBattles::
	msgbox GrowingPains2_readyText2, MSGBOX_DEFAULT
	goto GrowingPains2_TryBattle

GrowingPains2_readyText1:
	.string "This floor features {STR_VAR_1} single battles.\n"
	.string "Are you ready?$"

GrowingPains2_readyText2:
	.string "This floor features {STR_VAR_1} double battles.\n"
	.string "Are you ready?$"

GrowingPains2_TryBattle::
	yesnobox 3, 8
	releaseall
	switch VAR_RESULT
	case NO, MoveRelearners_EventScript_CantTeach
	case MULTI_B_PRESSED, MoveRelearners_EventScript_CantTeach
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, GrowingPains2_walk_start
	waitmovement 0
	goto GrowingPains2_start_battles
	end

GrowingPains2_walk_start::
	walk_down
	walk_down
	walk_left
	walk_left
	face_up
	step_end

GrowingPains2_start_battles::
	goto GrowingPains2_npc_walk1

GrowingPains2_end_battles::
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

GrowingPains2_npc_walk1::
	applymovement TRAINER1, GrowingPains2_npc_walk1_move
	waitmovement 0
	trainerbattle_single TRAINER1ID, Route110_Text_MayDefeated, Route110_Text_MayDefeated, GrowingPains2_npc_finish1

GrowingPains2_npc_finish1::
	special HealPlayerParty
	applymovement TRAINER1, GrowingPains2_npc_walk1_move_back
	waitmovement 0
	waitmessage
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_COUNT
	goto_if_eq VAR_TEMP_A, 1, GrowingPains2_end_battles
	call_if_set FLAG_HAS_DEATH, Nuzlocke_allow_withdrawl
	goto GrowingPains2_npc_walk2
	
GrowingPains2_npc_walk2::
	applymovement TRAINER2, GrowingPains2_npc_walk2_move
	waitmovement 0
	trainerbattle_single TRAINER2ID, Route110_Text_MayDefeated, Route110_Text_MayDefeated, GrowingPains2_npc_finish2

GrowingPains2_npc_finish2::
	special HealPlayerParty
	applymovement TRAINER2, GrowingPains2_npc_walk2_move_back
	waitmovement 0
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_COUNT
	goto_if_eq VAR_TEMP_A, 2, GrowingPains2_end_battles
	call_if_set FLAG_HAS_DEATH, Nuzlocke_allow_withdrawl
	goto GrowingPains2_npc_walk3

GrowingPains2_npc_walk3::
	applymovement TRAINER3, GrowingPains2_npc_walk3_move
	waitmovement 0
	trainerbattle_single TRAINER3ID, Route110_Text_MayDefeated, Route110_Text_MayDefeated, GrowingPains2_npc_finish3

GrowingPains2_npc_finish3::
	special HealPlayerParty
	applymovement TRAINER3, GrowingPains2_npc_walk3_move_back
	waitmovement 0
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_COUNT
	goto_if_eq VAR_TEMP_A, 3, GrowingPains2_end_battles
	call_if_set FLAG_HAS_DEATH, Nuzlocke_allow_withdrawl
	goto GrowingPains2_npc_walk4

GrowingPains2_npc_walk4:
	releaseall
	end

GrowingPains2_npc_walk1_move::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

GrowingPains2_npc_walk1_move_back::
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

GrowingPains2_npc_walk2_move::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

GrowingPains2_npc_walk2_move_back::
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_down
	step_end

GrowingPains2_npc_walk3_move::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

GrowingPains2_npc_walk3_move_back::
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_down
	step_end

GrowingPains2_Trainer1_event::
	faceplayer
	lockall
	msgbox GrowingPains2_Trainer1_text, MSGBOX_DEFAULT
	releaseall
	end

GrowingPains2_Trainer2_event::
	faceplayer
	lockall
	msgbox GrowingPains2_Trainer2_text, MSGBOX_DEFAULT
	releaseall
	end

GrowingPains2_Trainer3_event::
	faceplayer
	lockall
	msgbox GrowingPains2_Trainer3_text, MSGBOX_DEFAULT
	releaseall
	end

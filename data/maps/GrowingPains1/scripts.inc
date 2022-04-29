@ this floors specific battle data
@ copy from here down for new maps
.set ROOM_BATTLE_COUNT, 2
.set ROOM_BATTLE_TYPE, 1
.set FLOORMONEY, 1000
.set FLOORBP, 1 
.set FLOORHS, 2 
.set FLOORFLAG, FLAG_ROOM_1_CLEAR
.set FLOORFLAG_PREV, FLAG_ALL_STARTERS

@ this floors trainer ids
.set TRAINER1ID, TRAINER_LC_1_INTRO
.set TRAINER2ID, TRAINER_LC_1_ELITE

@ this floors trainer npc ids
.set TRAINER1, 10
GrowingPains1_Trainer1_text:
	.string "Ready to face my normal type pokemon?$\n"

.set TRAINER2, 11
GrowingPains1_Trainer2_text:
	.string "Barboach is my favorite pokemon of\n"
	.string "all time.$"

GrowingPains1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GrowingPains1_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, GrowingPains1_OnLoad
	.byte 0

GrowingPains1_OnTransition:
	setrespawn HEAL_LOCATION_FLOOR_LITTLE_CUP_1
	end

GrowingPains1_OnLoad:
	call_if_set FLOORFLAG, PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	end

GrowingPains1_PokeShop_event::
	faceplayer
	@goto_if_unset Nuzlocke_Mode, PokeShop_event
	@goto_if_unset xxx, GrowingPains1_Nuzlocke_gift no shop on 1f
	msgbox Nuzlocke_no_gifts_left_text, MSGBOX_DEFAULT
	waitmessage
	releaseall
	end

@ unused since no gifts on this floor
GrowingPains1_Nuzlocke_gift: 
	msgbox Nuzlocke_gift_text, MSGBOX_DEFAULT
	setorcopyvar VAR_0x8004, FLOORFLAG_PREV @ previous floor clear flag
	special NuzlockeGift
	showmonpic VAR_RESULT, 5, 5
	bufferspeciesname STR_VAR_1, VAR_RESULT
	msgbox Nuzlocke_gift_text, MSGBOX_DEFAULT
	waitmessage
	hidemonpic
	releaseall
	end

GrowingPains1_ReadyOrNot::
	faceplayer
	goto_if_set FLOORFLAG, Gauntlet1_Already_clear_event
	goto_if_set FLAG_NUZ_LOSE, Gauntlet1_nuzlocke_lost
	buffernumberstring STR_VAR_1, ROOM_BATTLE_COUNT
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_TYPE
	switch VAR_TEMP_A
	case 1, GrowingPains1_TextSingleBattles
	case 2, GrowingPains1_TextDoubleBattles

GrowingPains1_TextSingleBattles::
	msgbox GrowingPains1_readyText1, MSGBOX_DEFAULT
	waitmessage
	goto GrowingPains1_TryBattle

GrowingPains1_TextDoubleBattles::
	msgbox GrowingPains1_readyText2, MSGBOX_DEFAULT
	goto GrowingPains1_TryBattle

GrowingPains1_readyText1:
	.string "This floor features {STR_VAR_1} single battles.\n"
	.string "Are you ready?$"

GrowingPains1_readyText2:
	.string "This floor features {STR_VAR_1} double battles.\n"
	.string "Are you ready?$"

GrowingPains1_TryBattle::
	yesnobox 3, 8
	releaseall
	switch VAR_RESULT
	case NO, MoveRelearners_EventScript_CantTeach
	case MULTI_B_PRESSED, MoveRelearners_EventScript_CantTeach
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, GrowingPains1_walk_start
	waitmovement 0
	goto GrowingPains1_start_battles
	end

GrowingPains1_walk_start::
	walk_down
	walk_down
	walk_left
	walk_left
	face_up
	step_end

GrowingPains1_start_battles::
	goto GrowingPains1_npc_walk1

GrowingPains1_end_battles::
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

GrowingPains1_npc_walk1::
	applymovement TRAINER1, GrowingPains1_npc_walk1_move
	waitmovement 0
	trainerbattle_single TRAINER1ID, Route110_Text_MayDefeated, Route110_Text_MayDefeated, GrowingPains1_npc_finish1

GrowingPains1_npc_finish1::
	special HealPlayerParty
	applymovement TRAINER1, GrowingPains1_npc_walk1_move_back
	waitmovement 0
	waitmessage
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_COUNT
	goto_if_eq VAR_TEMP_A, 1, GrowingPains1_end_battles
	goto GrowingPains1_npc_walk2
	
GrowingPains1_npc_walk2::
	applymovement TRAINER2, GrowingPains1_npc_walk2_move
	waitmovement 0
	trainerbattle_single TRAINER2ID, Route110_Text_MayDefeated, Route110_Text_MayDefeated, GrowingPains1_npc_finish2

GrowingPains1_npc_finish2::
	special HealPlayerParty
	applymovement TRAINER2, GrowingPains1_npc_walk2_move_back
	waitmovement 0
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_COUNT
	goto_if_eq VAR_TEMP_A, 2, GrowingPains1_end_battles
	goto GrowingPains1_npc_walk3

GrowingPains1_npc_walk3:
	releaseall
	end

GrowingPains1_npc_walk1_move::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

GrowingPains1_npc_walk1_move_back::
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

GrowingPains1_npc_walk2_move::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

GrowingPains1_npc_walk2_move_back::
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_down
	step_end

GrowingPains1_Trainer1_event::
	faceplayer
	lockall
	msgbox GrowingPains1_Trainer1_text, MSGBOX_DEFAULT
	releaseall
	end

GrowingPains1_Trainer2_event::
	faceplayer
	lockall
	msgbox GrowingPains1_Trainer2_text, MSGBOX_DEFAULT
	releaseall
	end

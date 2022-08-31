@ this floors specific battle data
@ copy from here down for new maps
.set ROOM_BATTLE_COUNT, 4
.set ROOM_BATTLE_TYPE, 2
.set FLOORMONEY, 5700
.set FLOORBP, 6
.set FLOORHS, 4
.set FLOORFLAG, FLAG_ROOM_16_CLEAR
.set FLOORFLAG_PREV, FLAG_ROOM_15_CLEAR
.set FLAG_NUZ_GIFT, FLAG_NZ_GIFT_15

@ this floors trainer ids
.set TRAINER1ID, TRAINER_TD_4_INTRO
.set TRAINER2ID, TRAINER_TD_4_EARLY
.set TRAINER3ID, TRAINER_TD_4_LATE
.set TRAINER4ID, TRAINER_TD_4_ELITE

@ this floors trainer npc ids
.set TRAINER1, 10
Prime1_Trainer1_text:
	.string "I can't stand anything too\n"
	.string "popular. I like hidden gems.$"

.set TRAINER2, 11
Prime1_Trainer2_text:
	.string "I'm aiming for employee\n"
	.string "of the month.$"

.set TRAINER3, 12
Prime1_Trainer3_text:
	.string "Rock, Paper, Scissors...\n"
	.string "SHOOT!$"

.set TRAINER4, 13
Prime1_Trainer4_text:
	.string "BOOP. It's just a prank bro.\n"
	.string "I did it on a whim for real.$"

Prime1_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Ascent_OnWarp
	map_script MAP_SCRIPT_ON_TRANSITION, Prime1_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, Prime1_OnLoad
	.byte 0

Prime1_OnTransition:
	setrespawn HEAL_LOCATION_FLOOR_PRIME_1
	end

Prime1_OnLoad:
	call_if_set FLOORFLAG, PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	end

Prime1_NewAreaGuy_event::
	faceplayer
	msgbox Prime1_NewAreaGuy_text, MSGBOX_DEFAULT
	setflag FLAG_EVO_STONE_3
	waitmessage
	fadescreen FADE_TO_BLACK
	closemessage
	removeobject 13
	fadescreen FADE_FROM_BLACK
	release
	end

Prime1_NewAreaGuy_remove_event:
	removeobject 13
	return

Prime1_NewAreaGuy_text:
	.string "Congratulations on advancing to area\n"
	.string "three. This area features slightly more\p"
	.string "powerful pokemon. It will also have\n"
	.string "a few terrain battles. You may buy\p"
	.string "new evolution stones from the shop!\n"
	.string "These second stones will evolve some\p"
	.string "pokemon to their final stage. Only\n"
	.string "two stage pokemon will affected.\p"
	.string "For example they will work on\n"
	.string "growlite, but not charmeleon.\p"
	.string "The item shop now also stocks\n"
	.string "normal ability capsules.\p"
	.string "See you in the next area gamer.\n"
	.string "May your battles be forunate.$"

Prime1_PokeShop_event::
	faceplayer
	goto_if_unset FLAG_RANDOM_GIFTS, PokeShop_event
	goto_if_unset FLAG_NUZ_GIFT, Prime1_Nuzlocke_gift
	msgbox Nuzlocke_no_gifts_left_text, MSGBOX_DEFAULT
	waitmessage
	releaseall
	end

Prime1_Nuzlocke_gift:
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

Prime1_ReadyOrNot::
	faceplayer
	goto_if_set FLOORFLAG, Gauntlet1_Already_clear_event
	goto_if_set FLAG_NUZ_LOSE, Gauntlet1_nuzlocke_lost
	goto_if_unset FLAG_EVO_STONE_3, NewAreaGuy_demand_text_event
	buffernumberstring STR_VAR_1, ROOM_BATTLE_COUNT
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_TYPE
	switch VAR_TEMP_A
	case 1, Prime1_TextSingleBattles
	case 2, Prime1_TextDoubleBattles

Prime1_TextSingleBattles::
	msgbox Prime1_readyText1, MSGBOX_YESNO
	goto Prime1_TryBattle

Prime1_TextDoubleBattles::
	msgbox Prime1_readyText2, MSGBOX_YESNO
	goto Prime1_TryBattle

Prime1_readyText1:
	.string "This floor features {STR_VAR_1} single battles.\n"
	.string "Are you ready?$"

Prime1_readyText2:
	.string "This floor features {STR_VAR_1} double battles.\n"
	.string "Are you ready?$"

Prime1_TryBattle::
	releaseall
	switch VAR_RESULT
	case NO, MoveRelearners_EventScript_CantTeach
	case MULTI_B_PRESSED, MoveRelearners_EventScript_CantTeach
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Prime1_walk_start
	waitmovement 0
	goto Prime1_start_battles
	end

Prime1_walk_start::
	walk_down
	walk_down
	walk_left
	walk_left
	face_up
	step_end

Prime1_start_battles::
	goto Prime1_npc_walk1

Prime1_end_battles::
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


Prime1_npc_walk1::
	applymovement TRAINER1, Prime1_npc_walk1_move
	waitmovement 0
	trainerbattle_single TRAINER1ID, Route110_Text_MayDefeated, Route110_Text_MayDefeated, Prime1_npc_finish1

Prime1_npc_finish1::
	special HealPlayerParty
	applymovement TRAINER1, Prime1_npc_walk1_move_back
	waitmovement 0
	waitmessage
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_COUNT
	goto_if_eq VAR_TEMP_A, 1, Prime1_end_battles
	goto Prime1_npc_walk2
	
Prime1_npc_walk2::
	applymovement TRAINER2, Prime1_npc_walk2_move
	waitmovement 0
	trainerbattle_single TRAINER2ID, Route110_Text_MayDefeated, Route110_Text_MayDefeated, Prime1_npc_finish2

Prime1_npc_finish2::
	special HealPlayerParty
	applymovement TRAINER2, Prime1_npc_walk2_move_back
	waitmovement 0
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_COUNT
	goto_if_eq VAR_TEMP_A, 2, Prime1_end_battles
	call_if_set FLAG_HAS_DEATH, Nuzlocke_allow_withdrawl
	goto Prime1_npc_walk3

Prime1_npc_walk3::
	applymovement TRAINER3, Prime1_npc_walk3_move
	waitmovement 0
	trainerbattle_single TRAINER3ID, Route110_Text_MayDefeated, Route110_Text_MayDefeated, Prime1_npc_finish3

Prime1_npc_finish3::
	special HealPlayerParty
	applymovement TRAINER3, Prime1_npc_walk3_move_back
	waitmovement 0
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_COUNT
	goto_if_eq VAR_TEMP_A, 3, Prime1_end_battles
	call_if_set FLAG_HAS_DEATH, Nuzlocke_allow_withdrawl
	goto Prime1_npc_walk4

Prime1_npc_walk4::
	applymovement TRAINER4, Prime1_npc_walk4_move
	waitmovement 0
	trainerbattle_single TRAINER4ID, Route110_Text_MayDefeated, Route110_Text_MayDefeated, Prime1_npc_finish4

Prime1_npc_finish4::
	special HealPlayerParty
	applymovement TRAINER4, Prime1_npc_walk4_move_back
	waitmovement 0
	setorcopyVar VAR_TEMP_A, ROOM_BATTLE_COUNT
	goto_if_eq VAR_TEMP_A, 4, Prime1_end_battles
	call_if_set FLAG_HAS_DEATH, Nuzlocke_allow_withdrawl
	goto Prime1_npc_walk5

Prime1_npc_walk5:
	releaseall
	end


Prime1_npc_walk1_move::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

Prime1_npc_walk1_move_back::
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

Prime1_npc_walk2_move::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

Prime1_npc_walk2_move_back::
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_down
	step_end

Prime1_npc_walk3_move::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

Prime1_npc_walk3_move_back::
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_down
	step_end

Prime1_npc_walk4_move::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

Prime1_npc_walk4_move_back::
	walk_up
	walk_left
	walk_left
	walk_left
	walk_up
	face_down
	step_end

Prime1_Trainer1_event::
	faceplayer
	lockall
	msgbox Prime1_Trainer1_text, MSGBOX_DEFAULT
 	release
 	end

Prime1_Trainer2_event::
	faceplayer
	lockall
	msgbox Prime1_Trainer2_text, MSGBOX_DEFAULT
 	release
 	end

Prime1_Trainer3_event::
	faceplayer
	lockall
	msgbox Prime1_Trainer3_text, MSGBOX_DEFAULT
 	release
 	end

Prime1_Trainer4_event::
	faceplayer
	lockall
	msgbox Prime1_Trainer4_text, MSGBOX_DEFAULT
 	release
 	end

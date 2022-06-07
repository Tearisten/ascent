battleTest_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BattleTest_OnTransition
	.byte 0

BattleTest_OnTransition:
	setrespawn HEAL_LOCATION_FLOOR_TEST
	end

MoveRelearners_EventScript_MoveRelearner::
	lockall
	faceplayer
	applymovement 2, Common_Movement_FacePlayer
	waitmovement 0
	goto MoveRelearners_EventScript_AskTeachMove
	end

MoveRelearners_EventScript_AskTeachMove::
	checkitem ITEM_HEART_SCALE
	goto_if_eq VAR_RESULT, FALSE, MoveRelearners_EventScript_ComeBackWithHeartScale
	goto MoveRelearners_EventScript_ChooseMon
	end

MoveRelearners_EventScript_ChooseMon::
	msgbox MoveRelearners_Text_TutorWhichMon, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, MoveRelearners_EventScript_CantTeach
	goto MoveRelearners_EventScript_ChooseMove
	end

MoveRelearners_EventScript_ChooseMove::
	special TeachMoveRelearnerMove
	waitstate
	goto_if_eq VAR_0x8004, 0, MoveRelearners_EventScript_CantTeach
	removeitem ITEM_HEART_SCALE
	end

MoveRelearners_EventScript_NoMoveToTeachMon::
	msgbox MoveRelearners_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
	goto MoveRelearners_EventScript_ChooseMon
	end
 
MoveRelearners_EventScript_CantTeach::
	releaseall
	end

MoveRelearners_EventScript_ComeBackWithHeartScale::
	msgbox MoveRelearners_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
	releaseall
	end

MoveRelearners_Text_ImTheMoveTutor:
	.string "I'm the MOVE TUTOR.\p"
	.string "I know all the moves that POKéMON\n"
	.string "learn--every one of them--and I can\l"
	.string "teach POKéMON those moves.\p"
	.string "I can teach a move to a POKéMON\n"
	.string "of yours if you'd like.\p"
	.string "I'll do it for a HEART SCALE.\n"
	.string "I'm collecting those now.$"

MoveRelearners_Text_ThatsAHeartScaleWantMeToTeachMove:
	.string "Oh! That's it! That's an honest to\n"


MoveRelearners_Text_TutorWhichMon:
	.string "Which POKéMON needs remembering?\n"
	.string "1 HEART SCALE per move.$"

MoveRelearners_Text_TeachWhichMove:
	.string "Which move should I teach?$"

MoveRelearners_Text_DontHaveMoveToTeachPokemon:
	.string "Sorry…\p"
	.string "It doesn't appear as if I have any move\n"
	.string "I can teach that POKéMON.$"

MoveRelearners_Text_HandedOverHeartScale:
	.string "{PLAYER} handed over one HEART SCALE\n"
	.string "in exchange.$"

MoveRelearners_Text_ComeBackWithHeartScale:
	.string "Move Relearner costs 1 HEART SCALE$"

MoveRelearners_Text_CantTeachEgg:
	.string "Hunh? There isn't a single move that\n"
	.string "I can teach an EGG.$"

EVspreader_event::
	lock
	faceplayer
	msgbox EVspreader_text, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, MoveRelearners_EventScript_CantTeach
	setorcopyvar VAR_0x8003, VAR_0x8004
	scrollingmultichoice 3, 1, 1, 6, TRUE
	setorcopyvar VAR_0x8002, VAR_RESULT
	goto_if_eq VAR_RESULT, 0, MoveRelearners_EventScript_CantTeach
	setorcopyvar VAR_0x8005, VAR_RESULT
	scrollingmultichoice 4, 1, 1, 7, TRUE
	goto_if_eq VAR_RESULT, 0, MoveRelearners_EventScript_CantTeach
	setorcopyvar VAR_0x8006, VAR_RESULT
	setorcopyvar VAR_0x8004, VAR_0x8003
	setorcopyvar VAR_0x8005, VAR_0x8002
	special IncreaseChosenMonEVs
	goto_if_eq VAR_RESULT, 0, EVspreader_aboveMax_func
	releaseall
	end

EVspreader_text:
	.string "Which POKéMON needs it's EVs\n"
	.string "adjusted? This is free.$"

EVspreader_aboveMax_func::
	msgbox EVspreader_aboveMax_text, MSGBOX_DEFAULT
	releaseall
	end

EVspreader_aboveMax_text:
	.string "Increase failed because it\n"
	.string "puts POKéMON above 510 cap.$"

EVreset_event::
	lock
	faceplayer
	msgbox EVreset_text, MSGBOX_DEFAULT
	special ChoosePartyMon
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, MoveRelearners_EventScript_CantTeach
	waitstate
	special ResetChosenMonEVs
	releaseall
	end

EVreset_text:
	.string "Reset a POKéMON's EVs?\n"
	.string "This is free.$"


NatureChange_event::
	lock
	faceplayer
	msgbox NatureChange_text, MSGBOX_DEFAULT
	special ChoosePartyMon
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, MoveRelearners_EventScript_CantTeach
	waitstate
	setorcopyvar VAR_0x8000, VAR_0x8004
	scrollingmultichoice 5, 1, 1, 8, TRUE
	goto_if_eq VAR_RESULT, 0, MoveRelearners_EventScript_CantTeach
	setorcopyvar VAR_0x8004, VAR_0x8000
	setorcopyvar VAR_0x8005, VAR_RESULT
	special ChangePokemonNature
	releaseall
	end

NatureChange_text::
	.string "Would you like to change the\n"
	.string "nature of a POKéMON? It's free!$"

TMShop_event::
	lockall
	special CreateTMShopMenu
	waitstate
	releaseall
	end

ItemShop_event::
	lockall
	special CreatePokemartMenu
	waitstate
	releaseall
	end

PokeShop_event_multi::
	setvar VAR_TEMP_2, EXCHANGE_CORNER_HOLD_ITEM_CLERK
	special ShowBattlePointsWindow
	setvar VAR_0x8004, SCROLL_MULTI_POKESHOP
	special ShowScrollableMultichoice @turned into a pokeshop command
	special ShowFrontierExchangeCornerItemIconWindow 
	waitstate
	setorcopyvar VAR_0x8007, VAR_RESULT
	setorcopyVar VAR_0x8008, 0
	setorcopyvar VAR_0x8001, VAR_RESULT
	switch VAR_RESULT
	case MULTI_B_PRESSED, PokeShop_Deny
	msgbox PokeShop_text, MSGBOX_DEFAULT
	yesnobox 3, 8
	switch VAR_RESULT
	case NO, PokeShop_Deny
	case YES, PokeShop_TryPurchasePrize
	case MULTI_B_PRESSED, PokeShop_Deny
	end

PokeShop_event::
	scrollingmultichoice 7, 1, 1, 3, TRUE
	switch VAR_RESULT
	case MULTI_B_PRESSED, MakeShiny_Deny
	case FLAG_ALL_STARTERS, showpokeshopLC
	case FLAG_ROOM_5_CLEAR, showpokeshopGP
	case FLAG_ROOM_10_CLEAR, showpokeshopTD
	@else unsure
	goto PokeShop_experience_event

showpokeshopLC::
	goto_if_unset FLAG_ALL_STARTERS, PokeShop_experience_event
	setvar 0x8002, 0 @which pokeshop to use
	goto PokeShop_event_multi

showpokeshopGP::
	goto_if_unset FLAG_ROOM_5_CLEAR, PokeShop_experience_event
	setvar 0x8002, 1 @which pokeshop to use
	goto PokeShop_event_multi

showpokeshopTD::
	goto_if_unset FLAG_ROOM_10_CLEAR, PokeShop_experience_event
	setvar 0x8002, 2 @which pokeshop to use
	goto PokeShop_event_multi

PokeShop_text:
	.string "Are you sure you want {STR_VAR_1}?$"

PokeShop_Deny::
	special CloseBattlePointsWindow
	special CloseFrontierExchangeCornerItemIconWindow
	releaseall
	end

PokeShop_experience_text:
	.string "You must prove yourself to access\n"
	.string "this shop. Come back later.$"

PokeShop_experience_event::
	msgbox PokeShop_experience_text, MSGBOX_DEFAULT
	waitmessage
	releaseall
	end

PokeShop_TryPurchasePrize::
	specialvar VAR_TEMP_0, GetFrontierBattlePoints
	goto_if_lt VAR_TEMP_0, VAR_0x8004, PokeShop_NotEnoughBP
	givemon VAR_0x8001, 50, ITEM_NONE
	special TakeFrontierBattlePoints @needs correct var set beforehand
	special UpdateBattlePointsWindow
	playse SE_SHOP
	waitse
	special CloseFrontierExchangeCornerItemIconWindow
	special CloseBattlePointsWindow
	releaseall
	end

PokeShop_NotEnoughBP::
	msgbox PokeShop_neBP_text, MSGBOX_DEFAULT
	special CloseFrontierExchangeCornerItemIconWindow
	special CloseBattlePointsWindow
	waitmessage
	releaseall
	end

PokeShop_neBP_text:
	.string "Sorry, you don't have enough BP.$"

MakeShiny_event::
	lockall
	faceplayer
	special ShowBattlePointsWindow
	msgbox MakeShiny_text, MSGBOX_DEFAULT
	waitmessage
	special CloseBattlePointsWindow
	special ChoosePartyMon
	waitstate
	specialvar VAR_TEMP_0, GetFrontierBattlePoints
	goto_if_lt VAR_TEMP_0, 5, PokeShop_NotEnoughBP
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, MakeShiny_Deny
	special isShiny
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, MakeShinyAlready
	special ShowBattlePointsWindow
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setorcopyvar VAR_0x8007, VAR_RESULT @setname for pic
	setorcopyvar VAR_0x8008, 1 @is shiny
	special ShowFrontierExchangeCornerItemIconWindow
	special FillFrontierPokeBlock
	msgbox MakeShinyConfirm_text, MSGBOX_DEFAULT
	yesnobox 3, 8
	switch VAR_RESULT
	case NO, MakeShiny_exitmenu
	case MULTI_B_PRESSED, MakeShiny_exitmenu
	special MakeShiny
	setorcopyvar VAR_0x8004, 5 @shiny cost
	special TakeFrontierBattlePoints @needs correct var set beforehand
	special UpdateBattlePointsWindow
	playse SE_PIN
	waitse
	hidemonpic
	goto MakeShiny_exitmenu


MakeShiny_Deny::
	releaseall
	end

MakeShiny_exitmenu::
	special CloseBattlePointsWindow
	special CloseFrontierExchangeCornerItemIconWindow
	goto MakeShiny_Deny

MakeShinyAlready::
	msgbox MakeShinyAlready_text, MSGBOX_DEFAULT
	goto MakeShiny_Deny

MakeShiny_text:
	.string "Would you like to shiny a pokemon?\n"
	.string "for 5 BP? This is irreversable.$"

MakeShinyConfirm_text:
	.string "You want a shiny {STR_VAR_1}?\n"
	.string "This will cost 5BP.$"

MakeShinyAlready_text:
	.string "That poke is already shiny.$"


Battle_event_ReadyOrNot::
	buffernumberstring STR_VAR_1, ROOM_BATTLE_COUNT
	switch ROOM_BATTLE_TYPE
	case 1, Battle_event_TextSingleBattles
	case 2, Battle_event_TextDoubleBattles

Battle_event_TextSingleBattles::
	msgbox Battle_event_readyText1, MSGBOX_DEFAULT
	waitmessage
	goto Battle_event_TryBattle

Battle_event_TextDoubleBattles::
	msgbox Battle_event_readyText2, MSGBOX_DEFAULT
	goto Battle_event_TryBattle

Battle_event_readyText1:
	.string "This floor features {STR_VAR_1} single battles.\n"
	.string "Are you ready?$"

Battle_event_readyText2:
	.string "This floor features {STR_VAR_1} double battles.\n"
	.string "Are you ready?$"

Battle_event_TryBattle::
	yesnobox 3, 8
	releaseall
	switch VAR_RESULT
	case NO, MoveRelearners_EventScript_CantTeach
	case MULTI_B_PRESSED, MoveRelearners_EventScript_CantTeach
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Battle_event_walk_start
	waitmovement 0
	goto Battle_event_start_battles
	end

Battle_event_walk_start::
	walk_down
	walk_down
	walk_left
	walk_left
	face_up
	step_end

.set TRAINER1, 10
.set TRAINER1ID, TRAINER_TEST
Battle_event_start_battles::
	call Battle_event_npc_walk1
	delay 10
	releaseall
	end

.set FLOORMONEY, 500
.set FLOORBP, 2
.set FLOORFLAG, FLAG_ROOM_1_CLEAR
Battle_event_end_battles::
	lockall
	setflag FLAG_ROOM_1_CLEAR
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	delay 20
	special CloseBattlePointsWindow @won't open quickly without this for some reason
	special ShowBattlePointsWindow
	delay 50
	setvar VAR_0x8007, FLOORBP
	special GiveBattlePointsGauntlet
	special UpdateBattlePointsWindow
	playse SE_PIN
	waitse
	delay 30
	showmoneybox 15, 0
	delay 20
	addmoney FLOORMONEY
	updatemoneybox
	playse SE_PIN
	waitse
	delay 20
	hidemoneybox
	special CloseBattlePointsWindow
	delay 50
	releaseall
	end

Battle_event_npc_walk1::
	applymovement TRAINER1, Battle_event_npc_walk1_move
	waitmovement 0
	trainerbattle_single TRAINER1ID, Route110_Text_MayDefeated, Route110_Text_MayDefeated, Battle_event_npc_finish1

Battle_event_npc_finish1::
	applymovement TRAINER1, Battle_event_npc_walk1_move_back
	waitmovement 0
	goto Battle_event_end_battles

Battle_event_npc_walk1_move::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

Battle_event_npc_walk1_move_back::
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

Battle_event_npc_walk2_move::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

Battle_event_npc_walk2_move_back::
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_down
	step_end

Gauntlet1_Already_clear_event::
	msgbox Gauntlet1_Already_clear_text, MSGBOX_DEFAULT
	waitmessage
	release
	end

Gauntlet1_Already_clear_text:
	.string "You have already cleared this\n"
	.string "floor. Please move on.$"


Gauntlet1_nuzlocke_lost::
	msgbox Gauntlet1_nuzlocke_lost_text, MSGBOX_DEFAULT
	waitmessage
	release
	end

Gauntlet1_nuzlocke_lost_text:
	.string "Your nuzlocke is over.\n"
	.string "Better luck next time.$"

Nuzlocke_no_gifts_left_text:
	.string "Sorry, there are no gifts left.\n"
	.string "Try again on the next floor.$"

Nuzlocke_gift_text:
	.string "You received {STR_VAR_1}\n"
	.string "Best of luck gamer.$"

Nuzlocke_gift_text_confirm:
	.string "Are you ready to receive your\n"
	.string "nuzlocke pokemon?$"

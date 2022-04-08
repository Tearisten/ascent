battle1_MapScripts::
	.byte 0

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

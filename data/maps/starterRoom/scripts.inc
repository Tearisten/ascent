starterRoom_MapScripts::
	goto_if_set FLAG_ALL_STARTERS, StarterRoom_OnTransition
	.byte 0

StarterRoom_OnTransition::
	removeobject 5
	end

Gauntlet1_starterRoom_ProffessorBirch_event::
	faceplayer
	msgbox Gauntlet1_starterRoom_ProffessorBirch_text, MSGBOX_DEFAULT
	release
	end

Gauntlet1_starterRoom_ProffessorBirch_text:
	.string "Welcome to the Gauntlet,\n"
	.string "a challenging battle experience.\p"
	.string "Defeat all trainers on each floor\n"
	.string "to advance.\p" 
	.string "Losing resets the floor and\n"
	.string "trainers may switch out pokemon.\p"
	.string "Pokemon sets will stay the same\n"
	.string "but their lineup may change.\p"
	.string "There is no exp and items\n"
	.string "aren't lost between battles.\p"
	.string "You will receive different\n"
	.string "currency to spend in a variety\p"
	.string "of shops. Always check the shops\n"
	.string "on a new floor.\p"
	.string "This may be hard for you and\n" 
	.string "you may soft lock yourself\p"
	.string "if you make poor team building\n"
	.string "choices.\p"
	.string "Select a starter of each type to\n"
	.string "advance to the first floor.$"

Gauntlet1_starterRoom_Scientist_event::
	faceplayer
	goto_if_unset FLAG_FIRE_STARTER, Gauntlet1_starterRoom_Scientist_choosePlease
	goto_if_unset FLAG_WATER_STARTER, Gauntlet1_starterRoom_Scientist_choosePlease
	goto_if_unset FLAG_GRASS_STARTER, Gauntlet1_starterRoom_Scientist_choosePlease
	setflag FLAG_ALL_STARTERS
	msgbox Gauntlet1_starterRoom_Scientist_move_text, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 5
	waitmessage
	giveitem ITEM_ABILITY_CAPSULE, 3
	waitmessage
	applymovement 5, Gauntlet1_starterRoom_Scientist_move
	waitmovement 5
	setflag FLAG_DISABLE_BAG
	setvar VAR_0x8007, 10
	special GiveBattlePointsGauntlet @ test code for giving bp
	release
	end

Gauntlet1_starterRoom_Scientist_move::
	walk_up
	set_invisible
	walk_up
	step_end
	end

Gauntlet1_starterRoom_Scientist_choosePlease::
	msgbox Gauntlet1_starterRoom_Scientist_text, MSGBOX_DEFAULT
	release
	end

Gauntlet1_starterRoom_Scientist_text:
	.string "Please choose a starter of each\n"
	.string "type to continue.$"

Gauntlet1_starterRoom_Scientist_move_text:
	.string "Goodluck! Have 5 heartscales\n"
	.string "to access the move relearner.\p"
	.string "Don't spend them too quickly,\n"
	.string "you'll get more slowly.\p"
	.string "Also, here are three Ability\n"
	.string "Capsules to start you out.\p"
	.string "They won't be in the shop till\n"
	.string "the 3rd area.$"


Gauntlet1_starterRoom_haveThisType_event::
	msgbox Gauntlet1_starterRoom_haveThisType_text, MSGBOX_DEFAULT
	release
	end

Gauntlet1_starterRoom_haveThisType_text:
	.string "You already have a starter\n"
	.string "of this type.$"

Gauntlet1_Gauntlet1_starterRoom_noChoice::
	release
	end
	
Gauntlet1_starterRoom_FireCush_event::
	goto_if_set FLAG_FIRE_STARTER, Gauntlet1_starterRoom_haveThisType_event
	goto_if_set Nuzlocke_Mode, Gauntlet1_starterRoom_FireCush_nz_event
	scrollingmultichoice 0, 1, 1, 8, TRUE
	goto_if_eq VAR_RESULT, SPECIES_NONE, Gauntlet1_Gauntlet1_starterRoom_noChoice
	setorcopyvar VAR_0x8004, VAR_RESULT
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setorcopyvar VAR_0x8007, VAR_0x8004 @setname for pic
	setorcopyvar VAR_0x8008, 0 @is shiny
	givemon VAR_RESULT, 50, ITEM_NONE
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_FIRE_STARTER
	special ShowFrontierExchangeCornerItemIconWindow
	special FillFrontierPokeBlock
	msgbox Nuzlocke_gift_text, MSGBOX_DEFAULT
	hidemonpic
	special CloseFrontierExchangeCornerItemIconWindow
	release
	end

Gauntlet1_starterRoom_FireCush_nz_event::
	setorcopyvar VAR_0x8004, 1
	special GiveNzStarter
	setflag FLAG_SYS_POKEMON_GET	
	setflag FLAG_FIRE_STARTER
	setorcopyvar VAR_0x8004, VAR_RESULT
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setorcopyvar VAR_0x8007, VAR_0x8004 @setname for pic
	setorcopyvar VAR_0x8008, 0 @is shiny
	special ShowFrontierExchangeCornerItemIconWindow
	special FillFrontierPokeBlock
	msgbox Nuzlocke_gift_text, MSGBOX_DEFAULT
	hidemonpic
	givemon VAR_RESULT, 50, ITEM_NONE
	special CloseFrontierExchangeCornerItemIconWindow
	release
	end

Gauntlet1_starterRoom_WaterCush_event::
	goto_if_set FLAG_WATER_STARTER, Gauntlet1_starterRoom_haveThisType_event
	goto_if_set Nuzlocke_Mode, Gauntlet1_starterRoom_WaterCush_nz_event
	scrollingmultichoice 1, 1, 1, 8, TRUE
	goto_if_eq VAR_RESULT, SPECIES_NONE, Gauntlet1_Gauntlet1_starterRoom_noChoice
	setorcopyvar VAR_0x8004, VAR_RESULT
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setorcopyvar VAR_0x8007, VAR_0x8004 @setname for pic
	setorcopyvar VAR_0x8008, 0 @is shiny
	givemon VAR_RESULT, 50, ITEM_NONE
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_WATER_STARTER
	special ShowFrontierExchangeCornerItemIconWindow
	special FillFrontierPokeBlock
	msgbox Nuzlocke_gift_text, MSGBOX_DEFAULT
	hidemonpic
	special CloseFrontierExchangeCornerItemIconWindow
	release
	end

Gauntlet1_starterRoom_WaterCush_nz_event::
	setorcopyvar VAR_0x8004, 2
	special GiveNzStarter
	setflag FLAG_SYS_POKEMON_GET	
	setflag FLAG_WATER_STARTER
	setorcopyvar VAR_0x8004, VAR_RESULT
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setorcopyvar VAR_0x8007, VAR_0x8004 @setname for pic
	setorcopyvar VAR_0x8008, 0 @is shiny
	special ShowFrontierExchangeCornerItemIconWindow
	special FillFrontierPokeBlock
	msgbox Nuzlocke_gift_text, MSGBOX_DEFAULT
	hidemonpic
	givemon VAR_RESULT, 50, ITEM_NONE
	special CloseFrontierExchangeCornerItemIconWindow
	release
	end

Gauntlet1_starterRoom_GrassCush_event::
	goto_if_set FLAG_GRASS_STARTER, Gauntlet1_starterRoom_haveThisType_event 
	goto_if_set Nuzlocke_Mode, Gauntlet1_starterRoom_GrassCush_nz_event
	scrollingmultichoice 2, 1, 1, 8, TRUE
	goto_if_eq VAR_RESULT, SPECIES_NONE, Gauntlet1_Gauntlet1_starterRoom_noChoice
	setorcopyvar VAR_0x8004, VAR_RESULT
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setorcopyvar VAR_0x8007, VAR_0x8004 @setname for pic
	setorcopyvar VAR_0x8008, 0 @is shiny
	givemon VAR_RESULT, 50, ITEM_NONE
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_GRASS_STARTER
	special ShowFrontierExchangeCornerItemIconWindow
	special FillFrontierPokeBlock
	msgbox Nuzlocke_gift_text, MSGBOX_DEFAULT
	hidemonpic
	special CloseFrontierExchangeCornerItemIconWindow
	release
	end

Gauntlet1_starterRoom_GrassCush_nz_event::
	setorcopyvar VAR_0x8004, 3
	special GiveNzStarter
	setflag FLAG_SYS_POKEMON_GET	
	setflag FLAG_GRASS_STARTER
	setorcopyvar VAR_0x8004, VAR_RESULT
	bufferspeciesname STR_VAR_1, VAR_RESULT
	setorcopyvar VAR_0x8007, VAR_0x8004 @setname for pic
	setorcopyvar VAR_0x8008, 0 @is shiny
	special ShowFrontierExchangeCornerItemIconWindow
	special FillFrontierPokeBlock
	msgbox Nuzlocke_gift_text, MSGBOX_DEFAULT
	hidemonpic
	givemon VAR_RESULT, 50, ITEM_NONE
	special CloseFrontierExchangeCornerItemIconWindow
	release
	end

Gauntlet1_starterRoom_Difficulty_event::
	faceplayer
	msgbox Gauntlet1_starterRoom_WhatDifficultyText, MSGBOX_DEFAULT
	scrollingmultichoice 6, 1, 1, 3, TRUE
	waitmessage
	goto_if_eq VAR_RESULT, SPECIES_NONE, Gauntlet1_Gauntlet1_starterRoom_noChoice
	goto_if_eq VAR_RESULT, 1, Gauntlet1_starterRoom_Difficulty_easy
	goto_if_eq VAR_RESULT, 2, Gauntlet1_starterRoom_Difficulty_medium
	goto_if_eq VAR_RESULT, 3, Gauntlet1_starterRoom_Difficulty_hard


Gauntlet1_starterRoom_Difficulty_easy::
	setflag EasyDifficulty
	clearflag MedDifficulty
	clearflag  HardDifficulty
	goto Gauntlet1_Gauntlet1_starterRoom_noChoice

Gauntlet1_starterRoom_Difficulty_medium::
	clearflag EasyDifficulty
	setflag MedDifficulty
	clearflag  HardDifficulty
	goto Gauntlet1_Gauntlet1_starterRoom_noChoice

Gauntlet1_starterRoom_Difficulty_hard::
	clearflag EasyDifficulty
	clearflag MedDifficulty
	setflag  HardDifficulty
	goto Gauntlet1_Gauntlet1_starterRoom_noChoice

Gauntlet1_starterRoom_WhatDifficultyText:
	.string "What difficulty would you like?\n"
	.string "This cannot be changed later.$"

Gauntlet1_starterRoom_Nuzlocke_event::
	faceplayer
	goto_if_set Nuzlocke_Mode, Gauntlet1_starterRoom_nuzlocke_already_active
	goto_if_set FLAG_FIRE_STARTER, Gauntlet1_starterRoom_nuzlocke_too_late
	goto_if_set FLAG_GRASS_STARTER, Gauntlet1_starterRoom_nuzlocke_too_late
	goto_if_set FLAG_WATER_STARTER, Gauntlet1_starterRoom_nuzlocke_too_late
	msgbox Gauntlet1_starterRoom_NuzlockeText, MSGBOX_DEFAULT
	yesnobox 3, 8
	switch VAR_RESULT
	case NO, Gauntlet1_starterRoom_Nuzlocke_no
	case YES, Gauntlet1_starterRoom_Nuzlocke_yes
	case MULTI_B_PRESSED, Gauntlet1_Gauntlet1_starterRoom_noChoice

Gauntlet1_starterRoom_Nuzlocke_yes::
	setflag Nuzlocke_Mode
	release
	end

Gauntlet1_starterRoom_Nuzlocke_no::
	clearflag Nuzlocke_Mode
	release
	end

Gauntlet1_starterRoom_NuzlockeText:
	.string "Would you like to play in nuzlocke mode?\n"
	.string "This cannot be changed later.$"

Gauntlet1_starterRoom_nuzlocke_too_late::
	msgbox Gauntlet1_starterRoom_nuzlocke_too_late_text, MSGBOX_DEFAULT
	releaseall
	end

Gauntlet1_starterRoom_nuzlocke_too_late_text:
	.string "You may not enable nuzlocke mode\n"
	.string "after selecting any starters.$"

Gauntlet1_starterRoom_nuzlocke_already_active::
	msgbox Gauntlet1_starterRoom_nuzlocke_already_active_text, MSGBOX_DEFAULT
	releaseall
	end

Gauntlet1_starterRoom_nuzlocke_already_active_text:
	.string "You have already enabled nuzlocke mode.$"
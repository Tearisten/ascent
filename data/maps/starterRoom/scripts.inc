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
	.string "This intended to be hard and\n" 
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
	applymovement 5, Gauntlet1_starterRoom_Scientist_move
	waitmovement 5
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
	.string "you'll get more slowly.$"

Gauntlet1_starterRoom_haveThisType_event::
	msgbox Gauntlet1_starterRoom_haveThisType_text, MSGBOX_DEFAULT
	release
	end

Gauntlet1_starterRoom_haveThisType_text:
	.string "You already chose a starter\n"
	.string "of this type.$"

Gauntlet1_Gauntlet1_starterRoom_noChoice::
	release
	end
	
Gauntlet1_starterRoom_FireCush_event::
	goto_if_set FLAG_FIRE_STARTER, Gauntlet1_starterRoom_haveThisType_event 
	scrollingmultichoice 0, 1, 1, 8, TRUE
	goto_if_eq VAR_RESULT, SPECIES_NONE, Gauntlet1_Gauntlet1_starterRoom_noChoice
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_FIRE_STARTER
	givemon VAR_RESULT, 50, ITEM_NONE
	release
	end

Gauntlet1_starterRoom_WaterCush_event::
	goto_if_set FLAG_WATER_STARTER, Gauntlet1_starterRoom_haveThisType_event 
	scrollingmultichoice 1, 1, 1, 8, TRUE
	goto_if_eq VAR_RESULT, SPECIES_NONE, Gauntlet1_Gauntlet1_starterRoom_noChoice
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_WATER_STARTER
	givemon VAR_RESULT, 50, ITEM_NONE
	release
	end

Gauntlet1_starterRoom_GrassCush_event::
	goto_if_set FLAG_GRASS_STARTER, Gauntlet1_starterRoom_haveThisType_event 
	scrollingmultichoice 2, 1, 1, 8, TRUE
	goto_if_eq VAR_RESULT, SPECIES_NONE, Gauntlet1_Gauntlet1_starterRoom_noChoice
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_GRASS_STARTER
	givemon VAR_RESULT, 50, ITEM_NONE
	release
	end

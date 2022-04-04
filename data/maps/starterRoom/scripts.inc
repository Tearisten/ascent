starterRoom_MapScripts::
	.byte 0

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
	msgbox Gauntlet1_starterRoom_Scientist_text, MSGBOX_DEFAULT
	release
	end

Gauntlet1_starterRoom_Scientist_text:
	.string "Please choose a starter of each\n"
	.string "type to continue.$"

LittleCup3_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LittleCup3_OnTransition
	.byte 0

LittleCup3_OnTransition:
	setrespawn HEAL_LOCATION_FLOOR_LITTLE_CUP_3
	end

LittleCup2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LittleCup2_OnTransition
	.byte 0

LittleCup2_OnTransition:
	setrespawn HEAL_LOCATION_FLOOR_LITTLE_CUP_2
	end

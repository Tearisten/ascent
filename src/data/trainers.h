const struct Trainer gTrainers[] = {
    [TRAINER_NONE] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = 0,
        .party = {.TrainerMon = NULL},
    },

    [TRAINER_TEST] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Tester"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = {.TrainerMon = sParty_Tester},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_Tester)
    },
    [TRAINER_LC_1_INTRO] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Timmy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 3,
        .party = {.TrainerMon = sParty_LC_1_Intro},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_LC_1_Intro)
    },
    
    [TRAINER_LC_1_ELITE] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Jimmy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 3,
        .party = {.TrainerMon = sParty_LC_1_Elite},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_LC_1_Elite)
    },
};

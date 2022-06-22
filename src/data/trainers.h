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
        .partySize = 2,
        .party = {.TrainerMon = sParty_Tester},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_Tester)
    },

    // Little Cup 1
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

    // Little Cup 2
    [TRAINER_LC_2_INTRO] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Robby"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 4,
        .party = {.TrainerMon = sParty_LC_2_Intro},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_LC_2_Intro)
    },
    [TRAINER_LC_2_ELITE] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("Brandon"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN | AI_FLAG_WILL_SUICIDE,
        .partySize = 4,
        .party = {.TrainerMon = sParty_LC_2_Elite},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_LC_2_Elite)
    },

    // Little Cup 3
        [TRAINER_LC_3_INTRO] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Ben"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 5,
        .party = {.TrainerMon = sParty_LC_3_Intro},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_LC_3_Intro)
    },
    [TRAINER_LC_3_ELITE] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("Andy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 5,
        .party = {.TrainerMon = sParty_LC_3_Elite},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_LC_3_Elite)
    },
    [TRAINER_LC_4_INTRO] =
    {
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Devon"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = {.TrainerMon = sParty_LC_4_Intro},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_LC_4_Intro)
    },
    [TRAINER_LC_4_ELITE] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Ian"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN | AI_FLAG_WILL_SUICIDE,
        .partySize = 6,
        .party = {.TrainerMon = sParty_LC_4_Elite},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_LC_4_Elite)
    },
    [TRAINER_LC_5_BOSS] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_SIDNEY,
        .trainerName = _("Josh"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = {.TrainerMon = sParty_LC_5_Boss},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_LC_5_Boss)
    },
    [TRAINER_GP_1_INTRO] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Katie"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = {.TrainerMon = sParty_GP_1_Intro},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_GP_1_Intro)
    },
    [TRAINER_GP_1_ELITE] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("Barbra"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = {.TrainerMon = sParty_GP_1_Elite},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_GP_1_Elite)
    },
    [TRAINER_GP_2_INTRO] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Troy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = {.TrainerMon = sParty_GP_2_Intro},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_GP_2_Intro)
    },
    [TRAINER_GP_2_MID] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Chris"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = {.TrainerMon = sParty_GP_2_Mid},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_GP_2_Mid)
    },
    [TRAINER_GP_2_ELITE] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("Cameron"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = {.TrainerMon = sParty_GP_2_Elite},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_GP_2_Elite)
    },
    [TRAINER_GP_3_INTRO] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("Gary"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = {.TrainerMon = sParty_GP_3_Intro},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_GP_3_Intro)
    },
    [TRAINER_GP_3_MID] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Keith"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = {.TrainerMon = sParty_GP_3_Mid},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_GP_3_Mid)
    },
    [TRAINER_GP_3_ELITE] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Taylor"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = {.TrainerMon = sParty_GP_3_Elite},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_GP_3_Elite)
    },
    [TRAINER_GP_4_INTRO] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Roger"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = {.TrainerMon = sParty_GP_4_Intro},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_GP_4_Intro)
    },
    [TRAINER_GP_4_ELITE] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("Margret"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = {.TrainerMon = sParty_GP_4_Elite},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_GP_4_Elite)
    },
    [TRAINER_GP_5_BOSS] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_PHOEBE,
        .trainerName = _("Audrey"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = {.TrainerMon = sParty_GP_5_Boss},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_GP_5_Boss)
    },
    [TRAINER_TD_1_INTRO] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Kyle"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = {.TrainerMon = sParty_TD_1_Intro},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_TD_1_Intro)
    },
    [TRAINER_TD_1_MID] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Bob"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = {.TrainerMon = sParty_TD_1_Mid},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_TD_1_Mid)
    },
    [TRAINER_TD_1_ELITE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Amy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = {.TrainerMon = sParty_TD_1_Elite},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_TD_1_Elite)
    },
    [TRAINER_TD_2_INTRO] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Patrick"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = {.TrainerMon = sParty_TD_2_Intro},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_TD_2_Intro)
    },
    [TRAINER_TD_2_MID] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = {.TrainerMon = sParty_TD_2_Mid},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_TD_2_Mid)
    },
    [TRAINER_TD_2_ELITE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Hanna"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = {.TrainerMon = sParty_TD_2_Elite},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_TD_2_Elite)
    },
    [TRAINER_TD_3_INTRO] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Hanna"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = {.TrainerMon = sParty_TD_3_Intro},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_TD_3_Intro)
    },
    [TRAINER_TD_3_EARLY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Hanna"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = {.TrainerMon = sParty_TD_3_Early},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_TD_3_Early)
    },
    [TRAINER_TD_3_LATE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Hanna"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = {.TrainerMon = sParty_TD_3_Late},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_TD_3_Late)
    },
    [TRAINER_TD_3_ELITE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Hanna"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_HP_AWARE | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = {.TrainerMon = sParty_TD_3_Elite},
        .totalMonCountWithRotates = ARRAY_COUNT(sParty_TD_3_Elite)
    },
};

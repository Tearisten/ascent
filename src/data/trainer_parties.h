static const struct TrainerMon sParty_Tester[] = {
    {
    .species = SPECIES_CHARMANDER,
    .heldItem = ITEM_DESTINY_KNOT,
    .ability = ABILITY_SLOT_1,
    .evs = EV_SPREAD_NONE,
    .nature = NATURE_SERIOUS,
    .iv = MAX_PER_STAT_IVS,
    .ball = ITEM_MASTER_BALL,
    .slot = 0,
    .moves = {MOVE_SEISMIC_TOSS, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    //.shiny = TRUE
    },
    {
    .species = SPECIES_CHARMANDER,
    .heldItem = ITEM_DESTINY_KNOT,
    .ability = ABILITY_SLOT_1,
    .evs = EV_SPREAD_NONE,
    .nature = NATURE_SERIOUS,
    .iv = MAX_PER_STAT_IVS,
    .ball = ITEM_MASTER_BALL,
    .slot = 1,
    .moves = {MOVE_SEISMIC_TOSS, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    //.shiny = TRUE
    }
};

static const struct TrainerMon sParty_LC_1_Intro[] = {
    {
        .species = SPECIES_RATTATA,
        .heldItem = ITEM_ORAN_BERRY,
        .ability = ABILITY_SLOT_2, // guts
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_POKE_BALL,
        .slot = 0,
        .moves = {MOVE_QUICK_ATTACK, MOVE_BITE, MOVE_PURSUIT, MOVE_TAIL_WHIP},
    },
    {
        .species = SPECIES_BIDOOF,
        .heldItem = ITEM_ORAN_BERRY,
        .ability = ABILITY_SLOT_1, // simple
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_POKE_BALL,
        .slot = 0,
        .moves = {MOVE_DEFENSE_CURL, MOVE_ROLLOUT, MOVE_HEADBUTT, MOVE_YAWN},
    },
    {
        .species = SPECIES_GLAMEOW,
        .heldItem = ITEM_ORAN_BERRY,
        .ability = ABILITY_SLOT_1, // limber
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_GREAT_BALL,
        .slot = 1,
        .moves = {MOVE_FAKE_OUT, MOVE_THUNDER_WAVE, MOVE_CHARM, MOVE_FURY_SWIPES},
    },
    {
        .species = SPECIES_MEOWTH,
        .heldItem = ITEM_ORAN_BERRY,
        .ability = ABILITY_SLOT_2, // technician
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_GREAT_BALL,
        .slot = 1,
        .moves = {MOVE_FURY_SWIPES, MOVE_TAUNT, MOVE_SCREECH, MOVE_SCRATCH},
    },
    {
        .species = SPECIES_WHISMUR,
        .heldItem = ITEM_CHESTO_BERRY,
        .ability = ABILITY_SLOT_1, // quick feet
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_ULTRA_BALL,
        .slot = 2,
        .moves = {MOVE_ECHOED_VOICE, MOVE_SNORE, MOVE_REST, MOVE_SLEEP_TALK},
    },
};

static const struct TrainerMon sParty_LC_1_Elite[] = {
    {
        .species = SPECIES_TAILLOW,
        .heldItem = ITEM_FLAME_ORB,
        .ability = ABILITY_SLOT_1, // guts
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_NEST_BALL,
        .slot = 0,
        .moves = {MOVE_QUICK_ATTACK, MOVE_PECK, MOVE_PURSUIT, MOVE_FOCUS_ENERGY},
    },
    {
        .species = SPECIES_ROOKIDEE,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SLOT_2, // unnerve
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_NEST_BALL,
        .slot = 0,
        .moves = {MOVE_POWER_TRIP, MOVE_HONE_CLAWS, MOVE_SCARY_FACE, MOVE_PECK},
    },
    {
        .species = SPECIES_KRICKETOT,
        .heldItem = ITEM_ORAN_BERRY,
        .ability = ABILITY_SLOT_2, // swarm
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_SASSY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_NET_BALL,
        .slot = 1,
        .moves = {MOVE_FURY_CUTTER, MOVE_BIDE, MOVE_SCREECH, MOVE_STRUGGLE_BUG},
    },
    {
        .species = SPECIES_MAREEP,
        .heldItem = ITEM_ORAN_BERRY,
        .ability = ABILITY_SLOT_1, // static
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_ULTRA_BALL,
        .slot = 1,
        .moves = {MOVE_CONFUSE_RAY, MOVE_COTTON_SPORE, MOVE_POWER_GEM, MOVE_SHOCK_WAVE},
    },
    {
        .species = SPECIES_BARBOACH,
        .heldItem = ITEM_LUM_BERRY,
        .ability = ABILITY_SLOT_1, // water compact
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_ULTRA_BALL,
        .slot = 2,
        .moves = {MOVE_BULLDOZE, MOVE_AQUA_JET, MOVE_ROCK_TOMB, MOVE_AMNESIA},
    },
};


// seems a bit rough for fire types
static const struct TrainerMon sParty_LC_2_Intro[] = {
    {
        .species = SPECIES_ZIGZAGOON_GALARIAN,
        .heldItem = ITEM_ROCKY_HELMET,
        .ability = ABILITY_SLOT_1, // filter
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_PREMIER_BALL,
        .slot = 0,
        .moves = {MOVE_HELPING_HAND, MOVE_SNARL, MOVE_FOLLOW_ME, MOVE_HEADBUTT},
    },
    {
        .species = SPECIES_GASTLY,
        .heldItem = ITEM_ORAN_BERRY,
        .ability = ABILITY_SLOT_1, // levitate
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CALM,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DUSK_BALL,
        .slot = 1,
        .moves = {MOVE_SLUDGE, MOVE_CONFUSE_RAY, MOVE_NIGHT_SHADE, MOVE_HYPNOSIS},
    },
    {
        .species = SPECIES_SLUGMA,
        .heldItem = ITEM_LUM_BERRY,
        .ability = ABILITY_SLOT_2, // flame body
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_CHERISH_BALL,
        .slot = 1,
        .moves = {MOVE_YAWN, MOVE_INCINERATE, MOVE_ANCIENT_POWER, MOVE_RECOVER},
    },
    {
        .species = SPECIES_SWINUB,
        .heldItem = ITEM_ICICLE_PLATE,
        .ability = ABILITY_SLOT_1, // moxie
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LOVE_BALL,
        .slot = 2,
        .moves = {MOVE_ICE_SHARD, MOVE_BULLDOZE, MOVE_DIG, MOVE_CURSE},
    },
    {
        .species = SPECIES_WINGULL,
        .heldItem = ITEM_WHITE_HERB,
        .ability = ABILITY_SLOT_1, // cloud 9
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_GREAT_BALL,
        .slot = 2,
        .moves = {MOVE_WATER_GUN, MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_ROOST},
    },
    {
        .species = SPECIES_SURSKIT,
        .heldItem = ITEM_LUM_BERRY,
        .ability = ABILITY_SLOT_1, // intimidate
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_NET_BALL,
        .slot = 3,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_QUICK_ATTACK, MOVE_BUG_BITE, MOVE_PROTECT},
    },
    {
        .species = SPECIES_LITWICK,
        .heldItem = ITEM_FLAME_PLATE,
        .ability = ABILITY_SLOT_1, // flash fire
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DUSK_BALL,
        .slot = 3,
        .moves = {MOVE_INCINERATE, MOVE_WILL_O_WISP, MOVE_HEX, MOVE_PAIN_SPLIT},
    },
};


static const struct TrainerMon sParty_LC_2_Elite[] = {
    {
        .species = SPECIES_PARAS,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_SLOT_2, // compound eyes
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CALM,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_NEST_BALL,
        .slot = 0,
        .moves = {MOVE_RAGE_POWDER, MOVE_POISON_POWDER, MOVE_STUN_SPORE, MOVE_BUG_BUZZ},
    },
    {
        .species = SPECIES_BAGON,
        .heldItem = ITEM_DRACO_PLATE,
        .ability = ABILITY_SLOT_2, // opression
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_PREMIER_BALL,
        .slot = 1,
        .moves = {MOVE_BREAKING_SWIPE, MOVE_DRAGON_RAGE, MOVE_RAGE, MOVE_BULK_UP},
    },
    {
        .species = SPECIES_FERROSEED,
        .heldItem = ITEM_LUM_BERRY,
        .ability = ABILITY_SLOT_1, // iron barbs
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_REPEAT_BALL,
        .slot = 2,
        .moves = {MOVE_SELF_DESTRUCT, MOVE_INGRAIN, MOVE_IRON_DEFENSE, MOVE_VINE_WHIP},
    },
    {
        .species = SPECIES_FLABEBE,
        .heldItem = ITEM_WISE_GLASSES,
        .ability = ABILITY_SLOT_1, // queenly majesty
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_CALM,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FRIEND_BALL,
        .slot = 2,
        .moves = {MOVE_FAIRY_WIND, MOVE_MAGICAL_LEAF, MOVE_AROMATHERAPY, MOVE_PROTECT},
    },
    {
        .species = SPECIES_GOTHITA,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SLOT_2, // competitive
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LOVE_BALL,
        .slot = 3,
        .moves = {MOVE_CONFUSION, MOVE_TICKLE, MOVE_FAKE_TEARS, MOVE_FLATTER},
    },
    {
        .species = SPECIES_ROCKRUFF,
        .heldItem = ITEM_MUSCLE_BAND,
        .ability = ABILITY_SLOT_1, // no guard
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LUXURY_BALL,
        .slot = 3,
        .moves = {MOVE_ACCELEROCK, MOVE_ROCK_TOMB, MOVE_ROAR, MOVE_BITE},
    },
    
};

static const struct TrainerMon sParty_LC_3_Intro[] = {
    {
        .species = SPECIES_SPHEAL,
        .heldItem = ITEM_METRONOME,
        .ability = ABILITY_SLOT_2, // ice body
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_SASSY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_BEAST_BALL,
        .slot = 0,
        .moves = {MOVE_DEFENSE_CURL, MOVE_ICE_BALL, MOVE_ROLLOUT, MOVE_HAIL},
    },
    {
        .species = SPECIES_TRAPINCH,
        .heldItem = ITEM_LUM_BERRY,
        .ability = ABILITY_SLOT_1, // hyper cutter
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_RELAXED,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_SPORT_BALL,
        .slot = 0,
        .moves = {MOVE_BULLDOZE, MOVE_SAND_TOMB, MOVE_BITE, MOVE_SANDSTORM},
    },
    {
        .species = SPECIES_BALTOY,
        .heldItem = ITEM_WISE_GLASSES,
        .ability = ABILITY_SLOT_1, // levitate
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DUSK_BALL,
        .slot = 1,
        .moves = {MOVE_CONFUSION, MOVE_RAPID_SPIN, MOVE_ANCIENT_POWER, MOVE_MUD_BOMB},
    },
    {
        .species = SPECIES_VANILLITE,
        .heldItem = ITEM_WISE_GLASSES,
        .ability = ABILITY_SLOT_1, // ice body
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_CHERISH_BALL,
        .slot = 1,
        .moves = {MOVE_ICY_WIND, MOVE_TAUNT, MOVE_ACID_ARMOR, MOVE_FREEZE_DRY},
    },
    {
        .species = SPECIES_KLINK,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_HIDDEN, // clear body
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_BOLD,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_PREMIER_BALL,
        .slot = 2,
        .moves = {MOVE_VISE_GRIP, MOVE_THUNDER_SHOCK, MOVE_GEAR_GRIND, MOVE_CHARGE},
    },
    {
        .species = SPECIES_SHELLDER,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_HIDDEN, // overcoat
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DIVE_BALL,
        .slot = 2,
        .moves = {MOVE_CLAMP, MOVE_ICE_SHARD, MOVE_WITHDRAW, MOVE_PROTECT},
    },
    {
        .species = SPECIES_SWABLU,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_SLOT_1, // overcoat
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_TIMER_BALL,
        .slot = 3,
        .moves = {MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DISARMING_VOICE, MOVE_ECHOED_VOICE},
    },
    {
        .species = SPECIES_JANGMO_O,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_HIDDEN, // overcoat
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LEVEL_BALL,
        .slot = 4,
        .moves = {MOVE_DRAGON_TAIL, MOVE_SCARY_FACE, MOVE_MACH_PUNCH, MOVE_LEER},
    },
};

// maybe give more "crabs lol"
static const struct TrainerMon sParty_LC_3_Elite[] = {
    {
        .species = SPECIES_JOLTIK,
        .heldItem = ITEM_ZAP_PLATE,
        .ability = ABILITY_HIDDEN, // swarm
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_ULTRA_BALL,
        .slot = 0,
        .moves = {MOVE_ABSORB, MOVE_THUNDER_WAVE, MOVE_ELECTROWEB, MOVE_BUG_BITE},
    },
    {
        .species = SPECIES_NIDORAN_M,
        .heldItem = ITEM_BLACK_SLUDGE,
        .ability = ABILITY_HIDDEN, // hustle
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_REPEAT_BALL,
        .slot = 1,
        .moves = {MOVE_BITE, MOVE_DOUBLE_KICK, MOVE_MUD_SHOT, MOVE_POISON_FANG},
    },
    {
        .species = SPECIES_NIDORAN_F,
        .heldItem = ITEM_BLACK_SLUDGE,
        .ability = ABILITY_SLOT_1, // poison point
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_POKE_BALL,
        .slot = 1,
        .moves = {MOVE_BITE, MOVE_DOUBLE_KICK, MOVE_MUD_SHOT, MOVE_TOXIC},
    },
    {
        .species = SPECIES_SPINARAK,
        .heldItem = ITEM_LUM_BERRY,
        .ability = ABILITY_HIDDEN, // vampire
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FRIEND_BALL,
        .slot = 2,
        .moves = {MOVE_NIGHT_SHADE, MOVE_SHADOW_SNEAK, MOVE_PIN_MISSILE, MOVE_POISON_FANG},
    },
    {
        .species = SPECIES_COMBEE,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_HIDDEN, // hustle
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_NET_BALL,
        .slot = 2,
        .moves = {MOVE_GUST, MOVE_CONFUSE_RAY, MOVE_BUG_BUZZ, MOVE_HEAL_ORDER},
    },
    {
        .species = SPECIES_STEENEE,
        .heldItem = ITEM_MUSCLE_BAND,
        .ability = ABILITY_SLOT_2, // queenly majesty
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_SAFARI_BALL,
        .slot = 3,
        .moves = {MOVE_RAZOR_LEAF, MOVE_RAPID_SPIN, MOVE_AROMATHERAPY, MOVE_PLAY_NICE},
    },
    {
        .species = SPECIES_SEWADDLE,
        .heldItem = ITEM_MUSCLE_BAND,
        .ability = ABILITY_SLOT_1, // swarm
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LURE_BALL,
        .slot = 3,
        .moves = {MOVE_STRING_SHOT, MOVE_BUG_BITE, MOVE_QUICK_ATTACK, MOVE_RAZOR_LEAF},
    },
    {
        .species = SPECIES_CLAUNCHER,
        .heldItem = ITEM_SHELL_BELL,
        .ability = ABILITY_SLOT_1, // torrent
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DIVE_BALL,
        .slot = 4,
        .moves = {MOVE_WATER_GUN, MOVE_VISE_GRIP, MOVE_FLAIL, MOVE_AQUA_JET},
    },    
    {
        .species = SPECIES_DWEBBLE,
        .heldItem = ITEM_SHELL_BELL,
        .ability = ABILITY_SLOT_1, // sturdy
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAVY_BALL,
        .slot = 4,
        .moves = {MOVE_FURY_CUTTER, MOVE_ROCK_TOMB, MOVE_WITHDRAW, MOVE_SLASH},
    },
};

static const struct TrainerMon sParty_LC_4_Intro[] = {
    {
        .species = SPECIES_DODUO,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_HIDDEN, // tangled feet
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_ULTRA_BALL,
        .slot = 0,
        .moves = {MOVE_PLUCK, MOVE_QUICK_ATTACK, MOVE_TRI_ATTACK, MOVE_PURSUIT},
    },
    {
        .species = SPECIES_FLETCHLING,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SLOT_1, // big pecks
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_CHERISH_BALL,
        .slot = 0,
        .moves = {MOVE_DUAL_WINGBEAT, MOVE_FLAME_CHARGE, MOVE_FLAIL, MOVE_ROOST},
    },
    {
        .species = SPECIES_CRANIDOS,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SLOT_1, // clutch
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAVY_BALL,
        .slot = 1,
        .moves = {MOVE_BULLDOZE, MOVE_FLAME_CHARGE, MOVE_FLAIL, MOVE_ACCELEROCK},
    },
    {
        .species = SPECIES_SHIELDON,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_SLOT_2, // power spot
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAVY_BALL,
        .slot = 1,
        .moves = {MOVE_IRON_DEFENSE, MOVE_BULLDOZE, MOVE_TAKE_DOWN, MOVE_PROTECT},
    },
    {
        .species = SPECIES_LARVITAR,
        .heldItem = ITEM_SHELL_BELL,
        .ability = ABILITY_SLOT_2, // no guard
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_SAFARI_BALL,
        .slot = 2,
        .moves = {MOVE_ROCK_SLIDE, MOVE_BULLDOZE, MOVE_TAKE_DOWN, MOVE_PROTECT},
    },
    {
        .species = SPECIES_MAGNEMITE,
        .heldItem = ITEM_WEIGHTED_BOOTS,
        .ability = ABILITY_SLOT_1, // sturdy
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LEVEL_BALL,
        .slot = 3,
        .moves = {MOVE_HEAL_PULSE, MOVE_CONFUSE_RAY, MOVE_DISCHARGE, MOVE_SAFEGUARD},
    },
    {
        .species = SPECIES_FRILLISH,
        .heldItem = ITEM_LUM_BERRY,
        .ability = ABILITY_SLOT_1, // battery
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DIVE_BALL,
        .slot = 3,
        .moves = {MOVE_NIGHT_SHADE, MOVE_RECOVER, MOVE_OMINOUS_WIND, MOVE_WATER_PULSE},
    },
    {
        .species = SPECIES_DROWZEE,
        .heldItem = ITEM_PLATE_MAIL,
        .ability = ABILITY_SLOT_1, // brilliant
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CALM,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LOVE_BALL,
        .slot = 4,
        .moves = {MOVE_FAKE_OUT, MOVE_HYPNOSIS, MOVE_CONFUSION, MOVE_PSYSHOCK},
    },    
    {
        .species = SPECIES_SPOINK,
        .heldItem = ITEM_PLATE_MAIL,
        .ability = ABILITY_SLOT_2, // prankster
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CALM,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LOVE_BALL,
        .slot = 4,
        .moves = {MOVE_CONFUSION, MOVE_CONFUSE_RAY, MOVE_FOUL_PLAY, MOVE_HEAL_PULSE},
    },
    {
        .species = SPECIES_DEINO,
        .heldItem = ITEM_TRIFORCE,
        .ability = ABILITY_SLOT_2, // hustle
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DUSK_BALL,
        .slot = 5,
        .moves = {MOVE_HYPER_VOICE, MOVE_DRAGON_BREATH, MOVE_DRAGON_RAGE, MOVE_PROTECT},
    },
};

static const struct TrainerMon sParty_LC_4_Elite[] = { // trick room doubles team
    {
        .species = SPECIES_SLOWPOKE,
        .heldItem = ITEM_GRAVITY_WELL,
        .ability = ABILITY_HIDDEN, // twisted mind
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CALM,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAL_BALL,
        .slot = 0,
        .moves = {MOVE_YAWN, MOVE_CONFUSION, MOVE_WATER_PULSE, MOVE_SLACK_OFF},
    },
    {
        .species = SPECIES_MAKUHITA,
        .heldItem = ITEM_BLACK_BELT,
        .ability = ABILITY_SLOT_1, // thick fat
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAL_BALL,
        .slot = 1,
        .moves = {MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_FORCE_PALM, MOVE_SEISMIC_TOSS},
    },
    {
        .species = SPECIES_SNUBBULL,
        .heldItem = ITEM_LUM_BERRY,
        .ability = ABILITY_SLOT_1, // intimidate
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAL_BALL,
        .slot = 1,
        .moves = {MOVE_ICE_FANG, MOVE_FIRE_FANG, MOVE_THUNDER_FANG, MOVE_BITE},
    },
    {
        .species = SPECIES_KOFFING,
        .heldItem = ITEM_BLACK_SLUDGE,
        .ability = ABILITY_SLOT_1, // levitate
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_RELAXED,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DREAM_BALL,
        .slot = 2,
        .moves = {MOVE_DESTINY_BOND, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_PROTECT},
    },
    {
        .species = SPECIES_EKANS,
        .heldItem = ITEM_BLACK_SLUDGE,
        .ability = ABILITY_SLOT_1, // vampire
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAL_BALL,
        .slot = 2,
        .moves = {MOVE_U_TURN, MOVE_BITE, MOVE_ICE_FANG, MOVE_POISON_FANG},
    },
    {
        .species = SPECIES_DARUMAKA,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SLOT_2, // gorilla tactics
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_POKE_BALL,
        .slot = 3,
        .moves = {MOVE_HEADBUTT, MOVE_ROLLOUT, MOVE_FIRE_FANG, MOVE_RAGE},
    },
    {
        .species = SPECIES_DARUMAKA_GALARIAN,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SLOT_1, // gorilla tactics
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_GREAT_BALL,
        .slot = 3,
        .moves = {MOVE_ROLLOUT, MOVE_HEADBUTT, MOVE_ICE_FANG, MOVE_RAGE},
    },
    {
        .species = SPECIES_TOGEPI,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SLOT_2, // oprression
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_BOLD,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_GREAT_BALL,
        .slot = 4,
        .moves = {MOVE_DRAINING_KISS, MOVE_YAWN, MOVE_ENCORE, MOVE_HEAL_BELL},
    },
    {
        .species = SPECIES_CLEFAIRY,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SLOT_1, // enchanting
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CALM,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_GREAT_BALL,
        .slot = 4,
        .moves = {MOVE_DISARMING_VOICE, MOVE_HELPING_HAND, MOVE_MOONLIGHT, MOVE_HEAL_BELL},
    },
    {
        .species = SPECIES_HONEDGE,
        .heldItem = ITEM_HOURGLASS,
        .ability = ABILITY_SLOT_2, // levitate
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAVY_BALL,
        .slot = 5,
        .moves = {MOVE_FURY_CUTTER, MOVE_METAL_CLAW, MOVE_SHADOW_SNEAK, MOVE_AERIAL_ACE},
    },
};

static const struct TrainerMon sParty_LC_5_Boss[] = {
    {
        .species = SPECIES_CHIMCHAR,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SLOT_1, // limber
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_POKE_BALL,
        .slot = 0,
        .moves = {MOVE_STEALTH_ROCK, MOVE_FAKE_OUT, MOVE_MACH_PUNCH, MOVE_FLAME_WHEEL},
    },
    {
        .species = SPECIES_MAREANIE,
        .heldItem = ITEM_BLACK_SLUDGE,
        .ability = ABILITY_SLOT_1, // merciless
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CALM,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DREAM_BALL,
        .slot = 0,
        .moves = {MOVE_SPIKES, MOVE_TOXIC_SPIKES, MOVE_VENOSHOCK, MOVE_TOXIC},
    },
    {
        .species = SPECIES_PINECO,
        .heldItem = ITEM_ROCKY_HELMET,
        .ability = ABILITY_HIDDEN, // filter
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_SAFARI_BALL,
        .slot = 0,
        .moves = {MOVE_STICKY_WEB, MOVE_RAPID_SPIN, MOVE_SELF_DESTRUCT, MOVE_BUG_BITE},
    },
    {
        .species = SPECIES_FROAKIE,
        .heldItem = ITEM_TRIFORCE,
        .ability = ABILITY_HIDDEN, // protean
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LURE_BALL,
        .slot = 1,
        .moves = {MOVE_SILVER_WIND, MOVE_SUBSTITUTE, MOVE_BUBBLE_BEAM, MOVE_ROCK_TOMB},
    },    
    {
        .species = SPECIES_GROOKEY,
        .heldItem = ITEM_TOXIC_ORB,
        .ability = ABILITY_SLOT_1, // guts
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FRIEND_BALL,
        .slot = 1,
        .moves = {MOVE_FAKE_OUT, MOVE_GRASSY_GLIDE, MOVE_GRASSY_TERRAIN, MOVE_U_TURN},
    },
    {
        .species = SPECIES_ABRA,
        .heldItem = ITEM_WISE_GLASSES,
        .ability = ABILITY_SLOT_2, // magic guard
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAL_BALL,
        .slot = 2,
        .moves = {MOVE_CONFUSION, MOVE_CALM_MIND, MOVE_SHOCK_WAVE, MOVE_AURORA_BEAM},
    },

    {
        .species = SPECIES_SHELLOS,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_SLOT_2, // storm drain
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CALM,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_SAFARI_BALL,
        .slot = 2,
        .moves = {MOVE_MUD_BOMB, MOVE_BODY_SLAM, MOVE_RECOVER, MOVE_WATER_PULSE},
    },
    {
        .species = SPECIES_ANORITH,
        .heldItem = ITEM_SHELL_BELL,
        .ability = ABILITY_SLOT_2, // poison touch
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_SAFARI_BALL,
        .slot = 3,
        .moves = {MOVE_BUG_BITE, MOVE_ROCK_TOMB, MOVE_FURY_CUTTER, MOVE_HONE_CLAWS},
    },
    {
        .species = SPECIES_PHANPY,
        .heldItem = ITEM_ROCKY_HELMET,
        .ability = ABILITY_SLOT_2, // defiant
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_MOON_BALL,
        .slot = 3,
        .moves = {MOVE_STICKY_WEB, MOVE_RAPID_SPIN, MOVE_SELF_DESTRUCT, MOVE_BUG_BITE},
    },
    {
        .species = SPECIES_PANSAGE,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SLOT_1, // gluttony
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_GREAT_BALL,
        .slot = 4,
        .moves = {MOVE_RAZOR_LEAF, MOVE_TAUNT, MOVE_RECYCLE, MOVE_SLASH},
    },
        {
        .species = SPECIES_PANSEAR,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SLOT_1, // gluttony
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_GREAT_BALL,
        .slot = 4,
        .moves = {MOVE_INCINERATE, MOVE_TAUNT, MOVE_RECYCLE, MOVE_SLASH},
    },
        {
        .species = SPECIES_PANPOUR,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SLOT_1, // gluttony
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_GREAT_BALL,
        .slot = 4,
        .moves = {MOVE_WATER_PULSE, MOVE_TAUNT, MOVE_RECYCLE, MOVE_SLASH},
    },    
    {
        .species = SPECIES_PIKACHU,
        .heldItem = ITEM_ZAP_PLATE,
        .ability = ABILITY_SLOT_2, // static shock
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_PARK_BALL,
        .slot = 5,
        .moves = {MOVE_DISCHARGE, MOVE_VOLT_SWITCH, MOVE_EXTREME_SPEED, MOVE_AQUA_JET},
    },
};

// Growing pains
static const struct TrainerMon sParty_GP_1_Intro[] = {
    {
        .species = SPECIES_CHINCHOU,
        .heldItem = ITEM_ZAP_PLATE,
        .ability = ABILITY_HIDDEN, // water abs
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LEVEL_BALL,
        .slot = 0,
        .moves = {MOVE_DISCHARGE, MOVE_WATER_PULSE, MOVE_PROTECT, MOVE_THUNDER_WAVE},
        .shiny = TRUE,
    },
    {
        .species = SPECIES_CHINCHOU,
        .heldItem = ITEM_MYSTIC_WATER,
        .ability = ABILITY_SLOT_2, // volt abs
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DIVE_BALL,
        .slot = 1,
        .moves = {MOVE_SHOCK_WAVE, MOVE_SURF, MOVE_PROTECT, MOVE_THUNDER_WAVE},
    },
    {
        .species = SPECIES_KIRLIA,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_HIDDEN, // telepathy
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DREAM_BALL,
        .slot = 2,
        .moves = {MOVE_PSYBEAM, MOVE_CALM_MIND, MOVE_DAZZLING_GLEAM, MOVE_MAGICAL_LEAF},
    },    
    {
        .species = SPECIES_DOTTLER,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_HIDDEN, // telepathy
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FRIEND_BALL,
        .slot = 2,
        .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_CONFUSION, MOVE_STRUGGLE_BUG},
    },
    {
        .species = SPECIES_STARAVIA,
        .heldItem = ITEM_LUM_BERRY,
        .ability = ABILITY_SLOT_2, // intimidate
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_PREMIER_BALL,
        .slot = 3,
        .moves = {MOVE_ACROBATICS, MOVE_ROOST, MOVE_WHIRLWIND, MOVE_TAKE_DOWN},
    },
    {
        .species = SPECIES_TRANQUILL,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SLOT_1, // oppression
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LUXURY_BALL,
        .slot = 3,
        .moves = {MOVE_PLUCK, MOVE_FACADE, MOVE_TAILWIND, MOVE_TAUNT},
    },
    {
        .species = SPECIES_GRAVELER,
        .heldItem = ITEM_ZOOM_LENS,
        .ability = ABILITY_SLOT_2, // sturdy
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAVY_BALL,
        .slot = 4,
        .moves = {MOVE_ROCK_SLIDE, MOVE_BULLDOZE, MOVE_PROTECT, MOVE_EXPLOSION},
    },
    {
        .species = SPECIES_KROKOROK,
        .heldItem = ITEM_KINGS_ROCK,
        .ability = ABILITY_SLOT_2, // moxie
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DUSK_BALL,
        .slot = 4,
        .moves = {MOVE_ROCK_SLIDE, MOVE_BULLDOZE, MOVE_SWAGGER, MOVE_THRASH},
    },
    {
        .species = SPECIES_MIENFOO,
        .heldItem = ITEM_MUSCLE_BAND,
        .ability = ABILITY_SLOT_2, // regenerator
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_QUICK_BALL,
        .slot = 5,
        .moves = {MOVE_FAKE_OUT, MOVE_FORCE_PALM, MOVE_U_TURN, MOVE_KNOCK_OFF},
    },    
    {
        .species = SPECIES_KUBFU,
        .heldItem = ITEM_PROTECTIVE_PADS,
        .ability = ABILITY_SLOT_1, // unseen fist
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FAST_BALL,
        .slot = 5,
        .moves = {MOVE_FAKE_OUT, MOVE_BULK_UP, MOVE_IRON_HEAD, MOVE_BRICK_BREAK},
    },
};

static const struct TrainerMon sParty_GP_1_Elite[] = {
    {
        .species = SPECIES_PORYGON,
        .heldItem = ITEM_METRONOME,
        .ability = ABILITY_SLOT_1, // adaptability
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_POKE_BALL,
        .slot = 0,
        .moves = {MOVE_TRI_ATTACK, MOVE_RECOVER, MOVE_SHOCK_WAVE, MOVE_FLAME_BURST},
    },
    {
        .species = SPECIES_SNEASEL,
        .heldItem = ITEM_ICICLE_PLATE,
        .ability = ABILITY_SLOT_1, // inner focus
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_MOON_BALL,
        .slot = 1,
        .moves = {MOVE_ICE_SHARD, MOVE_ICE_PUNCH, MOVE_KNOCK_OFF, MOVE_HONE_CLAWS},
    },
    {
        .species = SPECIES_GLIGAR,
        .heldItem = ITEM_TOXIC_ORB,
        .ability = ABILITY_HIDDEN, // psn heal
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAL_BALL,
        .slot = 1,
        .moves = {MOVE_BULLDOZE, MOVE_ROOST, MOVE_DEFOG, MOVE_AERIAL_ACE},
    },
    {
        .species = SPECIES_SEADRA,
        .heldItem = ITEM_SCOPE_LENS,
        .ability = ABILITY_SLOT_2, // sniper
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DIVE_BALL,
        .slot = 2,
        .moves = {MOVE_FOCUS_ENERGY, MOVE_BUBBLE_BEAM, MOVE_AIR_CUTTER, MOVE_DRAGON_BREATH},
    },
    {
        .species = SPECIES_MISDREAVUS,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SLOT_2, // perish body
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CALM,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LUXURY_BALL,
        .slot = 2,
        .moves = {MOVE_PAIN_SPLIT, MOVE_FOLLOW_ME, MOVE_HEX, MOVE_WILL_O_WISP},
    },
    {
        .species = SPECIES_KADABRA,
        .heldItem = ITEM_HOURGLASS,
        .ability = ABILITY_SLOT_1, // syncrhonize
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAL_BALL,
        .slot = 3,
        .moves = {MOVE_PSYBEAM, MOVE_SHADOW_BALL, MOVE_ALLY_SWITCH, MOVE_DAZZLING_GLEAM},
    },
    {
        .species = SPECIES_GURDURR,
        .heldItem = ITEM_HOURGLASS,
        .ability = ABILITY_HIDDEN, // iron fist
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_REPEAT_BALL,
        .slot = 3,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_ROCK_SLIDE, MOVE_THUNDER_PUNCH},
    },
    {
        .species = SPECIES_MINCCINO,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_HIDDEN, // skill link
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_PREMIER_BALL,
        .slot = 4,
        .moves = {MOVE_SPIKE_CANNON, MOVE_ROCK_BLAST, MOVE_BULLET_SEED, MOVE_ARM_THRUST},
    },
    {
        .species = SPECIES_MURKROW,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SLOT_2, // super luck
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DUSK_BALL,
        .slot = 4,
        .moves = {MOVE_FOCUS_ENERGY, MOVE_DUAL_WINGBEAT, MOVE_SUBSTITUTE, MOVE_SUCKER_PUNCH},
    },
    // two similar growtlithe sets
    {
        .species = SPECIES_GROWLITHE,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_SLOT_1, // intimidate
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FAST_BALL,
        .slot = 5,
        .moves = {MOVE_SNARL, MOVE_FLAME_WHEEL, MOVE_HELPING_HAND, MOVE_EXTREME_SPEED},
    },
    {
        .species = SPECIES_GROWLITHE,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_SLOT_2, // oppression
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FAST_BALL,
        .slot = 5,
        .moves = {MOVE_BREAKING_SWIPE, MOVE_FLAME_WHEEL, MOVE_HELPING_HAND, MOVE_EXTREME_SPEED},
    },
};

static const struct TrainerMon sParty_GP_2_Intro[] = {
    {
        .species = SPECIES_SPINDA,
        .heldItem = ITEM_TRIFORCE,
        .ability = ABILITY_HIDDEN, // contrary
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_POKE_BALL,
        .slot = 0,
        .moves = {MOVE_DIZZY_PUNCH, MOVE_CONFUSION, MOVE_SUBSTITUTE, MOVE_RAPID_SPIN},
    },
    {
        .species = SPECIES_MUNCHLAX,
        .heldItem = ITEM_LUM_BERRY,
        .ability = ABILITY_SLOT_2, // thick fat
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_GREAT_BALL,
        .slot = 0,
        .moves = {MOVE_BODY_SLAM, MOVE_REST, MOVE_BELLY_DRUM, MOVE_YAWN},
    },
    {
        .species = SPECIES_NIDORINA,
        .heldItem = ITEM_BLACK_SLUDGE,
        .ability = ABILITY_SLOT_2, // rough skin
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LOVE_BALL,
        .slot = 1,
        .moves = {MOVE_VENOSHOCK, MOVE_TOXIC_SPIKES, MOVE_BULLDOZE, MOVE_ACID_ARMOR},
    },
    {
        .species = SPECIES_NIDORINO,
        .heldItem = ITEM_BLACK_SLUDGE,
        .ability = ABILITY_SLOT_2, // hustle
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DREAM_BALL,
        .slot = 1,
        .moves = {MOVE_CROSS_POISON, MOVE_STOMPING_TANTRUM, MOVE_CRUNCH, MOVE_BULK_UP},
    },
    {
        .species = SPECIES_MAGBY,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_SLOT_1, // brand
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_REPEAT_BALL,
        .slot = 2,
        .moves = {MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_KNOCK_OFF, MOVE_U_TURN},
    },
    {
        .species = SPECIES_ELEKID,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_SLOT_1, // static shock
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_PARK_BALL,
        .slot = 2,
        .moves = {MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_MACH_PUNCH, MOVE_VOLT_SWITCH},
    },
    {
        .species = SPECIES_ESPURR,
        .heldItem = ITEM_LIGHT_CLAY,
        .ability = ABILITY_SLOT_1, // magic bounce
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_CHERISH_BALL,
        .slot = 3,
        .moves = {MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_HEAL_BELL, MOVE_PSYBEAM},
    },
    {
        .species = SPECIES_WAILMER,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SLOT_1, // immunity
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DIVE_BALL,
        .slot = 4,
        .moves = {MOVE_BRINE, MOVE_SLACK_OFF, MOVE_ICY_WIND, MOVE_HEAVY_SLAM},
    },
    {
        .species = SPECIES_PARASECT,
        .heldItem = ITEM_ROCKY_HELMET,
        .ability = ABILITY_SLOT_1, // effect spore
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_NET_BALL,
        .slot = 4,
        .moves = {MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_BUG_BITE, MOVE_LEECH_SEED},
    },
    {
        .species = SPECIES_MUDBRAY,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_HIDDEN, // BULL_RUSH
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAVY_BALL,
        .slot = 4,
        .moves = {MOVE_ROCK_TOMB, MOVE_HIGH_HORSEPOWER, MOVE_STOMP, MOVE_LOW_SWEEP},
    },
    {
        .species = SPECIES_MUDBRAY,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_HIDDEN, // BULL_RUSH
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAVY_BALL,
        .slot = 4,
        .moves = {MOVE_ROCK_TOMB, MOVE_HIGH_HORSEPOWER, MOVE_STOMP, MOVE_LOW_SWEEP},
    },
    {
        .species = SPECIES_MIGHTYENA,
        .heldItem = ITEM_SHELL_BELL,
        .ability = ABILITY_HIDDEN, // shadow shield
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DUSK_BALL,
        .slot = 5,
        .moves = {MOVE_CRUNCH, MOVE_SWAGGER, MOVE_SHADOW_SNEAK, MOVE_ICE_FANG},
    },

};

static const struct TrainerMon sParty_GP_2_Mid[] = {
    {
        .species = SPECIES_CORSOLA,
        .heldItem = ITEM_WEIGHTED_BOOTS,
        .ability = ABILITY_SLOT_1, // hustle
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DIVE_BALL,
        .slot = 0,
        .moves = {MOVE_SPIKES, MOVE_ROCK_TOMB, MOVE_RAPID_SPIN, MOVE_WATERFALL},
    },
    {
        .species = SPECIES_YANMA,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SLOT_1, // speed boost
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_NET_BALL,
        .slot = 1,
        .moves = {MOVE_U_TURN, MOVE_AIR_SLASH, MOVE_ANCIENT_POWER, MOVE_SIGNAL_BEAM},
    },
    {
        .species = SPECIES_ROSELIA,
        .heldItem = ITEM_BIG_ROOT,
        .ability = ABILITY_SLOT_1, // natural cure
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FRIEND_BALL,
        .slot = 1,
        .moves = {MOVE_GIGA_DRAIN, MOVE_VENOSHOCK, MOVE_TOXIC, MOVE_GRASSY_TERRAIN},
    },
    {
        .species = SPECIES_FARFETCHD_GALARIAN,
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ability = ABILITY_SLOT_2, // SCRAPPY
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_ULTRA_BALL,
        .slot = 2,
        .moves = {MOVE_BRUTAL_SWING, MOVE_BRICK_BREAK, MOVE_LEAF_BLADE, MOVE_KNOCK_OFF},
    },
    {
        .species = SPECIES_FARFETCHD,
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ability = ABILITY_SLOT_2, // SCRAPPY
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_SAFARI_BALL,
        .slot = 2,
        .moves = {MOVE_NIGHT_SLASH, MOVE_BRICK_BREAK, MOVE_SLASH, MOVE_AERIAL_ACE},
    },
    {
        .species = SPECIES_GOTHORITA,
        .heldItem = ITEM_ADRENALINE_ORB,
        .ability = ABILITY_SLOT_2, // competitive
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAL_BALL,
        .slot = 3,
        .moves = {MOVE_EXTRASENSORY, MOVE_SHADOW_BALL, MOVE_SKILL_SWAP, MOVE_CALM_MIND},
    },
    {
        .species = SPECIES_PAWNIARD,
        .heldItem = ITEM_ADRENALINE_ORB,
        .ability = ABILITY_SLOT_1, // defiant
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_TIMER_BALL,
        .slot = 4,
        .moves = {MOVE_IRON_HEAD, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_BULK_UP},
    },
    {
        .species = SPECIES_DUSTOX,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SLOT_1, // harvest
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DUSK_BALL,
        .slot = 5,
        .moves = {MOVE_BUG_BUZZ, MOVE_WHIRLWIND, MOVE_TOXIC, MOVE_VENOSHOCK},
    },
    {
        .species = SPECIES_BEEDRILL,
        .heldItem = ITEM_MUSCLE_BAND,
        .ability = ABILITY_SLOT_1, // swarm
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LEVEL_BALL,
        .slot = 5,
        .moves = {MOVE_FELL_STINGER, MOVE_POISON_JAB, MOVE_BULLET_SEED, MOVE_PURSUIT},
    },

};

static const struct TrainerMon sParty_GP_2_Elite[] = {
    {
        .species = SPECIES_POLIWHIRL,
        .heldItem = ITEM_THERMOSTAT,
        .ability = ABILITY_HIDDEN, // drizzle
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DIVE_BALL,
        .slot = 0,
        .moves = {MOVE_BODY_SLAM, MOVE_BUBBLE_BEAM, MOVE_MUD_SHOT, MOVE_HYPNOSIS},
    },
    {
        .species = SPECIES_PALPITOAD,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SLOT_1, // swift swim
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LURE_BALL,
        .slot = 1,
        .moves = {MOVE_MUD_SHOT, MOVE_BULLDOZE, MOVE_WATER_PULSE, MOVE_RAIN_DANCE},
    },
    {
        .species = SPECIES_LOMBRE,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SLOT_2, // swift swim
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LURE_BALL,
        .slot = 1,
        .moves = {MOVE_MEGA_DRAIN, MOVE_WATER_PULSE, MOVE_FAKE_OUT, MOVE_AURORA_BEAM},
    },
    {
        .species = SPECIES_KABUTO,
        .heldItem = ITEM_LUM_BERRY,
        .ability = ABILITY_SLOT_1, // swift swim
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_BEAST_BALL,
        .slot = 2,
        .moves = {MOVE_GIGA_DRAIN, MOVE_RAZOR_SHELL, MOVE_ROCK_SLIDE, MOVE_X_SCISSOR},
    },
    {
        .species = SPECIES_OMANYTE,
        .heldItem = ITEM_LUM_BERRY,
        .ability = ABILITY_SLOT_1, // swift swim
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_BEAST_BALL,
        .slot = 2,
        .moves = {MOVE_OCTAZOOKA, MOVE_ANCIENT_POWER, MOVE_AQUA_JET, MOVE_DEFENSE_CURL},
    },
    {
        .species = SPECIES_SHIINOTIC,
        .heldItem = ITEM_BIG_ROOT,
        .ability = ABILITY_HIDDEN, // rain dish
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FRIEND_BALL,
        .slot = 3,
        .moves = {MOVE_GIGA_DRAIN, MOVE_DRAINING_KISS, MOVE_LEECH_SEED, MOVE_PROTECT},
    },
    {
        .species = SPECIES_CUFANT,
        .heldItem = ITEM_MUSCLE_BAND,
        .ability = ABILITY_HIDDEN, // heavy metal
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAVY_BALL,
        .slot = 4,
        .moves = {MOVE_BODY_SLAM, MOVE_BODY_PRESS, MOVE_HIGH_HORSEPOWER, MOVE_HEAVY_SLAM},
    },
    {
        .species = SPECIES_HONEDGE,
        .heldItem = ITEM_MUSCLE_BAND,
        .ability = ABILITY_SLOT_2, // levitate
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_TIMER_BALL,
        .slot = 4,
        .moves = {MOVE_SACRED_SWORD, MOVE_SWORDS_DANCE, MOVE_METAL_CLAW, MOVE_SHADOW_SNEAK},
    },
    {
        .species = SPECIES_FROGADIER,
        .heldItem = ITEM_TRIFORCE,
        .ability = ABILITY_HIDDEN, // protean
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_MOON_BALL,
        .slot = 5,
        .moves = {MOVE_FEINT_ATTACK, MOVE_ROCK_TOMB, MOVE_SILVER_WIND, MOVE_WATER_PLEDGE},
    },

};


static const struct TrainerMon sParty_GP_3_Intro[] = {
    {
        .species = SPECIES_GABITE,
        .heldItem = ITEM_ROCKY_HELMET,
        .ability = ABILITY_HIDDEN, // water veil
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DIVE_BALL,
        .slot = 0,
        .moves = {MOVE_ROCK_SLIDE, MOVE_STOMPING_TANTRUM, MOVE_BULLDOZE, MOVE_AQUA_JET},
    },
    {
        .species = SPECIES_TOGETIC,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_SLOT_1, // natural cure
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CALM,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAL_BALL,
        .slot = 1,
        .moves = {MOVE_AIR_SLASH, MOVE_WISH, MOVE_TAILWIND, MOVE_DAZZLING_GLEAM},
    },
    {
        .species = SPECIES_WIGGLYTUFF,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_SLOT_1, // holy aura
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_BOLD,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FRIEND_BALL,
        .slot = 1,
        .moves = {MOVE_FOLLOW_ME, MOVE_WISH, MOVE_FLAMETHROWER, MOVE_DAZZLING_GLEAM},
    },
    {
        .species = SPECIES_BUTTERFREE,
        .heldItem = ITEM_WISE_GLASSES,
        .ability = ABILITY_SLOT_1, // compound eyes
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_NET_BALL,
        .slot = 2,
        .moves = {MOVE_SILVER_WIND, MOVE_AIR_SLASH, MOVE_QUIVER_DANCE, MOVE_SLEEP_POWDER},
    },
    {
        .species = SPECIES_BEAUTIFLY,
        .heldItem = ITEM_WISE_GLASSES,
        .ability = ABILITY_SLOT_2, // multiscale
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_PARK_BALL,
        .slot = 2,
        .moves = {MOVE_AIR_CUTTER, MOVE_BUG_BUZZ, MOVE_QUIVER_DANCE, MOVE_MIST_BALL},
    },
    {
        .species = SPECIES_RATICATE,
        .heldItem = ITEM_FLAME_ORB,
        .ability = ABILITY_SLOT_2, // guts
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_POKE_BALL,
        .slot = 3,
        .moves = {MOVE_PROTECT, MOVE_QUICK_ATTACK, MOVE_HYPER_FANG, MOVE_FIRE_FANG},
    },
    {
        .species = SPECIES_RATICATE_ALOLAN,
        .heldItem = ITEM_MUSCLE_BAND,
        .ability = ABILITY_HIDDEN, // thick fat
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DUSK_BALL,
        .slot = 3,
        .moves = {MOVE_KNOCK_OFF, MOVE_EXTREME_SPEED, MOVE_POISON_FANG, MOVE_PURSUIT},
    },
    {
        .species = SPECIES_BIBAREL,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SLOT_1, // simple
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_NET_BALL,
        .slot = 4,
        .moves = {MOVE_CURSE, MOVE_WATERFALL, MOVE_AQUA_JET, MOVE_STRENGTH},
    },
    {
        .species = SPECIES_PACHIRISU, // 😉
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_HIDDEN, // volt absorb
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_PARK_BALL,
        .slot = 5,
        .moves = {MOVE_PROTECT, MOVE_SUPER_FANG, MOVE_FOLLOW_ME, MOVE_NUZZLE},
    },
    {
        .species = SPECIES_PLUSLE,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_HIDDEN, // lightning rod
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_PARK_BALL,
        .slot = 5,
        .moves = {MOVE_SLUDGE, MOVE_THUNDERBOLT, MOVE_FOLLOW_ME, MOVE_NASTY_PLOT},
    },
        {
        .species = SPECIES_PLUSLE,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SLOT_2, // battery
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_PARK_BALL,
        .slot = 5,
        .moves = {MOVE_VOLT_SWITCH, MOVE_HELPING_HAND, MOVE_FOLLOW_ME, MOVE_ENCORE},
    },

};

static const struct TrainerMon sParty_GP_3_Mid[] = {
        {
        .species = SPECIES_PONYTA_GALARIAN,
        .heldItem = ITEM_MIND_PLATE,
        .ability = ABILITY_SLOT_1, // oppression
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_POKE_BALL,
        .slot = 0,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_HEAL_PULSE, MOVE_EXTRASENSORY, MOVE_PROTECT},
    },
    {
        .species = SPECIES_MAWILE,
        .heldItem = ITEM_PLATE_MAIL,
        .ability = ABILITY_SLOT_2, // intimidate
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_TIMER_BALL,
        .slot = 1,
        .moves = {MOVE_IRON_HEAD, MOVE_IRON_DEFENSE, MOVE_ROCK_SLIDE, MOVE_CRUNCH},
    },
    {
        .species = SPECIES_VULLABY,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_SLOT_1, // immunity
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DUSK_BALL,
        .slot = 2,
        .moves = {MOVE_FOUL_PLAY, MOVE_TAUNT, MOVE_ROOST, MOVE_REFLECT},
    },
        {
        .species = SPECIES_STARYU,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SLOT_1, // illuminate
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_ULTRA_BALL,
        .slot = 2,
        .moves = {MOVE_EXTRASENSORY, MOVE_MUDDY_WATER, MOVE_RECOVER, MOVE_LIGHT_SCREEN},
    },
    {
        .species = SPECIES_FURRET,
        .heldItem = ITEM_EJECT_BUTTON,
        .ability = ABILITY_SLOT_1, // regenerator
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_SASSY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_POKE_BALL,
        .slot = 3,
        .moves = {MOVE_BODY_SLAM, MOVE_U_TURN, MOVE_FAKE_OUT, MOVE_RAPID_SPIN},
    },
    {
        .species = SPECIES_FURRET,
        .heldItem = ITEM_EJECT_BUTTON,
        .ability = ABILITY_SLOT_1, // regenerator
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_POKE_BALL,
        .slot = 3,
        .moves = {MOVE_BODY_SLAM, MOVE_U_TURN, MOVE_FAKE_OUT, MOVE_RAPID_SPIN},
    },
    {
        .species = SPECIES_WORMADAM,
        .heldItem = ITEM_LUM_BERRY,
        .ability = ABILITY_HIDDEN, // fur coat
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_POKE_BALL,
        .slot = 4,
        .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_PROTECT, MOVE_APPLE_ACID},
    },
    {
        .species = SPECIES_WORMADAM_SANDY_CLOAK,
        .heldItem = ITEM_LUM_BERRY,
        .ability = ABILITY_HIDDEN, // fur coat
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_POKE_BALL,
        .slot = 4,
        .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_PROTECT, MOVE_EARTH_POWER},
    },
        {
        .species = SPECIES_WORMADAM_TRASH_CLOAK,
        .heldItem = ITEM_LUM_BERRY,
        .ability = ABILITY_HIDDEN, // fur coat
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_POKE_BALL,
        .slot = 4,
        .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_PROTECT, MOVE_FLASH_CANNON},
    },
    {
        .species = SPECIES_METANG,
        .heldItem = ITEM_AIR_BALLOON,
        .ability = ABILITY_HIDDEN, // magnet pull
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAVY_BALL,
        .slot = 5,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_IRON_HEAD, MOVE_BULLET_PUNCH, MOVE_ICE_PUNCH},
    },
    
};


static const struct TrainerMon sParty_GP_3_Elite[] = {
    {
        .species = SPECIES_QUILAVA,
        .heldItem = ITEM_WISE_GLASSES,
        .ability = ABILITY_SLOT_2, // magma armor
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FAST_BALL,
        .slot = 0,
        .moves = {MOVE_FIRE_PLEDGE, MOVE_SCORCHING_SANDS, MOVE_ENCORE, MOVE_EXTRASENSORY},
    },
    {
        .species = SPECIES_CHARMELEON,
        .heldItem = ITEM_KINGS_ROCK,
        .ability = ABILITY_SLOT_1, // blaze
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_POKE_BALL,
        .slot = 0,
        .moves = {MOVE_FIRE_PLEDGE, MOVE_SEISMIC_TOSS, MOVE_BREAKING_SWIPE, MOVE_SUBSTITUTE},
    },
    {
        .species = SPECIES_BAYLEEF,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_SLOT_2, // friend guard
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_CALM,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FRIEND_BALL,
        .slot = 1,
        .moves = {MOVE_GRASS_PLEDGE, MOVE_FOLLOW_ME, MOVE_DAZZLING_GLEAM, MOVE_BODY_SLAM},
    },
    {
        .species = SPECIES_DARTRIX,
        .heldItem = ITEM_TRIFORCE,
        .ability = ABILITY_SLOT_2, // gale wings
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LUXURY_BALL,
        .slot = 1,
        .moves = {MOVE_GRASS_PLEDGE, MOVE_PLUCK, MOVE_SUCKER_PUNCH, MOVE_OMINOUS_WIND},
    },
    {
        .species = SPECIES_DEWOTT,
        .heldItem = ITEM_HOURGLASS,
        .ability = ABILITY_HIDDEN, // mirror armor
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_GREAT_BALL,
        .slot = 2,
        .moves = {MOVE_WATER_PLEDGE, MOVE_VACUUM_WAVE, MOVE_SLACK_OFF, MOVE_TAUNT},
    },
    {
        .species = SPECIES_MARSHTOMP,
        .heldItem = ITEM_SHELL_BELL,
        .ability = ABILITY_SLOT_2, // filter
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LURE_BALL,
        .slot = 2,
        .moves = {MOVE_WATER_PLEDGE, MOVE_AQUA_JET, MOVE_STOMPING_TANTRUM, MOVE_ICE_PUNCH},
    },
    {
        .species = SPECIES_PIKACHU,
        .heldItem = ITEM_LIGHT_BALL,
        .ability = ABILITY_SLOT_2, // static shock
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_PARK_BALL,
        .slot = 3,
        .moves = {MOVE_SPARK, MOVE_IRON_TAIL, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK},
    },
    {
        .species = SPECIES_EEVEE,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_SLOT_1, // enchanting
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_PACIFIST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_CHERISH_BALL,
        .slot = 4,
        .moves = {MOVE_SNARL, MOVE_HELPING_HAND, MOVE_HEAL_BELL, MOVE_YAWN},
    },
    {
        .species = SPECIES_POIPOLE,
        .heldItem = ITEM_ADRENALINE_ORB,
        .ability = ABILITY_SLOT_1, // beast boost
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_RAGER,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LOVE_BALL,
        .slot = 5,
        .moves = {MOVE_DRAGON_PULSE, MOVE_POISON_JAB, MOVE_FELL_STINGER, MOVE_TOXIC},
    },
};

static const struct TrainerMon sParty_GP_4_Intro[] = {
    {
        .species = SPECIES_QWILFISH,
        .heldItem = ITEM_BLACK_SLUDGE,
        .ability = ABILITY_HIDDEN, // intimidate
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DIVE_BALL,
        .slot = 0,
        .moves = {MOVE_FELL_STINGER, MOVE_TOXIC_SPIKES, MOVE_POISON_JAB, MOVE_EXPLOSION},
    },
    {
        .species = SPECIES_LEDIAN,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SLOT_1, // swarm
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_NEST_BALL,
        .slot = 0,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_FELL_STINGER, MOVE_BULK_UP, MOVE_BATON_PASS},
    },
    {
        .species = SPECIES_TANGELA,
        .heldItem = ITEM_BIG_ROOT,
        .ability = ABILITY_SLOT_2, // triage
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_SAFARI_BALL,
        .slot = 1,
        .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_PURIFY, MOVE_STRENGTH_SAP},
    },
    {
        .species = SPECIES_SWOOBAT,
        .heldItem = ITEM_KINGS_ROCK,
        .ability = ABILITY_SLOT_1, // brilliant
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LUXURY_BALL,
        .slot = 1,
        .moves = {MOVE_STEALTH_ROCK, MOVE_SELF_DESTRUCT, MOVE_EXTRASENSORY, MOVE_DARK_PULSE},
    },
        {
        .species = SPECIES_CARKOL,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_SLOT_2, // steam engine
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAVY_BALL,
        .slot = 2,
        .moves = {MOVE_SELF_DESTRUCT, MOVE_RAPID_SPIN, MOVE_ROCK_BLAST, MOVE_HEAT_CRASH},
    },
    {
        .species = SPECIES_GRAVELER_ALOLAN,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_HIDDEN, // galvanize
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAVY_BALL,
        .slot = 2,
        .moves = {MOVE_MEGA_PUNCH, MOVE_SELF_DESTRUCT, MOVE_RAPID_SPIN, MOVE_ROCK_BLAST},
    },
    {
        .species = SPECIES_PERSIAN_ALOLAN,
        .heldItem = ITEM_HOURGLASS,
        .ability = ABILITY_SLOT_2, // technician
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FAST_BALL,
        .slot = 3,
        .moves = {MOVE_SWITCHEROO, MOVE_FURY_SWIPES, MOVE_FAKE_OUT, MOVE_SNARL},
    },
    {
        .species = SPECIES_MEDICHAM,
        .heldItem = ITEM_HOURGLASS,
        .ability = ABILITY_SLOT_2, // technician
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FAST_BALL,
        .slot = 3,
        .moves = {MOVE_DOUBLE_KICK, MOVE_BULLET_PUNCH, MOVE_HEART_STAMP, MOVE_ICE_PUNCH},
    },
    {
        .species = SPECIES_KECLEON,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_HIDDEN, // protean
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_QUICK_BALL,
        .slot = 4,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_KNOCK_OFF, MOVE_AERIAL_ACE, MOVE_DRAIN_PUNCH}
    },
        {
        .species = SPECIES_KECLEON,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_HIDDEN, // protean
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LEVEL_BALL,
        .slot = 4,
        .moves = {MOVE_SHADOW_CLAW, MOVE_FIRE_PUNCH, MOVE_SUCKER_PUNCH, MOVE_RECOVER},
    },
    {
        .species = SPECIES_DITTO,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_HIDDEN, // imposter
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DREAM_BALL,
        .slot = 5,
        .moves = {MOVE_TRANSFORM, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    },

    
};

static const struct TrainerMon sParty_GP_4_Elite[] = {
    {
        .species = SPECIES_ARIADOS,
        .heldItem = ITEM_BIG_ROOT,
        .ability = ABILITY_HIDDEN, // vampire
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_NEST_BALL,
        .slot = 0,
        .moves = {MOVE_STICKY_WEB, MOVE_POISON_FANG, MOVE_PSYCHIC_FANGS, MOVE_BUG_BITE},
    },
    {
        .species = SPECIES_QUAGSIRE,
        .heldItem = ITEM_LUM_BERRY,
        .ability = ABILITY_HIDDEN, // sap sipper
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_GREAT_BALL,
        .slot = 0,
        .moves = {MOVE_STEALTH_ROCK, MOVE_WATERFALL, MOVE_STOMPING_TANTRUM, MOVE_SLACK_OFF},
    },
    {
        .species = SPECIES_SABLEYE,
        .heldItem = ITEM_ROCKY_HELMET,
        .ability = ABILITY_HIDDEN, // prankster
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DUSK_BALL,
        .slot = 1,
        .moves = {MOVE_FOUL_PLAY, MOVE_KNOCK_OFF, MOVE_THUNDER_WAVE, MOVE_SHADOW_PUNCH},
    },
    {
        .species = SPECIES_SABLEYE,
        .heldItem = ITEM_RED_CARD,
        .ability = ABILITY_SLOT_2, // compound eyes
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_SASSY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DUSK_BALL,
        .slot = 1,
        .moves = {MOVE_HEX, MOVE_SWAGGER, MOVE_HYPNOSIS, MOVE_SCREECH},
    },
    {
        .species = SPECIES_WHIRLIPEDE,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_SLOT_1, // poison point
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_GREAT_BALL,
        .slot = 2,
        .moves = {MOVE_VENOSHOCK, MOVE_HORN_LEECH, MOVE_PURSUIT, MOVE_STEAMROLLER},
    },
    {
        .species = SPECIES_MAGCARGO,
        .heldItem = ITEM_PLATE_MAIL,
        .ability = ABILITY_SLOT_2, // flame body
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_BOLD,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_REPEAT_BALL,
        .slot = 2,
        .moves = {MOVE_RECOVER, MOVE_ANCIENT_POWER, MOVE_FLAMETHROWER, MOVE_SLUDGE_BOMB},
    },
    {
        .species = SPECIES_SUNFLORA,
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ability = ABILITY_SLOT_1, // immunity
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FRIEND_BALL,
        .slot = 3,
        .moves = {MOVE_HEAT_WAVE, MOVE_GIGA_DRAIN, MOVE_GRASSY_TERRAIN, MOVE_SCORCHING_SANDS},
    },
    {
        .species = SPECIES_SUDOWOODO,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_HIDDEN, // long reach
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_SAFARI_BALL,
        .slot = 4,
        .moves = {MOVE_STOMPING_TANTRUM, MOVE_ROCK_SLIDE, MOVE_DRUM_BEATING, MOVE_DRAIN_PUNCH},
    },
    {
        .species = SPECIES_WOBBUFFET,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_SLOT_1, // shadow tag
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_MOON_BALL,
        .slot = 5,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND},
    },
};


static const struct TrainerMon sParty_GP_5_Boss[] = {
    {
        .species = SPECIES_DRAGONAIR,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_SLOT_2, // gift of wind
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_SASSY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FAST_BALL,
        .slot = 0,
        .moves = {MOVE_ROOST, MOVE_FOLLOW_ME, MOVE_U_TURN, MOVE_BREAKING_SWIPE},
    },
    {
        .species = SPECIES_DIGGERSBY,
        .heldItem = ITEM_HOURGLASS,
        .ability = ABILITY_HIDDEN, // huge power
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_QUICK_BALL,
        .slot = 1,
        .moves = {MOVE_EXTREME_SPEED, MOVE_STOMPING_TANTRUM, MOVE_ROCK_SLIDE, MOVE_SUPER_FANG},
    },

    {
        .species = SPECIES_DUGTRIO,
        .heldItem = ITEM_PLATE_MAIL,
        .ability = ABILITY_SLOT_2, // arena trap
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_REPEAT_BALL,
        .slot = 2,
        .moves = {MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, MOVE_WHIRLWIND},
    },
    {
        .species = SPECIES_LAIRON,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_HIDDEN, // magnet pull
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_TIMER_BALL,
        .slot = 2,
        .moves = {MOVE_BULLDOZE, MOVE_ROCK_SLIDE, MOVE_PROTECT, MOVE_IRON_HEAD},
    },
    {
        .species = SPECIES_MAROWAK_ALOLAN,
        .heldItem = ITEM_LUM_BERRY,
        .ability = ABILITY_SLOT_2, // shadow tag
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LUXURY_BALL,
        .slot = 2,
        .moves = {MOVE_SHADOW_BONE, MOVE_STOMPING_TANTRUM, MOVE_PROTECT, MOVE_FIRE_PUNCH},
    },
    {
        .species = SPECIES_RHYHORN,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_HIDDEN, // filter
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_SASSY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_PREMIER_BALL,
        .slot = 3,
        .moves = {MOVE_SMACK_DOWN, MOVE_DRILL_RUN, MOVE_MEGAHORN, MOVE_HEAVY_SLAM},
    },
    {
        .species = SPECIES_BOLDORE,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_SLOT_1, // sturdy
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_SASSY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_SAFARI_BALL,
        .slot = 3,
        .moves = {MOVE_EXPLOSION, MOVE_ROCK_TOMB, MOVE_ROCK_POLISH, MOVE_BULLDOZE},
    },
    {
        .species = SPECIES_EELEKTRIK,
        .heldItem = ITEM_WISE_GLASSES,
        .ability = ABILITY_SLOT_1, // levitate
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LEVEL_BALL,
        .slot = 4,
        .moves = {MOVE_SCALD, MOVE_DISCHARGE, MOVE_SLUDGE, MOVE_ELECTRIC_TERRAIN},
    },
    {
        .species = SPECIES_EMOLGA,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SLOT_2, // regenerator
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_ULTRA_BALL,
        .slot = 4,
        .moves = {MOVE_TAILWIND, MOVE_AIR_SLASH, MOVE_VOLT_SWITCH, MOVE_ICY_WIND},
    },
        {
        .species = SPECIES_MAWILE,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_SLOT_2, // intimidate
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LOVE_BALL,
        .slot = 5,
        .moves = {MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_PROTECT, MOVE_SWORDS_DANCE},
    },
        {
        .species = SPECIES_WAILMER, // may be a bit out of place in this fight?
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_HIDDEN, // obsession
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DIVE_BALL,
        .slot = 5,
        .moves = {MOVE_WATER_SPOUT, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_HYPER_BEAM},
    },
};

static const struct TrainerMon sParty_TD_1_Intro[] = {
    {
        .species = SPECIES_PILOSWINE,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SLOT_1, // moxie
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_PARK_BALL,
        .slot = 0,
        .moves = {MOVE_ICE_SHARD, MOVE_STEALTH_ROCK, MOVE_ROCK_SLIDE, MOVE_ICICLE_CRASH},
    },
    {
        .species = SPECIES_LIEPARD,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_HIDDEN, // prankster
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DUSK_BALL,
        .slot = 0,
        .moves = {MOVE_TAUNT, MOVE_FOUL_PLAY, MOVE_U_TURN, MOVE_SPIKES},
    },
    {
        .species = SPECIES_KLANG,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_HIDDEN, // clear body
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAVY_BALL,
        .slot = 1,
        .moves = {MOVE_AUTOTOMIZE, MOVE_SPARK, MOVE_GEAR_GRIND, MOVE_STOMPING_TANTRUM},
    },
    {
        .species = SPECIES_ARBOK,
        .heldItem = ITEM_BIG_ROOT,
        .ability = ABILITY_SLOT_1, // vampire
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FAST_BALL,
        .slot = 1,
        .moves = {MOVE_CRUNCH, MOVE_POISON_FANG, MOVE_PSYCHIC_FANGS, MOVE_THUNDER_FANG},
    },
    {
        .species = SPECIES_CHANSEY,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SLOT_1, // natural cure
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CALM,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAL_BALL,
        .slot = 2,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_SOFT_BOILED, MOVE_THUNDER_WAVE, MOVE_FLAMETHROWER},
    },
    {
        .species = SPECIES_CHANSEY,
        .heldItem = ITEM_LUM_BERRY,
        .ability = ABILITY_SLOT_1, // natural cure
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CALM,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAL_BALL,
        .slot = 2,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_SOFT_BOILED, MOVE_SING, MOVE_ICE_BEAM},
    },
    {
        .species = SPECIES_CHANSEY,
        .heldItem = ITEM_ROCKY_HELMET,
        .ability = ABILITY_SLOT_1, // natural cure
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CALM,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAL_BALL,
        .slot = 2,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_SOFT_BOILED, MOVE_TOXIC, MOVE_THUNDERBOLT},
    },
    {
        .species = SPECIES_MR_MIME,
        .heldItem = ITEM_LIGHT_CLAY,
        .ability = ABILITY_SLOT_1, // screen cleaner
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DREAM_BALL,
        .slot = 3,
        .moves = {MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM},
    },
    {
        .species = SPECIES_JYNX,
        .heldItem = ITEM_LIGHT_CLAY,
        .ability = ABILITY_SLOT_1, // magic bounce
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DREAM_BALL,
        .slot = 3,
        .moves = {MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC, MOVE_ICE_BEAM},
    },
    {
        .species = SPECIES_NOCTOWL,
        .heldItem = ITEM_TRIFORCE,
        .ability = ABILITY_SLOT_1, // magic bounce
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_ULTRA_BALL,
        .slot = 4,
        .moves = {MOVE_AIR_SLASH, MOVE_HYPER_VOICE, MOVE_HYPNOSIS, MOVE_DREAM_EATER},
    },
    {
        .species = SPECIES_SLIGGOO,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_SLOT_1, // sap sipper
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_GREAT_BALL,
        .slot = 4,
        .moves = {MOVE_DRAGON_PULSE, MOVE_MAGICAL_LEAF, MOVE_BODY_SLAM, MOVE_MUDDY_WATER},
    },
    {
        .species = SPECIES_DOUBLADE,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_SLOT_2, // levitate
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_TIMER_BALL,
        .slot = 5,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_SACRED_SWORD, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE},
    },
};

static const struct TrainerMon sParty_TD_1_Mid[] = {
    {
        .species = SPECIES_SOLROCK,
        .heldItem = ITEM_THERMOSTAT,
        .ability = ABILITY_HIDDEN, // drought
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_BOLD,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_REPEAT_BALL,
        .slot = 0,
        .moves = {MOVE_POWER_GEM, MOVE_MYSTICAL_FIRE, MOVE_PSYCHIC, MOVE_CALM_MIND},
    },
    {
        .species = SPECIES_SUNFLORA,
        .heldItem = ITEM_BIG_ROOT,
        .ability = ABILITY_SLOT_2, // solar power
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LEVEL_BALL,
        .slot = 1,
        .moves = {MOVE_GIGA_DRAIN, MOVE_MYSTICAL_FIRE, MOVE_ENCORE, MOVE_MORNING_SUN},
    },
    {
        .species = SPECIES_CHARMELEON,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_HIDDEN, // solar power
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_POKE_BALL,
        .slot = 1,
        .moves = {MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_SEISMIC_TOSS, MOVE_BREAKING_SWIPE},
    },
    {
        .species = SPECIES_WEEPINBELL,
        .heldItem = ITEM_BLACK_SLUDGE,
        .ability = ABILITY_SLOT_1, // chlorophyll
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_NET_BALL,
        .slot = 2,
        .moves = {MOVE_RAZOR_LEAF, MOVE_SLUDGE_BOMB, MOVE_KNOCK_OFF, MOVE_SLEEP_POWDER},
    },
    {
        .species = SPECIES_IVYSAUR,
        .heldItem = ITEM_BLACK_SLUDGE,
        .ability = ABILITY_SLOT_1, // chlorophyll
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_NET_BALL,
        .slot = 2,
        .moves = {MOVE_POISON_JAB, MOVE_MAGICAL_LEAF, MOVE_STOMPING_TANTRUM, MOVE_LEECH_SEED},
    },
    {
        .species = SPECIES_HELIOLISK,
        .heldItem = ITEM_SHELL_BELL,
        .ability = ABILITY_SLOT_1, // dry skin
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LURE_BALL,
        .slot = 3,
        .moves = {MOVE_VOLT_SWITCH, MOVE_GLARE, MOVE_SUBSTITUTE, MOVE_PARABOLIC_CHARGE},
    },
    {
        .species = SPECIES_TOXICROAK,
        .heldItem = ITEM_WEIGHTED_BOOTS,
        .ability = ABILITY_SLOT_2, // dry skin
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_NEST_BALL,
        .slot = 3,
        .moves = {MOVE_POISON_JAB, MOVE_DRAIN_PUNCH, MOVE_FIRE_PUNCH, MOVE_KNOCK_OFF},
    },
    {
        .species = SPECIES_SANDSLASH,
        .heldItem = ITEM_ROCKY_HELMET,
        .ability = ABILITY_HIDDEN, // Hazard crew
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LUXURY_BALL,
        .slot = 4,
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_X_SCISSOR, MOVE_GYRO_BALL, MOVE_ROCK_SLIDE},
    },
    {
        .species = SPECIES_MAROWAK,
        .heldItem = ITEM_KINGS_ROCK,
        .ability = ABILITY_SLOT_1, // rock head
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LUXURY_BALL,
        .slot = 4,
        .moves = {MOVE_BONEMERANG, MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE, MOVE_ACCELEROCK},
    },
        {
        .species = SPECIES_ZANGOOSE,
        .heldItem = ITEM_TOXIC_ORB,
        .ability = ABILITY_HIDDEN, // toxic boost
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_CHERISH_BALL,
        .slot = 5,
        .moves = {MOVE_FACADE, MOVE_KNOCK_OFF, MOVE_BULK_UP, MOVE_EXTREME_SPEED},
    },
    {
        .species = SPECIES_ZANGOOSE,
        .heldItem = ITEM_TOXIC_ORB,
        .ability = ABILITY_HIDDEN, // toxic boost
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_CHERISH_BALL,
        .slot = 5,
        .moves = {MOVE_FACADE, MOVE_DRAIN_PUNCH, MOVE_POWER_UP_PUNCH, MOVE_EXTREME_SPEED},
    },
    {
        .species = SPECIES_ZANGOOSE,
        .heldItem = ITEM_TOXIC_ORB,
        .ability = ABILITY_HIDDEN, // toxic boost
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_CHERISH_BALL,
        .slot = 5,
        .moves = {MOVE_FACADE, MOVE_THUNDER_PUNCH, MOVE_TAUNT, MOVE_SUCKER_PUNCH},
    },
};

static const struct TrainerMon sParty_TD_1_Elite[] = {
    {
        .species = SPECIES_LUNATONE,
        .heldItem = ITEM_THERMOSTAT,
        .ability = ABILITY_HIDDEN, // drizzle
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CALM,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_MOON_BALL,
        .slot = 0,
        .moves = {MOVE_POWER_GEM, MOVE_SCALD, MOVE_PSYCHIC, MOVE_CALM_MIND},
    },
    {
        .species = SPECIES_SEAKING,
        .heldItem = ITEM_LUM_BERRY,
        .ability = ABILITY_HIDDEN, // swift swim
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DIVE_BALL,
        .slot = 1,
        .moves = {MOVE_FISHIOUS_REND, MOVE_PLUCK, MOVE_POISON_JAB, MOVE_FLIP_TURN},
    },
    {
        .species = SPECIES_SEAKING,
        .heldItem = ITEM_SHELL_BELL,
        .ability = ABILITY_SLOT_2, // water veil
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DIVE_BALL,
        .slot = 1,
        .moves = {MOVE_FISHIOUS_REND, MOVE_AQUA_JET, MOVE_HORN_LEECH, MOVE_AQUA_RING},
    },
    {
        .species = SPECIES_WHISCASH,
        .heldItem = ITEM_KINGS_ROCK,
        .ability = ABILITY_HIDDEN, // rain dish
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_REPEAT_BALL,
        .slot = 2,
        .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_SPARK, MOVE_WATERFALL},
    },
    {
        .species = SPECIES_MASQUERAIN,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_HIDDEN, // rain dish
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_NET_BALL,
        .slot = 2,
        .moves = {MOVE_BUG_BUZZ, MOVE_QUIVER_DANCE, MOVE_AIR_CUTTER, MOVE_GIGA_DRAIN},
    },
    {
        .species = SPECIES_FEAROW,
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_SLOT_1, // lightning rod
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FAST_BALL,
        .slot = 3,
        .moves = {MOVE_BOLT_BEAK, MOVE_DRILL_RUN, MOVE_DRILL_PECK, MOVE_NIGHT_SLASH},
    },
    {
        .species = SPECIES_FEAROW,
        .heldItem = ITEM_WIND_CHIMES,
        .ability = ABILITY_SLOT_2, // opression
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FAST_BALL,
        .slot = 3,
        .moves = {MOVE_ROOST, MOVE_TAILWIND, MOVE_DRILL_PECK, MOVE_KNOCK_OFF},
    },
    {
        .species = SPECIES_BRELOOM,
        .heldItem = ITEM_PLATE_MAIL,
        .ability = ABILITY_HIDDEN, // technician
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FRIEND_BALL,
        .slot = 4,
        .moves = {MOVE_MACH_PUNCH, MOVE_SPORE, MOVE_GRASSY_GLIDE, MOVE_GRASSY_TERRAIN},
    },
    {
        .species = SPECIES_ELDEGOSS,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SLOT_2, // regenerator
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CALM,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FRIEND_BALL,
        .slot = 4,
        .moves = {MOVE_LEAF_STORM, MOVE_SPORE, MOVE_AROMATHERAPY, MOVE_U_TURN},
    },
    {
        .species = SPECIES_SEVIPER,
        .heldItem = ITEM_HOURGLASS,
        .ability = ABILITY_HIDDEN, // infiltrator
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DUSK_BALL,
        .slot = 5,
        .moves = {MOVE_COIL, MOVE_AQUA_TAIL, MOVE_POISON_JAB, MOVE_SUCKER_PUNCH},
    },
    {
        .species = SPECIES_SEVIPER,
        .heldItem = ITEM_WISE_GLASSES,
        .ability = ABILITY_HIDDEN, // infiltrator
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LUXURY_BALL,
        .slot = 5,
        .moves = {MOVE_SLUDGE_WAVE, MOVE_FLAMETHROWER, MOVE_DARK_PULSE, MOVE_NUZZLE},
    },
};

// defense
static const struct TrainerMon sParty_TD_2_Intro[] = {
    {
        .species = SPECIES_GOLBAT,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_HIDDEN, // regenerator 
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_BEAST_BALL,
        .slot = 0,
        .moves = {MOVE_U_TURN, MOVE_AERIAL_ACE, MOVE_CROSS_POISON, MOVE_GIGA_DRAIN},
    },
    {
        .species = SPECIES_VENOMOTH,
        .heldItem = ITEM_BLACK_SLUDGE,
        .ability = ABILITY_SLOT_1, // shield dust
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_NET_BALL,
        .slot = 0,
        .moves = {MOVE_SILVER_WIND, MOVE_U_TURN, MOVE_PROTECT, MOVE_SLUDGE_WAVE},
    },
    {
        .species = SPECIES_DUGTRIO_ALOLAN,
        .heldItem = ITEM_POWER_HERB,
        .ability = ABILITY_SLOT_2, // tangling hair
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FAST_BALL,
        .slot = 1,
        .moves = {MOVE_TRI_ATTACK, MOVE_DIG, MOVE_IRON_HEAD, MOVE_PURSUIT},
    },
    {
        .species = SPECIES_CAMERUPT,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SLOT_1, // magma armor
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_SPORT_BALL,
        .slot = 1,
        .moves = {MOVE_EARTH_POWER, MOVE_FLAMETHROWER, MOVE_ANCIENT_POWER, MOVE_PROTECT},
    },
    {
        .species = SPECIES_CHIMECHO,
        .heldItem = ITEM_TRIFORCE,
        .ability = ABILITY_SLOT_1, // levitate
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_PREMIER_BALL,
        .slot = 2,
        .moves = {MOVE_EXTRASENSORY, MOVE_HEAL_BELL, MOVE_HEAL_PULSE, MOVE_YAWN},
    },
    {
        .species = SPECIES_XATU,
        .heldItem = ITEM_LIGHT_CLAY,
        .ability = ABILITY_HIDDEN, // magic bounce
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DREAM_BALL,
        .slot = 2,
        .moves = {MOVE_EXTRASENSORY, MOVE_AIR_SLASH, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
    },
    {
        .species = SPECIES_THROH,
        .heldItem = ITEM_MUSCLE_BAND,
        .ability = ABILITY_SLOT_1, // levitate
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_GREAT_BALL,
        .slot = 3,
        .moves = {MOVE_MAT_BLOCK, MOVE_VITAL_THROW, MOVE_POWER_UP_PUNCH, MOVE_FIRE_PUNCH},
    },
    {
        .species = SPECIES_SAWK,
        .heldItem = ITEM_FIGY_BERRY,
        .ability = ABILITY_SLOT_1, // levitate
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_ULTRA_BALL,
        .slot = 3,
        .moves = {MOVE_SKY_UPPERCUT, MOVE_BULK_UP, MOVE_QUICK_GUARD, MOVE_THUNDER_PUNCH},
    },
    {
        .species = SPECIES_SCRAFTY,
        .heldItem = ITEM_HOURGLASS,
        .ability = ABILITY_HIDDEN, // intimidate
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_POKE_BALL,
        .slot = 4,
        .moves = {MOVE_FAKE_OUT, MOVE_ICE_PUNCH, MOVE_ROCK_SLIDE, MOVE_CRUNCH},
    },
    {
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_HOURGLASS,
        .ability = ABILITY_SLOT_1, // intimidate
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_PARK_BALL,
        .slot = 4,
        .moves = {MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_TRIPLE_AXEL, MOVE_TRIPLE_KICK},
    },
    {
        .species = SPECIES_ROTOM,
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ability = ABILITY_SLOT_1, // levitate
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CALM,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_TIMER_BALL,
        .slot = 5,
        .moves = {MOVE_HEX, MOVE_DISCHARGE, MOVE_THUNDERBOLT, MOVE_CONFUSE_RAY},
    },
};

// sand
static const struct TrainerMon sParty_TD_2_Mid[] = {
    {
        .species = SPECIES_DIGGERSBY,
        .heldItem = ITEM_THERMOSTAT,
        .ability = ABILITY_SLOT_1, // sand stream
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_POKE_BALL,
        .slot = 0,
        .moves = {MOVE_BULLDOZE, MOVE_DOUBLE_EDGE, MOVE_KNOCK_OFF, MOVE_FOLLOW_ME},
    },
    {
        .species = SPECIES_LYCANROC,
        .heldItem = ITEM_LUM_BERRY,
        .ability = ABILITY_SLOT_2, // sand rush
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_QUICK_BALL,
        .slot = 1,
        .moves = {MOVE_ROCK_SLIDE, MOVE_U_TURN, MOVE_FIRE_FANG, MOVE_ACCELEROCK},
    },
    {
        .species = SPECIES_PILOSWINE,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_HIDDEN, // sand rush
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_REPEAT_BALL,
        .slot = 1,
        .moves = {MOVE_BODY_PRESS, MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_ICE_SHARD},
    },
    {
        .species = SPECIES_GLIGAR,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_SLOT_2, // sand veil
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LEVEL_BALL,
        .slot = 2,
        .moves = {MOVE_DUAL_WINGBEAT, MOVE_BULLDOZE, MOVE_ROOST, MOVE_SUBSTITUTE},
    },
    {
        .species = SPECIES_GABITE,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_SLOT_2, // sand veil
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DIVE_BALL,
        .slot = 2,
        .moves = {MOVE_DUAL_WINGBEAT, MOVE_BULLDOZE, MOVE_ROOST, MOVE_POISON_JAB},
    },
    {
        .species = SPECIES_QUILLADIN,
        .heldItem = ITEM_HOURGLASS,
        .ability = ABILITY_HIDDEN, // overcoat
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CAREFUL,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_SAFARI_BALL,
        .slot = 3,
        .moves = {MOVE_SPIKY_SHIELD, MOVE_SEED_BOMB, MOVE_BULK_UP, MOVE_PAIN_SPLIT},
    },
    {
        .species = SPECIES_ZWEILOUS,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_SLOT_1, // overcoat
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CAREFUL,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DUSK_BALL,
        .slot = 3,
        .moves = {MOVE_SNARL, MOVE_FOLLOW_ME, MOVE_DRAGON_RAGE, MOVE_WIDE_GUARD},
    },
    {
        .species = SPECIES_MR_MIME,
        .heldItem = ITEM_UTILITY_UMBRELLA,
        .ability = ABILITY_SLOT_1, // screen cleaner
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CAREFUL,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAL_BALL,
        .slot = 4,
        .moves = {MOVE_MAGICAL_LEAF, MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_ICY_WIND},
    },
    {
        .species = SPECIES_GRUMPIG,
        .heldItem = ITEM_UTILITY_UMBRELLA,
        .ability = ABILITY_SLOT_1, // thick fat
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_MOON_BALL,
        .slot = 4,
        .moves = {MOVE_FOUL_PLAY, MOVE_PSYCHIC, MOVE_ALLY_SWITCH, MOVE_SIMPLE_BEAM},
    },
    {
        .species = SPECIES_CLEFABLE,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_HIDDEN, // magic guard
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LOVE_BALL,
        .slot = 5,
        .moves = {MOVE_PROTECT, MOVE_PSYSHOCK, MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM},
    },
    {
        .species = SPECIES_CLEFABLE,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_HIDDEN, // magic guard
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LOVE_BALL,
        .slot = 5,
        .moves = {MOVE_PROTECT, MOVE_AURA_SPHERE, MOVE_ICE_BEAM, MOVE_DAZZLING_GLEAM},
    },
        {
        .species = SPECIES_CLEFABLE,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_HIDDEN, // magic guard
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LOVE_BALL,
        .slot = 5,
        .moves = {MOVE_PROTECT, MOVE_ICY_WIND, MOVE_FLAMETHROWER, MOVE_MOONBLAST},
    },
};

// hail
static const struct TrainerMon sParty_TD_2_Elite[] = {
    {
        .species = SPECIES_FROSMOTH,
        .heldItem = ITEM_THERMOSTAT,
        .ability = ABILITY_SLOT_2, // snow warning
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_REPEAT_BALL,
        .slot = 0,
        .moves = {MOVE_ICY_WIND, MOVE_BUG_BUZZ, MOVE_AURORA_VEIL, MOVE_QUIVER_DANCE},
    },
    {
        .species = SPECIES_SEALEO,
        .heldItem = ITEM_TRIFORCE,
        .ability = ABILITY_SLOT_2, // ice body
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DIVE_BALL,
        .slot = 1,
        .moves = {MOVE_YAWN, MOVE_MUDDY_WATER, MOVE_ICE_BEAM, MOVE_SNARL},
    },
    {
        .species = SPECIES_GLALIE,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SLOT_2, // ice body
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DUSK_BALL,
        .slot = 1,
        .moves = {MOVE_ICE_SHARD, MOVE_FREEZE_DRY, MOVE_CRUNCH, MOVE_SHADOW_BALL},
    },
    {
        .species = SPECIES_SANDSLASH_ALOLAN,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_HIDDEN, // slush rush
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_SAFARI_BALL,
        .slot = 2,
        .moves = {MOVE_DEFENSE_CURL, MOVE_ICE_BALL, MOVE_METAL_CLAW, MOVE_ICICLE_CRASH},
    },
    {
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_MUSCLE_BAND,
        .ability = ABILITY_HIDDEN, // slush rush
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_GREAT_BALL,
        .slot = 2,
        .moves = {MOVE_THRASH, MOVE_STOMPING_TANTRUM, MOVE_FIRE_PUNCH, MOVE_SKY_UPPERCUT},
    },
    {
        .species = SPECIES_HAKAMO_O,
        .heldItem = ITEM_PLATE_MAIL,
        .ability = ABILITY_SLOT_1, // hyper cutter
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_ULTRA_BALL,
        .slot = 3,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_OUTRAGE, MOVE_THUNDER_PUNCH, MOVE_FOLLOW_ME},
    },
    {
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_LUM_BERRY,
        .ability = ABILITY_SLOT_2, // technician
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FAST_BALL,
        .slot = 3,
        .moves = {MOVE_SURGING_STRIKES, MOVE_DOUBLE_KICK, MOVE_FEINT_ATTACK, MOVE_BREAKING_SWIPE},
    },
    {
        .species = SPECIES_SIGILYPH,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_SLOT_2, // magic guard
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CALM,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAL_BALL,
        .slot = 4,
        .moves = {MOVE_PSYCHIC, MOVE_AIR_SLASH, MOVE_SHADOW_BALL, MOVE_ANCIENT_POWER},
    },
    {
        .species = SPECIES_BRAIXEN,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_HIDDEN, // magic guard
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LOVE_BALL,
        .slot = 4,
        .moves = {MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC, MOVE_HEAT_WAVE},
    },
    {
        .species = SPECIES_VANILLISH,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_HIDDEN, // inversity
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CALM,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAVY_BALL,
        .slot = 5,
        .moves = {MOVE_ICY_WIND, MOVE_FOLLOW_ME, MOVE_POWER_GEM, MOVE_SLACK_OFF},
    },
    {
        .species = SPECIES_ALTARIA,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_SLOT_1, // overcoat
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CALM,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_QUICK_BALL,
        .slot = 5,
        .moves = {MOVE_PERISH_SONG, MOVE_FOLLOW_ME, MOVE_AIR_SLASH, MOVE_DRAGON_PULSE},
    },

};

static const struct TrainerMon sParty_TD_3_Intro[] = {
    {
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BIG_ROOT,
        .ability = ABILITY_HIDDEN, // bull rush
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_QUICK_BALL,
        .slot = 0,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_METEOR_MASH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH},
    },
    {
        .species = SPECIES_SWELLOW,
        .heldItem = ITEM_FLAME_ORB,
        .ability = ABILITY_SLOT_1, // guts
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_NEST_BALL,
        .slot = 0,
        .moves = {MOVE_PROTECT, MOVE_DEFOG, MOVE_FACADE, MOVE_DUAL_WINGBEAT},
    },
    {
        .species = SPECIES_MAGNETON,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_HIDDEN, // levitate
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_TIMER_BALL,
        .slot = 1,
        .moves = {MOVE_FLASH_CANNON, MOVE_TRI_ATTACK, MOVE_RISING_VOLTAGE, MOVE_ELECTRIC_TERRAIN},
    },
    {
        .species = SPECIES_MANECTRIC,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_HIDDEN, // intimidate
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FAST_BALL,
        .slot = 1,
        .moves = {MOVE_HEAT_WAVE, MOVE_AURORA_BEAM, MOVE_MAGICAL_LEAF, MOVE_PARABOLIC_CHARGE},
    },
    {
        .species = SPECIES_CACTURNE,
        .heldItem = ITEM_HEEL_COVER,
        .ability = ABILITY_HIDDEN, // water absorb
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_SAFARI_BALL,
        .slot = 2,
        .moves = {MOVE_LOW_KICK, MOVE_DARK_PULSE, MOVE_NEEDLE_ARM, MOVE_SUCKER_PUNCH},
    },
    {
        .species = SPECIES_SKUNTANK,
        .heldItem = ITEM_ROCKY_HELMET,
        .ability = ABILITY_SLOT_2, // aftermath
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DUSK_BALL,
        .slot = 2,
        .moves = {MOVE_GUNK_SHOT, MOVE_SUCKER_PUNCH, MOVE_BULK_UP, MOVE_PLAY_ROUGH},
    },
    {
        .species = SPECIES_OCTILLERY,
        .heldItem = ITEM_WEIGHTED_BOOTS,
        .ability = ABILITY_HIDDEN, // moody
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DIVE_BALL,
        .slot = 3,
        .moves = {MOVE_PROTECT, MOVE_OCTAZOOKA, MOVE_ICE_BEAM, MOVE_SIGNAL_BEAM},
    },
    {
        .species = SPECIES_PIDGEOT,
        .heldItem = ITEM_WIND_CHIMES,
        .ability = ABILITY_SLOT_1, // cloud 9
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LEVEL_BALL,
        .slot = 3,
        .moves = {MOVE_TAILWIND, MOVE_AIR_SLASH, MOVE_EXTREME_SPEED, MOVE_HYPER_VOICE},
    },
    {
        .species = SPECIES_MIMIKYU,
        .heldItem = ITEM_TRIFORCE,
        .ability = ABILITY_SLOT_1, // disguise
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAL_BALL,
        .slot = 4,
        .moves = {MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK, MOVE_PAIN_SPLIT},
    },
    {
        .species = SPECIES_LOPUNNY,
        .heldItem = ITEM_SHELL_BELL,
        .ability = ABILITY_HIDDEN, // scarppy
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_PARK_BALL,
        .slot = 4,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_BULK_UP, MOVE_FAKE_OUT, MOVE_EXTREME_SPEED},
    },
    {
        .species = SPECIES_GASTRODON,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_HIDDEN, // water absorb
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_BOLD,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_NET_BALL,
        .slot = 5,
        .moves = {MOVE_EARTH_POWER, MOVE_SCALD, MOVE_BODY_SLAM, MOVE_ICE_BEAM},
    },
        {
        .species = SPECIES_GASTRODON_EAST_SEA,
        .heldItem = ITEM_PLATE_MAIL,
        .ability = ABILITY_HIDDEN, // water absorb
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CALM,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_NET_BALL,
        .slot = 5,
        .moves = {MOVE_EARTH_POWER, MOVE_SCALD, MOVE_POWER_GEM, MOVE_RECOVER},
    },
};

static const struct TrainerMon sParty_TD_3_Early[] = {
    {
        .species = SPECIES_KLEFKI,
        .heldItem = ITEM_LIGHT_CLAY,
        .ability = ABILITY_HIDDEN, // magic bounce
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CAREFUL,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAVY_BALL,
        .slot = 0,
        .moves = {MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_ANCHOR_SHOT, MOVE_AQUA_RING},
    },
    {
        .species = SPECIES_FORRETRESS,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_SLOT_1, // sturdy
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAVY_BALL,
        .slot = 0,
        .moves = {MOVE_STEALTH_ROCK, MOVE_SPIKES, MOVE_GYRO_BALL, MOVE_RAPID_SPIN},
    },
    {
        .species = SPECIES_CINCCINO,
        .heldItem = ITEM_PROTECTIVE_PADS,
        .ability = ABILITY_HIDDEN, // skill link
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LOVE_BALL,
        .slot = 1,
        .moves = {MOVE_TAIL_SLAP, MOVE_ROCK_BLAST, MOVE_BULLET_SEED, MOVE_FAKE_OUT},
    },
    {
        .species = SPECIES_BEEDRILL,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SLOT_1, // Skill link
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_NET_BALL,
        .slot = 1,
        .moves = {MOVE_FELL_STINGER, MOVE_BULLET_SEED, MOVE_SPIKE_CANNON, MOVE_ICICLE_SPEAR},
    },
    {
        .species = SPECIES_HYPNO,
        .heldItem = ITEM_WEIGHTED_BOOTS,
        .ability = ABILITY_HIDDEN, // d crown
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CALM,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_GREAT_BALL,
        .slot = 2,
        .moves = {MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_REFLECT},
    },
    {
        .species = SPECIES_TORKOAL,
        .heldItem = ITEM_WEIGHTED_BOOTS,
        .ability = ABILITY_HIDDEN, // d shield
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_POKE_BALL,
        .slot = 2,
        .moves = {MOVE_BULK_UP, MOVE_HEAT_CRASH, MOVE_BODY_PRESS, MOVE_LIGHT_SCREEN},
    },
    {
        .species = SPECIES_RAICHU,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SLOT_1, // static shock
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_ULTRA_BALL,
        .slot = 3,
        .moves = {MOVE_FAKE_OUT, MOVE_PLASMA_FISTS, MOVE_EXTREME_SPEED, MOVE_PLAY_ROUGH},
    },
    {
        .species = SPECIES_RAICHU_ALOLAN,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SLOT_2, // lightning rod
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_ULTRA_BALL,
        .slot = 3,
        .moves = {MOVE_FAKE_OUT, MOVE_THUNDERBOLT, MOVE_AURA_SPHERE, MOVE_PSYSHOCK},
    },
    {
        .species = SPECIES_JELLICENT,
        .heldItem = ITEM_BIG_ROOT,
        .ability = ABILITY_SLOT_2, // water abosrb
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_ULTRA_BALL,
        .slot = 4,
        .moves = {MOVE_PAIN_SPLIT, MOVE_SCALD, MOVE_HEX, MOVE_GIGA_DRAIN},
    },
        {
        .species = SPECIES_LANTURN,
        .heldItem = ITEM_AIR_BALLOON,
        .ability = ABILITY_SLOT_1, // illuminate
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DIVE_BALL,
        .slot = 4,
        .moves = {MOVE_PARABOLIC_CHARGE, MOVE_AQUA_RING, MOVE_ICE_BEAM, MOVE_SIGNAL_BEAM},
    },
    {
        .species = SPECIES_STARAPTOR,
        .heldItem = ITEM_SHELL_BELL,
        .ability = ABILITY_SLOT_1, // intimidate
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_REPEAT_BALL,
        .slot = 5,
        .moves = {MOVE_U_TURN, MOVE_ROOST, MOVE_DUAL_WINGBEAT, MOVE_DOUBLE_EDGE},
    },
};

// terrain mixture
static const struct TrainerMon sParty_TD_3_Late[] = {
    {
        .species = SPECIES_GRANBULL,
        .heldItem = ITEM_PLATE_MAIL,
        .ability = ABILITY_SLOT_1, // musty surge
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DREAM_BALL,
        .slot = 0,
        .moves = {MOVE_PLAY_ROUGH, MOVE_SKY_UPPERCUT, MOVE_DARKEST_LARIAT, MOVE_U_TURN},
    },
    {
        .species = SPECIES_GIRAFARIG,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_SLOT_1, // psychic surge
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LUXURY_BALL,
        .slot = 0,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_PSYSHOCK, MOVE_DARK_PULSE, MOVE_SHADOW_BALL},
    },
    {
        .species = SPECIES_EMOLGA,
        .heldItem = ITEM_LUM_BERRY,
        .ability = ABILITY_SLOT_1, // electric surge
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FAST_BALL,
        .slot = 0,
        .moves = {MOVE_OBLIVION_WING, MOVE_VOLT_SWITCH, MOVE_NUZZLE, MOVE_ROOST},
    },
    {
        .species = SPECIES_TROPIUS,
        .heldItem = ITEM_POWER_HERB,
        .ability = ABILITY_SLOT_1, // grassy surge
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FRIEND_BALL,
        .slot = 0,
        .moves = {MOVE_TAILWIND, MOVE_ROOST, MOVE_SOLAR_BEAM, MOVE_AIR_SLASH},
    },
    {
        .species = SPECIES_EXPLOUD,
        .heldItem = ITEM_METRONOME,
        .ability = ABILITY_SLOT_1, // oppression
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_ULTRA_BALL,
        .slot = 1,
        .moves = {MOVE_TERRAIN_PULSE, MOVE_HYPER_VOICE, MOVE_HEAL_BELL, MOVE_FLAMETHROWER},
    },
    {
        .species = SPECIES_EXPLOUD,
        .heldItem = ITEM_METRONOME,
        .ability = ABILITY_SLOT_1, // oppression
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_ULTRA_BALL,
        .slot = 1,
        .moves = {MOVE_TERRAIN_PULSE, MOVE_HYPER_VOICE, MOVE_HEAL_BELL, MOVE_ICE_BEAM},
    },
    {
        .species = SPECIES_EXPLOUD,
        .heldItem = ITEM_METRONOME,
        .ability = ABILITY_SLOT_1, // oppression
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_ULTRA_BALL,
        .slot = 1,
        .moves = {MOVE_TERRAIN_PULSE, MOVE_HYPER_VOICE, MOVE_HEAL_BELL, MOVE_THUNDERBOLT},
    },
    {
        .species = SPECIES_EXPLOUD,
        .heldItem = ITEM_METRONOME,
        .ability = ABILITY_SLOT_1, // oppression
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_ULTRA_BALL,
        .slot = 1,
        .moves = {MOVE_TERRAIN_PULSE, MOVE_HYPER_VOICE, MOVE_HEAL_BELL, MOVE_DAZZLING_GLEAM},
    },
    {
        .species = SPECIES_EXPLOUD,
        .heldItem = ITEM_METRONOME,
        .ability = ABILITY_SLOT_1, // oppression
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_ULTRA_BALL,
        .slot = 1,
        .moves = {MOVE_TERRAIN_PULSE, MOVE_HYPER_VOICE, MOVE_HEAL_BELL, MOVE_SURF},
    },
    {
        .species = SPECIES_EXPLOUD,
        .heldItem = ITEM_METRONOME,
        .ability = ABILITY_SLOT_1, // oppression
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_ULTRA_BALL,
        .slot = 1,
        .moves = {MOVE_TERRAIN_PULSE, MOVE_HYPER_VOICE, MOVE_HEAL_BELL, MOVE_SHADOW_BALL},
    },
    {
        .species = SPECIES_HUNTAIL,
        .heldItem = ITEM_MUSCLE_BAND,
        .ability = ABILITY_SLOT_2, // moody
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DUSK_BALL,
        .slot = 2,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_BATON_PASS, MOVE_COIL, MOVE_LIQUIDATION},
    },
    {
        .species = SPECIES_GOREBYSS,
        .heldItem = ITEM_WISE_GLASSES,
        .ability = ABILITY_SLOT_2, // moody
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LOVE_BALL,
        .slot = 2,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_BATON_PASS, MOVE_QUIVER_DANCE, MOVE_SURF},
    },
    {
        .species = SPECIES_TURTONATOR,
        .heldItem = ITEM_WISE_GLASSES,
        .ability = ABILITY_HIDDEN, // d shield
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LURE_BALL,
        .slot = 3,
        .moves = {MOVE_DRAGON_PULSE, MOVE_SLACK_OFF, MOVE_FLAMETHROWER, MOVE_FLASH_CANNON},
    },
    {
        .species = SPECIES_COMFEY,
        .heldItem = ITEM_WISE_GLASSES,
        .ability = ABILITY_HIDDEN, // d crown
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DREAM_BALL,
        .slot = 3,
        .moves = {MOVE_AROMATHERAPY, MOVE_GRASS_KNOT, MOVE_SYNTHESIS, MOVE_MOONBLAST},
    },
    {
        .species = SPECIES_RUNERIGUS,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_SLOT_2, // oppression
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_MOON_BALL,
        .slot = 4,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_BATON_PASS, MOVE_QUIVER_DANCE, MOVE_SURF},
    },
    {
        .species = SPECIES_TAUROS,
        .heldItem = ITEM_PROTECTIVE_PADS,
        .ability = ABILITY_HIDDEN, // killing spree
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_TIMER_BALL,
        .slot = 5,
        .moves = {MOVE_GIGA_IMPACT, MOVE_THRASH, MOVE_STOMPING_TANTRUM, MOVE_ZEN_HEADBUTT},
    },
};

// keep slots equal 1-4
// ace 0 and 5
static const struct TrainerMon sParty_TD_3_Elite[] = {
    {
        .species = SPECIES_SKARMORY,
        .heldItem = ITEM_WIND_CHIMES,
        .ability = ABILITY_HIDDEN, // gift of wind
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAVY_BALL,
        .slot = 0,
        .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_ROOST, MOVE_BODY_PRESS},
    },
    {
        .species = SPECIES_ELECTRODE,
        .heldItem = ITEM_WISE_GLASSES,
        .ability = ABILITY_SLOT_2, // tehcnician
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_MODEST, // timid seems like overkill
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_POKE_BALL,
        .slot = 1,
        .moves = {MOVE_CHARGE_BEAM, MOVE_WEATHER_BALL, MOVE_VACUUM_WAVE, MOVE_MUD_SHOT},
    },
    {
        .species = SPECIES_SALAZZLE,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_HIDDEN, // propeller tail
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID, 
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LOVE_BALL,
        .slot = 1,
        .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE, MOVE_SLUDGE_BOMB, MOVE_TOXIC},
    },
    {
        .species = SPECIES_AMBIPOM,
        .heldItem = ITEM_MUSCLE_BAND,
        .ability = ABILITY_HIDDEN, // skill link
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY, 
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_PARK_BALL,
        .slot = 2,
        .moves = {MOVE_DUAL_CHOP, MOVE_TAIL_SLAP, MOVE_ARM_THRUST, MOVE_CLAMP},
    },
    {
        .species = SPECIES_SCOLIPEDE,
        .heldItem = ITEM_SCOPE_LENS,
        .ability = ABILITY_HIDDEN, // super luck
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY, 
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_CHERISH_BALL,
        .slot = 2,
        .moves = {MOVE_ATTACK_ORDER, MOVE_CROSS_POISON, MOVE_HORN_LEECH, MOVE_FOCUS_ENERGY},
    },
    {
        .species = SPECIES_LUDICOLO,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_SLOT_1, // storm drain
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CALM, 
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_NET_BALL,
        .slot = 3,
        .moves = {MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_FAKE_OUT, MOVE_ICE_BEAM},
    },
    {
        .species = SPECIES_MANTINE,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_SLOT_2, // water absorb
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CALM, 
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_GREAT_BALL,
        .slot = 3,
        .moves = {MOVE_OBLIVION_WING, MOVE_SCALD, MOVE_BREAKING_SWIPE, MOVE_SUBSTITUTE},
    },
    {
        .species = SPECIES_LURANTIS,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_SLOT_2, // oppression
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT, 
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAL_BALL,
        .slot = 4,
        .moves = {MOVE_PETAL_BLIZZARD, MOVE_X_SCISSOR, MOVE_INGRAIN, MOVE_AROMATHERAPY},
    },
    {
        .species = SPECIES_FROSMOTH,
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_SLOT_1, // shield dust
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST, 
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_NEST_BALL,
        .slot = 4,
        .moves = {MOVE_BUG_BUZZ, MOVE_QUIVER_DANCE, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN},
    },
    {
        .species = SPECIES_SLOWBRO_GALARIAN,
        .heldItem = ITEM_TRIFORCE,
        .ability = ABILITY_SLOT_1, // quickdraw
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_BEAST_BALL,
        .slot = 5,
        .moves = {MOVE_SHELL_SIDE_ARM, MOVE_SURF, MOVE_SLACK_OFF, MOVE_ZEN_HEADBUTT},
    },
};
    
static const struct TrainerMon sParty_TD_4_Intro[] = {
    {
        .species = SPECIES_VESPIQUEN,
        .heldItem = ITEM_HOURGLASS,
        .ability = ABILITY_SLOT_2, // holy aura
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_NEST_BALL,
        .slot = 0,
        .moves = {MOVE_ATTACK_ORDER, MOVE_HEAL_ORDER, MOVE_DEFEND_ORDER, MOVE_DUAL_WINGBEAT},
    },
    {
        .species = SPECIES_MILTANK,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_SLOT_2, // enchanting
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LOVE_BALL,
        .slot = 0,
        .moves = {MOVE_COACHING, MOVE_BODY_SLAM, MOVE_HEAL_BELL, MOVE_MILK_DRINK},
    },
    {
        .species = SPECIES_WEEZING,
        .heldItem = ITEM_TOXIC_ORB,
        .ability = ABILITY_SLOT_2, // poison heal
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_BOLD,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_CHERISH_BALL,
        .slot = 0,
        .moves = {MOVE_PAIN_SPLIT, MOVE_TOXIC, MOVE_SLUDGE_BOMB, MOVE_KNOCK_OFF},
    },
    {
        .species = SPECIES_VILEPLUME,
        .heldItem = ITEM_BIG_ROOT,
        .ability = ABILITY_SLOT_1, // natural cure
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CALM,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_POKE_BALL,
        .slot = 1,
        .moves = {MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_HELPING_HAND, MOVE_STRENGTH_SAP},
    },
    {
        .species = SPECIES_BELLOSSOM,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_SLOT_2, // brilliant (leaf storm)
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CALM,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_GREAT_BALL,
        .slot = 1,
        .moves = {MOVE_FIERY_DANCE, MOVE_LEAF_STORM, MOVE_DAZZLING_GLEAM, MOVE_POLLEN_PUFF},
    },
    {
        .species = SPECIES_JUMPLUFF,
        .heldItem = ITEM_HEEL_COVER,
        .ability = ABILITY_HIDDEN, // infiltrator
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_PACIFIST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_ULTRA_BALL,
        .slot = 1,
        .moves = {MOVE_LEECH_SEED, MOVE_RAGE_POWDER, MOVE_SYNTHESIS, MOVE_SLEEP_POWDER},
    },
    {
        .species = SPECIES_MAGMAR,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_SLOT_2, // blaze
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_CHERISH_BALL,
        .slot = 2,
        .moves = {MOVE_HEAT_WAVE, MOVE_FIRE_BLAST, MOVE_THUNDER_PUNCH, MOVE_AURA_SPHERE},
    },
    {
        .species = SPECIES_ELECTABUZZ,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_SLOT_2, // transistor
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_PARK_BALL,
        .slot = 2,
        .moves = {MOVE_DISCHARGE, MOVE_THUNDER, MOVE_FIRE_PUNCH, MOVE_DRAIN_PUNCH},
    },
    {
        .species = SPECIES_MISMAGIUS,
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ability = ABILITY_SLOT_2, // battery
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_MOON_BALL,
        .slot = 3,
        .moves = {MOVE_MOONBLAST, MOVE_SHADOW_BALL, MOVE_POWER_GEM, MOVE_NIGHT_SHADE},
    },
    {
        .species = SPECIES_DREDNAW,
        .heldItem = ITEM_SHELL_BELL,
        .ability = ABILITY_HIDDEN, // power spot
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DIVE_BALL,
        .slot = 3,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_RAZOR_SHELL, MOVE_CRUNCH},
    },
    {
        .species = SPECIES_APPLETUN,
        .heldItem = ITEM_FIGY_BERRY,
        .ability = ABILITY_SLOT_2, // gluttony
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_SAFARI_BALL,
        .slot = 4,
        .moves = {MOVE_APPLE_ACID, MOVE_WITHDRAW, MOVE_RECOVER, MOVE_DRAGON_PULSE},
    },
    {
        .species = SPECIES_FLAPPLE,
        .heldItem = ITEM_LUM_BERRY,
        .ability = ABILITY_HIDDEN, // HUSTLE
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_SAFARI_BALL,
        .slot = 4,
        .moves = {MOVE_DRAGON_DANCE, MOVE_DRAGON_CLAW, MOVE_GRAV_APPLE, MOVE_ACROBATICS},
    },
    {
        .species = SPECIES_SPIRITOMB,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_SLOT_1, // shadow tag
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DUSK_BALL,
        .slot = 5,
        .moves = {MOVE_SWORDS_DANCE, MOVE_PROTECT, MOVE_SHADOW_SNEAK, MOVE_SUCKER_PUNCH},
    },
};

// normalish bad guy mons
static const struct TrainerMon sParty_TD_4_Early[] = {
    {
        .species = SPECIES_HEATMOR,
        .heldItem = ITEM_LUM_BERRY,
        .ability = ABILITY_SLOT_2, // flash fire
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_CHERISH_BALL,
        .slot = 0,
        .moves = {MOVE_HEAT_WAVE, MOVE_BUG_BUZZ, MOVE_REST, MOVE_SLEEP_TALK},
    },
    {
        .species = SPECIES_CAMERUPT,
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ability = ABILITY_SLOT_2, // solid rock
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_POKE_BALL,
        .slot = 0,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_LAVA_PLUME, MOVE_YAWN},
    },
    {
        .species = SPECIES_MUK,
        .heldItem = ITEM_AIR_BALLOON,
        .ability = ABILITY_HIDDEN, // poison touch
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CAREFUL,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_ULTRA_BALL,
        .slot = 1,
        .moves = {MOVE_POISON_JAB, MOVE_KNOCK_OFF, MOVE_DRAIN_PUNCH, MOVE_PROTECT},
    },
    {
        .species = SPECIES_GOLBAT,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_SLOT_2, // vampire 
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FAST_BALL,
        .slot = 1,
        .moves = {MOVE_CRUNCH, MOVE_DUAL_WINGBEAT, MOVE_POISON_FANG, MOVE_THUNDER_FANG},
    },
    {
        .species = SPECIES_SWALOT,
        .heldItem = ITEM_PLATE_MAIL,
        .ability = ABILITY_SLOT_1, // liquid ooze 
        .evs = EV_SPREAD_TANKY_DEF,
        .nature = NATURE_IMPISH,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FAST_BALL,
        .slot = 1,
        .moves = {MOVE_GUNK_SHOT, MOVE_AMNESIA, MOVE_TOXIC, MOVE_BODY_SLAM},
    },
    {
        .species = SPECIES_BOLTUND,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_HIDDEN, // competitive
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_PARK_BALL,
        .slot = 2,
        .moves = {MOVE_THUNDERBOLT, MOVE_CHARM, MOVE_SNARL, MOVE_VOLT_SWITCH},
    },

    {
        .species = SPECIES_MIGHTYENA,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SLOT_1, // intimidate
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_BEAST_BALL,
        .slot = 3,
        .moves = {MOVE_SNARL, MOVE_PLAY_ROUGH, MOVE_HOWL, MOVE_CRUNCH},
    },
    {
        .species = SPECIES_MIGHTYENA,
        .heldItem = ITEM_MUSCLE_BAND,
        .ability = ABILITY_HIDDEN, // shadow shield
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_BEAST_BALL,
        .slot = 3,
        .moves = {MOVE_TAUNT, MOVE_PLAY_ROUGH, MOVE_PURSUIT, MOVE_SUCKER_PUNCH},
    },
    {
        .species = SPECIES_ESCAVALIER,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_SLOT_2, // shell armor
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAVY_BALL,
        .slot = 4,
        .moves = {MOVE_IRON_HEAD, MOVE_PROTECT, MOVE_LUNGE, MOVE_FLAIL},
    },
    {
        .species = SPECIES_ACCELGOR,
        .heldItem = ITEM_WISE_GLASSES,
        .ability = ABILITY_HIDDEN, // sheer force
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_FAST_BALL,
        .slot = 4,
        .moves = {MOVE_BUG_BUZZ, MOVE_NIGHT_DAZE, MOVE_ENCORE, MOVE_WATER_SHURIKEN},
    },
    {
        .species = SPECIES_PANGORO,
        .heldItem = ITEM_TRIFORCE,
        .ability = ABILITY_SLOT_2, // mold breaker
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CAREFUL,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DUSK_BALL,
        .slot = 5,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_WICKED_BLOW, MOVE_PARTING_SHOT},
    },
};

static const struct TrainerMon sParty_TD_4_Late[] = {
    {
        .species = SPECIES_SIMISAGE,
        .heldItem = ITEM_TRIFORCE,
        .ability = ABILITY_HIDDEN, // overgrow
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_ULTRA_BALL,
        .slot = 0,
        .moves = {MOVE_GRASS_PLEDGE, MOVE_INGRAIN, MOVE_TAUNT, MOVE_CRUNCH},
    },
    {
        .species = SPECIES_SIMISEAR,
        .heldItem = ITEM_TRIFORCE,
        .ability = ABILITY_HIDDEN, // blzae
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_GREAT_BALL,
        .slot = 0,
        .moves = {MOVE_FIRE_PLEDGE, MOVE_FIRE_SPIN, MOVE_TAUNT, MOVE_CRUNCH},
    },
    {
        .species = SPECIES_SIMIPOUR,
        .heldItem = ITEM_TRIFORCE,
        .ability = ABILITY_HIDDEN, // torrent
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_POKE_BALL,
        .slot = 0,
        .moves = {MOVE_WATER_PLEDGE, MOVE_AQUA_RING, MOVE_TAUNT, MOVE_CRUNCH},
    },
    {
        .species = SPECIES_ROTOM,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SLOT_1, // levitate
        .evs = EV_SPREAD_SPREAD,
        .nature = NATURE_SERIOUS,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_PARK_BALL,
        .slot = 1,
        .moves = {MOVE_WATER_PLEDGE, MOVE_FIRE_PLEDGE, MOVE_GRASS_PLEDGE, MOVE_THUNDERBOLT},
    },
    {
        .species = SPECIES_RELICANTH,
        .heldItem = ITEM_HEEL_COVER,
        .ability = ABILITY_HIDDEN, // sturdy
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DIVE_BALL,
        .slot = 2,
        .moves = {MOVE_WATERFALL, MOVE_ROCK_SLIDE, MOVE_BULLDOZE, MOVE_YAWN},
    },
        {
        .species = SPECIES_GOLEM,
        .heldItem = ITEM_HEEL_COVER,
        .ability = ABILITY_SLOT_2, // sturdy
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAVY_BALL,
        .slot = 2,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_ROCK_POLISH, MOVE_EXPLOSION},
    },
    {
        .species = SPECIES_ALTARIA,
        .heldItem = ITEM_FIGY_BERRY,
        .ability = ABILITY_SLOT_2, // natural cure
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LOVE_BALL,
        .slot = 3,
        .moves = {MOVE_ROOST, MOVE_AIR_SLASH, MOVE_DRACO_METEOR, MOVE_U_TURN},
    },
    {
        .species = SPECIES_DRAGALGE,
        .heldItem = ITEM_SHELL_BELL,
        .ability = ABILITY_SLOT_1, // poison point, too op otherwise
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_HEAL_BALL,
        .slot = 3,
        .moves = {MOVE_FLIP_TURN, MOVE_SLUDGE_WAVE, MOVE_DRACO_METEOR, MOVE_SCALD},
    },
    {
        .species = SPECIES_CORVIKNIGHT,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_HIDDEN, // mirror armor
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_NET_BALL,
        .slot = 4,
        .moves = {MOVE_DRILL_PECK, MOVE_SCARY_FACE, MOVE_HONE_CLAWS, MOVE_POWER_TRIP},
    },
    {
        .species = SPECIES_HAWLUCHA,
        .heldItem = ITEM_MUSCLE_BAND,
        .ability = ABILITY_SLOT_1, // limber
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_CHERISH_BALL,
        .slot = 4,
        .moves = {MOVE_FLYING_PRESS, MOVE_ENDEAVOR, MOVE_FEATHER_DANCE, MOVE_ROOST},
    },
    {
        .species = SPECIES_KANGASKHAN,
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ability = ABILITY_SLOT_1, // dragons maw
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_SAFARI_BALL,
        .slot = 5,
        .moves = {MOVE_BODY_SLAM, MOVE_DRAGON_DANCE, MOVE_DRAGON_CLAW, MOVE_FAKE_OUT},
    },
    {
        .species = SPECIES_KANGASKHAN,
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ability = ABILITY_SLOT_2, // scrappy
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_SAFARI_BALL,
        .slot = 5,
        .moves = {MOVE_BODY_SLAM, MOVE_POWER_UP_PUNCH, MOVE_DRAIN_PUNCH, MOVE_FAKE_OUT},
    },
};

//idea list

//aroma veil with choice?
// scyther
static const struct TrainerMon sParty_TD_4_Elite[] = {
    {
        .species = SPECIES_SHARPEDO,
        .heldItem = ITEM_PROTECTIVE_PADS,
        .ability = ABILITY_HIDDEN, // gift of wind
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DIVE_BALL,
        .slot = 0,
        .moves = {MOVE_PROTECT, MOVE_WATERFALL, MOVE_CRUNCH, MOVE_TAUNT},
    },
    {
        .species = SPECIES_SCYTHER,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_HIDDEN, // technician
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_NEST_BALL,
        .slot = 1,
        .moves = {MOVE_ROOST, MOVE_BUG_BITE, MOVE_GRASSY_GLIDE, MOVE_DUAL_WINGBEAT},
    },
        {
        .species = SPECIES_TOXICROAK,
        .heldItem = ITEM_MUSCLE_BAND,
        .ability = ABILITY_HIDDEN, // adaptability
        .evs = EV_SPREAD_FAST_ATTACK,
        .nature = NATURE_JOLLY,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_GREAT_BALL,
        .slot = 2,
        .moves = {MOVE_POISON_JAB, MOVE_SUCKER_PUNCH, MOVE_KNOCK_OFF, MOVE_DRAIN_PUNCH},
    },
    {
        .species = SPECIES_VICTREEBEL,
        .heldItem = ITEM_FIGY_BERRY,
        .ability = ABILITY_HIDDEN, // gluttony
        .evs = EV_SPREAD_TANKY_ATTACK,
        .nature = NATURE_ADAMANT,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_POKE_BALL,
        .slot = 2,
        .moves = {MOVE_LEAF_BLADE, MOVE_POISON_JAB, MOVE_SLEEP_POWDER, MOVE_KNOCK_OFF},
    },
    {
        .species = SPECIES_HELIOLISK,
        .heldItem = ITEM_AIR_BALLOON,
        .ability = ABILITY_HIDDEN, // transistor
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_ULTRA_BALL,
        .slot = 3,
        .moves = {MOVE_PARABOLIC_CHARGE, MOVE_HYPER_VOICE, MOVE_BULLDOZE, MOVE_THUNDER_WAVE},
    },
    {
        .species = SPECIES_MANECTRIC,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_SLOT_2, // LIGHTNING_ROD
        .evs = EV_SPREAD_FAST_SPATTACK,
        .nature = NATURE_TIMID,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_MOON_BALL,
        .slot = 3,
        .moves = {MOVE_VOLT_SWITCH, MOVE_HEAT_WAVE, MOVE_THUNDERBOLT, MOVE_ROAR},
    },
    {
        .species = SPECIES_DRIFLOON,
        .heldItem = ITEM_PLATE_MAIL,
        .ability = ABILITY_SLOT_2, // friend guard
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_DUSK_BALL,
        .slot = 4,
        .moves = {MOVE_CALM_MIND, MOVE_SHADOW_BALL, MOVE_AIR_SLASH, MOVE_ALLY_SWITCH},
    },
        {
        .species = SPECIES_GOTHITELLE,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_SLOT_2, // compettitive
        .evs = EV_SPREAD_TANKY_SPATTACK,
        .nature = NATURE_MODEST,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LUXURY_BALL,
        .slot = 4,
        .moves = {MOVE_PSYSHOCK, MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC, MOVE_SHADOW_BALL},
    },

    {
        .species = SPECIES_WHIMSICOTT,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SLOT_1, // prankster
        .evs = EV_SPREAD_TANKY_SPDEF,
        .nature = NATURE_CALM,
        .iv = MAX_PER_STAT_IVS,
        .ball = ITEM_LOVE_BALL,
        .slot = 5,
        .moves = {MOVE_TAILWIND, MOVE_DAZZLING_GLEAM, MOVE_ENCORE, MOVE_TAUNT},
    },
};


// malamar?
//talon flame
// galvantula lead
static const struct TrainerMon sParty_GruntAquaHideout1[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout2[] = {
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_ZUBAT,
    },
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout3[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout4[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern1[] = {
    {
    .iv = 0,
    .lvl = 36,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern2[] = {
    {
    .iv = 0,
    .lvl = 36,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern3[] = {
    {
    .iv = 0,
    .lvl = 36,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_Gabrielle1[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_SEEDOT,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_GruntPetalburgWoods[] = {
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_Marcel[] = {
    {
    .iv = 100,
    .lvl = 29,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 100,
    .lvl = 29,
    .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sParty_Alberto[] = {
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Ed[] = {
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_ZANGOOSE,
    },
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_SEVIPER,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern4[] = {
    {
    .iv = 0,
    .lvl = 36,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Declan[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_GruntRusturfTunnel[] = {
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst1[] = {
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_ZUBAT,
    },
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst2[] = {
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst3[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_ZUBAT,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntMuseum1[] = {
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntMuseum2[] = {
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_ZUBAT,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter1[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMtPyre1[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMtPyre2[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntMtPyre3[] = {
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst4[] = {
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout5[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout6[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_Fredrick[] = {
    {
    .iv = 100,
    .lvl = 30,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = 100,
    .lvl = 30,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Matt[] = {
    {
    .iv = 50,
    .lvl = 34,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 50,
    .lvl = 34,
    .species = SPECIES_GOLBAT,
    }
};

static const struct TrainerMon sParty_Zander[] = {
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_ShellyWeatherInstitute[] = {
    {
    .iv = 50,
    .lvl = 28,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = 50,
    .lvl = 28,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_ShellySeafloorCavern[] = {
    {
    .iv = 100,
    .lvl = 37,
    .species = SPECIES_SHARPEDO,
    },
    {
    .iv = 100,
    .lvl = 37,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Archie[] = {
    {
    .iv = 150,
    .lvl = 41,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 150,
    .lvl = 41,
    .species = SPECIES_CROBAT,
    },
    {
    .iv = 150,
    .lvl = 43,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Leah[] = {
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_SPOINK,
    }
};

static const struct TrainerMon sParty_Daisy[] = {
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Rose1[] = {
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Felix[] = {
    {
    .iv = 0,
    .lvl = 43,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 43,
    .species = SPECIES_CLAYDOL,
    .moves = {MOVE_SKILL_SWAP, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Violet[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_GLOOM,
    }
};

static const struct TrainerMon sParty_Rose2[] = {
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Rose3[] = {
    {
    .iv = 20,
    .lvl = 28,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 20,
    .lvl = 28,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 20,
    .lvl = 28,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Rose4[] = {
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Rose5[] = {
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Dusty1[] = {
    {
    .iv = 50,
    .lvl = 23,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Chip[] = {
    {
    .iv = 50,
    .lvl = 27,
    .species = SPECIES_BALTOY,
    .moves = {MOVE_PSYBEAM, MOVE_SELF_DESTRUCT, MOVE_SANDSTORM, MOVE_ANCIENT_POWER}
    },
    {
    .iv = 50,
    .lvl = 27,
    .species = SPECIES_SANDSHREW,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    },
    {
    .iv = 50,
    .lvl = 27,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Foster[] = {
    {
    .iv = 100,
    .lvl = 25,
    .species = SPECIES_SANDSHREW,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    },
    {
    .iv = 100,
    .lvl = 25,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty2[] = {
    {
    .iv = 60,
    .lvl = 27,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty3[] = {
    {
    .iv = 70,
    .lvl = 30,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty4[] = {
    {
    .iv = 80,
    .lvl = 33,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty5[] = {
    {
    .iv = 90,
    .lvl = 36,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_GabbyAndTy1[] = {
    {
    .iv = 50,
    .lvl = 17,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = 50,
    .lvl = 17,
    .species = SPECIES_WHISMUR,
    }
};

static const struct TrainerMon sParty_GabbyAndTy2[] = {
    {
    .iv = 100,
    .lvl = 27,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = 100,
    .lvl = 27,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_GabbyAndTy3[] = {
    {
    .iv = 150,
    .lvl = 30,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = 150,
    .lvl = 30,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_GabbyAndTy4[] = {
    {
    .iv = 200,
    .lvl = 33,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = 200,
    .lvl = 33,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_GabbyAndTy5[] = {
    {
    .iv = 250,
    .lvl = 36,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = 250,
    .lvl = 36,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_GabbyAndTy6[] = {
    {
    .iv = 250,
    .lvl = 39,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SONIC_BOOM, MOVE_THUNDER_WAVE, MOVE_METAL_SOUND, MOVE_THUNDERBOLT}
    },
    {
    .iv = 250,
    .lvl = 39,
    .species = SPECIES_EXPLOUD,
    .moves = {MOVE_ASTONISH, MOVE_STOMP, MOVE_SUPERSONIC, MOVE_HYPER_VOICE}
    }
};

static const struct TrainerMon sParty_Lola1[] = {
    {
    .iv = 10,
    .lvl = 12,
    .species = SPECIES_AZURILL,
    },
    {
    .iv = 10,
    .lvl = 12,
    .species = SPECIES_AZURILL,
    }
};

static const struct TrainerMon sParty_Austina[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Gwen[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lola2[] = {
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lola3[] = {
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lola4[] = {
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lola5[] = {
    {
    .iv = 40,
    .lvl = 35,
    .species = SPECIES_AZUMARILL,
    },
    {
    .iv = 40,
    .lvl = 35,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Ricky1[] = {
    {
    .iv = 10,
    .lvl = 13,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_SAND_ATTACK, MOVE_HEADBUTT, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Simon[] = {
    {
    .iv = 0,
    .lvl = 12,
    .species = SPECIES_AZURILL,
    },
    {
    .iv = 0,
    .lvl = 12,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Charlie[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Ricky2[] = {
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky3[] = {
    {
    .iv = 20,
    .lvl = 30,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky4[] = {
    {
    .iv = 30,
    .lvl = 33,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky5[] = {
    {
    .iv = 40,
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Randall[] = {
    {
    .iv = 255,
    .lvl = 26,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_QUICK_ATTACK, MOVE_AGILITY, MOVE_WING_ATTACK, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Parker[] = {
    {
    .iv = 255,
    .lvl = 26,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_DIZZY_PUNCH, MOVE_FOCUS_PUNCH, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_George[] = {
    {
    .iv = 255,
    .lvl = 26,
    .species = SPECIES_SLAKOTH,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SLACK_OFF, MOVE_COUNTER, MOVE_SHADOW_BALL, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Berke[] = {
    {
    .iv = 255,
    .lvl = 26,
    .species = SPECIES_VIGOROTH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_ENERGY, MOVE_SLASH, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Braxton[] = {
    {
    .iv = 100,
    .lvl = 28,
    .species = SPECIES_SWELLOW,
    .moves = {MOVE_FOCUS_ENERGY, MOVE_QUICK_ATTACK, MOVE_WING_ATTACK, MOVE_ENDEAVOR}
    },
    {
    .iv = 100,
    .lvl = 28,
    .species = SPECIES_TRAPINCH,
    .moves = {MOVE_BITE, MOVE_DIG, MOVE_FEINT_ATTACK, MOVE_SAND_TOMB}
    },
    {
    .iv = 100,
    .lvl = 28,
    .species = SPECIES_WAILMER,
    .moves = {MOVE_ROLLOUT, MOVE_WHIRLPOOL, MOVE_ASTONISH, MOVE_WATER_PULSE}
    },
    {
    .iv = 100,
    .lvl = 28,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_THUNDERBOLT, MOVE_SUPERSONIC, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM}
    },
    {
    .iv = 100,
    .lvl = 28,
    .species = SPECIES_SHIFTRY,
    .moves = {MOVE_GIGA_DRAIN, MOVE_FEINT_ATTACK, MOVE_DOUBLE_TEAM, MOVE_SWAGGER}
    }
};

static const struct TrainerMon sParty_Vincent[] = {
    {
    .iv = 100,
    .lvl = 44,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = 100,
    .lvl = 44,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = 100,
    .lvl = 44,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Leroy[] = {
    {
    .iv = 100,
    .lvl = 46,
    .species = SPECIES_MAWILE,
    },
    {
    .iv = 100,
    .lvl = 46,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Wilton1[] = {
    {
    .iv = 100,
    .lvl = 17,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = 100,
    .lvl = 17,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 100,
    .lvl = 17,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Edgar[] = {
    {
    .iv = 100,
    .lvl = 43,
    .species = SPECIES_CACTURNE,
    },
    {
    .iv = 100,
    .lvl = 43,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Albert[] = {
    {
    .iv = 100,
    .lvl = 43,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = 100,
    .lvl = 43,
    .species = SPECIES_MUK,
    }
};

static const struct TrainerMon sParty_Samuel[] = {
    {
    .iv = 100,
    .lvl = 42,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 100,
    .lvl = 42,
    .species = SPECIES_MAWILE,
    },
    {
    .iv = 100,
    .lvl = 42,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Vito[] = {
    {
    .iv = 100,
    .lvl = 42,
    .species = SPECIES_DODRIO,
    },
    {
    .iv = 100,
    .lvl = 42,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = 100,
    .lvl = 42,
    .species = SPECIES_ELECTRODE,
    },
    {
    .iv = 100,
    .lvl = 42,
    .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sParty_Owen[] = {
    {
    .iv = 100,
    .lvl = 42,
    .species = SPECIES_KECLEON,
    },
    {
    .iv = 100,
    .lvl = 42,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = 100,
    .lvl = 42,
    .species = SPECIES_WAILORD,
    }
};

static const struct TrainerMon sParty_Wilton2[] = {
    {
    .iv = 110,
    .lvl = 26,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = 110,
    .lvl = 26,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 110,
    .lvl = 26,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Wilton3[] = {
    {
    .iv = 120,
    .lvl = 29,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 120,
    .lvl = 29,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 120,
    .lvl = 29,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Wilton4[] = {
    {
    .iv = 130,
    .lvl = 32,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 130,
    .lvl = 32,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 130,
    .lvl = 32,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Wilton5[] = {
    {
    .iv = 140,
    .lvl = 35,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 140,
    .lvl = 35,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 140,
    .lvl = 35,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Warren[] = {
    {
    .iv = 100,
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = 100,
    .lvl = 33,
    .species = SPECIES_LUDICOLO,
    }
};

static const struct TrainerMon sParty_Mary[] = {
    {
    .iv = 255,
    .lvl = 26,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FEINT_ATTACK, MOVE_SHOCK_WAVE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Alexia[] = {
    {
    .iv = 255,
    .lvl = 26,
    .species = SPECIES_WIGGLYTUFF,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_DEFENSE_CURL, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Jody[] = {
    {
    .iv = 255,
    .lvl = 26,
    .species = SPECIES_ZANGOOSE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SWORDS_DANCE, MOVE_SLASH, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Wendy[] = {
    {
    .iv = 100,
    .lvl = 29,
    .species = SPECIES_MAWILE,
    .moves = {MOVE_BATON_PASS, MOVE_FEINT_ATTACK, MOVE_FAKE_TEARS, MOVE_BITE}
    },
    {
    .iv = 100,
    .lvl = 29,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MEGA_DRAIN, MOVE_MAGICAL_LEAF, MOVE_GRASS_WHISTLE, MOVE_LEECH_SEED}
    },
    {
    .iv = 100,
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    .moves = {MOVE_FLY, MOVE_WATER_GUN, MOVE_MIST, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Keira[] = {
    {
    .iv = 100,
    .lvl = 45,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = 100,
    .lvl = 45,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Brooke1[] = {
    {
    .iv = 100,
    .lvl = 17,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 100,
    .lvl = 17,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 100,
    .lvl = 17,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Jennifer[] = {
    {
    .iv = 200,
    .lvl = 30,
    .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Hope[] = {
    {
    .iv = 100,
    .lvl = 45,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Shannon[] = {
    {
    .iv = 100,
    .lvl = 45,
    .species = SPECIES_CLAYDOL,
    }
};

static const struct TrainerMon sParty_Michelle[] = {
    {
    .iv = 100,
    .lvl = 42,
    .species = SPECIES_TORKOAL,
    },
    {
    .iv = 100,
    .lvl = 42,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = 100,
    .lvl = 42,
    .species = SPECIES_LUDICOLO,
    }
};

static const struct TrainerMon sParty_Caroline[] = {
    {
    .iv = 100,
    .lvl = 43,
    .species = SPECIES_SKARMORY,
    },
    {
    .iv = 100,
    .lvl = 43,
    .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Julie[] = {
    {
    .iv = 100,
    .lvl = 42,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = 100,
    .lvl = 42,
    .species = SPECIES_NINETALES,
    },
    {
    .iv = 100,
    .lvl = 42,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Brooke2[] = {
    {
    .iv = 110,
    .lvl = 26,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 110,
    .lvl = 26,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 110,
    .lvl = 26,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Brooke3[] = {
    {
    .iv = 120,
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 120,
    .lvl = 29,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 120,
    .lvl = 29,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Brooke4[] = {
    {
    .iv = 130,
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 130,
    .lvl = 32,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 130,
    .lvl = 32,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Brooke5[] = {
    {
    .iv = 140,
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 140,
    .lvl = 34,
    .species = SPECIES_CAMERUPT,
    },
    {
    .iv = 140,
    .lvl = 34,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Patricia[] = {
    {
    .iv = 0,
    .lvl = 41,
    .species = SPECIES_BANETTE,
    },
    {
    .iv = 0,
    .lvl = 41,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Kindra[] = {
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_DUSKULL,
    },
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_SHUPPET,
    }
};

static const struct TrainerMon sParty_Tammy[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_DUSKULL,
    },
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_SHUPPET,
    }
};

static const struct TrainerMon sParty_Valerie1[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Tasha[] = {
    {
    .iv = 50,
    .lvl = 32,
    .species = SPECIES_SHUPPET,
    }
};

static const struct TrainerMon sParty_Valerie2[] = {
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_SPOINK,
    }
};

static const struct TrainerMon sParty_Valerie3[] = {
    {
    .iv = 20,
    .lvl = 35,
    .species = SPECIES_SPOINK,
    },
    {
    .iv = 20,
    .lvl = 35,
    .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Valerie4[] = {
    {
    .iv = 30,
    .lvl = 40,
    .species = SPECIES_SPOINK,
    },
    {
    .iv = 30,
    .lvl = 40,
    .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Valerie5[] = {
    {
    .iv = 40,
    .lvl = 42,
    .species = SPECIES_DUSKULL,
    },
    {
    .iv = 40,
    .lvl = 42,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = 40,
    .lvl = 42,
    .species = SPECIES_GRUMPIG,
    }
};

static const struct TrainerMon sParty_Cindy1[] = {
    {
    .iv = 0,
    .lvl = 7,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Daphne[] = {
    {
    .iv = 100,
    .lvl = 39,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_ATTRACT, MOVE_SWEET_KISS, MOVE_FLAIL, MOVE_WATER_PULSE}
    },
    {
    .iv = 100,
    .lvl = 39,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_ATTRACT, MOVE_SAFEGUARD, MOVE_TAKE_DOWN, MOVE_WATER_PULSE}
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter2[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Cindy2[] = {
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Brianna[] = {
    {
    .iv = 150,
    .lvl = 40,
    .species = SPECIES_SEAKING,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Naomi[] = {
    {
    .iv = 100,
    .lvl = 45,
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy3[] = {
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy4[] = {
    {
    .iv = 20,
    .lvl = 30,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy5[] = {
    {
    .iv = 30,
    .lvl = 33,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy6[] = {
    {
    .iv = 40,
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_FURY_SWIPES, MOVE_MUD_SPORT, MOVE_ODOR_SLEUTH, MOVE_SAND_ATTACK}
    }
};

static const struct TrainerMon sParty_Melissa[] = {
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Sheila[] = {
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Shirley[] = {
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Jessica1[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Connie[] = {
    {
    .iv = 100,
    .lvl = 40,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Bridget[] = {
    {
    .iv = 150,
    .lvl = 40,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Olivia[] = {
    {
    .iv = 100,
    .lvl = 35,
    .species = SPECIES_CLAMPERL,
    .moves = {MOVE_IRON_DEFENSE, MOVE_WHIRLPOOL, MOVE_RAIN_DANCE, MOVE_WATER_PULSE}
    },
    {
    .iv = 100,
    .lvl = 37,
    .species = SPECIES_CORPHISH,
    .moves = {MOVE_TAUNT, MOVE_CRABHAMMER, MOVE_WATER_PULSE, MOVE_NONE}
    },
    {
    .iv = 100,
    .lvl = 39,
    .species = SPECIES_LOMBRE,
    .moves = {MOVE_UPROAR, MOVE_FURY_SWIPES, MOVE_FAKE_OUT, MOVE_WATER_PULSE}
    }
};

static const struct TrainerMon sParty_Tiffany[] = {
    {
    .iv = 100,
    .lvl = 39,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = 100,
    .lvl = 39,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Jessica2[] = {
    {
    .iv = 10,
    .lvl = 35,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 10,
    .lvl = 35,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica3[] = {
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica4[] = {
    {
    .iv = 30,
    .lvl = 41,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 30,
    .lvl = 41,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica5[] = {
    {
    .iv = 40,
    .lvl = 44,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 40,
    .lvl = 44,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Winston1[] = {
    {
    .iv = 0,
    .lvl = 7,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Mollie[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_WHISCASH,
    },
    {
    .iv = 200,
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Garret[] = {
    {
    .iv = 0,
    .lvl = 45,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston2[] = {
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston3[] = {
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston4[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston5[] = {
    {
    .iv = 0,
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_FURY_SWIPES, MOVE_MUD_SPORT, MOVE_ODOR_SLEUTH, MOVE_SAND_ATTACK}
    }
};

static const struct TrainerMon sParty_Steve1[] = {
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_ARON,
    }
};

static const struct TrainerMon sParty_Thalia1[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_HORSEA,
    }
};

static const struct TrainerMon sParty_Mark[] = {
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_RHYHORN,
    }
};

static const struct TrainerMon sParty_GruntMtChimney1[] = {
    {
    .iv = 0,
    .lvl = 20,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Steve2[] = {
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_LAIRON,
    }
};

static const struct TrainerMon sParty_Steve3[] = {
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_RHYHORN,
    }
};

static const struct TrainerMon sParty_Steve4[] = {
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_RHYHORN,
    }
};

static const struct TrainerMon sParty_Steve5[] = {
    {
    .iv = 40,
    .lvl = 35,
    .species = SPECIES_AGGRON,
    },
    {
    .iv = 40,
    .lvl = 35,
    .species = SPECIES_RHYDON,
    }
};

static const struct TrainerMon sParty_Luis[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Dominik[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Douglas[] = {
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Darrin[] = {
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Tony1[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Jerome[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Matthew[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_David[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Spencer[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Roland[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Nolen[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Stan[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_HORSEA,
    }
};

static const struct TrainerMon sParty_Barry[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Dean[] = {
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Rodney[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Richard[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Herman[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Santiago[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Gilbert[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Franklin[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_SEALEO,
    }
};

static const struct TrainerMon sParty_Kevin[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Jack[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Dudley[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Chad[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Tony2[] = {
    {
    .iv = 10,
    .lvl = 30,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tony3[] = {
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tony4[] = {
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_STARYU,
    },
    {
    .iv = 30,
    .lvl = 36,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tony5[] = {
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_STARMIE,
    },
    {
    .iv = 40,
    .lvl = 39,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Takao[] = {
    {
    .iv = 127,
    .lvl = 13,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Hitoshi[] = {
    {
    .iv = 50,
    .lvl = 32,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 200,
    .lvl = 32,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Kiyo[] = {
    {
    .iv = 100,
    .lvl = 34,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Koichi[] = {
    {
    .iv = 100,
    .lvl = 24,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 150,
    .lvl = 28,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob1[] = {
    {
    .iv = 100,
    .lvl = 19,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Nob2[] = {
    {
    .iv = 110,
    .lvl = 27,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob3[] = {
    {
    .iv = 120,
    .lvl = 29,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 120,
    .lvl = 29,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob4[] = {
    {
    .iv = 130,
    .lvl = 31,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 130,
    .lvl = 31,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = 130,
    .lvl = 31,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob5[] = {
    {
    .iv = 140,
    .lvl = 33,
    .species = SPECIES_MACHOP,
    .heldItem = ITEM_NONE
    },
    {
    .iv = 140,
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_NONE
    },
    {
    .iv = 140,
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_NONE
    },
    {
    .iv = 140,
    .lvl = 33,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_BLACK_BELT
    }
};

static const struct TrainerMon sParty_Yuji[] = {
    {
    .iv = 100,
    .lvl = 26,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = 100,
    .lvl = 26,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Daisuke[] = {
    {
    .iv = 100,
    .lvl = 19,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Atsushi[] = {
    {
    .iv = 100,
    .lvl = 32,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Kirk[] = {
    {
    .iv = 100,
    .lvl = 17,
    .species = SPECIES_ELECTRIKE,
    .moves = {MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_SPARK, MOVE_LEER}
    },
    {
    .iv = 100,
    .lvl = 17,
    .species = SPECIES_VOLTORB,
    .moves = {MOVE_CHARGE, MOVE_SHOCK_WAVE, MOVE_SCREECH, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_GruntAquaHideout7[] = {
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout8[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Shawn[] = {
    {
    .iv = 100,
    .lvl = 17,
    .species = SPECIES_VOLTORB,
    },
    {
    .iv = 100,
    .lvl = 17,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Fernando1[] = {
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Dalton1[] = {
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_WHISMUR,
    }
};

static const struct TrainerMon sParty_Dalton2[] = {
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_WHISMUR,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Dalton3[] = {
    {
    .iv = 20,
    .lvl = 28,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = 20,
    .lvl = 28,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 20,
    .lvl = 28,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Dalton4[] = {
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Dalton5[] = {
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_EXPLOUD,
    },
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Cole[] = {
    {
    .iv = 100,
    .lvl = 23,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Jeff[] = {
    {
    .iv = 100,
    .lvl = 22,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 100,
    .lvl = 22,
    .species = SPECIES_SLUGMA,
    }
};

static const struct TrainerMon sParty_Axle[] = {
    {
    .iv = 100,
    .lvl = 23,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Jace[] = {
    {
    .iv = 100,
    .lvl = 23,
    .species = SPECIES_SLUGMA,
    }
};

static const struct TrainerMon sParty_Keegan[] = {
    {
    .iv = 120,
    .lvl = 23,
    .species = SPECIES_SLUGMA,
    }
};

static const struct TrainerMon sParty_Bernie1[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Bernie2[] = {
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Bernie3[] = {
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Bernie4[] = {
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Bernie5[] = {
    {
    .iv = 40,
    .lvl = 35,
    .species = SPECIES_MAGCARGO,
    },
    {
    .iv = 40,
    .lvl = 35,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Drew[] = {
    {
    .iv = 0,
    .lvl = 23,
    .species = SPECIES_SANDSHREW,
    .moves = {MOVE_DIG, MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH}
    }
};

static const struct TrainerMon sParty_Beau[] = {
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_BALTOY,
    .moves = {MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB}
    },
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_SANDSHREW,
    .moves = {MOVE_POISON_STING, MOVE_SAND_ATTACK, MOVE_SCRATCH, MOVE_DIG}
    },
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_BALTOY,
    .moves = {MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB}
    }
};

static const struct TrainerMon sParty_Larry[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Shane[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Justin[] = {
    {
    .iv = 0,
    .lvl = 24,
    .species = SPECIES_KECLEON,
    }
};

static const struct TrainerMon sParty_Ethan1[] = {
    {
    .iv = 0,
    .lvl = 20,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 0,
    .lvl = 20,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Autumn[] = {
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Travis[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Ethan2[] = {
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Ethan3[] = {
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Ethan4[] = {
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_LINOONE,
    }
};

static const struct TrainerMon sParty_Ethan5[] = {
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_LINOONE,
    }
};

static const struct TrainerMon sParty_Brent[] = {
    {
    .iv = 100,
    .lvl = 26,
    .species = SPECIES_SURSKIT,
    }
};

static const struct TrainerMon sParty_Donald[] = {
    {
    .iv = 100,
    .lvl = 24,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = 100,
    .lvl = 24,
    .species = SPECIES_SILCOON,
    },
    {
    .iv = 100,
    .lvl = 24,
    .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMon sParty_Taylor[] = {
    {
    .iv = 100,
    .lvl = 27,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = 100,
    .lvl = 27,
    .species = SPECIES_CASCOON,
    },
    {
    .iv = 100,
    .lvl = 27,
    .species = SPECIES_DUSTOX,
    }
};

static const struct TrainerMon sParty_Jeffrey1[] = {
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_SURSKIT,
    }
};

static const struct TrainerMon sParty_Derek[] = {
    {
    .iv = 150,
    .lvl = 16,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = 150,
    .lvl = 16,
    .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMon sParty_Jeffrey2[] = {
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    }
};

static const struct TrainerMon sParty_Jeffrey3[] = {
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_MASQUERAIN,
    }
};

static const struct TrainerMon sParty_Jeffrey4[] = {
    {
    .iv = 30,
    .lvl = 36,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 30,
    .lvl = 36,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = 30,
    .lvl = 36,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 30,
    .lvl = 36,
    .species = SPECIES_MASQUERAIN,
    }
};

static const struct TrainerMon sParty_Jeffrey5[] = {
    {
    .iv = 40,
    .lvl = 38,
    .species = SPECIES_SURSKIT,
    .heldItem = ITEM_NONE
    },
    {
    .iv = 40,
    .lvl = 38,
    .species = SPECIES_DUSTOX,
    .heldItem = ITEM_NONE
    },
    {
    .iv = 40,
    .lvl = 38,
    .species = SPECIES_SURSKIT,
    .heldItem = ITEM_NONE
    },
    {
    .iv = 40,
    .lvl = 38,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_SILVER_POWDER
    },
    {
    .iv = 40,
    .lvl = 38,
    .species = SPECIES_BEAUTIFLY,
    .heldItem = ITEM_NONE
    }
};

static const struct TrainerMon sParty_Edward[] = {
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_ABRA,
    .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Preston[] = {
    {
    .iv = 100,
    .lvl = 36,
    .species = SPECIES_KIRLIA,
    }
};

static const struct TrainerMon sParty_Virgil[] = {
    {
    .iv = 100,
    .lvl = 36,
    .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sParty_Blake[] = {
    {
    .iv = 100,
    .lvl = 36,
    .species = SPECIES_GIRAFARIG,
    }
};

static const struct TrainerMon sParty_William[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_RALTS,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_RALTS,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_KIRLIA,
    }
};

static const struct TrainerMon sParty_Joshua[] = {
    {
    .iv = 0,
    .lvl = 41,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = 0,
    .lvl = 41,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron1[] = {
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron2[] = {
    {
    .iv = 10,
    .lvl = 33,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = 10,
    .lvl = 33,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron3[] = {
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron4[] = {
    {
    .iv = 30,
    .lvl = 41,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = 30,
    .lvl = 41,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron5[] = {
    {
    .iv = 40,
    .lvl = 45,
    .species = SPECIES_SOLROCK,
    },
    {
    .iv = 40,
    .lvl = 45,
    .species = SPECIES_ALAKAZAM,
    }
};

static const struct TrainerMon sParty_Jaclyn[] = {
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_ABRA,
    .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Hannah[] = {
    {
    .iv = 100,
    .lvl = 36,
    .species = SPECIES_KIRLIA,
    }
};

static const struct TrainerMon sParty_Samantha[] = {
    {
    .iv = 100,
    .lvl = 36,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Maura[] = {
    {
    .iv = 100,
    .lvl = 36,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Kayla[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_WOBBUFFET,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_NATU,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Alexis[] = {
    {
    .iv = 0,
    .lvl = 41,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = 0,
    .lvl = 41,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Jacki1[] = {
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki2[] = {
    {
    .iv = 10,
    .lvl = 34,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = 10,
    .lvl = 34,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki3[] = {
    {
    .iv = 20,
    .lvl = 37,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = 20,
    .lvl = 37,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki4[] = {
    {
    .iv = 30,
    .lvl = 40,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = 30,
    .lvl = 40,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki5[] = {
    {
    .iv = 40,
    .lvl = 43,
    .species = SPECIES_LUNATONE,
    },
    {
    .iv = 40,
    .lvl = 43,
    .species = SPECIES_ALAKAZAM,
    }
};

static const struct TrainerMon sParty_Walter1[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Micah[] = {
    {
    .iv = 0,
    .lvl = 44,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 0,
    .lvl = 44,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Thomas[] = {
    {
    .iv = 0,
    .lvl = 45,
    .species = SPECIES_ZANGOOSE,
    }
};

static const struct TrainerMon sParty_Walter2[] = {
    {
    .iv = 10,
    .lvl = 34,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Walter3[] = {
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR}
    }
};

static const struct TrainerMon sParty_Walter4[] = {
    {
    .iv = 30,
    .lvl = 39,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .iv = 30,
    .lvl = 39,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Walter5[] = {
    {
    .iv = 40,
    .lvl = 41,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .iv = 40,
    .lvl = 41,
    .species = SPECIES_GOLDUCK,
    .moves = {MOVE_FURY_SWIPES, MOVE_DISABLE, MOVE_CONFUSION, MOVE_PSYCH_UP}
    },
    {
    .iv = 40,
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR}
    }
};

static const struct TrainerMon sParty_Sidney[] = {
    {
    .iv = 250,
    .lvl = 46,
    .species = SPECIES_MIGHTYENA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_DOUBLE_EDGE, MOVE_SAND_ATTACK, MOVE_CRUNCH}
    },
    {
    .iv = 250,
    .lvl = 48,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TORMENT, MOVE_DOUBLE_TEAM, MOVE_SWAGGER, MOVE_EXTRASENSORY}
    },
    {
    .iv = 250,
    .lvl = 46,
    .species = SPECIES_CACTURNE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LEECH_SEED, MOVE_FEINT_ATTACK, MOVE_NEEDLE_ARM, MOVE_COTTON_SPORE}
    },
    {
    .iv = 250,
    .lvl = 48,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SWORDS_DANCE, MOVE_STRENGTH, MOVE_FACADE}
    },
    {
    .iv = 255,
    .lvl = 49,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_SLASH}
    }
};

static const struct TrainerMon sParty_Phoebe[] = {
    {
    .iv = 250,
    .lvl = 48,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_PUNCH, MOVE_CONFUSE_RAY, MOVE_CURSE, MOVE_PROTECT}
    },
    {
    .iv = 250,
    .lvl = 49,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_GRUDGE, MOVE_WILL_O_WISP, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 250,
    .lvl = 50,
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_DOUBLE_TEAM, MOVE_NIGHT_SHADE, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 250,
    .lvl = 49,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_FACADE}
    },
    {
    .iv = 255,
    .lvl = 51,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SHADOW_BALL, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Glacia[] = {
    {
    .iv = 250,
    .lvl = 50,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ENCORE, MOVE_BODY_SLAM, MOVE_HAIL, MOVE_ICE_BALL}
    },
    {
    .iv = 250,
    .lvl = 50,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_CRUNCH, MOVE_ICY_WIND, MOVE_ICE_BEAM}
    },
    {
    .iv = 250,
    .lvl = 52,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ATTRACT, MOVE_DOUBLE_EDGE, MOVE_HAIL, MOVE_BLIZZARD}
    },
    {
    .iv = 250,
    .lvl = 52,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_EXPLOSION, MOVE_HAIL, MOVE_ICE_BEAM}
    },
    {
    .iv = 255,
    .lvl = 53,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SURF, MOVE_BODY_SLAM, MOVE_ICE_BEAM, MOVE_SHEER_COLD}
    }
};

static const struct TrainerMon sParty_Drake[] = {
    {
    .iv = 250,
    .lvl = 52,
    .species = SPECIES_SHELGON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROCK_TOMB, MOVE_DRAGON_CLAW, MOVE_PROTECT, MOVE_DOUBLE_EDGE}
    },
    {
    .iv = 250,
    .lvl = 54,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE, MOVE_AERIAL_ACE}
    },
    {
    .iv = 250,
    .lvl = 53,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SMOKESCREEN, MOVE_DRAGON_DANCE, MOVE_SURF, MOVE_BODY_SLAM}
    },
    {
    .iv = 250,
    .lvl = 53,
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_CRUNCH, MOVE_DRAGON_BREATH, MOVE_EARTHQUAKE}
    },
    {
    .iv = 255,
    .lvl = 55,
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_ROCK_SLIDE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Roxanne1[] = {
    {
    .iv = 100,
    .lvl = 12,
    .species = SPECIES_GEODUDE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_ROCK_THROW, MOVE_ROCK_TOMB},
    .slot = 0
    },
    {
    .iv = 100,
    .lvl = 12,
    .species = SPECIES_GEODUDE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_ROCK_THROW, MOVE_ROCK_TOMB},
    .slot = 2
    },
    {
    .iv = 200,
    .lvl = 15,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_BLOCK, MOVE_HARDEN, MOVE_TACKLE, MOVE_ROCK_TOMB},
    .slot = 1
    }
};

static const struct TrainerMon sParty_Brawly1[] = {
    {
    .iv = 100,
    .lvl = 16,
    .species = SPECIES_MACHOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_KARATE_CHOP, MOVE_LOW_KICK, MOVE_SEISMIC_TOSS, MOVE_BULK_UP}
    },
    {
    .iv = 100,
    .lvl = 16,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_BULK_UP}
    },
    {
    .iv = 200,
    .lvl = 19,
    .species = SPECIES_MAKUHITA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_ARM_THRUST, MOVE_VITAL_THROW, MOVE_REVERSAL, MOVE_BULK_UP}
    }
};

static const struct TrainerMon sParty_Wattson1[] = {
    {
    .iv = 200,
    .lvl = 20,
    .species = SPECIES_VOLTORB,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_SPARK, MOVE_SELF_DESTRUCT, MOVE_SHOCK_WAVE}
    },
    {
    .iv = 200,
    .lvl = 20,
    .species = SPECIES_ELECTRIKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHOCK_WAVE, MOVE_LEER, MOVE_QUICK_ATTACK, MOVE_HOWL}
    },
    {
    .iv = 220,
    .lvl = 22,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUPERSONIC, MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM}
    },
    {
    .iv = 250,
    .lvl = 24,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_SHOCK_WAVE, MOVE_HOWL}
    }
};

static const struct TrainerMon sParty_Flannery1[] = {
    {
    .iv = 200,
    .lvl = 24,
    .species = SPECIES_NUMEL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_OVERHEAT, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    },
    {
    .iv = 200,
    .lvl = 24,
    .species = SPECIES_SLUGMA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_OVERHEAT, MOVE_SMOG, MOVE_LIGHT_SCREEN, MOVE_SUNNY_DAY}
    },
    {
    .iv = 250,
    .lvl = 26,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_OVERHEAT, MOVE_TACKLE, MOVE_SUNNY_DAY, MOVE_ATTRACT}
    },
    {
    .iv = 250,
    .lvl = 29,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_BODY_SLAM, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Norman1[] = {
    {
    .iv = 200,
    .lvl = 27,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_PSYBEAM, MOVE_FACADE, MOVE_ENCORE}
    },
    {
    .iv = 200,
    .lvl = 27,
    .species = SPECIES_VIGOROTH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SLASH, MOVE_FACADE, MOVE_ENCORE, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 200,
    .lvl = 29,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SLASH, MOVE_BELLY_DRUM, MOVE_FACADE, MOVE_HEADBUTT}
    },
    {
    .iv = 250,
    .lvl = 31,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_COUNTER, MOVE_YAWN, MOVE_FACADE, MOVE_FEINT_ATTACK}
    }
};

static const struct TrainerMon sParty_Winona1[] = {
    {
    .iv = 210,
    .lvl = 29,
    .species = SPECIES_SWABLU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PERISH_SONG, MOVE_MIRROR_MOVE, MOVE_SAFEGUARD, MOVE_AERIAL_ACE}
    },
    {
    .iv = 210,
    .lvl = 29,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_SYNTHESIS}
    },
    {
    .iv = 210,
    .lvl = 30,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_GUN, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = 220,
    .lvl = 31,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_FURY_ATTACK, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = 255,
    .lvl = 33,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE, MOVE_AERIAL_ACE}
    }
};

static const struct TrainerMon sParty_TateAndLiza1[] = {
    {
    .iv = 250,
    .lvl = 41,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = 250,
    .lvl = 41,
    .species = SPECIES_XATU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_SUNNY_DAY, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = 250,
    .lvl = 42,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_CALM_MIND}
    },
    {
    .iv = 250,
    .lvl = 42,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_Juan1[] = {
    {
    .iv = 200,
    .lvl = 41,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_ATTRACT, MOVE_SWEET_KISS, MOVE_FLAIL}
    },
    {
    .iv = 200,
    .lvl = 41,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_AMNESIA, MOVE_EARTHQUAKE}
    },
    {
    .iv = 200,
    .lvl = 43,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ENCORE, MOVE_BODY_SLAM, MOVE_AURORA_BEAM, MOVE_WATER_PULSE}
    },
    {
    .iv = 200,
    .lvl = 43,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_LEER}
    },
    {
    .iv = 250,
    .lvl = 46,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Jerry1[] = {
    {
    .iv = 10,
    .lvl = 9,
    .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sParty_Ted[] = {
    {
    .iv = 10,
    .lvl = 17,
    .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sParty_Paul[] = {
    {
    .iv = 10,
    .lvl = 15,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 10,
    .lvl = 15,
    .species = SPECIES_ODDISH,
    },
    {
    .iv = 10,
    .lvl = 15,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Jerry2[] = {
    {
    .iv = 20,
    .lvl = 26,
    .species = SPECIES_RALTS,
    },
    {
    .iv = 20,
    .lvl = 26,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Jerry3[] = {
    {
    .iv = 30,
    .lvl = 29,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = 30,
    .lvl = 29,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Jerry4[] = {
    {
    .iv = 40,
    .lvl = 32,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = 40,
    .lvl = 32,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Jerry5[] = {
    {
    .iv = 50,
    .lvl = 34,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = 50,
    .lvl = 34,
    .species = SPECIES_BANETTE,
    },
    {
    .iv = 50,
    .lvl = 34,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Karen1[] = {
    {
    .iv = 10,
    .lvl = 9,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Georgia[] = {
    {
    .iv = 10,
    .lvl = 16,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 10,
    .lvl = 16,
    .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMon sParty_Karen2[] = {
    {
    .iv = 20,
    .lvl = 26,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 20,
    .lvl = 26,
    .species = SPECIES_WHISMUR,
    }
};

static const struct TrainerMon sParty_Karen3[] = {
    {
    .iv = 30,
    .lvl = 29,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 30,
    .lvl = 29,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Karen4[] = {
    {
    .iv = 40,
    .lvl = 32,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 40,
    .lvl = 32,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Karen5[] = {
    {
    .iv = 50,
    .lvl = 35,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 50,
    .lvl = 35,
    .species = SPECIES_EXPLOUD,
    }
};

static const struct TrainerMon sParty_KateAndJoy[] = {
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_SPINDA,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYBEAM, MOVE_DIZZY_PUNCH, MOVE_TEETER_DANCE}
    },
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_SLAKING,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_YAWN, MOVE_SLACK_OFF, MOVE_FEINT_ATTACK}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg1[] = {
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg2[] = {
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = 10,
    .lvl = 30,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg3[] = {
    {
    .iv = 20,
    .lvl = 31,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg4[] = {
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = 30,
    .lvl = 36,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg5[] = {
    {
    .iv = 40,
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = 40,
    .lvl = 38,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Victor[] = {
    {
    .iv = 25,
    .lvl = 16,
    .species = SPECIES_TAILLOW,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = 25,
    .lvl = 16,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Miguel1[] = {
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Colton[] = {
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .iv = 0,
    .lvl = 36,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .iv = 0,
    .lvl = 40,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .iv = 0,
    .lvl = 12,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .iv = 0,
    .lvl = 42,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    }
};

static const struct TrainerMon sParty_Miguel2[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Miguel3[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Miguel4[] = {
    {
    .iv = 0,
    .lvl = 35,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Miguel5[] = {
    {
    .iv = 0,
    .lvl = 38,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_SITRUS_BERRY
    }
};

static const struct TrainerMon sParty_Victoria[] = {
    {
    .iv = 50,
    .lvl = 17,
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Vanessa[] = {
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_PIKACHU,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Bethany[] = {
    {
    .iv = 100,
    .lvl = 35,
    .species = SPECIES_AZURILL,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = 100,
    .lvl = 37,
    .species = SPECIES_MARILL,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = 100,
    .lvl = 39,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel1[] = {
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel2[] = {
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel3[] = {
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel4[] = {
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel5[] = {
    {
    .iv = 40,
    .lvl = 35,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_SITRUS_BERRY
    },
    {
    .iv = 40,
    .lvl = 35,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_SITRUS_BERRY
    }
};

static const struct TrainerMon sParty_Timothy1[] = {
    {
    .iv = 200,
    .lvl = 27,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Timothy2[] = {
    {
    .iv = 210,
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy3[] = {
    {
    .iv = 220,
    .lvl = 36,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy4[] = {
    {
    .iv = 230,
    .lvl = 39,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_BELLY_DRUM, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy5[] = {
    {
    .iv = 240,
    .lvl = 42,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_BELLY_DRUM, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Vicky[] = {
    {
    .iv = 200,
    .lvl = 18,
    .species = SPECIES_MEDITITE,
    .moves = {MOVE_HIGH_JUMP_KICK, MOVE_MEDITATE, MOVE_CONFUSION, MOVE_DETECT}
    }
};

static const struct TrainerMon sParty_Shelby1[] = {
    {
    .iv = 200,
    .lvl = 21,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = 200,
    .lvl = 21,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Shelby2[] = {
    {
    .iv = 210,
    .lvl = 30,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = 210,
    .lvl = 30,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Shelby3[] = {
    {
    .iv = 220,
    .lvl = 33,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = 220,
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Shelby4[] = {
    {
    .iv = 230,
    .lvl = 36,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = 230,
    .lvl = 36,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Shelby5[] = {
    {
    .iv = 240,
    .lvl = 39,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = 240,
    .lvl = 39,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Calvin1[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_Billy[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 0,
    .lvl = 7,
    .species = SPECIES_SEEDOT,
    }
};

static const struct TrainerMon sParty_Josh[] = {
    {
    .iv = 100,
    .lvl = 10,
    .species = SPECIES_GEODUDE,
    .moves = {MOVE_TACKLE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Tommy[] = {
    {
    .iv = 110,
    .lvl = 8,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 120,
    .lvl = 8,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Joey[] = {
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Ben[] = {
    {
    .iv = 150,
    .lvl = 17,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_GROWL, MOVE_THUNDERBOLT}
    },
    {
    .iv = 150,
    .lvl = 17,
    .species = SPECIES_GULPIN,
    .moves = {MOVE_AMNESIA, MOVE_SLUDGE, MOVE_YAWN, MOVE_POUND}
    }
};

static const struct TrainerMon sParty_Quincy[] = {
    {
    .iv = 100,
    .lvl = 43,
    .species = SPECIES_SLAKING,
    .moves = {MOVE_ATTRACT, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER}
    },
    {
    .iv = 100,
    .lvl = 43,
    .species = SPECIES_DUSCLOPS,
    .moves = {MOVE_SKILL_SWAP, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_TOXIC}
    }
};

static const struct TrainerMon sParty_Katelynn[] = {
    {
    .iv = 100,
    .lvl = 43,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_SKILL_SWAP, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_CALM_MIND}
    },
    {
    .iv = 100,
    .lvl = 43,
    .species = SPECIES_SLAKING,
    .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK}
    }
};

static const struct TrainerMon sParty_Jaylen[] = {
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_TRAPINCH,
    }
};

static const struct TrainerMon sParty_Dillon[] = {
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_ARON,
    }
};

static const struct TrainerMon sParty_Calvin2[] = {
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Calvin3[] = {
    {
    .iv = 20,
    .lvl = 28,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 20,
    .lvl = 30,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Calvin4[] = {
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 30,
    .lvl = 29,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 30,
    .lvl = 33,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Calvin5[] = {
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 40,
    .lvl = 32,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 40,
    .lvl = 36,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Eddie[] = {
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_ZIGZAGOON,
    }
};

static const struct TrainerMon sParty_Allen[] = {
    {
    .iv = 0,
    .lvl = 4,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 0,
    .lvl = 3,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Timmy[] = {
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_ARON,
    },
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_ELECTRIKE,
    }
};

static const struct TrainerMon sParty_Wallace[] = {
    {
    .iv = 255,
    .lvl = 57,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_SPOUT, MOVE_DOUBLE_EDGE, MOVE_BLIZZARD}
    },
    {
    .iv = 255,
    .lvl = 55,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TOXIC, MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM}
    },
    {
    .iv = 255,
    .lvl = 56,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SURF, MOVE_LEECH_SEED, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = 255,
    .lvl = 56,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_SURF, MOVE_AMNESIA, MOVE_HYPER_BEAM}
    },
    {
    .iv = 255,
    .lvl = 56,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_HYPER_BEAM, MOVE_SURF}
    },
    {
    .iv = 255,
    .lvl = 58,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_RECOVER, MOVE_SURF, MOVE_ICE_BEAM, MOVE_TOXIC}
    }
};

static const struct TrainerMon sParty_Andrew[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_MAGIKARP,
    },
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_MAGIKARP,
    }
};

static const struct TrainerMon sParty_Ivan[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_MAGIKARP,
    },
    {
    .iv = 0,
    .lvl = 6,
    .species = SPECIES_MAGIKARP,
    },
    {
    .iv = 0,
    .lvl = 7,
    .species = SPECIES_MAGIKARP,
    }
};

static const struct TrainerMon sParty_Claude[] = {
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_MAGIKARP,
    },
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_GOLDEEN,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_BARBOACH,
    }
};

static const struct TrainerMon sParty_Elliot1[] = {
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_MAGIKARP,
    },
    {
    .iv = 0,
    .lvl = 7,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_MAGIKARP,
    }
};

static const struct TrainerMon sParty_Ned[] = {
    {
    .iv = 10,
    .lvl = 11,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Dale[] = {
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Nolan[] = {
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_BARBOACH,
    }
};

static const struct TrainerMon sParty_Barny[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Wade[] = {
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Carter[] = {
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Elliot2[] = {
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot3[] = {
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = 20,
    .lvl = 26,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = 20,
    .lvl = 26,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot4[] = {
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .iv = 31,
    .lvl = 31,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot5[] = {
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_SHARPEDO,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = 40,
    .lvl = 35,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Ronald[] = {
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_MAGIKARP,
    },
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = 0,
    .lvl = 23,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = 0,
    .lvl = 35,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Jacob[] = {
    {
    .iv = 20,
    .lvl = 6,
    .species = SPECIES_VOLTORB,
    },
    {
    .iv = 20,
    .lvl = 6,
    .species = SPECIES_VOLTORB,
    },
    {
    .iv = 200,
    .lvl = 14,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Anthony[] = {
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Benjamin1[] = {
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Benjamin2[] = {
    {
    .iv = 10,
    .lvl = 30,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Benjamin3[] = {
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Benjamin4[] = {
    {
    .iv = 30,
    .lvl = 36,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Benjamin5[] = {
    {
    .iv = 40,
    .lvl = 39,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Abigail1[] = {
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Jasmine[] = {
    {
    .iv = 80,
    .lvl = 14,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = 80,
    .lvl = 14,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = 0,
    .lvl = 6,
    .species = SPECIES_VOLTORB,
    }
};

static const struct TrainerMon sParty_Abigail2[] = {
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Abigail3[] = {
    {
    .iv = 20,
    .lvl = 31,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Abigail4[] = {
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Abigail5[] = {
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Dylan1[] = {
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Dylan2[] = {
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Dylan3[] = {
    {
    .iv = 20,
    .lvl = 31,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Dylan4[] = {
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Dylan5[] = {
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Maria1[] = {
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Maria2[] = {
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Maria3[] = {
    {
    .iv = 20,
    .lvl = 31,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Maria4[] = {
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Maria5[] = {
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Camden[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_STARYU,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Demetrius[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_ELECTRIKE,
    }
};

static const struct TrainerMon sParty_Isaiah1[] = {
    {
    .iv = 0,
    .lvl = 35,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo1[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_STARYU,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Chase[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 80,
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah2[] = {
    {
    .iv = 10,
    .lvl = 39,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah3[] = {
    {
    .iv = 20,
    .lvl = 42,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah4[] = {
    {
    .iv = 30,
    .lvl = 45,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Isaiah5[] = {
    {
    .iv = 40,
    .lvl = 48,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Isobel[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Donny[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 160,
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Talia[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn1[] = {
    {
    .iv = 0,
    .lvl = 35,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Allison[] = {
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 240,
    .lvl = 33,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn2[] = {
    {
    .iv = 10,
    .lvl = 39,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn3[] = {
    {
    .iv = 20,
    .lvl = 42,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn4[] = {
    {
    .iv = 30,
    .lvl = 45,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Katelyn5[] = {
    {
    .iv = 40,
    .lvl = 48,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Nicolas1[] = {
    {
    .iv = 100,
    .lvl = 37,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = 100,
    .lvl = 37,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas2[] = {
    {
    .iv = 110,
    .lvl = 41,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = 110,
    .lvl = 41,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas3[] = {
    {
    .iv = 120,
    .lvl = 44,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = 120,
    .lvl = 44,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas4[] = {
    {
    .iv = 130,
    .lvl = 46,
    .species = SPECIES_BAGON,
    },
    {
    .iv = 130,
    .lvl = 46,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = 130,
    .lvl = 46,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas5[] = {
    {
    .iv = 140,
    .lvl = 49,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE
    },
    {
    .iv = 140,
    .lvl = 49,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE
    },
    {
    .iv = 140,
    .lvl = 49,
    .species = SPECIES_SHELGON,
    .heldItem = ITEM_DRAGON_FANG
    }
};

static const struct TrainerMon sParty_Aaron[] = {
    {
    .iv = 255,
    .lvl = 34,
    .species = SPECIES_BAGON,
    .moves = {MOVE_DRAGON_BREATH, MOVE_HEADBUTT, MOVE_FOCUS_ENERGY, MOVE_EMBER}
    }
};

static const struct TrainerMon sParty_Perry[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Hugh[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Phil[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Jared[] = {
    {
    .iv = 100,
    .lvl = 27,
    .species = SPECIES_DODUO,
    },
    {
    .iv = 100,
    .lvl = 27,
    .species = SPECIES_SKARMORY,
    },
    {
    .iv = 100,
    .lvl = 27,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Humberto[] = {
    {
    .iv = 250,
    .lvl = 30,
    .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sParty_Presley[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Edwardo[] = {
    {
    .iv = 150,
    .lvl = 29,
    .species = SPECIES_DODUO,
    },
    {
    .iv = 150,
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Colin[] = {
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_NATU,
    }
};

static const struct TrainerMon sParty_Robert1[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Benny[] = {
    {
    .iv = 0,
    .lvl = 36,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 0,
    .lvl = 36,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 0,
    .lvl = 36,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Chester[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_TAILLOW,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Robert2[] = {
    {
    .iv = 10,
    .lvl = 32,
    .species = SPECIES_NATU,
    },
    {
    .iv = 10,
    .lvl = 32,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Robert3[] = {
    {
    .iv = 20,
    .lvl = 35,
    .species = SPECIES_NATU,
    },
    {
    .iv = 20,
    .lvl = 35,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Robert4[] = {
    {
    .iv = 30,
    .lvl = 38,
    .species = SPECIES_NATU,
    },
    {
    .iv = 30,
    .lvl = 38,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Robert5[] = {
    {
    .iv = 40,
    .lvl = 41,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = 40,
    .lvl = 41,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Alex[] = {
    {
    .iv = 150,
    .lvl = 33,
    .species = SPECIES_NATU,
    },
    {
    .iv = 150,
    .lvl = 33,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Beck[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Yasu[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_Takashi[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_NINJASK,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_KOFFING,
    }
};

static const struct TrainerMon sParty_Dianne[] = {
    {
    .iv = 0,
    .lvl = 43,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKILL_SWAP, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 43,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDERBOLT, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Jani[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lao1[] = {
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SMOG, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SMOG, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    }
};

static const struct TrainerMon sParty_Lung[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_KOFFING,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_Lao2[] = {
    {
    .iv = 0,
    .lvl = 24,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = 0,
    .lvl = 24,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 24,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lao3[] = {
    {
    .iv = 20,
    .lvl = 27,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = 20,
    .lvl = 27,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = 20,
    .lvl = 27,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lao4[] = {
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lao5[] = {
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = 40,
    .lvl = 35,
    .species = SPECIES_WEEZING,
    .heldItem = ITEM_SMOKE_BALL,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Jocelyn[] = {
    {
    .iv = 127,
    .lvl = 13,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Laura[] = {
    {
    .iv = 150,
    .lvl = 13,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Cyndy1[] = {
    {
    .iv = 100,
    .lvl = 18,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = 100,
    .lvl = 18,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cora[] = {
    {
    .iv = 100,
    .lvl = 27,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Paula[] = {
    {
    .iv = 100,
    .lvl = 27,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Cyndy2[] = {
    {
    .iv = 110,
    .lvl = 26,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = 110,
    .lvl = 26,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cyndy3[] = {
    {
    .iv = 120,
    .lvl = 29,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = 120,
    .lvl = 29,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cyndy4[] = {
    {
    .iv = 130,
    .lvl = 32,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = 130,
    .lvl = 32,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Cyndy5[] = {
    {
    .iv = 140,
    .lvl = 35,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = 140,
    .lvl = 35,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Madeline1[] = {
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_EMBER, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Clarissa[] = {
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Angelica[] = {
    {
    .iv = 50,
    .lvl = 30,
    .species = SPECIES_CASTFORM,
    .moves = {MOVE_RAIN_DANCE, MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_WATER_PULSE}
    }
};

static const struct TrainerMon sParty_Madeline2[] = {
    {
    .iv = 10,
    .lvl = 29,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_EMBER, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline3[] = {
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_EMBER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline4[] = {
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_LEECH_SEED, MOVE_MEGA_DRAIN, MOVE_GRASS_WHISTLE, MOVE_SUNNY_DAY}
    },
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline5[] = {
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY}
    },
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_CAMERUPT,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Beverly[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Imani[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Kyla[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Denise[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Beth[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Tara[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_HORSEA,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Missy[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Alice[] = {
    {
    .iv = 0,
    .lvl = 24,
    .species = SPECIES_GOLDEEN,
    },
    {
    .iv = 0,
    .lvl = 24,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = 24,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Jenny1[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Grace[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Tanya[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Sharon[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Nikki[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Brenda[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Katie[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_GOLDEEN,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Susie[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Kara[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Dana[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Sienna[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Debra[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Linda[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_HORSEA,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Kaylee[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_LANTURN,
    },
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Laurel[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Carlee[] = {
    {
    .iv = 0,
    .lvl = 35,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Jenny2[] = {
    {
    .iv = 0,
    .lvl = 38,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny3[] = {
    {
    .iv = 0,
    .lvl = 41,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny4[] = {
    {
    .iv = 0,
    .lvl = 43,
    .species = SPECIES_STARYU,
    },
    {
    .iv = 0,
    .lvl = 43,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny5[] = {
    {
    .iv = 0,
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = 0,
    .lvl = 45,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 0,
    .lvl = 45,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Heidi[] = {
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_SANDSHREW,
    .moves = {MOVE_DIG, MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH}
    },
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_BALTOY,
    .moves = {MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB}
    }
};

static const struct TrainerMon sParty_Becky[] = {
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_SANDSHREW,
    .moves = {MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH, MOVE_DIG}
    },
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_MARILL,
    .moves = {MOVE_ROLLOUT, MOVE_BUBBLE_BEAM, MOVE_TAIL_WHIP, MOVE_DEFENSE_CURL}
    }
};

static const struct TrainerMon sParty_Carol[] = {
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_TAILLOW,
    },
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Nancy[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Martha[] = {
    {
    .iv = 0,
    .lvl = 23,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = 0,
    .lvl = 23,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana1[] = {
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_ODDISH,
    },
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Cedric[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_WOBBUFFET,
    .moves = {MOVE_DESTINY_BOND, MOVE_SAFEGUARD, MOVE_COUNTER, MOVE_MIRROR_COAT}
    }
};

static const struct TrainerMon sParty_Irene[] = {
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Diana2[] = {
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana3[] = {
    {
    .iv = 20,
    .lvl = 28,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 20,
    .lvl = 28,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 20,
    .lvl = 28,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana4[] = {
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana5[] = {
    {
    .iv = 40,
    .lvl = 40,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 40,
    .lvl = 40,
    .species = SPECIES_VILEPLUME,
    },
    {
    .iv = 40,
    .lvl = 40,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_AmyAndLiv1[] = {
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_PLUSLE,
    },
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_AmyAndLiv2[] = {
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_PLUSLE,
    },
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_GinaAndMia1[] = {
    {
    .iv = 0,
    .lvl = 6,
    .species = SPECIES_SEEDOT,
    },
    {
    .iv = 0,
    .lvl = 6,
    .species = SPECIES_LOTAD,
    }
};

static const struct TrainerMon sParty_MiuAndYuki[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_BEAUTIFLY,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_DUSTOX,
    }
};

static const struct TrainerMon sParty_AmyAndLiv3[] = {
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_PLUSLE,
    },
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_GinaAndMia2[] = {
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_DUSKULL,
    .moves = {MOVE_NIGHT_SHADE, MOVE_DISABLE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_SHROOMISH,
    .moves = {MOVE_ABSORB, MOVE_LEECH_SEED, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AmyAndLiv4[] = {
    {
    .iv = 20,
    .lvl = 30,
    .species = SPECIES_PLUSLE,
    },
    {
    .iv = 20,
    .lvl = 30,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_AmyAndLiv5[] = {
    {
    .iv = 30,
    .lvl = 33,
    .species = SPECIES_PLUSLE,
    .moves = {MOVE_SPARK, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
    },
    {
    .iv = 30,
    .lvl = 33,
    .species = SPECIES_MINUN,
    .moves = {MOVE_SPARK, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
    }
};

static const struct TrainerMon sParty_AmyAndLiv6[] = {
    {
    .iv = 40,
    .lvl = 36,
    .species = SPECIES_PLUSLE,
    .moves = {MOVE_THUNDER, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
    },
    {
    .iv = 40,
    .lvl = 36,
    .species = SPECIES_MINUN,
    .moves = {MOVE_THUNDER, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
    }
};

static const struct TrainerMon sParty_Huey[] = {
    {
    .iv = 10,
    .lvl = 12,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 10,
    .lvl = 12,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Edmond[] = {
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Ernest1[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Dwayne[] = {
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Phillip[] = {
    {
    .iv = 0,
    .lvl = 44,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .iv = 0,
    .lvl = 44,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Leonard[] = {
    {
    .iv = 0,
    .lvl = 43,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 0,
    .lvl = 43,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 0,
    .lvl = 43,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Duncan[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_SPHEAL,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest2[] = {
    {
    .iv = 10,
    .lvl = 36,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 10,
    .lvl = 36,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 10,
    .lvl = 36,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest3[] = {
    {
    .iv = 20,
    .lvl = 39,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 20,
    .lvl = 39,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 20,
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest4[] = {
    {
    .iv = 30,
    .lvl = 42,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 30,
    .lvl = 42,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 30,
    .lvl = 42,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest5[] = {
    {
    .iv = 40,
    .lvl = 45,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 40,
    .lvl = 45,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = 40,
    .lvl = 45,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Eli[] = {
    {
    .iv = 100,
    .lvl = 23,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Annika[] = {
    {
    .iv = 100,
    .lvl = 39,
    .species = SPECIES_FEEBAS,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_FLAIL, MOVE_WATER_PULSE, MOVE_RETURN, MOVE_ATTRACT}
    },
    {
    .iv = 100,
    .lvl = 39,
    .species = SPECIES_FEEBAS,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_FLAIL, MOVE_WATER_PULSE, MOVE_RETURN, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Jazmyn[] = {
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_ABSOL,
    }
};

static const struct TrainerMon sParty_Jonas[] = {
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TOXIC, MOVE_THUNDER, MOVE_SELF_DESTRUCT, MOVE_SLUDGE_BOMB}
    }
};

static const struct TrainerMon sParty_Kayley[] = {
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_CASTFORM,
    .moves = {MOVE_SUNNY_DAY, MOVE_WEATHER_BALL, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM}
    }
};

static const struct TrainerMon sParty_Auron[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Kelvin[] = {
    {
    .iv = 150,
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = 150,
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Marley[] = {
    {
    .iv = 255,
    .lvl = 34,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_BITE, MOVE_ROAR, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT}
    }
};

static const struct TrainerMon sParty_Reyna[] = {
    {
    .iv = 50,
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = 200,
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Hudson[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Conor[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_CHINCHOU,
    },
    {
    .iv = 200,
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Edwin1[] = {
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Hector[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_ZANGOOSE,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_SEVIPER,
    }
};

static const struct TrainerMon sParty_TabithaMossdeep[] = {
    {
    .iv = 100,
    .lvl = 36,
    .species = SPECIES_CAMERUPT,
    },
    {
    .iv = 100,
    .lvl = 38,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 100,
    .lvl = 40,
    .species = SPECIES_GOLBAT,
    }
};

static const struct TrainerMon sParty_Edwin2[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Edwin3[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Edwin4[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Edwin5[] = {
    {
    .iv = 0,
    .lvl = 35,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = 0,
    .lvl = 35,
    .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sParty_WallyVR1[] = {
    {
    .iv = 150,
    .lvl = 44,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = 150,
    .lvl = 43,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 150,
    .lvl = 44,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = 150,
    .lvl = 41,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = 250,
    .lvl = 45,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_BrendanRoute103Mudkip[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_TREECKO,
    }
};

static const struct TrainerMon sParty_BrendanRoute110Mudkip[] = {
    {
    .iv = 50,
    .lvl = 18,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 50,
    .lvl = 18,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 100,
    .lvl = 20,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_BrendanRoute119Mudkip[] = {
    {
    .iv = 100,
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 100,
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 150,
    .lvl = 31,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_BrendanRoute103Treecko[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_TORCHIC,
    }
};

static const struct TrainerMon sParty_BrendanRoute110Treecko[] = {
    {
    .iv = 50,
    .lvl = 18,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 50,
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 100,
    .lvl = 20,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_BrendanRoute119Treecko[] = {
    {
    .iv = 100,
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 100,
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 150,
    .lvl = 31,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_BrendanRoute103Torchic[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_MUDKIP,
    }
};

static const struct TrainerMon sParty_BrendanRoute110Torchic[] = {
    {
    .iv = 50,
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 50,
    .lvl = 18,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 100,
    .lvl = 20,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_BrendanRoute119Torchic[] = {
    {
    .iv = 100,
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 100,
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 150,
    .lvl = 31,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_MayRoute103Mudkip[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_TREECKO,
    }
};

static const struct TrainerMon sParty_MayRoute110Mudkip[] = {
    {
    .iv = 50,
    .lvl = 18,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 50,
    .lvl = 18,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 100,
    .lvl = 20,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_MayRoute119Mudkip[] = {
    {
    .iv = 100,
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 100,
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 150,
    .lvl = 31,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_MayRoute103Treecko[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_TORCHIC,
    }
};

static const struct TrainerMon sParty_MayRoute110Treecko[] = {
    {
    .iv = 50,
    .lvl = 18,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 50,
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 100,
    .lvl = 20,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_MayRoute119Treecko[] = {
    {
    .iv = 100,
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 100,
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 150,
    .lvl = 31,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_MayRoute103Torchic[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_MUDKIP,
    }
};

static const struct TrainerMon sParty_MayRoute110Torchic[] = {
    {
    .iv = 50,
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 50,
    .lvl = 18,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 100,
    .lvl = 20,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_MayRoute119Torchic[] = {
    {
    .iv = 100,
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 100,
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 150,
    .lvl = 31,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_Isaac1[] = {
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_WHISMUR,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_ARON,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_TAILLOW,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Davis[] = {
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_PINSIR,
    }
};

static const struct TrainerMon sParty_Mitchell[] = {
    {
    .iv = 0,
    .lvl = 43,
    .species = SPECIES_LUNATONE,
    .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_PSYCHIC}
    },
    {
    .iv = 0,
    .lvl = 43,
    .species = SPECIES_SOLROCK,
    .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Isaac2[] = {
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_ARON,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Isaac3[] = {
    {
    .iv = 20,
    .lvl = 25,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 20,
    .lvl = 25,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 20,
    .lvl = 25,
    .species = SPECIES_ARON,
    },
    {
    .iv = 20,
    .lvl = 25,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 20,
    .lvl = 25,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 20,
    .lvl = 25,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Isaac4[] = {
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_ARON,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Isaac5[] = {
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Lydia1[] = {
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = 0,
    .lvl = 11,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Halle[] = {
    {
    .iv = 0,
    .lvl = 43,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = 0,
    .lvl = 43,
    .species = SPECIES_ABSOL,
    }
};

static const struct TrainerMon sParty_Garrison[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Lydia2[] = {
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = 10,
    .lvl = 22,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Lydia3[] = {
    {
    .iv = 20,
    .lvl = 25,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 20,
    .lvl = 25,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 20,
    .lvl = 25,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 20,
    .lvl = 25,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = 20,
    .lvl = 25,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = 20,
    .lvl = 25,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Lydia4[] = {
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Lydia5[] = {
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_AZUMARILL,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Jackson1[] = {
    {
    .iv = 50,
    .lvl = 27,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Lorenzo[] = {
    {
    .iv = 50,
    .lvl = 28,
    .species = SPECIES_SEEDOT,
    },
    {
    .iv = 50,
    .lvl = 28,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = 50,
    .lvl = 28,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Sebastian[] = {
    {
    .iv = 50,
    .lvl = 39,
    .species = SPECIES_CACTURNE,
    }
};

static const struct TrainerMon sParty_Jackson2[] = {
    {
    .iv = 60,
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson3[] = {
    {
    .iv = 70,
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson4[] = {
    {
    .iv = 80,
    .lvl = 37,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson5[] = {
    {
    .iv = 90,
    .lvl = 39,
    .species = SPECIES_KECLEON,
    },
    {
    .iv = 90,
    .lvl = 39,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Catherine1[] = {
    {
    .iv = 50,
    .lvl = 26,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 50,
    .lvl = 26,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Jenna[] = {
    {
    .iv = 50,
    .lvl = 28,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = 50,
    .lvl = 28,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 50,
    .lvl = 28,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Sophia[] = {
    {
    .iv = 50,
    .lvl = 38,
    .species = SPECIES_SWABLU,
    },
    {
    .iv = 50,
    .lvl = 38,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine2[] = {
    {
    .iv = 60,
    .lvl = 30,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 60,
    .lvl = 30,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine3[] = {
    {
    .iv = 70,
    .lvl = 33,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 70,
    .lvl = 33,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine4[] = {
    {
    .iv = 80,
    .lvl = 36,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 80,
    .lvl = 36,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine5[] = {
    {
    .iv = 90,
    .lvl = 39,
    .species = SPECIES_BELLOSSOM,
    },
    {
    .iv = 90,
    .lvl = 39,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Julio[] = {
    {
    .iv = 0,
    .lvl = 21,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern5[] = {
    {
    .iv = 50,
    .lvl = 35,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 50,
    .lvl = 35,
    .species = SPECIES_GOLBAT,
    }
};

static const struct TrainerMon sParty_GruntUnused[] = {
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMtPyre4[] = {
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntJaggedPass[] = {
    {
    .iv = 50,
    .lvl = 22,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = 50,
    .lvl = 22,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Marc[] = {
    {
    .iv = 120,
    .lvl = 8,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 130,
    .lvl = 8,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Brenden[] = {
    {
    .iv = 100,
    .lvl = 13,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Lilith[] = {
    {
    .iv = 150,
    .lvl = 13,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Cristian[] = {
    {
    .iv = 200,
    .lvl = 13,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Sylvia[] = {
    {
    .iv = 100,
    .lvl = 36,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Leonardo[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Athena[] = {
    {
    .iv = 100,
    .lvl = 32,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK, MOVE_NONE}
    },
    {
    .iv = 100,
    .lvl = 32,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_THIEF, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Harrison[] = {
    {
    .iv = 0,
    .lvl = 35,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_GruntMtChimney2[] = {
    {
    .iv = 0,
    .lvl = 20,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_Clarence[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Terry[] = {
    {
    .iv = 0,
    .lvl = 37,
    .species = SPECIES_GIRAFARIG,
    }
};

static const struct TrainerMon sParty_Nate[] = {
    {
    .iv = 100,
    .lvl = 36,
    .species = SPECIES_SPOINK,
    }
};

static const struct TrainerMon sParty_Kathleen[] = {
    {
    .iv = 100,
    .lvl = 36,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Clifford[] = {
    {
    .iv = 0,
    .lvl = 36,
    .species = SPECIES_GIRAFARIG,
    }
};

static const struct TrainerMon sParty_Nicholas[] = {
    {
    .iv = 0,
    .lvl = 36,
    .species = SPECIES_WOBBUFFET,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter3[] = {
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_ZUBAT,
    },
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter4[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter5[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter6[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter7[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_Macey[] = {
    {
    .iv = 0,
    .lvl = 36,
    .species = SPECIES_NATU,
    }
};

static const struct TrainerMon sParty_BrendanRustboroTreecko[] = {
    {
    .iv = 25,
    .lvl = 13,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = 50,
    .lvl = 15,
    .species = SPECIES_TORCHIC,
    }
};

static const struct TrainerMon sParty_BrendanRustboroMudkip[] = {
    {
    .iv = 25,
    .lvl = 13,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 50,
    .lvl = 15,
    .species = SPECIES_TREECKO,
    }
};

static const struct TrainerMon sParty_Paxton[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Isabella[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst5[] = {
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_ZUBAT,
    },
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_TabithaMtChimney[] = {
    {
    .iv = 50,
    .lvl = 18,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 50,
    .lvl = 20,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = 50,
    .lvl = 22,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 50,
    .lvl = 22,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_Jonathan[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_KECLEON,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_BrendanRustboroTorchic[] = {
    {
    .iv = 25,
    .lvl = 13,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 50,
    .lvl = 15,
    .species = SPECIES_MUDKIP,
    }
};

static const struct TrainerMon sParty_MayRustboroMudkip[] = {
    {
    .iv = 25,
    .lvl = 13,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 50,
    .lvl = 15,
    .species = SPECIES_TREECKO,
    }
};

static const struct TrainerMon sParty_MaxieMagmaHideout[] = {
    {
    .iv = 150,
    .lvl = 37,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 150,
    .lvl = 38,
    .species = SPECIES_CROBAT,
    },
    {
    .iv = 150,
    .lvl = 39,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_MaxieMtChimney[] = {
    {
    .iv = 150,
    .lvl = 24,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 150,
    .lvl = 24,
    .species = SPECIES_ZUBAT,
    },
    {
    .iv = 150,
    .lvl = 25,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_Tiana[] = {
    {
    .iv = 0,
    .lvl = 4,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 0,
    .lvl = 4,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Haley1[] = {
    {
    .iv = 0,
    .lvl = 6,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = 0,
    .lvl = 6,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Janice[] = {
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Vivi[] = {
    {
    .iv = 100,
    .lvl = 15,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 100,
    .lvl = 15,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 100,
    .lvl = 15,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Haley2[] = {
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Haley3[] = {
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Haley4[] = {
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Haley5[] = {
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Sally[] = {
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_ODDISH,
    }
};

static const struct TrainerMon sParty_Robin[] = {
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Andrea[] = {
    {
    .iv = 100,
    .lvl = 40,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Crissy[] = {
    {
    .iv = 100,
    .lvl = 39,
    .species = SPECIES_GOLDEEN,
    },
    {
    .iv = 100,
    .lvl = 39,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Rick[] = {
    {
    .iv = 0,
    .lvl = 4,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = 0,
    .lvl = 4,
    .species = SPECIES_WURMPLE,
    }
};

static const struct TrainerMon sParty_Lyle[] = {
    {
    .iv = 0,
    .lvl = 3,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = 0,
    .lvl = 3,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = 0,
    .lvl = 3,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = 0,
    .lvl = 3,
    .species = SPECIES_WURMPLE,
    }
};

static const struct TrainerMon sParty_Jose[] = {
    {
    .iv = 50,
    .lvl = 8,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = 50,
    .lvl = 8,
    .species = SPECIES_NINCADA,
    }
};

static const struct TrainerMon sParty_Doug[] = {
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_NINCADA,
    },
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_Greg[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_Kent[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James1[] = {
    {
    .iv = 0,
    .lvl = 6,
    .species = SPECIES_NINCADA,
    },
    {
    .iv = 0,
    .lvl = 6,
    .species = SPECIES_NINCADA,
    }
};

static const struct TrainerMon sParty_James2[] = {
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James3[] = {
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James4[] = {
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James5[] = {
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_NINJASK,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_Brice[] = {
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Trent1[] = {
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Lenny[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Lucas1[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Alan[] = {
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Clark[] = {
    {
    .iv = 0,
    .lvl = 8,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Eric[] = {
    {
    .iv = 0,
    .lvl = 20,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 0,
    .lvl = 20,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_Lucas2[] = {
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_WAILMER,
    .moves = {MOVE_SPLASH, MOVE_WATER_GUN, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Mike1[] = {
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_PELIPPER,
    .moves = {MOVE_GUST, MOVE_GROWL, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_POOCHYENA,
    .moves = {MOVE_BITE, MOVE_SCARY_FACE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Mike2[] = {
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 0,
    .lvl = 16,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Trent2[] = {
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 10,
    .lvl = 24,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Trent3[] = {
    {
    .iv = 20,
    .lvl = 27,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 20,
    .lvl = 27,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 20,
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = 20,
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Trent4[] = {
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Trent5[] = {
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_GOLEM,
    }
};

static const struct TrainerMon sParty_DezAndLuke[] = {
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_LeaAndJed[] = {
    {
    .iv = 0,
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = 0,
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_KiraAndDan1[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan2[] = {
    {
    .iv = 10,
    .lvl = 30,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = 10,
    .lvl = 30,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan3[] = {
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan4[] = {
    {
    .iv = 30,
    .lvl = 36,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = 30,
    .lvl = 36,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan5[] = {
    {
    .iv = 40,
    .lvl = 39,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = 40,
    .lvl = 39,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_Johanna[] = {
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Gerald[] = {
    {
    .iv = 100,
    .lvl = 23,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_FLAMETHROWER, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK, MOVE_BIND}
    }
};

static const struct TrainerMon sParty_Vivian[] = {
    {
    .iv = 100,
    .lvl = 17,
    .species = SPECIES_MEDITITE,
    .moves = {MOVE_BIDE, MOVE_DETECT, MOVE_CONFUSION, MOVE_THUNDER_PUNCH}
    },
    {
    .iv = 100,
    .lvl = 17,
    .species = SPECIES_MEDITITE,
    .moves = {MOVE_THUNDER_PUNCH, MOVE_DETECT, MOVE_CONFUSION, MOVE_MEDITATE}
    }
};

static const struct TrainerMon sParty_Danielle[] = {
    {
    .iv = 100,
    .lvl = 23,
    .species = SPECIES_MEDITITE,
    .moves = {MOVE_BIDE, MOVE_DETECT, MOVE_CONFUSION, MOVE_FIRE_PUNCH}
    }
};

static const struct TrainerMon sParty_Hideo[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_POISON_GAS, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    }
};

static const struct TrainerMon sParty_Keigo[] = {
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    },
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_NINJASK,
    .moves = {MOVE_SAND_ATTACK, MOVE_DOUBLE_TEAM, MOVE_FURY_CUTTER, MOVE_SWORDS_DANCE}
    }
};

static const struct TrainerMon sParty_Riley[] = {
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_NINCADA,
    .moves = {MOVE_LEECH_LIFE, MOVE_FURY_SWIPES, MOVE_MIND_READER, MOVE_DIG}
    },
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    }
};

static const struct TrainerMon sParty_Flint[] = {
    {
    .iv = 150,
    .lvl = 29,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 150,
    .lvl = 29,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Ashley[] = {
    {
    .iv = 100,
    .lvl = 27,
    .species = SPECIES_SWABLU,
    },
    {
    .iv = 100,
    .lvl = 27,
    .species = SPECIES_SWABLU,
    },
    {
    .iv = 100,
    .lvl = 27,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_WallyMauville[] = {
    {
    .iv = 30,
    .lvl = 16,
    .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sParty_WallyVR2[] = {
    {
    .iv = 150,
    .lvl = 47,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = 150,
    .lvl = 46,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 150,
    .lvl = 47,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = 150,
    .lvl = 44,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = 250,
    .lvl = 48,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_WallyVR3[] = {
    {
    .iv = 150,
    .lvl = 50,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = 150,
    .lvl = 49,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 150,
    .lvl = 50,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = 150,
    .lvl = 47,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = 250,
    .lvl = 51,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_WallyVR4[] = {
    {
    .iv = 150,
    .lvl = 53,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = 150,
    .lvl = 52,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 150,
    .lvl = 53,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = 150,
    .lvl = 50,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = 250,
    .lvl = 54,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_WallyVR5[] = {
    {
    .iv = 150,
    .lvl = 56,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = 150,
    .lvl = 55,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 150,
    .lvl = 56,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = 150,
    .lvl = 53,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = 250,
    .lvl = 57,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_BrendanLilycoveMudkip[] = {
    {
    .iv = 150,
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = 150,
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 150,
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 200,
    .lvl = 34,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_BrendanLilycoveTreecko[] = {
    {
    .iv = 150,
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = 150,
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 150,
    .lvl = 32,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = 200,
    .lvl = 34,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_BrendanLilycoveTorchic[] = {
    {
    .iv = 150,
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = 150,
    .lvl = 32,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = 150,
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 200,
    .lvl = 34,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_MayLilycoveMudkip[] = {
    {
    .iv = 150,
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = 150,
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 150,
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 200,
    .lvl = 34,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_MayLilycoveTreecko[] = {
    {
    .iv = 150,
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = 150,
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 150,
    .lvl = 32,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = 200,
    .lvl = 34,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_MayLilycoveTorchic[] = {
    {
    .iv = 150,
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = 150,
    .lvl = 32,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = 150,
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 200,
    .lvl = 34,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_Jonah[] = {
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Henry[] = {
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Roger[] = {
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_MAGIKARP,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_MAGIKARP,
    },
    {
    .iv = 0,
    .lvl = 35,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Alexa[] = {
    {
    .iv = 100,
    .lvl = 34,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 100,
    .lvl = 34,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Ruben[] = {
    {
    .iv = 100,
    .lvl = 34,
    .species = SPECIES_SHIFTRY,
    },
    {
    .iv = 100,
    .lvl = 34,
    .species = SPECIES_NOSEPASS,
    }
};

static const struct TrainerMon sParty_Koji1[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Wayne[] = {
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = 31,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = 36,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Aidan[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sParty_Reed[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tisha[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_CHINCHOU,
    }
};

static const struct TrainerMon sParty_ToriAndTia[] = {
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_SPINDA,
    }
};

static const struct TrainerMon sParty_KimAndIris[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_SWABLU,
    .moves = {MOVE_SING, MOVE_FURY_ATTACK, MOVE_SAFEGUARD, MOVE_AERIAL_ACE}
    },
    {
    .iv = 0,
    .lvl = 35,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_REST, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_TyraAndIvy[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_GROWTH, MOVE_STUN_SPORE, MOVE_MEGA_DRAIN, MOVE_LEECH_SEED}
    },
    {
    .iv = 0,
    .lvl = 20,
    .species = SPECIES_GRAVELER,
    .moves = {MOVE_DEFENSE_CURL, MOVE_ROLLOUT, MOVE_MUD_SPORT, MOVE_ROCK_THROW}
    }
};

static const struct TrainerMon sParty_MelAndPaul[] = {
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_DUSTOX,
    .moves = {MOVE_GUST, MOVE_PSYBEAM, MOVE_TOXIC, MOVE_PROTECT}
    },
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_BEAUTIFLY,
    .moves = {MOVE_GUST, MOVE_MEGA_DRAIN, MOVE_ATTRACT, MOVE_STUN_SPORE}
    }
};

static const struct TrainerMon sParty_JohnAndJay1[] = {
    {
    .iv = 200,
    .lvl = 39,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = 200,
    .lvl = 39,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay2[] = {
    {
    .iv = 210,
    .lvl = 43,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = 210,
    .lvl = 43,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay3[] = {
    {
    .iv = 220,
    .lvl = 46,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = 220,
    .lvl = 46,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay4[] = {
    {
    .iv = 230,
    .lvl = 49,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = 230,
    .lvl = 49,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay5[] = {
    {
    .iv = 240,
    .lvl = 52,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = 240,
    .lvl = 52,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_ReliAndIan[] = {
    {
    .iv = 0,
    .lvl = 35,
    .species = SPECIES_AZUMARILL,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_LilaAndRoy1[] = {
    {
    .iv = 0,
    .lvl = 34,
    .species = SPECIES_CHINCHOU,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_LilaAndRoy2[] = {
    {
    .iv = 0,
    .lvl = 42,
    .species = SPECIES_CHINCHOU,
    },
    {
    .iv = 0,
    .lvl = 40,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_LilaAndRoy3[] = {
    {
    .iv = 0,
    .lvl = 45,
    .species = SPECIES_LANTURN,
    },
    {
    .iv = 0,
    .lvl = 43,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_LilaAndRoy4[] = {
    {
    .iv = 0,
    .lvl = 48,
    .species = SPECIES_LANTURN,
    },
    {
    .iv = 0,
    .lvl = 46,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_LilaAndRoy5[] = {
    {
    .iv = 0,
    .lvl = 51,
    .species = SPECIES_LANTURN,
    },
    {
    .iv = 0,
    .lvl = 49,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_LisaAndRay[] = {
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_GOLDEEN,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Chris[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_MAGIKARP,
    },
    {
    .iv = 0,
    .lvl = 20,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_FEEBAS,
    },
    {
    .iv = 0,
    .lvl = 23,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Dawson[] = {
    {
    .iv = 0,
    .lvl = 8,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET
    },
    {
    .iv = 0,
    .lvl = 8,
    .species = SPECIES_POOCHYENA,
    .heldItem = ITEM_NONE
    }
};

static const struct TrainerMon sParty_Sarah[] = {
    {
    .iv = 0,
    .lvl = 8,
    .species = SPECIES_LOTAD,
    .heldItem = ITEM_NONE
    },
    {
    .iv = 0,
    .lvl = 8,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Darian[] = {
    {
    .iv = 0,
    .lvl = 9,
    .species = SPECIES_MAGIKARP,
    }
};

static const struct TrainerMon sParty_Hailey[] = {
    {
    .iv = 0,
    .lvl = 13,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Chandler[] = {
    {
    .iv = 0,
    .lvl = 12,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = 12,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Kaleb[] = {
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Joseph[] = {
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_VOLTORB,
    }
};

static const struct TrainerMon sParty_Alyssa[] = {
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Marcos[] = {
    {
    .iv = 100,
    .lvl = 15,
    .species = SPECIES_VOLTORB,
    }
};

static const struct TrainerMon sParty_Rhett[] = {
    {
    .iv = 100,
    .lvl = 15,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Tyron[] = {
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Celina[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Bianca[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Hayden[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Sophie[] = {
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Coby[] = {
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_SKARMORY,
    },
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Lawrence[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_BALTOY,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Wyatt[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_ARON,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_ARON,
    }
};

static const struct TrainerMon sParty_Angelina[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Kai[] = {
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_BARBOACH,
    }
};

static const struct TrainerMon sParty_Charlotte[] = {
    {
    .iv = 0,
    .lvl = 19,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Deandre[] = {
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_ARON,
    },
    {
    .iv = 0,
    .lvl = 14,
    .species = SPECIES_ELECTRIKE,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout1[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout2[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout3[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout4[] = {
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_BALTOY,
    },
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout5[] = {
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_BALTOY,
    },
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout6[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout7[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout8[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout9[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout10[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout11[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout12[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout13[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout14[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout15[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout16[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_TabithaMagmaHideout[] = {
    {
    .iv = 75,
    .lvl = 26,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 75,
    .lvl = 28,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 75,
    .lvl = 30,
    .species = SPECIES_ZUBAT,
    },
    {
    .iv = 75,
    .lvl = 33,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_Darcy[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_MaxieMossdeep[] = {
    {
    .iv = 150,
    .lvl = 42,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 150,
    .lvl = 43,
    .species = SPECIES_CROBAT,
    },
    {
    .iv = 150,
    .lvl = 44,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_Pete[] = {
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Isabelle[] = {
    {
    .iv = 0,
    .lvl = 15,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Andres1[] = {
    {
    .iv = 50,
    .lvl = 25,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = 50,
    .lvl = 25,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Josue[] = {
    {
    .iv = 50,
    .lvl = 25,
    .species = SPECIES_TAILLOW,
    },
    {
    .iv = 50,
    .lvl = 25,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Camron[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Cory1[] = {
    {
    .iv = 0,
    .lvl = 24,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = 24,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 0,
    .lvl = 24,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Carolina[] = {
    {
    .iv = 50,
    .lvl = 24,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 50,
    .lvl = 24,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 50,
    .lvl = 24,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Elijah[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_SKARMORY,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sParty_Celia[] = {
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Bryan[] = {
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Branden[] = {
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_TAILLOW,
    },
    {
    .iv = 0,
    .lvl = 22,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Bryant[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_SLUGMA,
    }
};

static const struct TrainerMon sParty_Shayla[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Kyra[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_DODUO,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Jaiden[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_NINJASK,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_GULPIN,
    }
};

static const struct TrainerMon sParty_Alix[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_KIRLIA,
    }
};

static const struct TrainerMon sParty_Helene[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Marlene[] = {
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = 0,
    .lvl = 18,
    .species = SPECIES_SPOINK,
    }
};

static const struct TrainerMon sParty_Devan[] = {
    {
    .iv = 0,
    .lvl = 8,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 0,
    .lvl = 8,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Johnson[] = {
    {
    .iv = 0,
    .lvl = 8,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 0,
    .lvl = 8,
    .species = SPECIES_LOTAD,
    }
};

static const struct TrainerMon sParty_Melina[] = {
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Brandi[] = {
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sParty_Aisha[] = {
    {
    .iv = 0,
    .lvl = 17,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Makayla[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Fabian[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Dayton[] = {
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 0,
    .lvl = 25,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Rachel[] = {
    {
    .iv = 0,
    .lvl = 26,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Leonel[] = {
    {
    .iv = 100,
    .lvl = 30,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_THUNDER, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Callie[] = {
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = 0,
    .lvl = 28,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cale[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMon sParty_Myles[] = {
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Pat[] = {
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = 10,
    .lvl = 25,
    .species = SPECIES_GULPIN,
    }
};

static const struct TrainerMon sParty_Cristin1[] = {
    {
    .iv = 100,
    .lvl = 29,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 100,
    .lvl = 29,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_MayRustboroTreecko[] = {
    {
    .iv = 25,
    .lvl = 13,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = 50,
    .lvl = 15,
    .species = SPECIES_TORCHIC,
    }
};

static const struct TrainerMon sParty_MayRustboroTorchic[] = {
    {
    .iv = 25,
    .lvl = 13,
    .species = SPECIES_TORKOAL,
    },
    {
    .iv = 50,
    .lvl = 15,
    .species = SPECIES_MUDKIP,
    }
};

static const struct TrainerMon sParty_Roxanne2[] = {
    {
    .iv = 255,
    .lvl = 32,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_MAGNITUDE, MOVE_EXPLOSION}
    },
    {
    .iv = 255,
    .lvl = 35,
    .species = SPECIES_KABUTO,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = 255,
    .lvl = 35,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = 255,
    .lvl = 37,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Roxanne3[] = {
    {
    .iv = 255,
    .lvl = 37,
    .species = SPECIES_OMANYTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    .iv = 255,
    .lvl = 37,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_MAGNITUDE, MOVE_EXPLOSION}
    },
    {
    .iv = 255,
    .lvl = 40,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = 255,
    .lvl = 40,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = 255,
    .lvl = 42,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Roxanne4[] = {
    {
    .iv = 255,
    .lvl = 42,
    .species = SPECIES_OMASTAR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    .iv = 255,
    .lvl = 42,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_EARTHQUAKE, MOVE_EXPLOSION}
    },
    {
    .iv = 255,
    .lvl = 45,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = 255,
    .lvl = 45,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = 255,
    .lvl = 47,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Roxanne5[] = {
    {
    .iv = 255,
    .lvl = 47,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROCK_SLIDE, MOVE_HYPER_BEAM, MOVE_SUPERSONIC, MOVE_PROTECT}
    },
    {
    .iv = 255,
    .lvl = 47,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROLLOUT, MOVE_EARTHQUAKE, MOVE_EXPLOSION}
    },
    {
    .iv = 255,
    .lvl = 47,
    .species = SPECIES_OMASTAR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    .iv = 255,
    .lvl = 50,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = 255,
    .lvl = 50,
    .species = SPECIES_STEELIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = 255,
    .lvl = 52,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Brawly2[] = {
    {
    .iv = 255,
    .lvl = 33,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = 255,
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = 255,
    .lvl = 35,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = 255,
    .lvl = 37,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly3[] = {
    {
    .iv = 255,
    .lvl = 38,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = 255,
    .lvl = 38,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = 255,
    .lvl = 40,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = 255,
    .lvl = 42,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly4[] = {
    {
    .iv = 255,
    .lvl = 40,
    .species = SPECIES_HITMONCHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKY_UPPERCUT, MOVE_PROTECT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = 255,
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = 255,
    .lvl = 43,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC}
    },
    {
    .iv = 255,
    .lvl = 45,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = 255,
    .lvl = 47,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly5[] = {
    {
    .iv = 255,
    .lvl = 46,
    .species = SPECIES_HITMONLEE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_MEGA_KICK, MOVE_FOCUS_PUNCH, MOVE_EARTHQUAKE, MOVE_BULK_UP}
    },
    {
    .iv = 255,
    .lvl = 46,
    .species = SPECIES_HITMONCHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKY_UPPERCUT, MOVE_PROTECT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = 255,
    .lvl = 48,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = 255,
    .lvl = 48,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC}
    },
    {
    .iv = 255,
    .lvl = 50,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = 255,
    .lvl = 52,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Wattson2[] = {
    {
    .iv = 255,
    .lvl = 36,
    .species = SPECIES_MAREEP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = 255,
    .lvl = 36,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = 255,
    .lvl = 38,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = 255,
    .lvl = 40,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson3[] = {
    {
    .iv = 255,
    .lvl = 39,
    .species = SPECIES_PIKACHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_SHOCK_WAVE}
    },
    {
    .iv = 255,
    .lvl = 41,
    .species = SPECIES_FLAAFFY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = 255,
    .lvl = 41,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = 255,
    .lvl = 43,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = 255,
    .lvl = 45,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson4[] = {
    {
    .iv = 255,
    .lvl = 44,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_PROTECT}
    },
    {
    .iv = 255,
    .lvl = 46,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = 255,
    .lvl = 46,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = 255,
    .lvl = 48,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = 255,
    .lvl = 50,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson5[] = {
    {
    .iv = 255,
    .lvl = 50,
    .species = SPECIES_ELECTABUZZ,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SWIFT, MOVE_FOCUS_PUNCH, MOVE_THUNDER_PUNCH, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = 255,
    .lvl = 51,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_PROTECT}
    },
    {
    .iv = 255,
    .lvl = 51,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = 255,
    .lvl = 53,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = 255,
    .lvl = 53,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = 255,
    .lvl = 55,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Flannery2[] = {
    {
    .iv = 255,
    .lvl = 38,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = 255,
    .lvl = 36,
    .species = SPECIES_PONYTA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = 255,
    .lvl = 38,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = 255,
    .lvl = 40,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery3[] = {
    {
    .iv = 255,
    .lvl = 41,
    .species = SPECIES_GROWLITHE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_SUNNY_DAY}
    },
    {
    .iv = 255,
    .lvl = 43,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = 255,
    .lvl = 41,
    .species = SPECIES_PONYTA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = 255,
    .lvl = 43,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = 255,
    .lvl = 45,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery4[] = {
    {
    .iv = 255,
    .lvl = 46,
    .species = SPECIES_HOUNDOUR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY}
    },
    {
    .iv = 255,
    .lvl = 46,
    .species = SPECIES_GROWLITHE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
    .iv = 255,
    .lvl = 48,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = 255,
    .lvl = 46,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = 255,
    .lvl = 48,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = 255,
    .lvl = 50,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery5[] = {
    {
    .iv = 255,
    .lvl = 51,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
    .iv = 255,
    .lvl = 53,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = 255,
    .lvl = 51,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY}
    },
    {
    .iv = 255,
    .lvl = 51,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = 255,
    .lvl = 53,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = 255,
    .lvl = 55,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Norman2[] = {
    {
    .iv = 255,
    .lvl = 42,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = 255,
    .lvl = 42,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = 255,
    .lvl = 43,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = 255,
    .lvl = 45,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman3[] = {
    {
    .iv = 255,
    .lvl = 47,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = 255,
    .lvl = 47,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = 255,
    .lvl = 45,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .iv = 255,
    .lvl = 48,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = 255,
    .lvl = 50,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman4[] = {
    {
    .iv = 255,
    .lvl = 52,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = 255,
    .lvl = 52,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = 255,
    .lvl = 50,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .iv = 255,
    .lvl = 53,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = 255,
    .lvl = 55,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman5[] = {
    {
    .iv = 255,
    .lvl = 57,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = 255,
    .lvl = 57,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = 255,
    .lvl = 55,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .iv = 255,
    .lvl = 57,
    .species = SPECIES_TAUROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TAKE_DOWN, MOVE_PROTECT, MOVE_FIRE_BLAST, MOVE_EARTHQUAKE}
    },
    {
    .iv = 255,
    .lvl = 58,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = 255,
    .lvl = 60,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Winona2[] = {
    {
    .iv = 255,
    .lvl = 40,
    .species = SPECIES_DRATINI,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = 255,
    .lvl = 38,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = 255,
    .lvl = 41,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = 255,
    .lvl = 43,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = 255,
    .lvl = 45,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona3[] = {
    {
    .iv = 255,
    .lvl = 43,
    .species = SPECIES_HOOTHOOT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .iv = 255,
    .lvl = 43,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = 255,
    .lvl = 45,
    .species = SPECIES_DRAGONAIR,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = 255,
    .lvl = 46,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = 255,
    .lvl = 48,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = 255,
    .lvl = 50,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona4[] = {
    {
    .iv = 255,
    .lvl = 48,
    .species = SPECIES_NOCTOWL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .iv = 255,
    .lvl = 49,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = 255,
    .lvl = 50,
    .species = SPECIES_DRAGONAIR,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = 255,
    .lvl = 51,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = 255,
    .lvl = 53,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = 255,
    .lvl = 55,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona5[] = {
    {
    .iv = 255,
    .lvl = 53,
    .species = SPECIES_NOCTOWL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .iv = 255,
    .lvl = 54,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = 255,
    .lvl = 55,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = 255,
    .lvl = 55,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_THUNDERBOLT, MOVE_EARTHQUAKE, MOVE_ICE_BEAM}
    },
    {
    .iv = 255,
    .lvl = 58,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = 255,
    .lvl = 60,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_SKY_ATTACK, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_TateAndLiza2[] = {
    {
    .iv = 255,
    .lvl = 48,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = 255,
    .lvl = 49,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = 255,
    .lvl = 49,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = 255,
    .lvl = 50,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = 255,
    .lvl = 50,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza3[] = {
    {
    .iv = 255,
    .lvl = 53,
    .species = SPECIES_DROWZEE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = 255,
    .lvl = 53,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = 255,
    .lvl = 54,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = 255,
    .lvl = 54,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = 255,
    .lvl = 55,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = 255,
    .lvl = 55,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza4[] = {
    {
    .iv = 255,
    .lvl = 58,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = 255,
    .lvl = 59,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = 255,
    .lvl = 58,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = 255,
    .lvl = 59,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = 255,
    .lvl = 60,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = 255,
    .lvl = 60,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza5[] = {
    {
    .iv = 255,
    .lvl = 63,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = 255,
    .lvl = 64,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = 255,
    .lvl = 63,
    .species = SPECIES_SLOWKING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = 255,
    .lvl = 64,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = 255,
    .lvl = 65,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = 255,
    .lvl = 65,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_Juan2[] = {
    {
    .iv = 255,
    .lvl = 46,
    .species = SPECIES_POLIWAG,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    .iv = 255,
    .lvl = 46,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = 255,
    .lvl = 48,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = 255,
    .lvl = 48,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = 255,
    .lvl = 51,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan3[] = {
    {
    .iv = 255,
    .lvl = 50,
    .species = SPECIES_POLIWHIRL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    .iv = 255,
    .lvl = 51,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = 255,
    .lvl = 53,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = 255,
    .lvl = 53,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = 255,
    .lvl = 56,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan4[] = {
    {
    .iv = 255,
    .lvl = 56,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY}
    },
    {
    .iv = 255,
    .lvl = 58,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = 255,
    .lvl = 56,
    .species = SPECIES_POLIWHIRL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    .iv = 255,
    .lvl = 58,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = 255,
    .lvl = 58,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = 255,
    .lvl = 61,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan5[] = {
    {
    .iv = 255,
    .lvl = 61,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY}
    },
    {
    .iv = 255,
    .lvl = 63,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = 255,
    .lvl = 61,
    .species = SPECIES_POLITOED,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_PERISH_SONG}
    },
    {
    .iv = 255,
    .lvl = 63,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_SHEER_COLD}
    },
    {
    .iv = 255,
    .lvl = 63,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = 255,
    .lvl = 66,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Angelo[] = {
    {
    .iv = 100,
    .lvl = 17,
    .species = SPECIES_ILLUMISE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHOCK_WAVE, MOVE_QUICK_ATTACK, MOVE_CHARM, MOVE_NONE}
    },
    {
    .iv = 100,
    .lvl = 17,
    .species = SPECIES_VOLBEAT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHOCK_WAVE, MOVE_QUICK_ATTACK, MOVE_CONFUSE_RAY, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Darius[] = {
    {
    .iv = 200,
    .lvl = 30,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Steven[] = {
    {
    .iv = 255,
    .lvl = 77,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TOXIC, MOVE_AERIAL_ACE, MOVE_SPIKES, MOVE_STEEL_WING}
    },
    {
    .iv = 255,
    .lvl = 75,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE}
    },
    {
    .iv = 255,
    .lvl = 76,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_EARTHQUAKE, MOVE_SOLAR_BEAM, MOVE_DRAGON_CLAW}
    },
    {
    .iv = 255,
    .lvl = 76,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_INGRAIN, MOVE_CONFUSE_RAY}
    },
    {
    .iv = 255,
    .lvl = 76,
    .species = SPECIES_ARMALDO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE, MOVE_SLASH}
    },
    {
    .iv = 255,
    .lvl = 78,
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_METEOR_MASH, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Anabel[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Tucker[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Spenser[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Greta[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Noland[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Lucy[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Brandon[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Andres2[] = {
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Andres3[] = {
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Andres4[] = {
    {
    .iv = 30,
    .lvl = 35,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = 30,
    .lvl = 35,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = 30,
    .lvl = 35,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Andres5[] = {
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Cory2[] = {
    {
    .iv = 10,
    .lvl = 30,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 10,
    .lvl = 30,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 10,
    .lvl = 30,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Cory3[] = {
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Cory4[] = {
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Cory5[] = {
    {
    .iv = 40,
    .lvl = 36,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 40,
    .lvl = 36,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = 40,
    .lvl = 36,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Pablo2[] = {
    {
    .iv = 10,
    .lvl = 37,
    .species = SPECIES_STARYU,
    },
    {
    .iv = 10,
    .lvl = 37,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo3[] = {
    {
    .iv = 20,
    .lvl = 39,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 20,
    .lvl = 39,
    .species = SPECIES_STARYU,
    },
    {
    .iv = 20,
    .lvl = 39,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo4[] = {
    {
    .iv = 30,
    .lvl = 41,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 30,
    .lvl = 41,
    .species = SPECIES_STARYU,
    },
    {
    .iv = 30,
    .lvl = 41,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo5[] = {
    {
    .iv = 40,
    .lvl = 43,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 40,
    .lvl = 43,
    .species = SPECIES_STARMIE,
    },
    {
    .iv = 40,
    .lvl = 43,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Koji2[] = {
    {
    .iv = 10,
    .lvl = 37,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = 10,
    .lvl = 37,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji3[] = {
    {
    .iv = 20,
    .lvl = 39,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = 20,
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = 20,
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji4[] = {
    {
    .iv = 30,
    .lvl = 41,
    .species = SPECIES_HARIYAMA,
    },
    {
    .iv = 30,
    .lvl = 41,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = 30,
    .lvl = 41,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji5[] = {
    {
    .iv = 40,
    .lvl = 43,
    .species = SPECIES_HARIYAMA,
    },
    {
    .iv = 40,
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    },
    {
    .iv = 40,
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Cristin2[] = {
    {
    .iv = 110,
    .lvl = 35,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 110,
    .lvl = 35,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Cristin3[] = {
    {
    .iv = 120,
    .lvl = 37,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = 120,
    .lvl = 37,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 120,
    .lvl = 37,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Cristin4[] = {
    {
    .iv = 130,
    .lvl = 39,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = 130,
    .lvl = 39,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 100,
    .lvl = 39,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Cristin5[] = {
    {
    .iv = 140,
    .lvl = 41,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = 140,
    .lvl = 41,
    .species = SPECIES_EXPLOUD,
    },
    {
    .iv = 140,
    .lvl = 41,
    .species = SPECIES_SLAKING,
    }
};

static const struct TrainerMon sParty_Fernando2[] = {
    {
    .iv = 10,
    .lvl = 35,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = 10,
    .lvl = 35,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = 10,
    .lvl = 35,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Fernando3[] = {
    {
    .iv = 20,
    .lvl = 37,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = 20,
    .lvl = 37,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 20,
    .lvl = 37,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Fernando4[] = {
    {
    .iv = 30,
    .lvl = 39,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 30,
    .lvl = 39,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 30,
    .lvl = 39,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Fernando5[] = {
    {
    .iv = 40,
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 40,
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 40,
    .lvl = 41,
    .species = SPECIES_EXPLOUD,
    }
};

static const struct TrainerMon sParty_Sawyer2[] = {
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 10,
    .lvl = 26,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Sawyer3[] = {
    {
    .iv = 20,
    .lvl = 28,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 20,
    .lvl = 28,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 20,
    .lvl = 28,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Sawyer4[] = {
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Sawyer5[] = {
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_CAMERUPT,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_GOLEM,
    }
};

static const struct TrainerMon sParty_Gabrielle2[] = {
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_SEEDOT,
    },
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Gabrielle3[] = {
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Gabrielle4[] = {
    {
    .iv = 30,
    .lvl = 35,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = 30,
    .lvl = 35,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 30,
    .lvl = 35,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 30,
    .lvl = 35,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 30,
    .lvl = 35,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = 30,
    .lvl = 35,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Gabrielle5[] = {
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_SHIFTRY,
    },
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Thalia2[] = {
    {
    .iv = 10,
    .lvl = 34,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 10,
    .lvl = 34,
    .species = SPECIES_HORSEA,
    }
};

static const struct TrainerMon sParty_Thalia3[] = {
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Thalia4[] = {
    {
    .iv = 30,
    .lvl = 38,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = 30,
    .lvl = 38,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 30,
    .lvl = 38,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Thalia5[] = {
    {
    .iv = 40,
    .lvl = 40,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = 40,
    .lvl = 40,
    .species = SPECIES_WAILORD,
    },
    {
    .iv = 40,
    .lvl = 40,
    .species = SPECIES_KINGDRA,
    }
};

static const struct TrainerMon sParty_Mariela[] = {
    {
    .iv = 0,
    .lvl = 41,
    .species = SPECIES_CHIMECHO,
    }
};

static const struct TrainerMon sParty_Alvaro[] = {
    {
    .iv = 0,
    .lvl = 41,
    .species = SPECIES_BANETTE,
    },
    {
    .iv = 0,
    .lvl = 41,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Everett[] = {
    {
    .iv = 0,
    .lvl = 41,
    .species = SPECIES_WOBBUFFET,
    }
};

static const struct TrainerMon sParty_Red[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_CHARMANDER,
    }
};

static const struct TrainerMon sParty_Leaf[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_BULBASAUR,
    }
};

static const struct TrainerMon sParty_BrendanLinkPlaceholder[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_GROUDON,
    }
};

static const struct TrainerMon sParty_MayLinkPlaceholder[] = {
    {
    .iv = 0,
    .lvl = 5,
    .species = SPECIES_KYOGRE,
    }
};

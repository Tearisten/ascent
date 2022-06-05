#ifndef GUARD_CONSTANTS_ITEMS_H
#define GUARD_CONSTANTS_ITEMS_H

#define ITEM_NONE 0

// Poké Balls
#define ITEM_POKE_BALL 1
#define ITEM_GREAT_BALL 2
#define ITEM_ULTRA_BALL 3
#define ITEM_MASTER_BALL 4
#define ITEM_PREMIER_BALL 5
#define ITEM_HEAL_BALL 6
#define ITEM_NET_BALL 7
#define ITEM_NEST_BALL 8
#define ITEM_DIVE_BALL 9
#define ITEM_DUSK_BALL 10
#define ITEM_TIMER_BALL 11
#define ITEM_QUICK_BALL 12
#define ITEM_REPEAT_BALL 13
#define ITEM_LUXURY_BALL 14
#define ITEM_LEVEL_BALL 15
#define ITEM_LURE_BALL 16
#define ITEM_MOON_BALL 17
#define ITEM_FRIEND_BALL 18
#define ITEM_LOVE_BALL 19
#define ITEM_FAST_BALL 20
#define ITEM_HEAVY_BALL 21
#define ITEM_DREAM_BALL 22
#define ITEM_SAFARI_BALL 23
#define ITEM_SPORT_BALL 24
#define ITEM_PARK_BALL 25
#define ITEM_BEAST_BALL 26
#define ITEM_CHERISH_BALL 27

// Note: If moving ball IDs around, updating FIRST_BALL/LAST_BALL is not sufficient
//       Several places expect the ball IDs to be first and contiguous (e.g. MON_DATA_POKEBALL)
//       If adding new balls, it's easiest to insert them after the last ball and increment the below IDs (and removing ITEM_034 for example)
#define FIRST_BALL ITEM_POKE_BALL
#define LAST_BALL  ITEM_CHERISH_BALL

// Medicine
#define ITEM_POTION 28
#define ITEM_SUPER_POTION 29
#define ITEM_HYPER_POTION 30
#define ITEM_MAX_POTION 31
#define ITEM_FULL_RESTORE 32
#define ITEM_REVIVE 33
#define ITEM_MAX_REVIVE 34
#define ITEM_FRESH_WATER 35
#define ITEM_SODA_POP 36
#define ITEM_LEMONADE 37
#define ITEM_MOOMOO_MILK 38
#define ITEM_ENERGY_POWDER 39
#define ITEM_ENERGY_ROOT 40
#define ITEM_HEAL_POWDER 41
#define ITEM_REVIVAL_HERB 42
#define ITEM_ANTIDOTE 43
#define ITEM_PARALYZE_HEAL 44
#define ITEM_BURN_HEAL 45
#define ITEM_ICE_HEAL 46
#define ITEM_AWAKENING 47
#define ITEM_FULL_HEAL 48
#define ITEM_ETHER 49
#define ITEM_MAX_ETHER 50
#define ITEM_ELIXIR 51
#define ITEM_MAX_ELIXIR 52
#define ITEM_BERRY_JUICE 53
#define ITEM_SACRED_ASH 54
#define ITEM_SWEET_HEART 55
#define ITEM_MAX_HONEY 56

// Regional Specialties
#define ITEM_PEWTER_CRUNCHIES 57
#define ITEM_RAGE_CANDY_BAR 58
#define ITEM_LAVA_COOKIE 59
#define ITEM_OLD_GATEAU 60
#define ITEM_CASTELIACONE 61
#define ITEM_LUMIOSE_GALETTE 62
#define ITEM_SHALOUR_SABLE 63
#define ITEM_BIG_MALASADA 64

// Vitamins
#define ITEM_HP_UP 65
#define ITEM_PROTEIN 66
#define ITEM_IRON 67
#define ITEM_CALCIUM 68
#define ITEM_ZINC 69
#define ITEM_CARBOS 70
#define ITEM_PP_UP 71
#define ITEM_PP_MAX 72

// EV Feathers
#define ITEM_HEALTH_FEATHER 73
#define ITEM_MUSCLE_FEATHER 74
#define ITEM_RESIST_FEATHER 75
#define ITEM_GENIUS_FEATHER 76
#define ITEM_CLEVER_FEATHER 77
#define ITEM_SWIFT_FEATHER 78

// Ability Modifiers
#define ITEM_ABILITY_CAPSULE 79
#define ITEM_ABILITY_PATCH 80

// Mints
#define ITEM_LONELY_MINT 81
#define ITEM_ADAMANT_MINT 82
#define ITEM_NAUGHTY_MINT 83
#define ITEM_BRAVE_MINT 84
#define ITEM_BOLD_MINT 85
#define ITEM_IMPISH_MINT 86
#define ITEM_LAX_MINT 87
#define ITEM_RELAXED_MINT 88
#define ITEM_MODEST_MINT 89
#define ITEM_MILD_MINT 90
#define ITEM_RASH_MINT 91
#define ITEM_QUIET_MINT 92
#define ITEM_CALM_MINT 93
#define ITEM_GENTLE_MINT 94
#define ITEM_CAREFUL_MINT 95
#define ITEM_SASSY_MINT 96
#define ITEM_TIMID_MINT 97
#define ITEM_HASTY_MINT 98
#define ITEM_JOLLY_MINT 99
#define ITEM_NAIVE_MINT 100
#define ITEM_SERIOUS_MINT 101

// Candy
#define ITEM_RARE_CANDY 102
#define ITEM_EXP_CANDY_XS 103
#define ITEM_EXP_CANDY_S 104
#define ITEM_EXP_CANDY_M 105
#define ITEM_EXP_CANDY_L 106
#define ITEM_EXP_CANDY_XL 107
#define ITEM_DYNAMAX_CANDY 108

// Medicinal Flutes
#define ITEM_BLUE_FLUTE 109
#define ITEM_YELLOW_FLUTE 110
#define ITEM_RED_FLUTE 111

// Encounter-modifying Flutes
#define ITEM_BLACK_FLUTE 112
#define ITEM_WHITE_FLUTE 113

// Encounter Modifiers
#define ITEM_REPEL 114
#define ITEM_SUPER_REPEL 115
#define ITEM_MAX_REPEL 116
#define ITEM_LURE 117
#define ITEM_SUPER_LURE 118
#define ITEM_MAX_LURE 119

#define ITEM_ESCAPE_ROPE 120

// X Items
#define ITEM_X_ATTACK 121
#define ITEM_X_DEFENSE 122
#define ITEM_X_SP_ATK 123
#define ITEM_X_SP_DEF 124
#define ITEM_X_SPEED 125
#define ITEM_X_ACCURACY 126

#define ITEM_DIRE_HIT 127
#define ITEM_GUARD_SPEC 128

// Escape Items
#define ITEM_POKE_DOLL 129
#define ITEM_FLUFFY_TAIL 130
#define ITEM_POKE_TOY 131

#define ITEM_MAX_MUSHROOMS 132

// Treasures
#define ITEM_BOTTLE_CAP 133
#define ITEM_GOLD_BOTTLE_CAP 134
#define ITEM_NUGGET 135
#define ITEM_BIG_NUGGET 136
#define ITEM_TINY_MUSHROOM 137
#define ITEM_BIG_MUSHROOM 138
#define ITEM_BALM_MUSHROOM 139
#define ITEM_PEARL 140
#define ITEM_BIG_PEARL 141
#define ITEM_PEARL_STRING 142
#define ITEM_STARDUST 143
#define ITEM_STAR_PIECE 144
#define ITEM_COMET_SHARD 145
#define ITEM_SHOAL_SALT 146
#define ITEM_SHOAL_SHELL 147
#define ITEM_RED_SHARD 148
#define ITEM_BLUE_SHARD 149
#define ITEM_YELLOW_SHARD 150
#define ITEM_GREEN_SHARD 151
#define ITEM_HEART_SCALE 152
#define ITEM_HONEY 153
#define ITEM_RARE_BONE 154
#define ITEM_ODD_KEYSTONE 155
#define ITEM_PRETTY_FEATHER 156
#define ITEM_RELIC_COPPER 157
#define ITEM_RELIC_SILVER 158
#define ITEM_RELIC_GOLD 159
#define ITEM_RELIC_VASE 160
#define ITEM_RELIC_BAND 161
#define ITEM_RELIC_STATUE 162
#define ITEM_RELIC_CROWN 163
#define ITEM_STRANGE_SOUVENIR 164

// Fossils
#define ITEM_HELIX_FOSSIL 165
#define ITEM_DOME_FOSSIL 166
#define ITEM_OLD_AMBER 167
#define ITEM_ROOT_FOSSIL 168
#define ITEM_CLAW_FOSSIL 169
#define ITEM_ARMOR_FOSSIL 170
#define ITEM_SKULL_FOSSIL 171
#define ITEM_COVER_FOSSIL 172
#define ITEM_PLUME_FOSSIL 173
#define ITEM_JAW_FOSSIL 174
#define ITEM_SAIL_FOSSIL 175
#define ITEM_FOSSILIZED_BIRD 176
#define ITEM_FOSSILIZED_FISH 177
#define ITEM_FOSSILIZED_DRAKE 178
#define ITEM_FOSSILIZED_DINO 179

// Mulch
#define ITEM_GROWTH_MULCH 180
#define ITEM_DAMP_MULCH 181
#define ITEM_STABLE_MULCH 182
#define ITEM_GOOEY_MULCH 183
#define ITEM_RICH_MULCH 184
#define ITEM_SURPRISE_MULCH 185
#define ITEM_BOOST_MULCH 186
#define ITEM_AMAZE_MULCH 187

// Apricorns
#define ITEM_RED_APRICORN 188
#define ITEM_BLUE_APRICORN 189
#define ITEM_YELLOW_APRICORN 190
#define ITEM_GREEN_APRICORN 191
#define ITEM_PINK_APRICORN 192
#define ITEM_WHITE_APRICORN 193
#define ITEM_BLACK_APRICORN 194

#define ITEM_WISHING_PIECE 195
#define ITEM_GALARICA_TWIG 196
#define ITEM_ARMORITE_ORE 197
#define ITEM_DYNITE_ORE 198

// Mail
#define ITEM_ORANGE_MAIL 199
#define ITEM_HARBOR_MAIL 200
#define ITEM_GLITTER_MAIL 201
#define ITEM_MECH_MAIL 202
#define ITEM_WOOD_MAIL 203
#define ITEM_WAVE_MAIL 204
#define ITEM_BEAD_MAIL 205
#define ITEM_SHADOW_MAIL 206
#define ITEM_TROPIC_MAIL 207
#define ITEM_DREAM_MAIL 208
#define ITEM_FAB_MAIL 209
#define ITEM_RETRO_MAIL 210

#define FIRST_MAIL_INDEX ITEM_ORANGE_MAIL

// Evolution Items
#define ITEM_FIRE_STONE 211
#define ITEM_WATER_STONE 212
#define ITEM_THUNDER_STONE 213
#define ITEM_LEAF_STONE 214
#define ITEM_ICE_STONE 215
#define ITEM_SUN_STONE 216
#define ITEM_MOON_STONE 217
#define ITEM_SHINY_STONE 218
#define ITEM_DUSK_STONE 219
#define ITEM_DAWN_STONE 220
#define ITEM_SWEET_APPLE 221
#define ITEM_TART_APPLE 222
#define ITEM_CRACKED_POT 223
#define ITEM_CHIPPED_POT 224
#define ITEM_GALARICA_CUFF 225
#define ITEM_GALARICA_WREATH 226
#define ITEM_DRAGON_SCALE 227
#define ITEM_UPGRADE 228
#define ITEM_PROTECTOR 229
#define ITEM_ELECTIRIZER 230
#define ITEM_MAGMARIZER 231
#define ITEM_DUBIOUS_DISC 232
#define ITEM_REAPER_CLOTH 233
#define ITEM_PRISM_SCALE 234
#define ITEM_WHIPPED_DREAM 235
#define ITEM_SACHET 236
#define ITEM_OVAL_STONE 237
#define ITEM_STRAWBERRY_SWEET 238
#define ITEM_LOVE_SWEET 239
#define ITEM_BERRY_SWEET 240
#define ITEM_CLOVER_SWEET 241
#define ITEM_FLOWER_SWEET 242
#define ITEM_STAR_SWEET 243
#define ITEM_RIBBON_SWEET 244

#define ITEM_EVERSTONE 245

// Nectars
#define ITEM_RED_NECTAR 246
#define ITEM_YELLOW_NECTAR 247
#define ITEM_PINK_NECTAR 248
#define ITEM_PURPLE_NECTAR 249

// Plates
#define ITEM_FLAME_PLATE 250
#define ITEM_SPLASH_PLATE 251
#define ITEM_ZAP_PLATE 252
#define ITEM_MEADOW_PLATE 253
#define ITEM_ICICLE_PLATE 254
#define ITEM_FIST_PLATE 255
#define ITEM_TOXIC_PLATE 256
#define ITEM_EARTH_PLATE 257
#define ITEM_SKY_PLATE 258
#define ITEM_MIND_PLATE 259
#define ITEM_INSECT_PLATE 260
#define ITEM_STONE_PLATE 261
#define ITEM_SPOOKY_PLATE 262
#define ITEM_DRACO_PLATE 263
#define ITEM_DREAD_PLATE 264
#define ITEM_IRON_PLATE 265
#define ITEM_PIXIE_PLATE 266

// Drives
#define ITEM_DOUSE_DRIVE 267
#define ITEM_SHOCK_DRIVE 268
#define ITEM_BURN_DRIVE 269
#define ITEM_CHILL_DRIVE 270

// Memories
#define ITEM_FIRE_MEMORY 271
#define ITEM_WATER_MEMORY 272
#define ITEM_ELECTRIC_MEMORY 273
#define ITEM_GRASS_MEMORY 274
#define ITEM_ICE_MEMORY 275
#define ITEM_FIGHTING_MEMORY 276
#define ITEM_POISON_MEMORY 277
#define ITEM_GROUND_MEMORY 278
#define ITEM_FLYING_MEMORY 279
#define ITEM_PSYCHIC_MEMORY 280
#define ITEM_BUG_MEMORY 281
#define ITEM_ROCK_MEMORY 282
#define ITEM_GHOST_MEMORY 283
#define ITEM_DRAGON_MEMORY 284
#define ITEM_DARK_MEMORY 285
#define ITEM_STEEL_MEMORY 286
#define ITEM_FAIRY_MEMORY 287

#define ITEM_RUSTED_SWORD 288
#define ITEM_RUSTED_SHIELD 289

// Colored Orbs
#define ITEM_RED_ORB 290
#define ITEM_BLUE_ORB 291
#define ITEM_JADE_ORB 292

// Mega Stones
#define ITEM_VENUSAURITE 293
#define ITEM_CHARIZARDITE_X 294
#define ITEM_CHARIZARDITE_Y 295
#define ITEM_BLASTOISINITE 296
#define ITEM_BEEDRILLITE 297
#define ITEM_PIDGEOTITE 298
#define ITEM_ALAKAZITE 299
#define ITEM_SLOWBRONITE 300
#define ITEM_GENGARITE 301
#define ITEM_KANGASKHANITE 302
#define ITEM_PINSIRITE 303
#define ITEM_GYARADOSITE 304
#define ITEM_AERODACTYLITE 305
#define ITEM_MEWTWONITE_X 306
#define ITEM_MEWTWONITE_Y 307
#define ITEM_AMPHAROSITE 308
#define ITEM_STEELIXITE 309
#define ITEM_SCIZORITE 310
#define ITEM_HERACRONITE 311
#define ITEM_HOUNDOOMINITE 312
#define ITEM_TYRANITARITE 313
#define ITEM_SCEPTILITE 314
#define ITEM_BLAZIKENITE 315
#define ITEM_SWAMPERTITE 316
#define ITEM_GARDEVOIRITE 317
#define ITEM_SABLENITE 318
#define ITEM_MAWILITE 319
#define ITEM_AGGRONITE 320
#define ITEM_MEDICHAMITE 321
#define ITEM_MANECTITE 322
#define ITEM_SHARPEDONITE 323
#define ITEM_CAMERUPTITE 324
#define ITEM_ALTARIANITE 325
#define ITEM_BANETTITE 326
#define ITEM_ABSOLITE 327
#define ITEM_GLALITITE 328
#define ITEM_SALAMENCITE 329
#define ITEM_METAGROSSITE 330
#define ITEM_LATIASITE 331
#define ITEM_LATIOSITE 332
#define ITEM_LOPUNNITE 333
#define ITEM_GARCHOMPITE 334
#define ITEM_LUCARIONITE 335
#define ITEM_ABOMASITE 336
#define ITEM_GALLADITE 337
#define ITEM_AUDINITE 338
#define ITEM_DIANCITE 339

// Gems
#define ITEM_NORMAL_GEM 340
#define ITEM_FIRE_GEM 341
#define ITEM_WATER_GEM 342
#define ITEM_ELECTRIC_GEM 343
#define ITEM_GRASS_GEM 344
#define ITEM_ICE_GEM 345
#define ITEM_FIGHTING_GEM 346
#define ITEM_POISON_GEM 347
#define ITEM_GROUND_GEM 348
#define ITEM_FLYING_GEM 349
#define ITEM_PSYCHIC_GEM 350
#define ITEM_BUG_GEM 351
#define ITEM_ROCK_GEM 352
#define ITEM_GHOST_GEM 353
#define ITEM_DRAGON_GEM 354
#define ITEM_DARK_GEM 355
#define ITEM_STEEL_GEM 356
#define ITEM_FAIRY_GEM 357

// Z-Crystals
#define ITEM_NORMALIUM_Z 358
#define ITEM_FIRIUM_Z 359
#define ITEM_WATERIUM_Z 360
#define ITEM_ELECTRIUM_Z 361
#define ITEM_GRASSIUM_Z 362
#define ITEM_ICIUM_Z 363
#define ITEM_FIGHTINIUM_Z 364
#define ITEM_POISONIUM_Z 365
#define ITEM_GROUNDIUM_Z 366
#define ITEM_FLYINIUM_Z 367
#define ITEM_PSYCHIUM_Z 368
#define ITEM_BUGINIUM_Z 369
#define ITEM_ROCKIUM_Z 370
#define ITEM_GHOSTIUM_Z 371
#define ITEM_DRAGONIUM_Z 372
#define ITEM_DARKINIUM_Z 373
#define ITEM_STEELIUM_Z 374
#define ITEM_FAIRIUM_Z 375
#define ITEM_PIKANIUM_Z 376
#define ITEM_EEVIUM_Z 377
#define ITEM_SNORLIUM_Z 378
#define ITEM_MEWNIUM_Z 379
#define ITEM_DECIDIUM_Z 380
#define ITEM_INCINIUM_Z 381
#define ITEM_PRIMARIUM_Z 382
#define ITEM_LYCANIUM_Z 383
#define ITEM_MIMIKIUM_Z 384
#define ITEM_KOMMONIUM_Z 385
#define ITEM_TAPUNIUM_Z 386
#define ITEM_SOLGANIUM_Z 387
#define ITEM_LUNALIUM_Z 388
#define ITEM_MARSHADIUM_Z 389
#define ITEM_ALORAICHIUM_Z 390
#define ITEM_PIKASHUNIUM_Z 391
#define ITEM_ULTRANECROZIUM_Z 392

// Species-specific Held Items
#define ITEM_LIGHT_BALL 393
#define ITEM_LEEK 394
#define ITEM_THICK_CLUB 395
#define ITEM_LUCKY_PUNCH 396
#define ITEM_METAL_POWDER 397
#define ITEM_QUICK_POWDER 398
#define ITEM_DEEP_SEA_SCALE 399
#define ITEM_DEEP_SEA_TOOTH 400
#define ITEM_SOUL_DEW 401
#define ITEM_ADAMANT_ORB 402
#define ITEM_LUSTROUS_ORB 403
#define ITEM_GRISEOUS_ORB 404

// Incenses
#define ITEM_SEA_INCENSE 405
#define ITEM_LAX_INCENSE 406
#define ITEM_ODD_INCENSE 407
#define ITEM_ROCK_INCENSE 408
#define ITEM_FULL_INCENSE 409
#define ITEM_WAVE_INCENSE 410
#define ITEM_ROSE_INCENSE 411
#define ITEM_LUCK_INCENSE 412
#define ITEM_PURE_INCENSE 413

// Contest Scarves
#define ITEM_RED_SCARF 414
#define ITEM_BLUE_SCARF 415
#define ITEM_PINK_SCARF 416
#define ITEM_GREEN_SCARF 417
#define ITEM_YELLOW_SCARF 418

// EV Gain Modifiers
#define ITEM_MACHO_BRACE 419
#define ITEM_POWER_WEIGHT 420
#define ITEM_POWER_BRACER 421
#define ITEM_POWER_BELT 422
#define ITEM_POWER_LENS 423
#define ITEM_POWER_BAND 424
#define ITEM_POWER_ANKLET 425

// Type-boosting Held Items
#define ITEM_SILK_SCARF 426
#define ITEM_CHARCOAL 427
#define ITEM_MYSTIC_WATER 428
#define ITEM_MAGNET 429
#define ITEM_MIRACLE_SEED 430
#define ITEM_NEVER_MELT_ICE 431
#define ITEM_BLACK_BELT 432
#define ITEM_POISON_BARB 433
#define ITEM_SOFT_SAND 434
#define ITEM_SHARP_BEAK 435
#define ITEM_TWISTED_SPOON 436
#define ITEM_SILVER_POWDER 437
#define ITEM_HARD_STONE 438
#define ITEM_SPELL_TAG 439
#define ITEM_DRAGON_FANG 440
#define ITEM_BLACK_GLASSES 441
#define ITEM_METAL_COAT 442

// Choice Items
#define ITEM_CHOICE_BAND 443
#define ITEM_CHOICE_SPECS 444
#define ITEM_CHOICE_SCARF 445

// Status Orbs
#define ITEM_FLAME_ORB 446
#define ITEM_TOXIC_ORB 447

// Weather Rocks
#define ITEM_DAMP_ROCK 448
#define ITEM_HEAT_ROCK 449
#define ITEM_SMOOTH_ROCK 450
#define ITEM_ICY_ROCK 451

// Terrain Seeds
#define ITEM_ELECTRIC_SEED 452
#define ITEM_PSYCHIC_SEED 453
#define ITEM_MISTY_SEED 454
#define ITEM_GRASSY_SEED 455

// Type-activated Stat Modifiers
#define ITEM_ABSORB_BULB 456
#define ITEM_CELL_BATTERY 457
#define ITEM_LUMINOUS_MOSS 458
#define ITEM_SNOWBALL 459

// Misc. Held Items
#define ITEM_BRIGHT_POWDER 460
#define ITEM_WHITE_HERB 461
#define ITEM_EXP_SHARE 462
#define ITEM_QUICK_CLAW 463
#define ITEM_SOOTHE_BELL 464
#define ITEM_MENTAL_HERB 465
#define ITEM_KINGS_ROCK 466
#define ITEM_AMULET_COIN 467
#define ITEM_CLEANSE_TAG 468
#define ITEM_SMOKE_BALL 469
#define ITEM_FOCUS_BAND 470
#define ITEM_LUCKY_EGG 471
#define ITEM_SCOPE_LENS 472
#define ITEM_LEFTOVERS 473
#define ITEM_SHELL_BELL 474
#define ITEM_WIDE_LENS 475
#define ITEM_MUSCLE_BAND 476
#define ITEM_WISE_GLASSES 477
#define ITEM_EXPERT_BELT 478
#define ITEM_LIGHT_CLAY 479
#define ITEM_LIFE_ORB 480
#define ITEM_POWER_HERB 481
#define ITEM_FOCUS_SASH 482
#define ITEM_ZOOM_LENS 483
#define ITEM_METRONOME 484
#define ITEM_IRON_BALL 485
#define ITEM_LAGGING_TAIL 486
#define ITEM_DESTINY_KNOT 487
#define ITEM_BLACK_SLUDGE 488
#define ITEM_GRIP_CLAW 489
#define ITEM_STICKY_BARB 490
#define ITEM_SHED_SHELL 491
#define ITEM_BIG_ROOT 492
#define ITEM_RAZOR_CLAW 493
#define ITEM_RAZOR_FANG 494
#define ITEM_EVIOLITE 495
#define ITEM_FLOAT_STONE 496
#define ITEM_ROCKY_HELMET 497
#define ITEM_AIR_BALLOON 498
#define ITEM_RED_CARD 499
#define ITEM_RING_TARGET 500
#define ITEM_BINDING_BAND 501
#define ITEM_EJECT_BUTTON 502
#define ITEM_WEAKNESS_POLICY 503
#define ITEM_ASSAULT_VEST 504
#define ITEM_SAFETY_GOGGLES 505
#define ITEM_ADRENALINE_ORB 506
#define ITEM_TERRAIN_EXTENDER 507
#define ITEM_PROTECTIVE_PADS 508
#define ITEM_THROAT_SPRAY 509
#define ITEM_EJECT_PACK 510
#define ITEM_HEAVY_DUTY_BOOTS 511
#define ITEM_BLUNDER_POLICY 512
#define ITEM_ROOM_SERVICE 513
#define ITEM_UTILITY_UMBRELLA 514

// Berries
#define ITEM_CHERI_BERRY 515
#define ITEM_CHESTO_BERRY 516
#define ITEM_PECHA_BERRY 517
#define ITEM_RAWST_BERRY 518
#define ITEM_ASPEAR_BERRY 519
#define ITEM_LEPPA_BERRY 520
#define ITEM_ORAN_BERRY 521
#define ITEM_PERSIM_BERRY 522
#define ITEM_LUM_BERRY 523
#define ITEM_SITRUS_BERRY 524
#define ITEM_FIGY_BERRY 525
#define ITEM_WIKI_BERRY 526
#define ITEM_MAGO_BERRY 527
#define ITEM_AGUAV_BERRY 528
#define ITEM_IAPAPA_BERRY 529
#define ITEM_RAZZ_BERRY 530
#define ITEM_BLUK_BERRY 531
#define ITEM_NANAB_BERRY 532
#define ITEM_WEPEAR_BERRY 533
#define ITEM_PINAP_BERRY 534
#define ITEM_POMEG_BERRY 535
#define ITEM_KELPSY_BERRY 536
#define ITEM_QUALOT_BERRY 537
#define ITEM_HONDEW_BERRY 538
#define ITEM_GREPA_BERRY 539
#define ITEM_TAMATO_BERRY 540
#define ITEM_CORNN_BERRY 541
#define ITEM_MAGOST_BERRY 542
#define ITEM_RABUTA_BERRY 543
#define ITEM_NOMEL_BERRY 544
#define ITEM_SPELON_BERRY 545
#define ITEM_PAMTRE_BERRY 546
#define ITEM_WATMEL_BERRY 547
#define ITEM_DURIN_BERRY 548
#define ITEM_BELUE_BERRY 549
#define ITEM_CHILAN_BERRY 550
#define ITEM_OCCA_BERRY 551
#define ITEM_PASSHO_BERRY 552
#define ITEM_WACAN_BERRY 553
#define ITEM_RINDO_BERRY 554
#define ITEM_YACHE_BERRY 555
#define ITEM_CHOPLE_BERRY 556
#define ITEM_KEBIA_BERRY 557
#define ITEM_SHUCA_BERRY 558
#define ITEM_COBA_BERRY 559
#define ITEM_PAYAPA_BERRY 560
#define ITEM_TANGA_BERRY 561
#define ITEM_CHARTI_BERRY 562
#define ITEM_KASIB_BERRY 563
#define ITEM_HABAN_BERRY 564
#define ITEM_COLBUR_BERRY 565
#define ITEM_BABIRI_BERRY 566
#define ITEM_ROSELI_BERRY 567
#define ITEM_LIECHI_BERRY 568
#define ITEM_GANLON_BERRY 569
#define ITEM_SALAC_BERRY 570
#define ITEM_PETAYA_BERRY 571
#define ITEM_APICOT_BERRY 572
#define ITEM_LANSAT_BERRY 573
#define ITEM_STARF_BERRY 574
#define ITEM_ENIGMA_BERRY 575
#define ITEM_MICLE_BERRY 576
#define ITEM_CUSTAP_BERRY 577
#define ITEM_JABOCA_BERRY 578
#define ITEM_ROWAP_BERRY 579
#define ITEM_KEE_BERRY 580
#define ITEM_MARANGA_BERRY 581
#define ITEM_ENIGMA_BERRY_E_READER 582

#define FIRST_BERRY_INDEX ITEM_CHERI_BERRY
#define LAST_BERRY_INDEX  ITEM_ENIGMA_BERRY_E_READER

// TMs/HMs
#define ITEM_TM01 583
#define ITEM_TM02 584
#define ITEM_TM03 585
#define ITEM_TM04 586
#define ITEM_TM05 587
#define ITEM_TM06 588
#define ITEM_TM07 589
#define ITEM_TM08 590
#define ITEM_TM09 591
#define ITEM_TM10 592
#define ITEM_TM11 593
#define ITEM_TM12 594
#define ITEM_TM13 595
#define ITEM_TM14 596
#define ITEM_TM15 597
#define ITEM_TM16 598
#define ITEM_TM17 599
#define ITEM_TM18 600
#define ITEM_TM19 601
#define ITEM_TM20 602
#define ITEM_TM21 603
#define ITEM_TM22 604
#define ITEM_TM23 605
#define ITEM_TM24 606
#define ITEM_TM25 607
#define ITEM_TM26 608
#define ITEM_TM27 609
#define ITEM_TM28 610
#define ITEM_TM29 611
#define ITEM_TM30 612
#define ITEM_TM31 613
#define ITEM_TM32 614
#define ITEM_TM33 615
#define ITEM_TM34 616
#define ITEM_TM35 617
#define ITEM_TM36 618
#define ITEM_TM37 619
#define ITEM_TM38 620
#define ITEM_TM39 621
#define ITEM_TM40 622
#define ITEM_TM41 623
#define ITEM_TM42 624
#define ITEM_TM43 625
#define ITEM_TM44 626
#define ITEM_TM45 627
#define ITEM_TM46 628
#define ITEM_TM47 629
#define ITEM_TM48 630
#define ITEM_TM49 631
#define ITEM_TM50 632
#define ITEM_TM51 633
#define ITEM_TM52 634
#define ITEM_TM53 635
#define ITEM_TM54 636
#define ITEM_TM55 637
#define ITEM_TM56 638
#define ITEM_TM57 639
#define ITEM_TM58 640
#define ITEM_TM59 641
#define ITEM_TM60 642
#define ITEM_TM61 643
#define ITEM_TM62 644
#define ITEM_TM63 645
#define ITEM_TM64 646
#define ITEM_TM65 647
#define ITEM_TM66 648
#define ITEM_TM67 649
#define ITEM_TM68 650
#define ITEM_TM69 651
#define ITEM_TM70 652
#define ITEM_TM71 653
#define ITEM_TM72 654
#define ITEM_TM73 655
#define ITEM_TM74 656
#define ITEM_TM75 657
#define ITEM_TM76 658
#define ITEM_TM77 659
#define ITEM_TM78 660
#define ITEM_TM79 661
#define ITEM_TM80 662
#define ITEM_TM81 663
#define ITEM_TM82 664
#define ITEM_TM83 665
#define ITEM_TM84 666
#define ITEM_TM85 667
#define ITEM_TM86 668
#define ITEM_TM87 669
#define ITEM_TM88 670
#define ITEM_TM89 671
#define ITEM_TM90 672
#define ITEM_TM91 673
#define ITEM_TM92 674
#define ITEM_TM93 675
#define ITEM_TM94 676
#define ITEM_TM95 677
#define ITEM_TM96 678
#define ITEM_TM97 679
#define ITEM_TM98 680
#define ITEM_TM99 681
#define ITEM_TM100 682

#define ITEM_HM01 683
#define ITEM_HM02 684
#define ITEM_HM03 685
#define ITEM_HM04 686
#define ITEM_HM05 687
#define ITEM_HM06 688
#define ITEM_HM07 689
#define ITEM_HM08 690

#define ITEM_TM01_FOCUS_PUNCH ITEM_TM01
#define ITEM_TM02_DRAGON_CLAW ITEM_TM02
#define ITEM_TM03_WATER_PULSE ITEM_TM03
#define ITEM_TM04_CALM_MIND ITEM_TM04
#define ITEM_TM05_ROAR ITEM_TM05
#define ITEM_TM06_TOXIC ITEM_TM06
#define ITEM_TM07_HAIL ITEM_TM07
#define ITEM_TM08_BULK_UP ITEM_TM08
#define ITEM_TM09_BULLET_SEED ITEM_TM09
#define ITEM_TM10_HIDDEN_POWER ITEM_TM10
#define ITEM_TM11_SUNNY_DAY ITEM_TM11
#define ITEM_TM12_TAUNT ITEM_TM12
#define ITEM_TM13_ICE_BEAM ITEM_TM13
#define ITEM_TM14_BLIZZARD ITEM_TM14
#define ITEM_TM15_HYPER_BEAM ITEM_TM15
#define ITEM_TM16_LIGHT_SCREEN ITEM_TM16
#define ITEM_TM17_PROTECT ITEM_TM17
#define ITEM_TM18_RAIN_DANCE ITEM_TM18
#define ITEM_TM19_GIGA_DRAIN ITEM_TM19
#define ITEM_TM20_SAFEGUARD ITEM_TM20
#define ITEM_TM21_FRUSTRATION ITEM_TM21
#define ITEM_TM22_SOLAR_BEAM ITEM_TM22
#define ITEM_TM23_IRON_TAIL ITEM_TM23
#define ITEM_TM24_THUNDERBOLT ITEM_TM24
#define ITEM_TM25_THUNDER ITEM_TM25
#define ITEM_TM26_EARTHQUAKE ITEM_TM26
#define ITEM_TM27_RETURN ITEM_TM27
#define ITEM_TM28_DIG ITEM_TM28
#define ITEM_TM29_PSYCHIC ITEM_TM29
#define ITEM_TM30_SHADOW_BALL ITEM_TM30
#define ITEM_TM31_BRICK_BREAK ITEM_TM31
#define ITEM_TM32_DOUBLE_TEAM ITEM_TM32
#define ITEM_TM33_REFLECT ITEM_TM33
#define ITEM_TM34_SLUDGE_WAVE ITEM_TM34
#define ITEM_TM35_FLAMETHROWER ITEM_TM35
#define ITEM_TM36_SLUDGE_BOMB ITEM_TM36
#define ITEM_TM37_SANDSTORM ITEM_TM37
#define ITEM_TM38_FIRE_BLAST ITEM_TM38
#define ITEM_TM39_ROCK_TOMB ITEM_TM39
#define ITEM_TM40_AERIAL_ACE ITEM_TM40
#define ITEM_TM41_TORMENT ITEM_TM41
#define ITEM_TM42_FACADE ITEM_TM42
#define ITEM_TM43_SECRET_POWER ITEM_TM43
#define ITEM_TM44_REST ITEM_TM44
#define ITEM_TM45_ATTRACT ITEM_TM45
#define ITEM_TM46_THIEF ITEM_TM46
#define ITEM_TM47_STEEL_WING ITEM_TM47
#define ITEM_TM48_SKILL_SWAP ITEM_TM48
#define ITEM_TM49_SLEEP_TALK ITEM_TM49
#define ITEM_TM50_OVERHEAT ITEM_TM50

#define ITEM_TM51_ROOST ITEM_TM51
#define ITEM_TM52_FOCUS_BLAST ITEM_TM52
#define ITEM_TM53_ENERGY_BALL  ITEM_TM53
#define ITEM_TM54_PSYSHOCK  ITEM_TM54
#define ITEM_TM55_SCALD   ITEM_TM55
#define ITEM_TM56_LEECH_LIFE  ITEM_TM56
#define ITEM_TM57_CHARGE_BEAM  ITEM_TM57
#define ITEM_TM58_ENDURE   ITEM_TM58
#define ITEM_TM59_DRAGON_PULSE  ITEM_TM59
#define ITEM_TM60_DRAIN_PUNCH   ITEM_TM60
#define ITEM_TM61_WILL_O_WISP  ITEM_TM61
#define ITEM_TM62_ACROBATICS   ITEM_TM62
#define ITEM_TM63_ROCK_SLIDE   ITEM_TM63
#define ITEM_TM64_EXPLOSION  ITEM_TM64
#define ITEM_TM65_SHADOW_CLAW  ITEM_TM65
#define ITEM_TM66_PAYBACK   ITEM_TM66
#define ITEM_TM67_RECYCLE   ITEM_TM67
#define ITEM_TM68_GIGA_IMPACT  ITEM_TM68
#define ITEM_TM69_ROCK_POLISH   ITEM_TM69
#define ITEM_TM70_AURORA_VEIL   ITEM_TM70
#define ITEM_TM71_STONE_EDGE   ITEM_TM71
#define ITEM_TM72_VOLT_SWITCH   ITEM_TM72
#define ITEM_TM73_THUNDER_WAVE  ITEM_TM73
#define ITEM_TM74_GYRO_BALL   ITEM_TM74
#define ITEM_TM75_SWORDS_DANCE   ITEM_TM75
#define ITEM_TM76_STEALTH_ROCK   ITEM_TM76
#define ITEM_TM77_STRUGGLE_BUG   ITEM_TM77
#define ITEM_TM78_BULLDOZE   ITEM_TM78
#define ITEM_TM79_FREEZE_DRY   ITEM_TM79
#define ITEM_TM80_VENOSHOCK   ITEM_TM80
#define ITEM_TM81_X_SCISSOR   ITEM_TM81
#define ITEM_TM82_BREAKING_SWIPE   ITEM_TM82
#define ITEM_TM83_FLAME_CHARGE   ITEM_TM83
#define ITEM_TM84_POISON_JAB   ITEM_TM84
#define ITEM_TM85_DREAM_EATER   ITEM_TM85
#define ITEM_TM86_GRASS_KNOT   ITEM_TM86
#define ITEM_TM87_SMACK_DOWN   ITEM_TM87
#define ITEM_TM88_LOW_SWEEP   ITEM_TM88
#define ITEM_TM89_U_TURN   ITEM_TM89
#define ITEM_TM90_SUBSTITUTE   ITEM_TM90
#define ITEM_TM91_FLASH_CANNON   ITEM_TM91
#define ITEM_TM92_TRICK_ROOM   ITEM_TM92
#define ITEM_TM93_WILD_CHARGE   ITEM_TM93
#define ITEM_TM94_SUCKER_PUNCH  ITEM_TM94
#define ITEM_TM95_SNARL   ITEM_TM95
#define ITEM_TM96_AVALANCHE   ITEM_TM96
#define ITEM_TM97_DARK_PULSE   ITEM_TM97
#define ITEM_TM98_FALSE_SWIPE   ITEM_TM98
#define ITEM_TM99_DAZZLING_GLEAM ITEM_TM99
#define ITEM_TM100_CURSE  ITEM_TM100

#define ITEM_HM01_CUT ITEM_HM01
#define ITEM_HM02_FLY ITEM_HM02
#define ITEM_HM03_SURF ITEM_HM03
#define ITEM_HM04_STRENGTH ITEM_HM04
#define ITEM_HM05_FLASH ITEM_HM05
#define ITEM_HM06_ROCK_SMASH ITEM_HM06
#define ITEM_HM07_WATERFALL ITEM_HM07
#define ITEM_HM08_DIVE ITEM_HM08

// Charms
#define ITEM_OVAL_CHARM 691
#define ITEM_SHINY_CHARM 692
#define ITEM_CATCHING_CHARM 693
#define ITEM_EXP_CHARM 694

// Form-changing Key Items
#define ITEM_ROTOM_CATALOG 695
#define ITEM_GRACIDEA 696
#define ITEM_REVEAL_GLASS 697
#define ITEM_DNA_SPLICERS 698
#define ITEM_ZYGARDE_CUBE 699
#define ITEM_PRISON_BOTTLE 700
#define ITEM_N_SOLARIZER 701
#define ITEM_N_LUNARIZER 702
#define ITEM_REINS_OF_UNITY 703

// Battle Mechanic Key Items
#define ITEM_KEY_STONE 704
#define ITEM_MEGA_RING 705
#define ITEM_Z_POWER_RING 706
#define ITEM_DYNAMAX_BAND 707

// Misc. Key Items
#define ITEM_BICYCLE 708
#define ITEM_MACH_BIKE 709
#define ITEM_ACRO_BIKE 710
#define ITEM_OLD_ROD 711
#define ITEM_GOOD_ROD 712
#define ITEM_SUPER_ROD 713
#define ITEM_DOWSING_MACHINE 714
#define ITEM_TOWN_MAP 715
#define ITEM_VS_SEEKER 716
#define ITEM_TM_CASE 717
#define ITEM_BERRY_POUCH 718
#define ITEM_POKEMON_BOX_LINK 719
#define ITEM_COIN_CASE 720
#define ITEM_POWDER_JAR 721
#define ITEM_WAILMER_PAIL 722
#define ITEM_POKE_RADAR 723
#define ITEM_POKEBLOCK_CASE 724
#define ITEM_SOOT_SACK 725
#define ITEM_POKE_FLUTE 726
#define ITEM_FAME_CHECKER 727
#define ITEM_TEACHY_TV 728

// Story Key Items
#define ITEM_SS_TICKET 729
#define ITEM_EON_TICKET 730
#define ITEM_MYSTIC_TICKET 731
#define ITEM_AURORA_TICKET 732
#define ITEM_OLD_SEA_MAP 733
#define ITEM_LETTER 734
#define ITEM_DEVON_PARTS 735
#define ITEM_GO_GOGGLES 736
#define ITEM_DEVON_SCOPE 737
#define ITEM_BASEMENT_KEY 738
#define ITEM_SCANNER 739
#define ITEM_STORAGE_KEY 740
#define ITEM_KEY_TO_ROOM_1 741
#define ITEM_KEY_TO_ROOM_2 742
#define ITEM_KEY_TO_ROOM_4 743
#define ITEM_KEY_TO_ROOM_6 744
#define ITEM_METEORITE 745
#define ITEM_MAGMA_EMBLEM 746
#define ITEM_CONTEST_PASS 747
#define ITEM_OAKS_PARCEL 748
#define ITEM_SECRET_KEY 749
#define ITEM_BIKE_VOUCHER 750
#define ITEM_GOLD_TEETH 751
#define ITEM_CARD_KEY 752
#define ITEM_LIFT_KEY 753
#define ITEM_SILPH_SCOPE 754
#define ITEM_TRI_PASS 755
#define ITEM_RAINBOW_PASS 756
#define ITEM_TEA 757
#define ITEM_RUBY 758
#define ITEM_SAPPHIRE 759

// custom items
#define ITEM_WEIGHTED_BOOTS 760
#define ITEM_TRIFORCE 761
#define ITEM_PLATE_MAIL 762
#define ITEM_FEAST 763
#define ITEM_GRAVITY_WELL 764
#define ITEM_WIND_CHIMES 765
#define ITEM_HOURGLASS 766
#define ITEM_MID_EVO_STONE 767
#define ITEM_2SF_EVO_STONE 768
#define ITEM_HEEL_COVER 769
#define ITEM_THERMOSTAT 770

#define ITEMS_COUNT 771
#define ITEM_FIELD_ARROW ITEMS_COUNT

// Range of berries given out by various NPCS
#define FIRST_BERRY_MASTER_BERRY      ITEM_POMEG_BERRY
#define LAST_BERRY_MASTER_BERRY       ITEM_NOMEL_BERRY
#define FIRST_BERRY_MASTER_WIFE_BERRY ITEM_CHERI_BERRY
#define LAST_BERRY_MASTER_WIFE_BERRY  ITEM_SITRUS_BERRY
#define FIRST_KIRI_BERRY              ITEM_POMEG_BERRY
#define LAST_KIRI_BERRY               ITEM_NOMEL_BERRY
#define FIRST_ROUTE_114_MAN_BERRY     ITEM_RAZZ_BERRY
#define LAST_ROUTE_114_MAN_BERRY      ITEM_PINAP_BERRY

#define NUM_BERRY_MASTER_BERRIES          (LAST_BERRY_MASTER_BERRY - FIRST_BERRY_MASTER_BERRY + 1)
#define NUM_BERRY_MASTER_BERRIES_SKIPPED  (FIRST_BERRY_MASTER_BERRY - FIRST_BERRY_INDEX)
#define NUM_BERRY_MASTER_WIFE_BERRIES     (LAST_BERRY_MASTER_WIFE_BERRY - FIRST_BERRY_MASTER_WIFE_BERRY + 1)
#define NUM_KIRI_BERRIES                  (LAST_KIRI_BERRY - FIRST_KIRI_BERRY + 1)
#define NUM_KIRI_BERRIES_SKIPPED          (FIRST_KIRI_BERRY - FIRST_BERRY_INDEX)
#define NUM_ROUTE_114_MAN_BERRIES         (LAST_ROUTE_114_MAN_BERRY - FIRST_ROUTE_114_MAN_BERRY + 1)
#define NUM_ROUTE_114_MAN_BERRIES_SKIPPED (FIRST_ROUTE_114_MAN_BERRY - FIRST_BERRY_INDEX)

#define ITEM_TO_BERRY(itemId)(((itemId) - FIRST_BERRY_INDEX) + 1)
#define ITEM_TO_MAIL(itemId)((itemId) - FIRST_MAIL_INDEX)
#define MAIL_NONE 0xFF

#define NUM_TECHNICAL_MACHINES 50
#define NUM_HIDDEN_MACHINES 8

#define MAX_BAG_ITEM_CAPACITY  99
#define MAX_PC_ITEM_CAPACITY   999
#define MAX_BERRY_CAPACITY     999

#define BAG_ITEM_CAPACITY_DIGITS 2
#define BERRY_CAPACITY_DIGITS 3
#define MAX_ITEM_DIGITS BERRY_CAPACITY_DIGITS

// Secondary IDs for rods
#define OLD_ROD   0
#define GOOD_ROD  1
#define SUPER_ROD 2

// Secondary IDs for bikes
#define MACH_BIKE 0
#define ACRO_BIKE 1

// Item type IDs (used to determine the exit callback)
#define ITEM_USE_MAIL        0
#define ITEM_USE_PARTY_MENU  1
#define ITEM_USE_FIELD       2
#define ITEM_USE_PBLOCK_CASE 3
#define ITEM_USE_BAG_MENU    4 // No exit callback, stays in bag menu

// Item battle usage IDs (only checked to see if nonzero)
#define ITEM_B_USE_MEDICINE 1
#define ITEM_B_USE_OTHER    2

// Check if the item is one that can be used on a Pokemon.
#define ITEM_HAS_EFFECT(item) ((item) >= ITEM_POTION && (item) <= ITEMS_COUNT)

#endif  // GUARD_CONSTANTS_ITEMS_H

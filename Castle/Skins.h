#pragma once

#include "util.h"
#include "../SDK/SDK.h"
#include "../interfaces.h"
#include "../settings.h"

struct PaintNames_t
{
	const char* displayName = nullptr;
	const char* paintName = nullptr;
};

const std::map<int, PaintNames_t> itemSkins = {
	{ -1,{ "No Skin" } },
	{ 2,{ "#PaintKit_so_olive_Tag", "olive" } },
	{ 3,{ "#PaintKit_so_red_Tag", "red" } },
	{ 5,{ "#PaintKit_hy_ddpat_Tag", "ddpat" } },
	{ 6,{ "#PaintKit_hy_arctic_Tag", "arctic" } },
	{ 8,{ "#PaintKit_hy_desert_Tag", "desert" } },
	{ 9,{ "#PaintKit_hy_tiger_Tag", "tiger" } },
	{ 10,{ "#PaintKit_hy_copperhead_Tag", "copperhead" } },
	{ 11,{ "#PaintKit_hy_skulls_Tag", "skulls" } },
	{ 12,{ "#PaintKit_hy_webs_Tag", "webs" } },
	{ 13,{ "#PaintKit_hy_splatter_Tag", "splatter" } },
	{ 14,{ "#PaintKit_hy_ak47lam_Tag", "ak47lam" } },
	{ 15,{ "#PaintKit_hy_gelpen_Tag", "gelpen" } },
	{ 16,{ "#PaintKit_hy_v_tiger_Tag", "v_tiger" } },
	{ 17,{ "#PaintKit_hy_ddpat_urb_Tag", "ddpat_urb" } },
	{ 20,{ "#PaintKit_hy_zombie_Tag", "zombie" } },
	{ 21,{ "#PaintKit_hy_granite_Tag", "granite" } },
	{ 22,{ "#PaintKit_sp_spray_Tag", "spray" } },
	{ 25,{ "#PaintKit_sp_leaves_Tag", "leaves" } },
	{ 26,{ "#PaintKit_sp_short_tape_Tag", "short_tape" } },
	{ 27,{ "#PaintKit_sp_tape_Tag", "tape" } },
	{ 28,{ "#PaintKit_an_navy_Tag", "navy" } },
	{ 30,{ "#PaintKit_sp_snake_Tag", "snake" } },
	{ 32,{ "#PaintKit_an_silver_Tag", "silver" } },
	{ 33,{ "#PaintKit_an_red_Tag", "red" } },
	{ 34,{ "#PaintKit_am_urban_Tag", "urban" } },
	{ 36,{ "#PaintKit_am_ossify_Tag", "ossify" } },
	{ 37,{ "#PaintKit_aa_flames_Tag", "flames" } },
	{ 38,{ "#PaintKit_aa_fade_Tag", "fade" } },
	{ 39,{ "#PaintKit_so_yellow_Tag", "yellow" } },
	{ 40,{ "#PaintKit_so_night_Tag", "night" } },
	{ 41,{ "#PaintKit_aq_copper_Tag", "copper" } },
	{ 42,{ "#PaintKit_aq_blued_Tag", "blued" } },
	{ 43,{ "#PaintKit_aq_forced_Tag", "forced" } },
	{ 44,{ "#PaintKit_aq_oiled_Tag", "oiled" } },
	{ 46,{ "#PaintKit_so_pmc_Tag", "pmc" } },
	{ 47,{ "#PaintKit_so_space_marine_Tag", "space_marine" } },
	{ 48,{ "#PaintKit_am_dragon_glock_Tag", "dragon_glock" } },
	{ 51,{ "#PaintKit_am_lightning_awp_Tag", "lightning_awp" } },
	{ 59,{ "#PaintKit_am_zebra_Tag", "zebra" } },
	{ 60,{ "#PaintKit_am_zebra_dark_Tag", "zebra_dark" } },
	{ 61,{ "#PaintKit_aa_vertigo_Tag", "vertigo" } },
	{ 62,{ "#PaintKit_cu_spring_nova_Tag", "spring_nova" } },
	{ 67,{ "#PaintKit_am_slither_p90_Tag", "slither_p90" } },
	{ 70,{ "#PaintKit_am_carbon_fiber_Tag", "carbon_fiber" } },
	{ 71,{ "#PaintKit_am_scorpion_p2000_Tag", "scorpion_p2000" } },
	{ 72,{ "#PaintKit_sp_mesh_tan_Tag", "mesh_tan" } },
	{ 73,{ "#PaintKit_hy_feathers_aug_Tag", "feathers_aug" } },
	{ 74,{ "#Paintkit_hy_arctic_contrast_Tag", "arctic_contrast" } },
	{ 75,{ "#PaintKit_hy_blizzard_Tag", "blizzard" } },
	{ 76,{ "#PaintKit_hy_forest_winter_Tag", "forest_winter" } },
	{ 77,{ "#PaintKit_hy_forest_boreal_Tag", "forest_boreal" } },
	{ 78,{ "#PaintKit_hy_forest_night_Tag", "forest_night" } },
	{ 83,{ "#PaintKit_hy_ddpat_orange_Tag", "ddpat_orange" } },
	{ 84,{ "#PaintKit_hy_ddpat_pink_Tag", "ddpat_pink" } },
	{ 90,{ "#PaintKit_hy_sediment_Tag", "sediment" } },
	{ 92,{ "#PaintKit_hy_reef_rock_Tag", "reef_rock" } },
	{ 93,{ "#PaintKit_so_caramel_Tag", "caramel" } },
	{ 95,{ "#PaintKit_so_grassland_Tag", "grassland" } },
	{ 96,{ "#PaintKit_so_moss_Tag", "moss" } },
	{ 98,{ "#PaintKit_so_purple_Tag", "purple" } },
	{ 99,{ "#PaintKit_so_sand_Tag", "sand" } },
	{ 100,{ "#PaintKit_so_stormfront_Tag", "stormfront" } },
	{ 101,{ "#PaintKit_so_tornado_Tag", "tornado" } },
	{ 102,{ "#PaintKit_so_whiteout_Tag", "whiteout" } },
	{ 104,{ "#PaintKit_sp_leaves_grassland_Tag", "leaves_grassland" } },
	{ 107,{ "#PaintKit_sp_mesh_arctic_contrast_Tag", "mesh_arctic_contrast" } },
	{ 110,{ "#PaintKit_sp_mesh_fire_Tag", "mesh_fire" } },
	{ 111,{ "#PaintKit_sp_mesh_glacier_Tag", "mesh_glacier" } },
	{ 116,{ "#PaintKit_sp_mesh_sand_Tag", "mesh_sand" } },
	{ 119,{ "#PaintKit_sp_spray_sage_Tag", "spray_sage" } },
	{ 122,{ "#PaintKit_sp_spray_jungle_Tag", "spray_jungle" } },
	{ 124,{ "#PaintKit_sp_spray_sand_Tag", "spray_sand" } },
	{ 135,{ "#PaintKit_sp_tape_dots_urban_Tag", "tape_dots_urban" } },
	{ 136,{ "#PaintKit_sp_tape_dots_waves_Tag", "tape_dots_waves" } },
	{ 141,{ "#PaintKit_sp_tape_orange_Tag", "tape_orange" } },
	{ 143,{ "#PaintKit_sp_tape_urban_Tag", "tape_urban" } },
	{ 147,{ "#PaintKit_sp_short_tape_jungle_Tag", "short_tape_jungle" } },
	{ 148,{ "#PaintKit_sp_short_tape_sand_Tag", "short_tape_sand" } },
	{ 149,{ "#PaintKit_sp_short_tape_urban_Tag", "short_tape_urban" } },
	{ 151,{ "#PaintKit_so_jungle_Tag", "jungle" } },
	{ 153,{ "#PaintKit_so_tangerine_Tag", "tangerine" } },
	{ 154,{ "#PaintKit_cu_broken_path_famas_Tag", "broken_path_famas" } },
	{ 155,{ "#PaintKit_cu_bullet_rain_m4a1_Tag", "bullet_rain_m4a1" } },
	{ 156,{ "#PaintKit_cu_catskulls_p90_Tag", "catskulls_p90" } },
	{ 157,{ "#PaintKit_sp_palm_Tag", "palm" } },
	{ 158,{ "#PaintKit_cu_walnut_nova_Tag", "walnut_nova" } },
	{ 159,{ "#PaintKit_aq_brass_Tag", "brass" } },
	{ 162,{ "#PaintKit_sp_splash_p250_Tag", "splash_p250" } },
	{ 164,{ "#PaintKit_hy_hunter_modern_Tag", "hunter_modern" } },
	{ 165,{ "#PaintKit_hy_hunter_blaze_pink_Tag", "hunter_blaze_pink" } },
	{ 166,{ "#PaintKit_hy_hunter_blaze_orange_Tag", "hunter_blaze_orange" } },
	{ 167,{ "#PaintKit_sp_nukestripe_orange_Tag", "nukestripe_orange" } },
	{ 168,{ "#PaintKit_sp_nukestripe_green_Tag", "nukestripe_green" } },
	{ 169,{ "#PaintKit_sp_nukestripe_maroon_Tag", "nukestripe_maroon" } },
	{ 170,{ "#PaintKit_sp_zebracam_Tag", "zebracam" } },
	{ 171,{ "#PaintKit_sp_nukestripe_brown_Tag", "nukestripe_brown" } },
	{ 172,{ "#PaintKit_hy_ak47lam_bw_Tag", "ak47lam_bw" } },
	{ 174,{ "#PaintKit_hy_blam_simple_Tag", "blam_simple" } },
	{ 175,{ "#PaintKit_sp_dapple_Tag", "dapple" } },
	{ 176,{ "#PaintKit_sp_zebracam_bw_Tag", "zebracam_bw" } },
	{ 177,{ "#PaintKit_CSGO_Icosahedron_Tag", "Icosahedron" } },
	{ 178,{ "#PaintKit_CSGO_Doomkitty_Tag", "Doomkitty" } },
	{ 179,{ "#PaintKit_sp_nukestripe_green_Tag", "nukestripe_green" } },
	{ 180,{ "#PaintKit_cu_fireserpent_ak47_bravo_Tag", "fireserpent_ak47_bravo" } },
	{ 181,{ "#PaintKit_cu_favela_Tag", "favela" } },
	{ 182,{ "#PaintKit_cu_dragon_p90_bravo_Tag", "dragon_p90_bravo" } },
	{ 183,{ "#PaintKit_hy_siege_bravo_Tag", "siege_bravo" } },
	{ 184,{ "#PaintKit_cu_favela_Tag", "favela" } },
	{ 185,{ "#PaintKit_am_scales_bravo_Tag", "scales_bravo" } },
	{ 186,{ "#PaintKit_sp_spray_waves_Tag", "spray_waves" } },
	{ 187,{ "#PaintKit_sp_star_bravo_Tag", "star_bravo" } },
	{ 188,{ "#PaintKit_aq_etched_mac10_bravo_Tag", "etched_mac10_bravo" } },
	{ 189,{ "#PaintKit_hy_ocean_Tag", "ocean" } },
	{ 190,{ "#PaintKit_cu_season_elites_bravo_Tag", "season_elites_bravo" } },
	{ 191,{ "#PaintKit_hy_seaside_bravo_Tag", "seaside_bravo" } },
	{ 192,{ "#PaintKit_hy_crumple_bravo_Tag", "crumple_bravo" } },
	{ 193,{ "#PaintKit_sp_skull_diagram_bravo_Tag", "skull_diagram_bravo" } },
	{ 194,{ "#PaintKit_sp_spitfire_famas_Tag", "spitfire_famas" } },
	{ 195,{ "#PaintKit_hy_bluepolygon_bravo_Tag", "bluepolygon_bravo" } },
	{ 196,{ "#PaintKit_an_emerald_bravo_Tag", "emerald_bravo" } },
	{ 197,{ "#PaintKit_an_navy_Tag", "navy" } },
	{ 198,{ "#PaintKit_sp_hazard_Tag", "hazard" } },
	{ 199,{ "#PaintKit_sp_tape_dots_Tag", "tape_dots" } },
	{ 200,{ "#PaintKit_hy_mayan_dreams_bravo_Tag", "mayan_dreams_bravo" } },
	{ 201,{ "#PaintKit_sp_palm_Tag", "palm" } },
	{ 202,{ "#PaintKit_hy_ddpat_jungle_Tag", "ddpat_jungle" } },
	{ 203,{ "#PaintKit_aq_steel_bravo_Tag", "steel_bravo" } },
	{ 204,{ "#PaintKit_hy_ali_tile_bravo_Tag", "ali_tile_bravo" } },
	{ 205,{ "#PaintKit_so_jungle_Tag", "jungle" } },
	{ 206,{ "#PaintKit_so_tornado_Tag", "tornado" } },
	{ 207,{ "#PaintKit_hy_crumple_dark_bravo_Tag", "crumple_dark_bravo" } },
	{ 208,{ "#PaintKit_so_sand_Tag", "sand" } },
	{ 209,{ "#PaintKit_so_olive_Tag", "olive" } },
	{ 210,{ "#PaintKit_an_gunmetal_Tag", "gunmetal" } },
	{ 211,{ "#PaintKit_am_ossify_blue_Tag", "ossify_blue" } },
	{ 212,{ "#PaintKit_am_crumple_Tag", "crumple" } },
	{ 213,{ "#PaintKit_am_ossify_blue_Tag", "ossify_blue" } },
	{ 214,{ "#PaintKit_am_crumple_Tag", "crumple" } },
	{ 215,{ "#PaintKit_cu_xray_m4_Tag", "xray_m4" } },
	{ 216,{ "#PaintKit_an_titanium30v_Tag", "titanium30v" } },
	{ 217,{ "#PaintKit_hy_redtiger_Tag", "redtiger" } },
	{ 218,{ "#PaintKit_hy_bluehex_Tag", "bluehex" } },
	{ 219,{ "#PaintKit_hy_redhex_Tag", "redhex" } },
	{ 220,{ "#PaintKit_am_ossify_red_Tag", "ossify_red" } },
	{ 221,{ "#PaintKit_am_electric_red_Tag", "electric_red" } },
	{ 222,{ "#PaintKit_cu_shark_Tag", "shark" } },
	{ 223,{ "#PaintKit_hy_flowers_Tag", "flowers" } },
	{ 224,{ "#PaintKit_hy_water_crest_Tag", "water_crest" } },
	{ 225,{ "#PaintKit_sp_camo_wood_blue_Tag", "camo_wood_blue" } },
	{ 226,{ "#PaintKit_hy_ak47lam_blue_Tag", "ak47lam_blue" } },
	{ 227,{ "#PaintKit_hy_hive_Tag", "hive" } },
	{ 228,{ "#PaintKit_hy_modspots_Tag", "modspots" } },
	{ 229,{ "#PaintKit_sp_zebracam_blue_Tag", "zebracam_blue" } },
	{ 230,{ "#PaintKit_am_ddpatdense_silver_Tag", "ddpatdense_silver" } },
	{ 231,{ "#PaintKit_am_ddpatdense_peacock_Tag", "ddpatdense_peacock" } },
	{ 232,{ "#PaintKit_hy_webs_Tag", "webs_darker" } },
	{ 233,{ "#PaintKit_sp_palm_shadow_Tag", "palm_shadow" } },
	{ 234,{ "#PaintKit_sp_twigs_Tag", "twigs" } },
	{ 235,{ "#PaintKit_hy_varicamo_Tag", "varicamo" } },
	{ 236,{ "#PaintKit_hy_varicamo_night_Tag", "varicamo_night" } },
	{ 237,{ "#PaintKit_hy_varicamo_urban_Tag", "varicamo_urban" } },
	{ 238,{ "#PaintKit_hy_varicamo_blue_Tag", "varicamo_blue" } },
	{ 240,{ "#PaintKit_hy_varicamo_desert_Tag", "varicamo_desert" } },
	{ 241,{ "#PaintKit_sp_mesh_slashes_Tag", "mesh_slashes" } },
	{ 242,{ "#PaintKit_sp_mesh_army_Tag", "mesh_army" } },
	{ 243,{ "#PaintKit_sp_mesh_python_Tag", "mesh_python" } },
	{ 244,{ "#PaintKit_sp_mesh_hot_and_cold_Tag", "mesh_hot_and_cold" } },
	{ 245,{ "#PaintKit_sp_spray_army_Tag", "spray_army" } },
	{ 246,{ "#PaintKit_aa_fade_metallic_Tag", "fade_metallic" } },
	{ 247,{ "#PaintKit_aq_damascus_Tag", "damascus" } },
	{ 248,{ "#PaintKit_am_crystallized_red_Tag", "crystallized_red" } },
	{ 249,{ "#PaintKit_am_crystallized_blue_Tag", "crystallized_blue" } },
	{ 250,{ "#PaintKit_hy_varicamo_red_Tag", "varicamo_red" } },
	{ 251,{ "#PaintKit_hy_snakeskin_Tag", "snakeskin" } },
	{ 252,{ "#PaintKit_am_crystallized_silver_Tag", "crystallized_silver" } },
	{ 253,{ "#PaintKit_aa_fade_grassland_Tag", "fade_grassland" } },
	{ 254,{ "#PaintKit_so_orange_accents_Tag", "orange_accents" } },
	{ 255,{ "#PaintKit_cu_m4_asimov_tag", "m4_asimov" } },
	{ 256,{ "#PaintKit_cu_sawedoff_octopump_tag", "sawedoff_octopump" } },
	{ 257,{ "#PaintKit_cu_m4a1-s_elegant_Tag", "m4a1-s_elegant" } },
	{ 258,{ "#PaintKit_cu_p250_refined_Tag", "p250_refined" } },
	{ 259,{ "#PaintKit_cu_awp_cobra_tag", "awp_cobra" } },
	{ 260,{ "#PaintKit_cu_famas_pulse_tag", "famas_pulse" } },
	{ 261,{ "#PaintKit_hy_marina_sunrise_tag", "marina_sunrise" } },
	{ 262,{ "#PaintKit_am_thorny_rose_mp9_tag", "thorny_rose_mp9" } },
	{ 263,{ "#PaintKit_cu_skull_nova_tag", "skull_nova" } },
	{ 264,{ "#PaintKit_cu_sandstorm_tag", "sandstorm" } },
	{ 265,{ "#PaintKit_hy_kami_tag", "kami" } },
	{ 266,{ "#PaintKit_aq_obsidian_tag", "obsidian" } },
	{ 267,{ "#PaintKit_am_turqoise_halftone_tag", "turqoise_halftone" } },
	{ 268,{ "#PaintKit_am_diamond_plate_Tag", "diamond_plate" } },
	{ 269,{ "#PaintKit_am_fuschia_Tag", "fuschia" } },
	{ 270,{ "#PaintKit_aq_etched_cz75_Tag", "etched_cz75" } },
	{ 271,{ "#PaintKit_am_p250_beaded_paint_Tag", "p250_beaded_paint" } },
	{ 272,{ "#PaintKit_am_fluted_tec9_Tag", "fluted_tec9" } },
	{ 273,{ "#PaintKit_aq_engraved_deagle_Tag", "engraved_deagle" } },
	{ 274,{ "#PaintKit_am_copper_flecks_Tag", "copper_flecks" } },
	{ 275,{ "#PaintKit_hy_poly_camo_Tag", "poly_camo" } },
	{ 276,{ "#PaintKit_so_panther_Tag", "panther" } },
	{ 277,{ "#PaintKit_aq_usp_stainless_Tag", "usp_stainless" } },
	{ 278,{ "#PaintKit_hy_craquelure_Tag", "craquelure" } },
	{ 279,{ "#PaintKit_cu_m4_asimov_tag", "awp_asimov" } },
	{ 280,{ "#PaintKit_cu_aug_chameleonaire_tag", "aug_chameleonaire" } },
	{ 281,{ "#PaintKit_cu_ump_corporal_tag", "ump_corporal" } },
	{ 282,{ "#PaintKit_cu_awp_cobra_tag", "ak47_cobra" } },
	{ 283,{ "#PaintKit_cu_p90_trigon_tag", "p90_trigon" } },
	{ 284,{ "#PaintKit_cu_mac10_redhot_tag", "mac10_redhot" } },
	{ 285,{ "#PaintKit_sp_negev_turq_terrain_tag", "negev_turq_terrain" } },
	{ 286,{ "#PaintKit_cu_nova_antique_tag", "nova_antique" } },
	{ 287,{ "#PaintKit_cu_famas_pulse_tag", "famas_pulse" } },
	{ 288,{ "#PaintKit_an_famas_sgt_tag", "famas_sgt" } },
	{ 289,{ "#PaintKit_cu_sandstorm_tag", "sandstorm" } },
	{ 290,{ "#PaintKit_cu_m4a1-s_elegant_Tag", "usp_elegant" } },
	{ 291,{ "#PaintKit_cu_mag7_heaven_tag", "mag7_heaven" } },
	{ 293,{ "#PaintKit_hy_nerodia_Tag", "nerodia" } },
	{ 294,{ "#PaintKit_so_green_Tag", "so_green" } },
	{ 295,{ "#PaintKit_cu_money_Tag", "money" } },
	{ 296,{ "#PaintKit_am_crystallized_dark_Tag", "crystallized_dark" } },
	{ 297,{ "#PaintKit_so_orca_Tag", "orca" } },
	{ 298,{ "#PaintKit_am_army_shine_Tag", "army_shine" } },
	{ 299,{ "#PaintKit_am_oval_hex_Tag", "oval_hex" } },
	{ 300,{ "#PaintKit_cu_pinstripe_ak47_Tag", "pinstripe_ak47" } },
	{ 301,{ "#PaintKit_am_alloy_orange_Tag", "alloy_orange" } },
	{ 302,{ "#PaintKit_cu_rubber_ak47_Tag", "rubber_ak47" } },
	{ 303,{ "#PaintKit_cu_tec_isaac_tag", "tec_isaac" } },
	{ 304,{ "#PaintKit_cu_immortal_ssg08_Tag", "immortal_ssg08" } },
	{ 305,{ "#PaintKit_cu_progressiv_aug_Tag", "progressiv_aug" } },
	{ 306,{ "#PaintKit_cu_nova_antique_tag", "bizon_antique" } },
	{ 307,{ "#PaintKit_cu_retribution_beretta_Tag", "retribution_beretta" } },
	{ 308,{ "#PaintKit_hy_kami_tag", "galil_kami" } },
	{ 309,{ "#PaintKit_cu_howling_tag", "howling" } },
	{ 310,{ "#PaintKit_cu_decay_mac10_tag", "decay_mac10" } },
	{ 311,{ "#PaintKit_cu_scorpius_p90_tag", "scorpius_p90" } },
	{ 312,{ "#PaintKit_cu_cyrex_tag", "scar_cyrex" } },
	{ 313,{ "#PaintKit_cu_spitfire_tag", "spitfire" } },
	{ 314,{ "#PaintKit_cu_mag7_heaven_tag", "xm1014_heaven_guard" } },
	{ 315,{ "#PaintKit_am_nitrogen_tag", "nitrogen" } },
	{ 316,{ "#PaintKit_cu_panther_ak47_Tag", "panther_ak47" } },
	{ 317,{ "#PaintKit_cu_bratatat_negev_Tag", "bratatat_negev" } },
	{ 318,{ "#PaintKit_cu_usp_sandpapered_Tag", "usp_sandpapered" } },
	{ 319,{ "#PaintKit_hy_ssg08_marker_Tag", "ssg08_marker" } },
	{ 320,{ "#PaintKit_hy_snakeskin_red_Tag", "snakeskin_red" } },
	{ 321,{ "#PaintKit_cu_m4a1-s_silence_Tag", "m4a1-s_silence" } },
	{ 322,{ "#PaintKit_so_orange_accents_Tag", "orange_accents2" } },
	{ 323,{ "#PaintKit_aq_steel_bravo_Tag", "steel" } },
	{ 325,{ "#PaintKit_am_royal_Tag", "royal" } },
	{ 326,{ "#PaintKit_am_metals_Tag", "metals" } },
	{ 327,{ "#PaintKit_am_chainmail_Tag", "chainmail" } },
	{ 328,{ "#PaintKit_aq_handcannon_Tag", "handcannon" } },
	{ 329,{ "#PaintKit_am_metal_inlay_Tag", "metal_inlay" } },
	{ 330,{ "#PaintKit_hy_vines_Tag", "vines" } },
	{ 332,{ "#PaintKit_so_indigo_Tag", "indigo_usp" } },
	{ 333,{ "#PaintKit_so_indigo_and_grey_Tag", "indigo_and_grey" } },
	{ 334,{ "#PaintKit_am_gyrate_tag", "gyrate" } },
	{ 335,{ "#PaintKit_an_royalbleed_tag", "royalbleed" } },
	{ 336,{ "#PaintKit_cu_titanstorm_tag", "titanstorm" } },
	{ 337,{ "#PaintKit_cu_korupt_tag", "korupt" } },
	{ 338,{ "#PaintKit_cu_famas_pulse_tag", "p2000_pulse" } },
	{ 339,{ "#PaintKit_cu_kaiman_tag", "kaiman" } },
	{ 340,{ "#PaintKit_cu_well_traveled_ak47_Tag", "well_traveled_ak47" } },
	{ 341,{ "#PaintKit_cu_green_leather_Tag", "green_leather_ak47" } },
	{ 342,{ "#PaintKit_cu_brown_leather_p90_Tag", "brown_leather_p90" } },
	{ 343,{ "#PaintKit_cu_luggage_mac10_Tag", "luggage_mac10" } },
	{ 344,{ "#PaintKit_cu_medieval_dragon_awp_Tag", "medieval_dragon_awp" } },
	{ 345,{ "#PaintKit_cu_green_leather_Tag", "green_leather_sawedoff" } },
	{ 346,{ "#PaintKit_cu_luggage_p2000_Tag", "luggage_p2000" } },
	{ 347,{ "#PaintKit_aq_pilot_deagle_Tag", "pilot_deagle" } },
	{ 348,{ "#PaintKit_cu_leather_xm1014_Tag", "leather_xm1014" } },
	{ 349,{ "#PaintKit_cu_bizon-osiris_tag", "bizon-osiris" } },
	{ 350,{ "#PaintKit_cu_c75a-tiger_tag", "cz75a-tiger" } },
	{ 351,{ "#PaintKit_cu_deagle_aureus_tag", "deagle_aureus" } },
	{ 352,{ "#PaintKit_aq_57_feathers_tag", "57_feathers" } },
	{ 353,{ "#PaintKit_cu_glock-liquescent_tag", "glock-liquescent" } },
	{ 354,{ "#PaintKit_cu_mp7-commander_tag", "mp7-commander" } },
	{ 355,{ "#PaintKit_cu_titanstorm_tag", "negev_titanstorm" } },
	{ 356,{ "#PaintKit_cu_nova_koi_tag", "nova_koi" } },
	{ 357,{ "#PaintKit_cu_p2000_ivory_tag", "p2000_ivory" } },
	{ 358,{ "#PaintKit_cu_bittersweet_tag", "bittersweet" } },
	{ 359,{ "#PaintKit_cu_m4_asimov_tag", "p90-asimov" } },
	{ 360,{ "#PaintKit_cu_cyrex_tag", "m4a1s_cyrex" } },
	{ 361,{ "#PaintKit_aq_leviathan_tag", "leviathan" } },
	{ 362,{ "#PaintKit_hy_lines_orange_tag", "lines_orange" } },
	{ 363,{ "#PaintKit_cu_luggage_sg553_Tag", "luggage_sg553" } },
	{ 364,{ "#PaintKit_cu_luggage_usp-s_Tag", "luggage_usp-s" } },
	{ 365,{ "#PaintKit_hy_plaid1_Tag", "plaid1" } },
	{ 366,{ "#PaintKit_chy_plaid2_Tag", "plaid2" } },
	{ 367,{ "#PaintKit_am_nuclear_pattern1_glock_Tag", "nuclear_pattern1_glock" } },
	{ 368,{ "#PaintKit_hy_nuclear_pattern2_mp9_Tag", "nuclear_pattern2_mp9" } },
	{ 369,{ "#PaintKit_sp_nuclear_pattern3_negev_Tag", "nuclear_pattern3_negev" } },
	{ 370,{ "#PaintKit_am_nuclear_skulls1_xm1014_Tag", "nuclear_skulls1_xm1014" } },
	{ 371,{ "#PaintKit_am_nuclear_skulls2_famas_Tag", "nuclear_skulls2_famas" } },
	{ 372,{ "#PaintKit_am_nuclear_skulls3_mac10_Tag", "nuclear_skulls3_mac10" } },
	{ 373,{ "#PaintKit_hy_nuclear_skulls4_p250_Tag", "nuclear_skulls4_p250" } },
	{ 374,{ "#PaintKit_hy_nuclear_skulls5_tec9_Tag", "nuclear_skulls5_tec9" } },
	{ 375,{ "#PaintKit_sp_nukestripe_orange_Tag", "nukestripe_orange" } },
	{ 376,{ "#PaintKit_so_grey_nuclear_green_bizon_Tag", "grey_nuclear_green_bizon" } },
	{ 377,{ "#PaintKit_so_grey_nuclear_orange_five_seven_Tag", "grey_nuclear_organ_five_seven" } },
	{ 378,{ "#PaintKit_sp_nukestripe_maroon_Tag", "nukestripe_maroon_sg553" } },
	{ 379,{ "#PaintKit_cu_cerbrus_galil_Tag", "cerbrus_galil" } },
	{ 380,{ "#PaintKit_cu_tribute_ak47_Tag", "tribute_ak47" } },
	{ 381,{ "#PaintKit_aq_glock_coiled_Tag", "glock_coiled" } },
	{ 382,{ "#PaintKit_am_g3sg1_murky_Tag", "g3sg1_murky" } },
	{ 383,{ "#PaintKit_aq_m4a1s_basilisk_Tag", "m4a1s_basilisk" } },
	{ 384,{ "#PaintKit_cu_m4a4_griffin_Tag", "m4a4_griffin" } },
	{ 385,{ "#PaintKit_sp_mag7_firebitten_Tag", "mag7_firebitten" } },
	{ 386,{ "#PaintKit_cu_mp9_chevron_Tag", "mp9_chevron" } },
	{ 387,{ "#PaintKit_cu_mp7-commander_tag", "mp7-commander" } },
	{ 388,{ "#PaintKit_aq_p250_cartel_Tag", "p250_cartel" } },
	{ 389,{ "#PaintKit_cu_p2000_fire_elemental_Tag", "p2000_fire_elemental" } },
	{ 390,{ "#PaintKit_aq_sawedoff_blackgold_Tag", "sawedoff_blackgold" } },
	{ 391,{ "#PaintKit_cu_scar20_intervention_Tag", "scar20_intervention" } },
	{ 392,{ "#PaintKit_sp_ump45_d-visions_Tag", "ump45_d-ivisons" } },
	{ 393,{ "#PaintKit_cu_xm1014_caritas_Tag", "xm1014_caritas" } },
	{ 394,{ "#PaintKit_aq_p250_cartel_Tag", "p250_cartel" } },
	{ 395,{ "#PaintKit_am_awp_glory_Tag", "awp_glory" } },
	{ 396,{ "#PaintKit_cu_elites_urbanstorm_Tag", "elites_urbanstorm" } },
	{ 397,{ "#PaintKit_aq_deagle_naga_Tag", "deagle_naga" } },
	{ 398,{ "#PaintKit_cu_galil_abrasion_Tag", "galil_abrasion" } },
	{ 399,{ "#PaintKit_cu_glock_deathtoll_Tag", "glock_deathtoll" } },
	{ 400,{ "#PaintKit_cu_m4a4_ancestral_Tag", "m4a4_ancestral" } },
	{ 401,{ "#PaintKit_cu_m249_sektor_Tag", "m249_sektor" } },
	{ 402,{ "#PaintKit_am_mac10_malachite_Tag", "mac10_malachite" } },
	{ 403,{ "#PaintKit_cu_mp9_deadly_poison_Tag", "mp9_deadly_poison" } },
	{ 404,{ "#PaintKit_cu_p250_mandala_Tag", "p250_mandala" } },
	{ 405,{ "#PaintKit_cu_sawedoff_deva_Tag", "sawedoff_deva" } },
	{ 406,{ "#PaintKit_aq_scar20_leak_Tag", "scar20_leak" } },
	{ 407,{ "#PaintKit_aq_xm1014_sigla_Tag", "xm1014_sigla" } },
	{ 409,{ "#PaintKit_an_tiger_orange_Tag", "tiger_orange" } },
	{ 410,{ "#PaintKit_aq_damascus_Tag", "damascus" } },
	{ 411,{ "#PaintKit_aq_damascus_Tag", "damascus_90" } },
	{ 413,{ "#PaintKit_am_marble_fade_Tag", "marble_fade" } },
	{ 414,{ "#PaintKit_aq_steel_bravo_Tag", "steel_knife" } },
	{ 415,{ "#PaintKit_am_marbleized_Tag", "ruby_marbleized" } },
	{ 416,{ "#PaintKit_am_marbleized_Tag", "sapphire_marbleized" } },
	{ 417,{ "#PaintKit_am_marbleized_Tag", "blackpearl_marbleized" } },
	{ 418,{ "#PaintKit_am_marbleized_Tag", "doppler_phase1" } },
	{ 419,{ "#PaintKit_am_marbleized_Tag", "doppler_phase2" } },
	{ 420,{ "#PaintKit_am_marbleized_Tag", "doppler_phase3" } },
	{ 421,{ "#PaintKit_am_marbleized_Tag", "doppler_phase4" } },
	{ 422,{ "#PaintKit_cu_ak47_mastery_Tag", "ak47_mastery" } },
	{ 423,{ "#PaintKit_aq_mp7_ultramodern_Tag", "mp7_ultramodern" } },
	{ 424,{ "#PaintKit_aq_awp_twine_Tag", "awp_twine" } },
	{ 425,{ "#PaintKit_am_bronze_sparkle_Tag", "bronze_sparkle" } },
	{ 426,{ "#PaintKit_aq_p250_contour_Tag", "p250_contour" } },
	{ 427,{ "#PaintKit_cu_fiveseven_banana_Tag", "fiveseven_banana" } },
	{ 428,{ "#PaintKit_cu_galil_eco_Tag", "galil_eco" } },
	{ 429,{ "#PaintKit_aq_famas_jinn_Tag", "famas_jinn" } },
	{ 430,{ "#PaintKit_cu_m4a1_hyper_beast_Tag", "m4a1_hyper_beast" } },
	{ 431,{ "#PaintKit_cu_mac10_redhot_tag", "mac10_redhot" } },
	{ 432,{ "#PaintKit_am_awp_glory_Tag", "negev_glory" } },
	{ 433,{ "#PaintKit_cu_mac10_neonrider_Tag", "mac10_neonrider" } },
	{ 434,{ "#PaintKit_cu_sawedoff_origami_Tag", "sawedoff_origami" } },
	{ 435,{ "#PaintKit_cu_cz75_precision_Tag", "cz75_precision" } },
	{ 436,{ "#PaintKit_am_ump_racer_Tag", "ump_racer" } },
	{ 437,{ "#PaintKit_am_aqua_flecks_Tag", "aqua_flecks" } },
	{ 438,{ "#PaintKit_cu_chronos_g3sg1_Tag", "chronos_g3sg1" } },
	{ 439,{ "#PaintKit_hy_hades_Tag", "hades" } },
	{ 440,{ "#PaintKit_hy_icarus_Tag", "icarus" } },
	{ 441,{ "#PaintKit_cu_labyrinth_Tag", "labyrinth" } },
	{ 442,{ "#PaintKit_sp_labyrinth1_Tag", "labyrinth1" } },
	{ 443,{ "#PaintKit_sp_labyrinth2_Tag", "labyrinth2" } },
	{ 444,{ "#PaintKit_sp_labyrinth3_Tag", "labyrinth3" } },
	{ 445,{ "#PaintKit_an_red_Tag", "red" } },
	{ 446,{ "#PaintKit_cu_medusa_awp_Tag", "medusa_awp" } },
	{ 447,{ "#PaintKit_gs_mother_of_pearl_elite_Tag", "mother_of_pearl_elite" } },
	{ 448,{ "#PaintKit_aa_pandora_Tag", "pandora" } },
	{ 449,{ "#PaintKit_cu_poseidon_Tag", "poseidon" } },
	{ 450,{ "#PaintKit_hy_zodiac1_Tag", "zodiac1" } },
	{ 451,{ "#PaintKit_hy_zodiac2_Tag", "zodiac2" } },
	{ 452,{ "#PaintKit_hy_zodiac3_Tag", "zodiac3" } },
	{ 453,{ "#PaintKit_an_emerald_bravo_Tag", "emerald_bravo" } },
	{ 454,{ "#PaintKit_so_khaki_green_Tag", "khaki_green" } },
	{ 455,{ "#PaintKit_cu_anime_aug_Tag", "anime_aug" } },
	{ 456,{ "#PaintKit_am_bamboo_jungle_Tag", "bamboo_jungle" } },
	{ 457,{ "#PaintKit_hy_bamboo_jungle_ink_Tag", "bamboo_jungle_ink" } },
	{ 458,{ "#PaintKit_hy_bamboo_jungle_black_Tag", "bamboo_jungle_black" } },
	{ 459,{ "#PaintKit_hy_bamboo_jungle_Tag", "bamboo_jungle" } },
	{ 460,{ "#PaintKit_am_geometric_steps_Tag", "geometric_steps" } },
	{ 462,{ "#PaintKit_hy_geometric_steps_green_Tag", "geometric_steps_green" } },
	{ 463,{ "#PaintKit_hy_geometric_steps_yellow_Tag", "geometric_steps_yellow" } },
	{ 464,{ "#PaintKit_hy_kimono_diamonds_Tag", "kimono_diamonds" } },
	{ 465,{ "#PaintKit_hy_kimono_diamonds_orange_Tag", "kimono_diamonds_orange" } },
	{ 466,{ "#PaintKit_hy_kimono_diamonds_red_Tag", "kimono_diamonds_red" } },
	{ 467,{ "#PaintKit_sp_kimono_diamonds_Tag", "kimono_diamonds" } },
	{ 468,{ "#PaintKit_am_seastorm_Tag", "seastorm" } },
	{ 469,{ "#PaintKit_am_seastorm_blood_Tag", "seastorm_blood" } },
	{ 470,{ "#PaintKit_am_seastorm_shojo_Tag", "seastorm_shojo" } },
	{ 471,{ "#PaintKit_am_kimono_sunrise_Tag", "kimono_sunrise" } },
	{ 472,{ "#PaintKit_am_so_keycolors_Tag", "keycolors" } },
	{ 473,{ "#PaintKit_so_aqua_Tag", "aqua" } },
	{ 474,{ "#PaintKit_cu_ak47_courage_alt_Tag", "ak47_courage_alt" } },
	{ 475,{ "#PaintKit_cu_m4a1_hyper_beast_Tag", "awp_hyper_beast" } },
	{ 476,{ "#PaintKit_cu_cz75a_chastizer_Tag", "cz75a_chastizer" } },
	{ 477,{ "#PaintKit_am_famas_dots_Tag", "famas_dots" } },
	{ 478,{ "#PaintKit_cu_galilar_particles_Tag", "galilar_particles" } },
	{ 479,{ "#PaintKit_aq_glock18_flames_blue_Tag", "glock18_flames_blue" } },
	{ 480,{ "#PaintKit_cu_m4a4_evil_daimyo_Tag", "m4a4_evil_daimyo" } },
	{ 481,{ "#PaintKit_cu_mp7_nemsis_Tag", "mp7_nemsis" } },
	{ 482,{ "#PaintKit_am_mp9_nitrogen_Tag", "mp9_nitrogen" } },
	{ 483,{ "#PaintKit_cu_negev_annihilator_Tag", "negev_annihilator" } },
	{ 484,{ "#PaintKit_cu_nova_ranger_Tag", "nova_ranger" } },
	{ 485,{ "#PaintKit_aq_p2000_boom_Tag", "p2000_boom" } },
	{ 486,{ "#PaintKit_cu_ak47_mastery_Tag", "ak47_mastery" } },
	{ 487,{ "#PaintKit_cu_cyrex_tag", "sg553_cyrex" } },
	{ 488,{ "#PaintKit_cu_ump45_uproar_Tag", "ump45_uproar" } },
	{ 489,{ "#PaintKit_cu_usp_progressiv_Tag", "usp_progressiv" } },
	{ 490,{ "#PaintKit_cu_ak47_winter_sport_Tag", "ak47_winter_sport" } },
	{ 491,{ "#PaintKit_cu_dualberretta_dragons_Tag", "dualberretta_dragons" } },
	{ 492,{ "#PaintKit_cu_famas_lenta_Tag", "famas_lenta" } },
	{ 493,{ "#PaintKit_gs_g3sg1_flux_purple_Tag", "g3sg1_flux_purple" } },
	{ 494,{ "#PaintKit_gs_galil_nightwing_Tag", "galil_nightwing" } },
	{ 495,{ "#PaintKit_gs_glock18_wrathys_Tag", "glock18_wrathys" } },
	{ 496,{ "#PaintKit_gs_m249_nebula_crusader_Tag", "m249_nebula_crusader" } },
	{ 497,{ "#PaintKit_gs_m4a1s_snakebite_gold_Tag", "m4a1s_snakebite_gold" } },
	{ 498,{ "#PaintKit_cu_mac10_alekhya_duo_Tag", "mac10_alekhya_duo" } },
	{ 499,{ "#PaintKit_cu_mag7_myrcene_Tag", "mag7_myrcene" } },
	{ 500,{ "#PaintKit_cu_mp7_classified_Tag", "mp7_classified" } },
	{ 501,{ "#PaintKit_hy_p250_crackshot_Tag", "p250_crackshot" } },
	{ 502,{ "#PaintKit_gs_scar20_peacemaker03_Tag", "scar20_peacemaker03" } },
	{ 503,{ "#PaintKit_cu_ssg08_technicality_Tag", "ssg08_technicality" } },
	{ 504,{ "#PaintKit_cu_usp_kill_confirmed_Tag", "usp_kill_confirmed" } },
	{ 505,{ "#PaintKit_aq_xm1014_scumbria_Tag", "xm1014_scumbria" } },
	{ 506,{ "#PaintKit_cu_ak47_point_disarray_Tag", "ak47_point_disarray" } },
	{ 507,{ "#PaintKit_am_aug_jumble_Tag", "aug_jumble" } },
	{ 508,{ "#PaintKit_cu_bizon_noxious_Tag", "bizon_noxious" } },
	{ 509,{ "#PaintKit_aq_deagle_corinthian_Tag", "deagle_corinthian" } },
	{ 510,{ "#PaintKit_cu_fiveseven_retrobution_Tag", "fiveseven_retrobution" } },
	{ 511,{ "#PaintKit_cu_g3sg1_executioner_Tag", "g3sg1_executioner" } },
	{ 512,{ "#PaintKit_gs_m4a4_royal_squire_Tag", "m4a4_royal_squire" } },
	{ 514,{ "#PaintKit_cu_negev_impact_Tag", "negev_impact" } },
	{ 515,{ "#PaintKit_am_p2000_imperial_red_Tag", "p2000_imperial_red" } },
	{ 516,{ "#PaintKit_cu_p90_shapewood_Tag", "p90_shapewood" } },
	{ 517,{ "#PaintKit_gs_sawedoff_necromancer_Tag", "sawedoff_necromancer" } },
	{ 518,{ "#PaintKit_hy_scar20_jungler_Tag", "scar20_jungler" } },
	{ 519,{ "#PaintKit_gs_sg553_tiger_moth_Tag", "sg553_tiger_moth" } },
	{ 520,{ "#PaintKit_cu_tec9_avalanche_Tag", "tec9_avalanche" } },
	{ 521,{ "#PaintKit_aq_xm1014_hot_rod_Tag", "xm1014_hot_rod" } },
	{ 522,{ "#PaintKit_aa_fade_Tag", "fade" } },
	{ 523,{ "#PaintKit_aa_fade_metallic_Tag", "fade_metallic" } },
	{ 524,{ "#PaintKit_gs_ak47_supercharged_Tag", "ak47_supercharged" } },
	{ 525,{ "#PaintKit_cu_ak47_mastery_Tag", "ak47_mastery" } },
	{ 526,{ "#PaintKit_cu_bizon_citizen_Tag", "bizon_citizen" } },
	{ 527,{ "#PaintKit_aq_deserteagle_kumichodragon_Tag", "deserteagle_kumichodragon" } },
	{ 528,{ "#PaintKit_aq_p250_cartel_Tag", "p250_cartel" } },
	{ 529,{ "#PaintKit_aq_p250_contour_Tag", "p250_contour" } },
	{ 530,{ "#PaintKit_cu_fiveseven_augmented_Tag", "fiveseven_augmented" } },
	{ 532,{ "#PaintKit_gs_glock18_award_Tag", "glock18_award" } },
	{ 533,{ "#PaintKit_gs_m4a4_pioneer_Tag", "m4a4_pioneer" } },
	{ 534,{ "#PaintKit_am_mac10_electricity_Tag", "mac10_electricity" } },
	{ 535,{ "#PaintKit_gs_mag7_praetorian_Tag", "mag7_praetorian" } },
	{ 536,{ "#PaintKit_sp_mp7_impire_Tag", "mp7_impire" } },
	{ 537,{ "#PaintKit_cu_m4a1_hyper_beast_Tag", "nova_hyper_beast" } },
	{ 538,{ "#PaintKit_cu_ssg08_necropos_Tag", "ssg08_necropos" } },
	{ 539,{ "#PaintKit_gs_tec9_jambiya_Tag", "tec9_jambiya" } },
	{ 540,{ "#PaintKit_gs_usp_voltage_Tag", "usp_voltage" } },
	{ 541,{ "#PaintKit_cu_aug_swallows_Tag", "aug_swallows" } },
	{ 542,{ "#PaintKit_cu_bizon_Curse_Tag", "bizon_Curse" } },
	{ 543,{ "#PaintKit_gs_cz75a_redastor_Tag", "cz75a_redastor" } },
	{ 544,{ "#PaintKit_gs_dualberettas_ventilators_Tag", "dualberettas_ventilators" } },
	{ 545,{ "#PaintKit_sp_g3sg1_militiaorange_Tag", "g3sg1_militiaorange" } },
	{ 546,{ "#PaintKit_gs_galilar_incenerator_Tag", "galilar_incenerator" } },
	{ 547,{ "#PaintKit_cu_m249_spectre_Tag", "m249_spectre" } },
	{ 548,{ "#PaintKit_cu_m4a1s_soultaker_Tag", "m4a1s_soultaker" } },
	{ 549,{ "#PaintKit_am_mp9_bioleak_Tag", "mp9_bioleak" } },
	{ 550,{ "#PaintKit_hy_p2000_oceani_Tag", "p2000_oceani" } },
	{ 551,{ "#PaintKit_cu_p250_asiimov_Tag", "p250_asiimov" } },
	{ 552,{ "#PaintKit_gs_sawedoff_fubar_Tag", "sawedoff_fubar" } },
	{ 553,{ "#PaintKit_cu_sg553_atlas_Tag", "sg553_atlas" } },
	{ 554,{ "#PaintKit_gs_ssg08_armacore_Tag", "ssg08_armacore" } },
	{ 555,{ "#PaintKit_am_tec9_redblast_Tag", "tec9_redblast" } },
	{ 556,{ "#PaintKit_cu_ump45_primalsaber_Tag", "ump45_primalsaber" } },
	{ 557,{ "#PaintKit_cu_xm1014_spectrum_Tag", "xm1014_spectrum" } },
	{ 558,{ "#Paintkit_cu_lore_Tag", "bayonet_lore" } },
	{ 559,{ "#Paintkit_cu_lore_Tag", "flip_lore" } },
	{ 560,{ "#Paintkit_cu_lore_Tag", "gut_lore" } },
	{ 561,{ "#Paintkit_cu_lore_Tag", "karam_lore" } },
	{ 562,{ "#Paintkit_cu_lore_Tag", "m9_bay_lore" } },
	{ 563,{ "#Paintkit_cu_stonewash_Tag", "bayonet_stonewash" } },
	{ 564,{ "#Paintkit_cu_stonewash_Tag", "flip_stonewash" } },
	{ 565,{ "#Paintkit_cu_stonewash_Tag", "gut_stonewash" } },
	{ 566,{ "#Paintkit_cu_stonewash_Tag", "karam_stonewash" } },
	{ 567,{ "#Paintkit_cu_stonewash_Tag", "m9_bay_stonewash" } },
	{ 568,{ "#PaintKit_am_marbleized_g_Tag", "emerald_marbleized" } },
	{ 569,{ "#PaintKit_am_marbleized_g_Tag", "gamma_doppler_phase1" } },
	{ 570,{ "#PaintKit_am_marbleized_g_Tag", "gamma_doppler_phase2" } },
	{ 571,{ "#PaintKit_am_marbleized_g_Tag", "gamma_doppler_phase3" } },
	{ 572,{ "#PaintKit_am_marbleized_g_Tag", "gamma_doppler_phase4" } },
	{ 573,{ "#PaintKit_gs_autotronic_Tag", "bayonet_autotronic" } },
	{ 574,{ "#PaintKit_gs_autotronic_Tag", "flip_autotronic" } },
	{ 575,{ "#PaintKit_gs_autotronic_Tag", "gut_autotronic" } },
	{ 576,{ "#PaintKit_gs_autotronic_Tag", "karam_autotronic" } },
	{ 577,{ "#PaintKit_gs_autotronic_Tag", "m9_bay_autotronic" } },
	{ 578,{ "#PaintKit_hy_ocean_Tag", "ocean_knife" } },
	{ 579,{ "#PaintKit_hy_ocean_Tag", "ocean_knife_90" } },
	{ 580,{ "#PaintKit_am_marked_up_Tag", "marked_up" } },
	{ 581,{ "#PaintKit_am_marked_up_Tag", "marked_up_90" } },
	{ 582,{ "#PaintKit_am_marked_up_Tag", "marked_up_fine" } },
	{ 583,{ "#PaintKit_gs_aug_aristocrat_Tag", "aug_aristocrat" } },
	{ 584,{ "#PaintKit_gs_awp_phobos_Tag", "awp_phobos" } },
	{ 585,{ "#PaintKit_cu_five_seven_daimyo_Tag", "five_seven_daimyo" } },
	{ 586,{ "#PaintKit_cu_glock_wasteland_rebel_Tag", "glock_wasteland_rebel" } },
	{ 587,{ "#PaintKit_gs_m4a1_mecha_industries_Tag", "m4a1_mecha_industries" } },
	{ 588,{ "#PaintKit_cu_m4a4_desolate_space_Tag", "m4a4_desolate_space" } },
	{ 589,{ "#PaintKit_aq_mac_10_alien_camo_Tag", "mac_10_alien_camo" } },
	{ 590,{ "#PaintKit_aq_nova_sci_fi_Tag", "nova_sci_fi" } },
	{ 591,{ "#PaintKit_gs_p2000_imperial_dragon_Tag", "p2000_imperial_dragon" } },
	{ 592,{ "#PaintKit_gs_p250_metal_panels_Tag", "p250_metal_panels" } },
	{ 593,{ "#PaintKit_gs_p90_full_throttle_Tag", "p90_full_throttle" } },
	{ 594,{ "#PaintKit_gs_pp_bizon_harvester_Tag", "pp_bizon_harvester" } },
	{ 595,{ "#PaintKit_cu_r8_cybersport_Tag", "r8_cybersport" } },
	{ 596,{ "#PaintKit_cu_sawed_off_lime_Tag", "sawed_off_lime" } },
	{ 597,{ "#PaintKit_gs_scar20_bloodsport_Tag", "scar20_bloodsport" } },
	{ 598,{ "#PaintKit_cu_sg553_aerial_Tag", "sg553_aerial" } },
	{ 599,{ "#PaintKit_am_tec_9_sea_salt_Tag", "tec_9_sea_salt" } },
	{ 600,{ "#PaintKit_cu_AK47_Anarchy_Tag", "ak47_anarchy" } },
	{ 601,{ "#PaintKit_gs_AUG_Syd_Mead_Tag", "aug_syd_mead" } },
	{ 602,{ "#PaintKit_gs_CZ75_Tread_Tag", "cz75_tread" } },
	{ 603,{ "#PaintKit_aq_Desert_Eagle_Constable_Tag", "desert_eagle_constable" } },
	{ 604,{ "#PaintKit_gs_FAMAS_Rally_Tag", "famas_rally" } },
	{ 605,{ "#PaintKit_aq_Five_Seven_Scumbria_Tag", "five_seven_scumbria" } },
	{ 606,{ "#PaintKit_gs_G3SG1_Ventilator_Tag", "g3sg1_ventilator" } },
	{ 607,{ "#PaintKit_cu_Glock18_Weasel_Tag", "glock18_weasel" } },
	{ 608,{ "#PaintKit_cu_MAG7_Tribal_Tag", "mag7_tribal" } },
	{ 609,{ "#PaintKit_cu_MP9_Narcis_Tag", "mp9_narcis" } },
	{ 610,{ "#PaintKit_hy_Negev_Dazzle_Tag", "negev_dazzle" } },
	{ 611,{ "#PaintKit_cu_P90_Grimm_Tag", "p90_grimm" } },
	{ 612,{ "#PaintKit_gs_SCAR20_Powercore_Tag", "scar20_powercore" } },
	{ 613,{ "#PaintKit_cu_SG556_Triarch_Tag", "sg556_triarch" } },
	{ 614,{ "#PaintKit_gs_TEC9_Supercharged_Tag", "tec9_supercharged" } },
	{ 615,{ "#PaintKit_cu_UMP45_Metritera_Tag", "ump45_metritera" } },
	{ 616,{ "#PaintKit_hy_XM1014_Fractal_Blue_Tag", "xm1014_fractal_blue" } },
	{ 622,{ "#PaintKit_am_czv2_mf_Tag", "czv2_mf" } },
	{ 623,{ "#PaintKit_aq_glock_dark-fall_Tag", "glock_dark-fall" } },
	{ 624,{ "#PaintKit_cu_ssg08_dragonfire_scope_Tag", "ssg08_dragonfire_scope" } },
	{ 625,{ "#PaintKit_gs_dual_berettas_golden_venice_Tag", "dual_berettas_golden_venice" } },
	{ 626,{ "#PaintKit_gs_famas_mecha_Tag", "famas_mecha" } },
	{ 627,{ "#PaintKit_gs_final_pooldeadv2_Tag", "final_pooldeadv2" } },
	{ 628,{ "#PaintKit_gs_g3sg1_viper_yellow_Tag", "g3sg1_viper_yellow" } },
	{ 629,{ "#PaintKit_cu_galil_ar-camo_Tag", "galil_ar-camo" } },
	{ 630,{ "#PaintKit_aa_hide-mp9_Tag", "hide-mp9" } },
	{ 631,{ "#PaintKit_cu_m4a1_flashback_Tag", "m4a1_flashback" } },
	{ 632,{ "#PaintKit_gs_m4a4_sector_Tag", "m4a4_sector" } },
	{ 633,{ "#PaintKit_am_mag7_malform_Tag", "mag7_malform" } },
	{ 634,{ "#PaintKit_am_nova_sand_Tag", "nova_sand" } },
	{ 635,{ "#PaintKit_gs_p2000-sport_Tag", "p2000-sport" } },
	{ 636,{ "#PaintKit_gs_p90_shallow_grave_Tag", "p90_shallow_grave" } },
	{ 637,{ "#PaintKit_cu_usp_cyrex_Tag", "usp_cyrex" } },
	{ 638,{ "#PaintKit_cu_wp_sawedoff_Tag", "wp_sawedoff" } },
	{ 639,{ "#PaintKit_cu_ak47_bloodsport_Tag", "ak47_bloodsport" } },
	{ 640,{ "#PaintKit_gs_awp_fever_dream_Tag", "awp_fever_dream" } },
	{ 641,{ "#PaintKit_gs_pp_bizon_jungle_slipstream_Tag", "pp_bizon_jungle_slipstream" } },
	{ 642,{ "#PaintKit_gs_SCAR20_blueprint_Tag", "scar20_blueprint" } },
	{ 643,{ "#PaintKit_cu_cz75a_xiangliu_Tag", "cz75a_xiangliu" } },
	{ 644,{ "#PaintKit_gs_m4a1_decimator_Tag", "m4a1_decimator" } },
	{ 645,{ "#PaintKit_aq_Desert_Eagle_Oxide_Blaze_Tag", "desert_eagle_oxide_blaze" } },
	{ 646,{ "#PaintKit_cu_five_seven_capillary_Tag", "five_seven_capillary" } },
	{ 647,{ "#PaintKit_cu_galil_Crimson_Tsunami_Tag", "galil_Crimson_Tsunami" } },
	{ 648,{ "#PaintKit_gs_m249_Emerald_Poison_Dart_Tag", "m249_Emerald_Poison_Dart" } },
	{ 649,{ "#PaintKit_aq_mp7_Akoben_Tag", "mp7_Akoben" } },
	{ 650,{ "#PaintKit_cu_p250_ripple_Tag", "p250_ripple" } },
	{ 651,{ "#PaintKit_cu_mac10_last_dive_tag", "mac10_last_dive" } },
	{ 652,{ "#PaintKit_cu_ump45_Scaffold_Tag", "ump45_Scaffold" } },
	{ 653,{ "#PaintKit_cu_usp_neo_noir_Tag", "usp_neo_noir" } },
	{ 654,{ "#PaintKit_cu_xm1014_Seasons_Tag", "xm1014_Seasons" } },
	{ 655,{ "#PaintKit_cu_sawedoff_Zander_tag", "sawedoff_Zander" } },
	{ 656,{ "#PaintKit_gs_ak_colony01_red_Tag", "ak_colony01_red" } },
	{ 657,{ "#PaintKit_cu_usps_blueprint_Tag", "cu_usps_blueprint" } },
	{ 658,{ "#PaintKit_gs_dualberettas_cobra_Tag", "gs_dualberettas_cobra" } },
	{ 659,{ "#PaintKit_sp_famas_macabre_Tag", "sp_famas_macabre" } },
	{ 660,{ "#PaintKit_cu_fiveseven_hyperbeast_Tag", "cu_fiveseven_hyperbeast" } },
	{ 661,{ "#PaintKit_cu_galil_candychaos_Tag", "cu_galil_candychaos" } },
	{ 662,{ "#PaintKit_cu_awp_hanny_Tag", "cu_awp_hanny" } },
	{ 663,{ "#PaintKit_cu_m4a1s_metritera_Tag", "cu_m4a1s_metritera" } },
	{ 664,{ "#PaintKit_cu_m4a4_hellfire_Tag", "cu_m4a4_hellfire" } },
	{ 665,{ "#PaintKit_am_mac10_aloha_Tag", "am_mac10_aloha" } },
	{ 666,{ "#PaintKit_am_mag7_caustic_Tag", "am_mag7_caustic" } },
	{ 667,{ "#PaintKit_cu_p2000_hunter_Tag", "cu_p2000_hunter" } },
	{ 668,{ "#PaintKit_cu_p250_axiom_Tag", "cu_p250_axiom" } },
	{ 669,{ "#PaintKit_hy_p90_barebones_blue_Tag", "hy_p90_barebones_blue" } },
	{ 670,{ "#PaintKit_cu_ssg08_deathshead_Tag", "cu_ssg08_deathshead" } },
	{ 671,{ "#PaintKit_aq_tec9_chalk_pattern_Tag", "aq_tec9_chalk_pattern" } },
	{ 672,{ "#PaintKit_aq_ump45_flameflower_Tag", "aq_ump45_flameflower" } },
	{ 10006,{ "#PaintKit_bloodhound_black_silver_tag", "bloodhound_black_silver" } },
	{ 10007,{ "#PaintKit_bloodhound_snakeskin_brass_tag", "bloodhound_snakeskin_brass" } },
	{ 10008,{ "#PaintKit_bloodhound_metallic_tag", "bloodhound_metallic" } },
	{ 10009,{ "#PaintKit_handwrap_leathery_tag", "handwrap_leathery" } },
	{ 10010,{ "#PaintKit_handwrap_camo_grey_tag", "handwrap_camo_grey" } },
	{ 10013,{ "#PaintKit_slick_black_tag", "slick_black" } },
	{ 10015,{ "#PaintKit_slick_military_tag", "slick_military" } },
	{ 10016,{ "#PaintKit_slick_red_tag", "slick_red" } },
	{ 10018,{ "#PaintKit_sporty_light_blue_tag", "sporty_light_blue" } },
	{ 10019,{ "#PaintKit_sporty_military_tag", "sporty_military" } },
	{ 10021,{ "#PaintKit_handwrap_red_slaughter_tag", "handwrap_red_slaughter" } },
	{ 10024,{ "#PaintKit_motorcycle_basic_black_tag", "motorcycle_basic_black" } },
	{ 10026,{ "#PaintKit_motorcycle_mint_triangle_tag", "motorcycle_mint_triangle" } },
	{ 10027,{ "#PaintKit_motorcycle_mono_boom_tag", "motorcycle_mono_boom" } },
	{ 10028,{ "#PaintKit_motorcycle_triangle_blue_tag", "motorcycle_triangle_blue" } },
	{ 10030,{ "#PaintKit_specialist_ddpat_green_camo_tag", "specialist_ddpat_green_camo" } },
	{ 10033,{ "#PaintKit_specialist_kimono_diamonds_red_tag", "specialist_kimono_diamonds_red" } },
	{ 10034,{ "#PaintKit_specialist_emerald_web_tag", "specialist_emerald_web" } },
	{ 10035,{ "#PaintKit_specialist_white_orange_grey_tag", "specialist_orange_white" } },
	{ 10036,{ "#PaintKit_handwrap_fabric_orange_camo_tag", "handwrap_fabric_orange_camo" } },
	{ 10037,{ "#PaintKit_sporty_purple_tag", "sporty_purple" } },
	{ 10038,{ "#PaintKit_sporty_green_tag", "sporty_green" } },
	{ 10039,{ "#PaintKit_bloodhound_guerrilla_tag", "bloodhound_guerrilla" } },
	{ 10040,{ "#PaintKit_slick_snakeskin_yellow_tag", "slick_snakeskin_yellow" } },
};

namespace Skins
{
	void Localize();
}
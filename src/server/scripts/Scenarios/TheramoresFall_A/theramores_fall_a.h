
#ifndef THERAMORES_FALL_A_H
#define THERAMORES_FALL_A_H

#define SCENARIO_ID_A 71

enum Criterias
{
    CRITERIA_SHIP_PROTECTED     = 21020, // step 1

    CRITERIA_CAPTAINS_KILLED    = 21030, // step 2
    CRITERIA_ROKNAH_KILLED      = 21033, // step 2
    CRITERIA_SHIPS_BURNED       = 19980, // step 2

    CRITERIA_VICIOUS_WYVERN     = 21110, // step 3
    CRITERIA_GASHNUL            = 21109, // step 3

    CRITERIA_JAINA_LOCATED      = 21112, // step 4

    CRITERIA_GATECRUSHER_DESTROYED  = 21113, // step 5
    CRITERIA_STANDARDS          = 21114,

    CRITERIA_WARLORD_KILLED     = 21115, // step 6
    CRITERIA_JAINA_PROTECTED    = 22223, // step 6
};

enum Data
{
    DATA_SERGEANT_GRUD,
    DATA_ROKNAH_KILLED,
    DATA_LEAKING_OIL_DRUM,
    DATA_SKY_CAPTAIN_DAZRIP,
    DATA_CAPTAIN_KORTHOK,
    DATA_CAPTAIN_MOUSSON,
    DATA_CAPTAIN_SEAHOOF,
    DATA_VICIOUS_WYVERN,
    DATA_GASHNUL,
    DATA_JAINA_LOCATED,
    DATA_GATECRUSHER_DESTROYED,
    DATA_STANDARD,
    DATA_JAINA_PROTECTED,
    DATA_WARLORD,
};

enum Creatures
{
    // Alliance
    NPC_MARINE_HALTERS      = 65549,
    NPC_MARINE_ANDERSON     = 65548,
    NPC_LADY_JAINA_PROUDMOORE   = 64727,

    // Horde
    NPC_SERGEANT_GRUD       = 65785,
    NPC_ROKNAH_GRUNT        = 64732,
    NPC_ROKNAH_SKIRMISHER   = 65494,
    NPC_WAVE_CALLER_ZULGA   = 65786,
    NPC_ROKNAH_FELCASTER    = 65507,
    NPC_LEAKING_OIL_DRUM    = 65571,
    NPC_AIRSHIP_MARINE      = 65611,
    NPC_AIRSHIP_CREWMAN     = 65610,
    NPC_SKY_CAPTAIN_DAZRIP  = 65609,
    NPC_OVERSEER_LURGUK     = 65807,
    NPC_ROKNAH_RIDER        = 64729,
    NPC_ROKNAH_PEON         = 65474,
    NPC_ROKNAH_LOA_SINGER   = 64733,
    NPC_ROKNAH_HAG          = 64734,
    NPC_BLOOD_GUARD_GRUNK   = 65154,
    NPC_CAPTAIN_KORTHOK     = 65152,
    NPC_CAPTAIN_MOUSSON     = 65444,
    NPC_CAPTAIN_SEAHOOF     = 65151,
    NPC_ROKNAH_WAVE_CALLER  = 65510,
    NPC_GASHNUL             = 64900,
    NPC_VICIOUS_WYVERN      = 64957,
    NPC_GATECRUSHER         = 64479,
    NPC_WARLORD_ROKNAH      = 65442,
};

#endif
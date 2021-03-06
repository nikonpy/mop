#pragma once

enum BattlePetAbilityProcType
{
    PET_BATTLE_EVENT_ON_APPLY = 0,
    PET_BATTLE_EVENT_ON_DAMAGE_TAKEN = 1,
    PET_BATTLE_EVENT_ON_DAMAGE_DEALT = 2,
    PET_BATTLE_EVENT_ON_HEAL_TAKEN = 3,
    PET_BATTLE_EVENT_ON_HEAL_DEALT = 4,
    PET_BATTLE_EVENT_ON_AURA_REMOVED = 5,
    PET_BATTLE_EVENT_ON_ROUND_START = 6,
    PET_BATTLE_EVENT_ON_ROUND_END = 7,
    PET_BATTLE_EVENT_ON_TURN = 8,
    PET_BATTLE_EVENT_ON_ABILITY = 9,
    PET_BATTLE_EVENT_ON_SWAP_IN = 10,
    PET_BATTLE_EVENT_ON_SWAP_OUT = 11,
};

enum BattlePetEffectType
{
    // 2 ???? ? BattlePetEffectProperties ???-?? ???? subType
    // ???????? 38 ???????? ??? ?????? ??????? ???? ? ?? ???????????? ? 24, 27, 29, 33, 45, 59, 62 ? ?.?
    // 37 ???????? ??? ?????? ?????
    // ????????? ????? ????? ?????????? ??? ?????? ?????? ? ???????? ????. ??????, ? ???? ????????, ??? ??? ? ???? ????)
    // ???? ? ??????? ???????? ??? visualid ?????
    ABILITY_EFFECT_NONE = 0,
    ABILITY_EFFECT_DUMMY = 22,
    ABILITY_EFFECT_HEAL = 23,
    ABILITY_EFFECT_DAMAGE = 24,
    ABILITY_EFFECT_CATCH_PET = 25,
    ABILITY_EFFECT_AURA = 26,
    ABILITY_EFFECT_DAMAGE_MOD = 27,
    ABILITY_EFFECT_IMMUNE_AURA = 28,
    ABILITY_EFFECT_MOD_DAMAGE_CONDITION_CASTER = 29,
    ABILITY_EFFECT_MOD_STATE = 31,
    ABILITY_EFFECT_RESTORE_HP_PCT_FROM_CASTER_DAMAGE = 32,
    ABILITY_EFFECT_RESTORE_HP_PCT_FROM_TARGET_DAMAGE = 44,
    ABILITY_EFFECT_AURA_UNAPPLY = 49,
    ABILITY_EFFECT_AURA_CONDITION = 50,
    ABILITY_EFFECT_AURA2 = 52,
    ABILITY_EFFECT_HEAL_PCT = 53,
    ABILITY_EFFECT_AURA_PERIODIC_DAMAGE = 54,
    ABILITY_EFFECT_DAMAGE_MOD1 = 59, // TODO
    ABILITY_EFFECT_CONSUME_CORPSE = 61,
    ABILITY_EFFECT_DAMAGE_PCT_FROM_HP = 62,
    ABILITY_EFFECT_AURA_PERIODIC_HEAL_PCT = 63,
    ABILITY_EFFECT_MOD_DAMAGE_CONDITION_WEATHER = 65,
    ABILITY_EFFECT_MOD_DAMAGE_CONDITION_TARGET_HP = 66,
    ABILITY_EFFECT_SET_HP = 67,
    ABILITY_EFFECT_UNK10 = 68,
    ABILITY_EFFECT_AURA_POS = 72,

    ABILITY_EFFECT_UNK12 = 74,
    ABILITY_EFFECT_UNK13 = 75,
    ABILITY_EFFECT_UNK14 = 76,
    ABILITY_EFFECT_UNK15 = 77,
    ABILITY_EFFECT_UNK16 = 78,
    ABILITY_EFFECT_UNK17 = 79,
    ABILITY_EFFECT_AURA_WEATHER = 80,
    ABILITY_EFFECT_UNK19 = 85,
    ABILITY_EFFECT_UNK20 = 86,
    ABILITY_EFFECT_DAMAGE2 = 96,
    ABILITY_EFFECT_HEAL_MECHANIC_PET = 100,
    ABILITY_EFFECT_MULTIATTACK = 103,
    ABILITY_EFFECT_UNK22 = 104,
    ABILITY_EFFECT_UNK23 = 107,
    ABILITY_EFFECT_REVIEV_PET = 111,
    ABILITY_EFFECT_UNK24 = 116,
    ABILITY_EFFECT_UNK25 = 121,
    ABILITY_EFFECT_UNK27 = 122,
    ABILITY_EFFECT_UNK28 = 123,
    ABILITY_EFFECT_UNK29 = 124,
    ABILITY_EFFECT_UNK30 = 128,
    ABILITY_EFFECT_LOCK_ABILITY = 129,
    ABILITY_EFFECT_UNK31 = 131,
    ABILITY_EFFECT_UNK32 = 135,
    ABILITY_EFFECT_DISPEL_POS_NEG = 136,
    ABILITY_EFFECT_UNK33 = 137,
    ABILITY_EFFECT_UNK34 = 138,
    ABILITY_EFFECT_UNK35 = 139,
    ABILITY_EFFECT_UNK36 = 140,
    ABILITY_EFFECT_UNK37 = 141,
    ABILITY_EFFECT_EAT_CORPSE_2 = 144,
    ABILITY_EFFECT_UNK38 = 145,
    ABILITY_EFFECT_UNK39 = 149,
    ABILITY_EFFECT_UNK40 = 150,
    ABILITY_EFFECT_UNK41 = 156,
    ABILITY_EFFECT_UNK42 = 157,
    ABILITY_EFFECT_UNK43 = 158,
    ABILITY_EFFECT_UNK44 = 159,
    ABILITY_EFFECT_UNK45 = 160,
    ABILITY_EFFECT_UNK46 = 164,
    ABILITY_EFFECT_UNK47 = 165,
    ABILITY_EFFECT_UNK48 = 169,
    ABILITY_EFFECT_UNK49 = 170,
    ABILITY_EFFECT_UNK50 = 171,
    ABILITY_EFFECT_UNK51 = 172,
    ABILITY_EFFECT_UNK52 = 177,
    ABILITY_EFFECT_UNK53 = 178,
    ABILITY_EFFECT_UNK54 = 179,
    ABILITY_EFFECT_UNK55 = 194,
    ABILITY_EFFECT_DAMAGE_PCT_FROM_TAKEN = 197,
    ABILITY_EFFECT_UNK57 = 204,
};

#define MAX_ABILITY_EFFECT 78

enum AbilityTarget
{
    TARGET_SELF_ACTIVE_PET = 0, // looks like self active pet, or self team
    TARGET_SELF_ACTIVE_PET_2 = 37,
    TARGET_ENEMY_ACTIVE_PET = 38,
    TARGET_SELF_ACTIVE_PET_3 = 47,
    TARGET_SELF_ACTIVE_PET_4 = 49,
    TARGET_ENEMY_ACTIVE_PET_2 = 50,
    TARGET_ENEMY_ACTIVE_PET_3 = 51,
    TARGET_ENEMY_TEAM = 94,

    //


    // 38 - ??????? ???
    // 50 - ??????? ??? 2
    // 51 - ??????? ??? + ???????? ??? ????? ???????
    // 94 - ??? ????????

    // 50 - active pet, ?.? ??? ???? ?? ? ??? ????? ???? ??? ????????? ?? ????
    // ?????? ???? ??? ???? ???? ????????? ????????? ?? ????, ????? ???? ??? ????????? ?? ????????? ???????, ?? ???? ????
    // ?????? ? ????????? ????????? ????
};
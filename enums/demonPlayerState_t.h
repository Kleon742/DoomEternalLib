enum demonPlayerState_t : int
{
    DEMONPLAYERSTATE_NONE = 0,
    DEMONPLAYERSTATE_AMBIENT = 1,
    DEMONPLAYERSTATE_SPAWNING = 2,
    DEMONPLAYERSTATE_GHOSTING = 3,
    DEMONPLAYERSTATE_BECOMING_GHOST = 4,
    DEMONPLAYERSTATE_APPEARING = 5,
    DEMONPLAYERSTATE_TIMEOUT_DEATH = 6,
    DEMONPLAYERSTATE_DEAD = 7,
    DEMONPLAYERSTATE_DISGUISED = 8,
    DEMONPLAYERSTATE_POSSESSING = 9,
    DEMONPLAYERSTATE_FIRE = 10,
    DEMONPLAYERSTATE_FIRE_SECONDARY = 11,
    DEMONPLAYERSTATE_FIRE_POWER = 12,
    DEMONPLAYERSTATE_MELEELEFTWINDUP = 13,
    DEMONPLAYERSTATE_MELEERIGHTWINDUP = 14,
    DEMONPLAYERSTATE_MELEELEFT = 15,
    DEMONPLAYERSTATE_MELEERIGHT = 16,
    DEMONPLAYERSTATE_SYNCMELEEINSTIGATOR = 17,
    DEMONPLAYERSTATE_SYNCMELEEVICTIM = 18,
    DEMONPLAYERSTATE_POWER_ATTACK = 19,
    DEMONPLAYERSTATE_LEDGEGRAB = 20,
    DEMONPLAYERSTATE_BARRAGE = 21,
    DEMONPLAYERSTATE_GROUNDPOUND_FALLING = 22,
    DEMONPLAYERSTATE_GROUNDPOUND = 23,
    DEMONPLAYERSTATE_TELEPORT_DEPART = 24,
    DEMONPLAYERSTATE_TELEPORT_TRAVEL = 25,
    DEMONPLAYERSTATE_TELEPORT_ARRIVE = 26,
    DEMONPLAYERSTATE_PERCHED = 27,
    DEMONPLAYERSTATE_MORTAR_FIRE = 28,
    DEMONPLAYERSTATE_FLAMES_READY = 29,
    DEMONPLAYERSTATE_FLAMES_FIRING = 30,
    DEMONPLAYERSTATE_PRE_VENTING = 31,
    DEMONPLAYERSTATE_VENTING = 32,
    DEMONPLAYERSTATE_LANDING_SLAM = 33,
    DEMONPLAYERSTATE_DOUBLE_JUMP_BOOST = 34,
    DEMONPLAYERSTATE_DETONATE_ENTER = 35,
    DEMONPLAYERSTATE_DETONATE = 36,
    DEMONPLAYERSTATE_SNARE_ATTACK_CHARGE = 37,
    DEMONPLAYERSTATE_SNARE_ATTACK_CHARGE_CANCEL = 38,
    DEMONPLAYERSTATE_SNARE_ATTACK_INTRO = 39,
    DEMONPLAYERSTATE_SNARE_ATTACK_PERFORM = 40,
    DEMONPLAYERSTATE_SNARE_ATTACK_OUTRO = 41,
    DEMONPLAYERSTATE_RUSH_BEGIN = 42,
    DEMONPLAYERSTATE_RUSH_TRAVEL = 43,
    DEMONPLAYERSTATE_RUSH_FINISH = 44,
    DEMONPLAYERSTATE_RUSH_ABORTCOLLIDE = 45,
    DEMONPLAYERSTATE_FIRE_CHARGED = 46,
    DEMONPLAYERSTATE_FLAME_WALL = 47,
    DEMONPLAYERSTATE_TELEPORT = 48,
    DEMONPLAYERSTATE_LAKEOFFIRE = 49,
    DEMONPLAYERSTATE_ACTIVATE_SOULBARRIER = 50,
    DEMONPLAYERSTATE_LAUNCH_SOULBARRIER = 51,
    DEMONPLAYERSTATE_DEPLOY_SHIELD = 52,
    DEMONPLAYERSTATE_SUMMON_WOLF = 53,
    DEMONPLAYERSTATE_BERSERK_MELEE_ATTACK_ONE = 54,
    DEMONPLAYERSTATE_BERSERK_MELEE_ATTACK_LOOP_ONE = 55,
    DEMONPLAYERSTATE_BERSERK_MELEE_ATTACK_TWO = 56,
    DEMONPLAYERSTATE_BERSERK_MELEE_ATTACK_LOOP_TWO = 57,
    DEMONPLAYERSTATE_MELEE_ATTACK_ONE = 58,
    DEMONPLAYERSTATE_MELEE_ATTACK_LOOP_ONE = 59,
    DEMONPLAYERSTATE_MELEE_ATTACK_TWO = 60,
    DEMONPLAYERSTATE_MELEE_ATTACK_LOOP_TWO = 61,
    DEMONPLAYERSTATE_MELEE_ATTACK_THREE = 62,
    DEMONPLAYERSTATE_MELEE_ATTACK_LOOP_THREE = 63,
    DEMONPLAYERSTATE_MELEE_ATTACK_FOUR = 64,
    DEMONPLAYERSTATE_MELEE_ATTACK_LOOP_FOUR = 65,
    DEMONPLAYERSTATE_MELEE_ATTACK_FIVE = 66,
    DEMONPLAYERSTATE_MELEE_ATTACK_LOOP_FIVE = 67,
    DEMONPLAYERSTATE_MELEE_ATTACK_IN_AIR = 68,
    DEMONPLAYERSTATE_MELEE_ATTACK_LOOP_IN_AIR = 69,
    DEMONPLAYERSTATE_CHARGE_SHOT = 70,
    DEMONPLAYERSTATE_CHARGE_SHOT_INTRO = 71,
    DEMONPLAYERSTATE_MAX = 72
};

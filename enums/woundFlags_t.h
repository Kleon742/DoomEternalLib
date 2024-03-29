enum woundFlags_t : int
{
    WOUND_FLAGS_NONE = 0,
    WOUND_FLAGS_ENABLE = 1,
    WOUND_FLAGS_ALLOW_WHEN_ALIVE = 2,
    WOUND_FLAGS_ENABLED_BY_DEFAULT = 4,
    WOUND_FLAGS_NON_DAMAGE_TRIGGERED = 8,
    WOUND_FLAGS_NON_UNIQUE = 16,
    WOUND_FLAGS_ALLOW_FOR_HEAVY_FALTER = 64,
    WOUND_FLAGS_DAMAGE_GROUP_REQUIRED = 128,
    WOUND_FLAGS_TERMINAL = 256,
    WOUND_FLAGS_FULLBODY_GIB = 512,
    WOUND_FLAGS_OVERRIDE_FULLBODY_GIB = 1024,
    WOUND_FLAGS_INSTANT_RAGDOLL = 2048,
    WOUND_FLAGS_ALLOW_INSTANT_GIB = 4096,
    WOUND_FLAGS_ALLOW_EMPTY_GIB = 8192,
    WOUND_FLAGS_ACTIVATE_WITHOUT_ACTIVE_CHILDREN = 16384,
    WOUND_FLAGS_DISABLE_VO = 32768,
    WOUND_FLAGS_FORCE_DEATH = 65536,
    WOUND_FLAGS_DISABLE_BURN_AWAY = 131072,
    WOUND_FLAGS_ALLOW_SERIALIZE = 262144,
    WOUND_FLAGS_IGNORE_DESTROYER_BLADE_RESTRICTIONS = 524288,
    WOUND_FLAGS_ALL = 2147483647
};

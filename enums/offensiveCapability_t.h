enum offensiveCapability_t : unsigned int
{
    NONE = 0,
    RANGE_SHORT = 2,
    RANGE_MID = 4,
    RANGE_LONG = 8,
    HITSCAN = 16,
    PROJECTILE = 32,
    DPS_LOW = 64,
    DPS_MID = 128,
    DPS_HIGH = 256,
    SPLASH = 512,
    FAST = 1024,
    SLOW = 2048,
    RAPID_FIRE = 4096,
    HIGH_SPREAD = 8192,
    LOCKON = 16384,
    MELEE = 32768
};

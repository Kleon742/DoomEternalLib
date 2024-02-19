enum aiAttackFlags_t : unsigned int
{
    AIATTACKFLAG_NONE = 0,
    AIATTACKFLAG_NO_RETREATING_PLAYERS = 1,
    AIATTACKFLAG_NO_PATH_CURVATURE = 2,
    AIATTACKFLAG_SPECIAL = 4,
    AIATTACKFLAG_TARGET_RELATIVE = 8,
    AIATTACKFLAG_SLOPE_ADJUST = 16,
    AIATTACKFLAG_NO_TURRETMODE = 32,
    AIATTACKFLAG_NO_DEFEND_ROLE = 64,
    AIATTACKFLAG_PLAYER_ONLY = 128,
    AIATTACKFLAG_VISIBILITY_REQUIRED = 256,
    AIATTACKFLAG_ANIM_DELTA = 1024,
    AIATTACKFLAG_NO_COMBOS = 2048,
    AIATTACKFLAG_CLAMP_LEAD_AT_TARGET = 4096,
    AIATTACKFLAG_PREDICT_WITH_EVENTS = 8192,
    AIATTACKFLAG_CHECK_DIRECT_NAV_TO_TARGET = 16384,
    AIATTACKFLAG_CHECK_DIRECT_NAV_TO_TARGET_ACTUAL = 32768,
    AIATTACKFLAG_CLAMP_NAV_TRACE_AT_TARGET = 65536,
    AIATTACKFLAG_SKIP_NAV_TO_OFF_AAS = 131072,
    AIATTACKFLAG_REGISTER_ANIM_MAPPINGS = 262144,
    AIATTACKFLAG_KEEP_MOVING = 524288,
    AIATTACKFLAG_IMMEDIATE_BLEND = 1048576,
    AIATTACKFLAG_END_MOVE = 2097152,
    AIATTACKFLAG_IGNORE_TIMERS = 4194304,
    AIATTACKFLAG_FULL_PREDICTION_ACCURACY = 8388608,
    AIATTACKFLAG_CLAMP_LEAD_AT_ME = 16777216,
    AIATTACKFLAG_REVALIDATING = 33554432,
    AIATTACKFLAG_ANIM_RATE_SCALE = 67108864
};
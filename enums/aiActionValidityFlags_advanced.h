enum aiActionValidityFlags_advanced : unsigned int
{
    VALIDITY_NONE = 0,
    VALIDITY_NO_RETREATING_PLAYERS = 2,
    VALIDITY_NO_PATH_CURVATURE = 4,
    VALIDITY_TARGET_RELATIVE = 8,
    VALIDITY_NO_TURRETMODE = 16,
    VALIDITY_NO_DEFEND_ROLE = 32,
    VALIDITY_PLAYER_ONLY = 64,
    VALIDITY_VISIBILITY_REQUIRED = 128,
    VALIDITY_NO_COMBOS = 1024,
    VALIDITY_CLAMP_LEAD_AT_TARGET = 2048,
    VALIDITY_PREDICT_WITH_EVENTS = 4096,
    VALIDITY_CHECK_DIRECT_NAV_TO_TARGET = 8192,
    VALIDITY_CLAMP_NAV_TRACE_AT_TARGET = 16384,
    VALIDITY_SKIP_NAV_TO_OFF_AAS = 32768,
    VALIDITY_PRIOR_ATTACK_MUST_MISS = 65536,
    VALIDITY_PRIOR_ATTACK_MUST_HIT = 131072,
    VALIDITY_USE_2D_DISTANCE_CHECKS = 262144,
    VALIDITY_ANIM_RELATIVE = 524288,
    VALIDITY_LEAD_TARGET = 1048576,
    VALIDITY_PATH_DIR_ALIGN = 2097152,
    VALIDITY_REQUIRE_TRAVERSAL_ON_PATH = 4194304,
    VALIDITY_FULL_PREDICTION_ACCURACY = 8388608,
    VALIDITY_CLAMP_LEAD_AT_ME = 16777216,
    VALIDITY_CLAMP_DIRECTION_AT_ARC = 33554432,
    VALIDITY_CHEAT_PERCEPTION_FOR_ABSOLUTE = 67108864
};
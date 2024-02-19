enum animQueryTestTypes_t : unsigned int
{
    TF_NONE = 0,
    TF_NAV_DIRECT = 1,
    TF_BOUNDS = 2,
    TF_EYE_VISIBILITY = 4,
    TF_MUZZLE_VISIBILITY = 8,
    TF_PARABOLIC_TRAJECTORIES = 16,
    TF_SILHOUETTE = 32,
    TF_NAV_PATH = 64,
    TF_NAV_ENDPOINT = 128,
    TF_CLAMP_TO_GROUND = 256,
    TF_EARLY_CLAMP_TO_GROUND = 512,
    TF_SLOPE_CHECK = 1024,
    TF_FIRING_SOLUTIONS = 2048,
    TF_TRANSLATION_TO_ENEMY = 4096,
    TF_TRANSLATION_TO_ENEMY_FORCE = 8192,
    TF_PATH_COLLISIONS_DIRECT = 16384,
    TF_TRACE_FORWARD = 32768,
    TF_AVOID_ENEMY_FOV = 65536,
    TF_NAV_DIRECT_TO_ENEMY = 131072,
    TF_AVOID_ENTITY = 262144,
    TF_AVOID_SAME_AI_TYPE = 524288
};
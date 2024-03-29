enum jointKeyframeFlags_t : int
{
    JKF_NONE = 0,
    JKF_TRANSITION_APEX = 1,
    JKF_EYE_ORIGIN = 2,
    JKF_FIREPOINT = 4,
    JKF_FAKE_START = 8,
    JKF_TRANSITION_CUTOFF = 16,
    JKF_SLOPE_CHECK = 32,
    JKF_MELEE_HIT = 64,
    JKF_SWEEP_START = 128,
    JKF_SWEEP_STOP = 256,
    JKF_FALL_START = 512,
    JKF_FALL_STOP = 1024,
    JKF_NAV_CORNER = 2048,
    JKF_DEFLECT_FRAME = 4096
};

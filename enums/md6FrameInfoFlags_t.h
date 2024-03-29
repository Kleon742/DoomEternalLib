enum md6FrameInfoFlags_t : int
{
    FI_FLAG_NONE = 0,
    FI_FLAG_USE_STACK_TOP = 1,
    FI_FLAG_CLEAR_NON_MOD_WEIGHTS = 2,
    FI_FLAG_LOOPED = 4,
    FI_FLAG_CLEAR_ORIGIN_TFORM = 8,
    FI_FLAG_OVERRIDE_FRAME_BOUNDS = 16,
    FI_FLAG_CALC_ORIGIN_DELTA = 32,
    FI_FLAG_REVERSE_DELTA_FRAME = 64,
    FI_FLAG_DEFAULTED = 128
};

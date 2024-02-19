enum animWebNodeDebugFlag_t : unsigned int
{
    NONE = 0,
    BREAK_ON_BLEND_IN_START = 1,
    BREAK_ON_BLEND_IN_FINISH = 2,
    BREAK_ON_BLEND_OUT_START = 4,
    BREAK_ON_BLEND_OUT_FINISH = 8,
    BREAK_ON_COMMIT = 16,
    DISABLED = 32
};

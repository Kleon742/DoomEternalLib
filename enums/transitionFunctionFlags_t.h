enum transitionFunctionFlags_t : unsigned int
{
    TRANSFUNCTION_NONE = 0,
    TRANSFUNCTION_STATE_TIME = 1,
    TRANSFUNCTION_TIMERS_REQUIRED = 2,
    TRANSFUNCTION_TIMERS_ON_TAKEN = 4,
    TRANSFUNCTION_TIMERS_ON_EVAL = 8,
    TRANSFUNCTION_WEB_NODES = 16,
    TRANSFUNCTION_OFF_LIMITS = 32,
    TRANSFUNCTION_SNIPPETS_ON_TAKEN = 64,
    TRANSFUNCTION_CONDITIONS_REQUIRED = 128
};

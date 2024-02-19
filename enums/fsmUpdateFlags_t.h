enum fsmUpdateFlags_t : unsigned int
{
    NONE = 0,
    EVAL = 1,
    DEBUG_STUFF = 2,
    SAVE_IO = 4,
    SKIP_INITIAL_CHILD_UPDATE = 8,
    EVAL_PRIORITY = 16,
    SKIP_ACTION_UPDATE = 32
};

enum aiContextFlags_t : int
{
    AICONTEXT_NONE = 0,
    AICONTEXT_FLYING = 1,
    AICONTEXT_AIRBORNE = 2,
    AICONTEXT_HANGOUT = 4,
    AICONTEXT_SLED_DETACH = 8,
    AICONTEXT_SLED_DETACHED = 16,
    AICONTEXT_WOUND_LEFT = 32,
    AICONTEXT_WOUND_RIGHT = 64,
    AICONTEXT_CAN_BLOCK_CRUCIBLE = 128,
    AICONTEXT_SLITHER = 256,
    AICONTEXT_POSSESSED_BY_SPIRIT = 512,
    AICONTEXT_BUFFED_BY_SCREECHER = 1024
};

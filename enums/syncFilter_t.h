enum syncFilter_t : int
{
    SYNCFILTER_NONE = 0,
    SYNCFILTER_HEADSTOMP = 1,
    SYNCFILTER_STAGGER_STATE_1 = 2,
    SYNCFILTER_STAGGER_STATE_2 = 4,
    SYNCFILTER_KNOCK_DOWN_STATE = 8,
    SYNCFILTER_DEATH_FROM_ABOVE = 16,
    SYNCFILTER_ENVIORMENT_LEDGE = 32,
    SYNCFILTER_ENVIORMENT_WALL = 64,
    SYNCFILTER_DEATH_FROM_BELOW = 128,
    SYNCFILTER_FORCE2D_ORIENTATION = 256,
    SYNCFILTER_CHAINSAW_MINIGAME_START = 512,
    SYNCFILTER_CHAINSAW_MINIGAME_STAGE = 1024,
    SYNCFILTER_AI_MEMEORY_KEY = 2048
};

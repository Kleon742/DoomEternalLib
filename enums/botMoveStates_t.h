enum botMoveStates_t : int
{
    MOVE_STATE_NONE = 0,
    MOVE_STATE_NORMAL = 1,
    MOVE_STATE_WALKING_TO_LEDGE = 2,
    MOVE_STATE_WALKING_OFF_LEDGE = 3,
    MOVE_STATE_WALKING_TO_BOUNCE_PAD = 4,
    MOVE_STATE_USING_BOUNCE_PAD = 5,
    MOVE_STATE_WALKING_TO_LEDGE_GRAB = 6,
    MOVE_STATE_DOING_LEDGE_GRAB = 7,
    MOVE_STATE_DO_BARRIER_JUMP = 8,
    MOVE_STATE_MAX = 9
};

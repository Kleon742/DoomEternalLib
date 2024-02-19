enum botMoveStatus_t : int
{
    MOVE_STATUS_NONE = 0,
    MOVE_STATUS_DONE = 1,
    MOVE_STATUS_CANCELLED = 2,
    MOVE_STATUS_PENDING = 3,
    MOVE_STATUS_MOVING = 4,
    MOVE_STATUS_START_ERROR_CODES = 5,
    MOVE_STATUS_GOAL_UNREACHABLE = 6,
    MOVE_STATUS_GOAL_UNREACHABLE_OUTSIDE_TOLERANCE = 7,
    MOVE_STATUS_INVALID_GOAL = 8,
    MOVE_STATUS_OWNER_OFF_MESH = 9,
    MOVE_STATUS_GOAL_OFF_MESH = 10,
    MOVE_STATUS_NO_CLEAR_PATH = 11,
    MOVE_STATE_NO_NAVMESH = 12,
    MOVE_STATUS_BLOCKED_BY_LOCKED_DOOR = 13
};

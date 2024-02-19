enum botMoveActionFlags_t : int
{
    MOVE_FLAG_NONE = 0,
    MOVE_FLAG_JUMP = 1,
    MOVE_FLAG_JUMP_RIGHT = 2,
    MOVE_FLAG_JUMP_LEFT = 4,
    MOVE_FLAG_RANDOM_JUMP = 8,
    MOVE_FLAG_RANDOM_JUMP_RIGHT = 16,
    MOVE_FLAG_RANDOM_JUMP_LEFT = 32,
    MOVE_FLAG_STRAFE_RIGHT = 64,
    MOVE_FLAG_STRAFE_LEFT = 128,
    MOVE_FLAG_RUN_FORWARD = 256,
    MOVE_FLAG_RUN_BACKWARD = 512,
    MOVE_FLAG_CLEAR_RIGHT_MOVE = 1024,
    MOVE_FLAG_CLEAR_LEFT_MOVE = 2048,
    MOVE_FLAG_MAX = -2147483648
};
enum aiAnimQueryFlags_t : unsigned short
{
    NONE = 0,
    DEPARTURE = 1,
    STRAFING = 2,
    TURN = 4,
    ARRIVAL = 8,
    ARRIVAL_NEW = 16,
    REJECT_OVERSHOOT = 32,
    IGNORE_DISTANCE = 64,
    STEP = 128,
    IGNORE_DESTINATION = 256
};

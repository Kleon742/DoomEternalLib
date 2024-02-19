enum animQueryFlags_t : int
{
    ANIMQUERY_NO_FLAGS = 0,
    ANIMQUERY_DEPARTURE = 1,
    ANIMQUERY_STRAFING = 2,
    ANIMQUERY_TURN = 4,
    ANIMQUERY_ARRIVAL = 8,
    ANIMQUERY_ARRIVAL_NEW = 16,
    ANIMQUERY_REJECT_OVERSHOOT = 32,
    ANIMQUERY_IGNORE_DISTANCE = 64,
    ANIMQUERY_STEP = 128,
    ANIMQUERY_IGNORE_DESTINATION = 256
};

enum bindFlags_t : int
{
    BIND_NONE = 0,
    BIND_ORIENTED = 1,
    BIND_SNAPTO = 2,
    BIND_LOCKLOCALOFFSET = 4,
    BIND_PLAYER_SNAPTO = 8,
    BIND_MANUAL_UPDATE = 16,
    BIND_DONT_REMOVE_ON_MASTER_DELETION = 32,
    BIND_FAKEBIND = 64,
    BIND_SKIP_FUTURE_LATCH = 128,
    BIND_REFERENCE_POSE = 256
};
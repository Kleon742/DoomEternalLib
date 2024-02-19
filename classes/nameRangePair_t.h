struct nameRangePair_t
{
    enum hasteOp_t : int
    {
        HASTE_NONE = 0,
        HASTE_SPEED_UP = 1
    };

    // name of timer
    idAtomicString name; // Offset: 0x0

    // range of timer, in seconds. <= 0 means use IsExpired, > 0 means use IsIntervalElapsed
    idRange < float > range; // Offset: 0x8

    // haste affects this timer in this way
    nameRangePair_t::hasteOp_t hasteOp; // Offset: 0x10

}; // Size: 0x18

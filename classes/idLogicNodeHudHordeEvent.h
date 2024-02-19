struct idLogicNodeHudHordeEvent
{
    enum logicIds_t : int
    {
        INPUT_START = 0,
        OUTPUT_START = 1,
        OUTPUT_END = 2,
        INPUT_VALUE = 3,
        OUTPUT_STOP = 4
    };

    logicNodeReference_t node; // Offset: 0x0

    // cache this so we can unregister from events
    uint16 broadcastSystemId; // Offset: 0x8

}; // Size: 0xC

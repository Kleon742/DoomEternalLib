struct idLogicNodeUIHordeSummary
{
    enum logicIds_t : int
    {
        INPUT_START = 0,
        OUTPUT_START = 1,
        OUTPUT_END = 2
    };

    logicNodeReference_t node; // Offset: 0x0

    idHordeSummaryType_t summaryType; // Offset: 0x8

    // cache this so we can unregister from events
    uint16 broadcastSystemId; // Offset: 0xC

}; // Size: 0x10

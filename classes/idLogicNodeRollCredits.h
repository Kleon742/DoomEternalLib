struct idLogicNodeRollCredits
{
    enum logicIds_t : int
    {
        INPUT_START = 0,
        OUTPUT_START = 1,
        OUTPUT_WATCHED = 2,
        OUTPUT_SKIPPED = 3
    };

    logicNodeReference_t node; // Offset: 0x0

    idDeclCredits* credits; // Offset: 0x8

    // cache this so we can unregister from events
    uint16 broadcastSystemId; // Offset: 0x10

}; // Size: 0x18

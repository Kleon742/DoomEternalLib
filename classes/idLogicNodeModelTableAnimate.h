struct idLogicNodeModelTableAnimate : idLogicNodeModel
{
    enum logicIds_t : int
    {
        INPUT_AUTO_START = 0,
        INPUT_DURATION = 1,
        OUTPUT_TICK = 2,
        OUTPUT_VALUE = 3,
        OUTPUT_DONE = 4,
        INPUT_START = 5,
        OUTPUT_START = 6,
        INPUT_STOP = 7,
        OUTPUT_STOP = 8
    };

    struct instanceData_t
    {
        idDeclTable* table; // Offset: 0x0

        logicTablePlaybackMode_t playbackMode; // Offset: 0x8

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > beginTime; // Offset: 0x10

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > endTime; // Offset: 0x18

    }; // Size: 0x20

    // Table
    idDeclTable* table; // Offset: 0x10

    // Playback mode
    logicTablePlaybackMode_t playbackMode; // Offset: 0x18

}; // Size: 0x20

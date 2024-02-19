struct idLogicNodePlayerSetInhibitFlags
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1
    };

    int playerId; // Offset: 0x0

    idUCmdTracker::inhibitFlags_t flags; // Offset: 0x4

    idLogicNodeSetInhibitType setType; // Offset: 0x8

}; // Size: 0xC

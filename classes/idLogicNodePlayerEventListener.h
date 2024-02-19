struct idLogicNodePlayerEventListener
{
    enum logicIds_t : int
    {
        INPUT_EVENT_ACTIVATE = 0,
        OUTPUT_EVENT = 1
    };

    logicNodeReference_t node; // Offset: 0x0

    // event we should be listening for
    playerEventID_t playerEvent; // Offset: 0x8

    // cache this so we can unregister from events
    uint16 playerBroadcastSystemId; // Offset: 0xC

}; // Size: 0x10

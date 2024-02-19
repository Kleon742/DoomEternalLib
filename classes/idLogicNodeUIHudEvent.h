struct idLogicNodeUIHudEvent
{
    enum logicIds_t : int
    {
        INPUT_HUDEVENT = 0,
        OUTPUT_NONE = 1
    };

    // static voidHudEventAcknowledged( broadcastEventId_t evId, void * const me, const void * const eventData );
    logicNodeReference_t node; // Offset: 0x0

    hudEventID_t hudEvent; // Offset: 0x8

}; // Size: 0xC

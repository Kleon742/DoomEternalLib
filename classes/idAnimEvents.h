struct idAnimEvents
{
    struct animEventInfo_t
    {
        // name of the animation these events are for
        idMD6AnimRef animRef; // Offset: 0x0

        // all events for the animation
        idList < idMD6AnimEvent , TAG_MD6_ANIMEVENTS , false > events; // Offset: 0x8

    }; // Size: 0x20

    typedef idStaticList < const idMD6AnimEvent * , MAX_EVENTS_PER_QUERY > animEventList_t;

    typedef idStaticList < const class idEventDef * , MAX_EVENT_TYPES_PER_QUERY > animEventTypeList_t;

    idList < idAnimEvents::animEventInfo_t , TAG_MD6_ANIMEVENTS , false > list; // Offset: 0x8

    // hash into list for quick lookup
    idHashIndex hashIndex; // Offset: 0x20

}; // Size: 0x50

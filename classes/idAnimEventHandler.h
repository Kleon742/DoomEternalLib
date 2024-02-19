struct idAnimEventHandler
{
    struct trackedEvent_t
    {
        // NOTE: the event pointer is only used for pointer compare to see if the event is tracked... do not reference this pointer otherwise because it's not guaranteed a tool did not delete the event! time animation started, so we can tell if the animation restarted
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x0

        // time event triggered, so we can tell when to remove overflow
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > triggeredTime; // Offset: 0x8

        // number of the event ( for debugging only )
        short eventNum; // Offset: 0x10

        // tracks number of times animation has been inited or restarted
        unsigned char initCounter; // Offset: 0x12

        // nothing
        unsigned char pad; // Offset: 0x13

        // id of the event that is disabled... this id is local to the modelDef (events in different modelDefs may have the same id)
        idHandle < unsigned int , invalidAnimEventId_t , INVALID_ANIMEVENT_ID > eventId; // Offset: 0x14

        // handle of animation event was for
        idMD6Anim* anim; // Offset: 0x18

        // frame number of the event (from event->GetFrameNum() )
        float eventFrame; // Offset: 0x20

        // loop count this event is disabled for
        short loopCount; // Offset: 0x24

        // track leaf so that the same anim can play on two leaves simultaneously without having anim events confused and incorrectly skipped
        idMD6Leaf* leaf; // Offset: 0x28

    }; // Size: 0x30

    struct triggeredEvent_t : idAnimEventHandler::trackedEvent_t
    {
        // this is save skipped because it's transient and is only valid immediately after BuildAnimEventList() pointer to the anim event... only valid immediately after building the event list
        idMD6AnimEvent* event; // Offset: 0x30

    }; // Size: 0x38

    struct eventInfo_t
    {
        idMD6Anim* anim; // Offset: 0x0

        // TODO: delete when we fully switch to animsys
        idMD6Leaf* leaf; // Offset: 0x8

        idDeclMD6* declOverride; // Offset: 0x10

        float animBlendValue; // Offset: 0x18

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x20

        unsigned char initCounter; // Offset: 0x28

        float lastFrame; // Offset: 0x2C

        float curFrame; // Offset: 0x30

        short loopCount; // Offset: 0x34

        bool canSkip; // Offset: 0x36

    }; // Size: 0x38

    idList < idAnimEventHandler::trackedEvent_t , TAG_MD6_ANIMEVENTS , false > trackedEvents; // Offset: 0x0

    idList < idAnimEventHandler::triggeredEvent_t , TAG_MD6_ANIMEVENTS , false > triggeredEvents; // Offset: 0x18

    idList < idAnimEventHandler::triggeredEvent_t , TAG_MD6_ANIMEVENTS , false > scopedEventList; // Offset: 0x30

    idAnimEventHandler::triggeredEvent_t criticalEventPool[16]; // Offset: 0x48

    idStaticList < int , 16 , false , TAG_IDLIST > freeCriticalIndicies; // Offset: 0x3C8

    idStaticList < idAnimEventHandler::triggeredEvent_t * , 16 , false , TAG_IDLIST > criticalEventList; // Offset: 0x420

    int nextEventToFetch; // Offset: 0x4B8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastBuildTime; // Offset: 0x4C0

    // new actual event time storage is problematic for the player weapon so I'm
    bool dontUseActualLastEventTime; // Offset: 0x4C8

}; // Size: 0x4D0

struct idMD6AnimEvent
{
    typedef idVarArgs < MD6_MAX_OPTIONAL_ARGS > eventArgs_t;

    // arguments to pass for this frame command event
    idVarArgs < 5 > args; // Offset: 0x0

    // various options
    animEventFlags_t flags; // Offset: 0x28

    // If animation blend is below this value event will be skipped
    float skipAnimBlendValue; // Offset: 0x2C

    // If animation total weight is below this value event will be skipped
    float skipAnimTotalWeight; // Offset: 0x30

    // frame this event is on
    float frameNum; // Offset: 0x34

    // number of the frame command event
    short eventNum; // Offset: 0x38

    // how long this lasts
    short duration; // Offset: 0x3A

    // For "critical" events, how far back to track them
    short criticalFrameOffset; // Offset: 0x3C

    // identifier of this event, used to track played events
    idHandle < unsigned int , invalidAnimEventId_t , INVALID_ANIMEVENT_ID > eventId; // Offset: 0x40

    // cached offset and rotation of the joint associated with this anim event
    idCachedJoint* cachedJoints; // Offset: 0x48

    // number of cached joints on this anim event
    short numCachedJoints; // Offset: 0x50

    // frame command editor only: row this event is displayed on (TODO: technically this should be animation dependent)
    unsigned char row; // Offset: 0x52

}; // Size: 0x58

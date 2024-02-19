struct idComponentTimeLine
{
    struct idTimeLineEvent
    {
        // time offset to fire event from start of timeline
        idTypesafeTime < int , millisecondUnique_t , 1000 > eventTime; // Offset: 0x0

        // the event & args to call
        idEventCallInfo eventCall; // Offset: 0x8

        // if the event is enabled through the editor
        bool eventEnabled; // Offset: 0xE8

        // Whether or not this event is disabled on the client
        bool clientDisabled; // Offset: 0xE9

    }; // Size: 0xF0

    struct idTimeLineEntity
    {
        // the entity with which the events correspond do
        idManagedClassPtr < idEntity > entity; // Offset: 0x0

        // the group in the timeline editor it corresponds to
        idStr groupRow; // Offset: 0x20

        // events and offsets to fire on this entity
        idList < idComponentTimeLine::idTimeLineEvent , TAG_IDLIST , false > events; // Offset: 0x50

        // Is this entity enabled (for disabling additional encounter scripts)
        bool enabled; // Offset: 0x68

    }; // Size: 0x70

    // used to delay stop thinking time if in the editor for preview tools
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > editorTime; // Offset: 0x8

    // entity and event information
    idList < idComponentTimeLine::idTimeLineEntity , TAG_IDLIST , false > entityEvents; // Offset: 0x10

    // allow to be run on clients
    bool allowOnClients; // Offset: 0x28

    // Flag for whether the client force started
    bool clientForceStarted; // Offset: 0x29

    // is timeline entity replicated
    bool ownerReplicated; // Offset: 0x2A

    // indices of the next event to call
    idList < int , TAG_IDLIST , false > nextEventIndices; // Offset: 0x30

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x48

    // The time at which the server replicated the data to the client
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > replicatedStartTimeGT; // Offset: 0x50

    // the entity which activated what activated this timeline
    idManagedClassPtr < idEntity > activatingEntity; // Offset: 0x58

    // Flag if the script was rewound/paused externally in a process
    bool scriptWasRewound; // Offset: 0x78

    bool forceTimelineFinish; // Offset: 0x79

    // If the timeline is running while
    bool shouldForceTimelineFinish; // Offset: 0x7A

}; // Size: 0x80

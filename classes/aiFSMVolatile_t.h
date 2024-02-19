struct aiFSMVolatile_t
{
    // transition that flagged the error
    idTypeInfo* errorStateTransType; // Offset: 0x0

    // transcode that resulted in error state
    int errorTransCode; // Offset: 0x8

    // transition tree of our own states
    aiTransitionTree_t* transitionTree; // Offset: 0x10

    // temp transition tree used when a parent is pushing us to evaluate
    aiTransitionTree_t* transitionTree_temp; // Offset: 0x18

    // result code for last transition that caused a state change.
    int lastTransitionCode; // Offset: 0x20

    // transition group of last transition that caused a state change.
    fsmTransGroup_t lastTransitionGroup; // Offset: 0x24

    // last transition that caused a state change
    idTypeInfo* lastTransType; // Offset: 0x28

    // previous state before current state was entered
    idAIState* prevState; // Offset: 0x30

    // last work transition code
    int lastWorkTransCode; // Offset: 0x38

    // time of last transition
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastTransitionTime; // Offset: 0x40

    // last time Update() was called, used to prevent updating shared children multiple times
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastUpdateTime; // Offset: 0x48

    // next time FSM can run state code and transitions
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextUpdateTime; // Offset: 0x50

    // end of interrupt window, -1 implies infinite
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > interruptWindowEnd; // Offset: 0x58

    // number of frames this state has run
    int stateFrame; // Offset: 0x60

    // used to flag for a restart on next update cycle
    bool needsRestart; // Offset: 0x64

    // true if FSM must update transitions to resolve deferred stuff
    bool updateDeferred; // Offset: 0x65

    bool running; // Offset: 0x66

    // event id for reference from state transitions - only valid during PostEvent
    int eventId; // Offset: 0x68

    // event data for reference from state transitions - only valid during PostEvent
    idAIEvent* eventData; // Offset: 0x70

    // last FSM event return value for reference from state transitions - only valid during InternalCallEvent()
    int lastFSMEventTransCode; // Offset: 0x78

    // stack of messages
    idList < snapshotNamePair , TAG_AI_FSM , false > messageStack; // Offset: 0x80

    // these get cleaned at the end of every evaluate
    idList < aiFSM_IO_snapshot_t * , TAG_AI_FSM , false > tempSnapshots; // Offset: 0x98

    // keep these around for quicker alloc
    idList < aiFSM_IO_payload_blackboard_t * , TAG_AI_FSM , false > blackboardPayloads; // Offset: 0xB0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > actionExpireTime; // Offset: 0xC8

    // these will get cleared every time SetState is called for this FSM
    idStaticList < aiFSMDataKey_t , 32 , false , TAG_IDLIST > dataKeys; // Offset: 0xD0

    // used by states to hold IO data over time
    idAIBlackboard < 64 > fsmBlackboard; // Offset: 0x3E8

    // used by states told to randomize their transition order
    idList < aiTransitionOrderList_t , TAG_AI_FSM , false > randomizedTransitionLists; // Offset: 0x6E8

    // used when default states are passthrough
    idStateData::transResult_t* cachedTransResult; // Offset: 0x700

}; // Size: 0x708

struct idSnapshotMetrics
{
    enum smGraphs_t : int
    {
        SM_GRAPH_TOTAL_OUTGOING = 0,
        SM_GRAPH_TOTAL_INCOMING = 1,
        SM_GRAPH_OUTGOING_RELIABLE_U = 2,
        SM_GRAPH_OUTGOING_RELIABLE_C = 3,
        SM_GRAPH_INCOMING_RELIABLE_U = 4,
        SM_GRAPH_INCOMING_RELIABLE_C = 5,
        SM_GRAPH_SNAP_OBJ_SIZE_U = 6,
        SM_GRAPH_SNAP_OBJ_SIZE_ENCODED = 7,
        SM_GRAPH_SNAP_OBJ_SIZE_C = 8,
        SM_GRAPH_DELTA_SIZE_U = 9,
        SM_GRAPH_DELTA_SIZE_C = 10,
        SM_GRAPH_OBJ_SIZE_U = 11,
        SM_GRAPH_OBJ_SIZE_E = 12,
        SM_GRAPH_OBJ_SIZE_C = 13,
        SM_GRAPH_OBJ_PRIORITY = 14,
        SM_GRAPH_MAX = 15
    };

    struct peerDetails_t
    {
        int peerIndex; // Offset: 0x0

        idStr peerGameTagName; // Offset: 0x8

    }; // Size: 0x38

    struct bandwidthLimitLog_t
    {
        int bytesSent; // Offset: 0x0

        idTypesafeTime < int , millisecondUnique_t , 1000 > timeOfLimitHitMs; // Offset: 0x4

    }; // Size: 0x8

    idStaticList < idStr , 16 , false , TAG_IDLIST > ignoreList; // Offset: 0x0

    // Used for object inspection
    int inspectedObjectID; // Offset: 0x318

    int depthBottom; // Offset: 0x31C

    int depthTop; // Offset: 0x320

    bool isRecordingMetrics; // Offset: 0x324

    int snapshotsMaxSize; // Offset: 0x328

    unsigned short snapshotPeerNum; // Offset: 0x32C

    int snapshotSeqs[2]; // Offset: 0x330

    idSnapShot snapshots[2]; // Offset: 0x338

    idSnapShot templateSnapshot; // Offset: 0x79798

    bool snapshotsLocked; // Offset: 0xB61C8

    bool pauseWhenSnapshotsLocked; // Offset: 0xB61C9

    bool snapshotsUnlockedThisFrame; // Offset: 0xB61CA

    bool snapshotSkipZeroDeltas; // Offset: 0xB61CB

    bool snapshotSkipNonRelevantEntries; // Offset: 0xB61CC

    bool snapshotFreezeOnNewEntry; // Offset: 0xB61CD

    idTypesafeTime < int , millisecondUnique_t , 1000 > nextLockEventMs; // Offset: 0xB61D0

    int FinalCompressedFreezeIfValue; // Offset: 0xB61D4

    int RLEFreezeIfValue; // Offset: 0xB61D8

    int IndividualDeltaValueFreezeIfValue; // Offset: 0xB61DC

    int MaxDeltaCompressSize; // Offset: 0xB61E0

    float curY; // Offset: 0xB61E4

    int width; // Offset: 0xB61E8

    int height; // Offset: 0xB61EC

    int idLen; // Offset: 0xB61F0

    int nameLen; // Offset: 0xB61F4

    int maxNameLen; // Offset: 0xB61F8

    idTypesafeTime < int , millisecondUnique_t , 1000 > lastReportMS; // Offset: 0xB61FC

    idTypesafeTime < int , millisecondUnique_t , 1000 > nextKeyEventMS; // Offset: 0xB6200

    int entriesDisplayed; // Offset: 0xB6204

    int maxIndexForCollapseShowImGui; // Offset: 0xB6208

    bool isInitialized; // Offset: 0xB620C

    idList < idSnapshotMetrics::peerDetails_t , TAG_IDLIST , false > peerDetails; // Offset: 0xB6210

    idList < idSnapshotMetrics::bandwidthLimitLog_t , TAG_IDLIST , false > bandwidthLimitLogList; // Offset: 0xB6228

    idSnapshotTrace* currentLog; // Offset: 0xB6240

    idRenderModelGui* gui; // Offset: 0xB6248

    idArray < idDebugGraph * , 15 > graphs; // Offset: 0xB6250

    // Trace pools
    idList < idSnapshotTrace * , TAG_IDLIST , false > activeTraces; // Offset: 0xB62C8

    idList < idSnapshotTrace * , TAG_IDLIST , false > freeTraces; // Offset: 0xB62E0

    idStr peerNotFound; // Offset: 0xB62F8

    idSnapshotTrace* templateSnapshotTrace; // Offset: 0xB6328

}; // Size: 0xB6330

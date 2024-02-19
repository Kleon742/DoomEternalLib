struct idSnapShot
{
    struct objectBuffer_t
    {
        unsigned char* data; // Offset: 0x0

        unsigned short size; // Offset: 0x8

    }; // Size: 0x10

    struct objectState_t
    {
        unsigned short objectNum; // Offset: 0x0

        unsigned long long resourceID; // Offset: 0x8

        idSnapShot::objectBuffer_t buffer; // Offset: 0x10

        char* tag; // Offset: 0x20

        idTypeInfo* typeInfo; // Offset: 0x28

        // Don't send this object to peers not in this mask.
        unsigned short peerMask; // Offset: 0x30

        int snapSequence; // Offset: 0x34

        bool stateDeleted; // Offset: 0x38

        bool createdFromTemplate; // Offset: 0x39

        // Incremented each time the state changed
        int changedCount; // Offset: 0x3C

        int lastReadTime; // Offset: 0x40

        idTypesafeTime < int , millisecondUnique_t , 1000 > lastSentTime; // Offset: 0x44

    }; // Size: 0x48

    struct submitDeltaJobsInfo_t
    {
        // Start of object parms
        objParms_t* objParms; // Offset: 0x0

        // Max parms (which will dictate how many objects can be processed)
        int maxObjParms; // Offset: 0x8

        // Memory that objects were written out to
        unsigned char* objMemory; // Offset: 0x10

        // Memory for headers
        objHeader_t* headers; // Offset: 0x18

        int maxHeaders; // Offset: 0x20

        // Max memory (which will dictate when syncs need to occur)
        int maxObjMemory; // Offset: 0x24

        // Start of delta parms
        pendingDeltaParm_t* deltaParms; // Offset: 0x28

        // Max delta parms (which will dictate how many syncs we can have)
        int maxDeltaParms; // Offset: 0x30

        // snap we are comparing this snap to (to produce a delta)
        idSnapShot* oldSnap; // Offset: 0x38

        // the peer index this snap is for
        int peerIndex; // Offset: 0x40

        int baseSequence; // Offset: 0x44

        pendingDeltaInfo_t* deltaInfo; // Offset: 0x48

        idJobChain* snapshotJobList; // Offset: 0x50

        idSnapshotTemplateManager* snapshotTemplateManager; // Offset: 0x58

    }; // Size: 0x60

    struct objectStateSubmission_t
    {
        idSnapShot::objectState_t* newState; // Offset: 0x0

        idSnapShot::objectState_t* oldState; // Offset: 0x8

        unsigned char priority; // Offset: 0x10

    }; // Size: 0x18

    struct writeDeltaProcessParm_t
    {
        struct processPair_t
        {
            idSnapShot::objectState_t* newState; // Offset: 0x0

            idSnapShot::objectState_t* oldState; // Offset: 0x8

            int memOffset; // Offset: 0x10

        }; // Size: 0x18

        idSnapShot::submitDeltaJobsInfo_t* submitInfo; // Offset: 0x0

        idSnapShot* thisSnap; // Offset: 0x8

        int numProcessPairs; // Offset: 0x10

        // array length should be guided by idSnapshotProcessor::jobMemory_t::MAX_OBJ_PARMS
        idArray < idSnapShot::writeDeltaProcessParm_t::processPair_t , 6144 > processPairs; // Offset: 0x18

    }; // Size: 0x24018

    idSnapShot::writeDeltaProcessParm_t writeDeltaProcessParm; // Offset: 0x0

    // The core data structure of the Snapshot. This is the sorted list of objects which represents changes to the state of the world
    idStaticList < idSnapShot::objectState_t * , 4096 , false , TAG_NETWORKING > objectStates; // Offset: 0x24018

    // List of objectState references used for sorting based on priority for job submission. Not used with Binary Priority
    idList < idSnapShot::objectStateSubmission_t , TAG_NETWORKING , false > sortedObjStates; // Offset: 0x2C030

    // PR PERF TODO :: Look into different allocators, such as frag allocator
    idBlockAlloc < idSnapShot::objectState_t , 64 , TAG_NETWORKING > allocatedObjs; // Offset: 0x2C048

    // Which heap that this Snapshot should use for all memory allocations. This is currently just a marker TODO for when we consider moving TemplateManager to persistent (Global) heap
    heapType_t heapType; // Offset: 0x2C070

    // Constant time look-up map that is constructed in the Non-Snapshot frames. This avoids a more costly Binary Search
    idArray < int , 17000 > objectStateIndexMap; // Offset: 0x2C074

    // If true, it is safe to use the m_objectStateIndexMap for constant time look-up. If false, it is not constructed
    bool objectStateIndexMapValid; // Offset: 0x3CA14

    // Prevent insertion into any Lists to avoid unnecessary costs of adding objectStates into the middle of a contiguous array. This also implies a Binary search is invalid and an N lookup or index lookup must be used
    bool insertLocked; // Offset: 0x3CA15

    // Contains very detailed information on what was is Network Serialized. This construct is used to build the net_snapshot_metrics imGui debug which paints a picture of what is Network Serialized. Traces are RefCounted and should never be manually deleted. Debug only feature
    idSnapshotTrace* trace; // Offset: 0x3CA18

    // Gametime on server and clients for when writes and reads occur
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > gameTime; // Offset: 0x3CA20

    // The last time, in MS, when a Snapshot was written or received
    idTypesafeTime < int , millisecondUnique_t , 1000 > recvTimeMS; // Offset: 0x3CA28

    // Total size of objectState buffers
    interlockedInt_t size; // Offset: 0x3CA2C

}; // Size: 0x3CA30

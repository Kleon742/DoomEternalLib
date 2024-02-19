struct idAnimSys_SessionRecorder
{
    struct firedTransition_t
    {
        int nodeIndex; // Offset: 0x0

        int newNodeIndex; // Offset: 0x4

        int transitionIndex; // Offset: 0x8

        float refValue; // Offset: 0xC

    }; // Size: 0x10

    struct idSessionFrame
    {
        idList < md6AnimCommand_t , TAG_IDLIST , false > frameCommands; // Offset: 0x0

        idList < idAnimSys_SessionRecorder::firedTransition_t , TAG_IDLIST , false > firedTransitions; // Offset: 0x18

        // Using quicksavestream to save current node state
        idFile_Memory nodeState; // Offset: 0x30

        // Time this was recorded
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > frameTime; // Offset: 0x1B0

    }; // Size: 0x1B8

    idAtomicString declAnimSysName; // Offset: 0x0

    idList < idAnimSys_SessionRecorder::idSessionFrame * , TAG_IDLIST , false > sessionFrames; // Offset: 0x8

    bool recording; // Offset: 0x20

}; // Size: 0x28

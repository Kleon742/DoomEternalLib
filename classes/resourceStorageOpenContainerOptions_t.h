struct resourceStorageOpenContainerOptions_t
{
    char* filename; // Offset: 0x0

    heapType_t heap; // Offset: 0x8

    bool forceRead; // Offset: 0xC

    bool forceKeepFileOpen; // Offset: 0xD

    bool allowNoKeepMask; // Offset: 0xE

    bool streamPrepare; // Offset: 0xF

    bool registerStreamDatabaseId; // Offset: 0x10

}; // Size: 0x18

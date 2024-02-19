struct idResourceStorageInterface
{
    struct staleCheckInfo_t
    {
        bool (*callback)(void * const param , const resourceStorage_t * const resourceStorage , const idResourceDependency * const , const idResourceDepPayload * const payload , const idResourceDepCachedData & cachedData , const idResourceEntry * const , idStr & outStaleReason); // Offset: 0x0

        void* param; // Offset: 0x8

    }; // Size: 0x10

    idListMap < uint64 , resourceContainerEntryMask_t > containerMasks; // Offset: 0x0

    idList < resourceStorage_t * , TAG_IDLIST , false > containers; // Offset: 0x30

    idHashIndex containerMap; // Offset: 0x48

    idList < idResourceStorageInterface::staleCheckInfo_t , TAG_IDLIST , false > staleCheckInfo; // Offset: 0x78

    idList < streamFileInfo_t , TAG_IDLIST , false > releaseStreamFileInfo; // Offset: 0x90

    idList < streamFileInfo_t , TAG_IDLIST , false > resumeStreamFileInfo; // Offset: 0xA8

    idList < int , TAG_IDLIST , false > scanContainers; // Offset: 0xC0

    // only ever added to - remove?
    idList < int , TAG_IDLIST , false > mapScanContainers; // Offset: 0xD8

    idResourceStorageDiskStreamer* diskStreamer; // Offset: 0xF0

    idResourceCompression* compressionAPI; // Offset: 0xF8

    idSysMutex mutex; // Offset: 0x100

    idFile* (*cacheFilePreCallback)(const char * fileName); // Offset: 0x128

    bool cancelToTerminate; // Offset: 0x130

}; // Size: 0x138

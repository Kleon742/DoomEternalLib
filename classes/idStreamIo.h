struct idStreamIo
{
    struct pagePoolStats_t
    {
        unsigned int pageSize; // Offset: 0x0

        unsigned int numPages; // Offset: 0x4

        unsigned int numPinnedPages; // Offset: 0x8

    }; // Size: 0xC

    struct classStats_t
    {
        unsigned int numRequests; // Offset: 0x0

        unsigned int numRequestsStarted; // Offset: 0x4

        unsigned int numReferencedPinnedPages; // Offset: 0x8

        long long deficit; // Offset: 0x10

        unsigned int completeCacheHits; // Offset: 0x18

        unsigned int partialCacheHits; // Offset: 0x1C

        unsigned int completeCacheMisses; // Offset: 0x20

        unsigned int cacheUtilizationBytes; // Offset: 0x24

        unsigned int readCountSizePoTBuckets[32]; // Offset: 0x28

        unsigned int diskReadCountSizePoTBuckets[32]; // Offset: 0xA8

        unsigned int diskSeekCountSizePoTBuckets[32]; // Offset: 0x128

        unsigned long long totalDiskReadBytes; // Offset: 0x1A8

        unsigned int totalDiskSeeks; // Offset: 0x1B0

    }; // Size: 0x1B8

    struct stats_t
    {
        unsigned int completeCacheHits; // Offset: 0x0

        unsigned int partialCacheHits; // Offset: 0x4

        unsigned int completeCacheMisses; // Offset: 0x8

        float cacheUtilizationPercent; // Offset: 0xC

        idStreamIo::pagePoolStats_t pagePools[2]; // Offset: 0x10

        unsigned long long totalDiskReadBytes; // Offset: 0x28

        unsigned int totalDiskSeeks; // Offset: 0x30

        unsigned long long totalDiskWriteBytes; // Offset: 0x38

        idStreamIo::classStats_t classes[streamIoClass_t::NUM]; // Offset: 0x40

    }; // Size: 0xE00

}; // Size: 0x8

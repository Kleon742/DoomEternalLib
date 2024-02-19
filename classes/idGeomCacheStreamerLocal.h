struct idGeomCacheStreamerLocal : idGeomCacheStreamer
{
    enum startDecompressJobResult_t : int
    {
        SUCCESS = 0,
        NO_WORK_REMAINING = 1,
        OUT_OF_MEMORY = 2
    };

    enum staticDataReadState_t : int
    {
        SUCCESS = 0,
        CANCELLED = 1,
        FAILED = 2
    };

    struct staticDataUploadRequest_t
    {
        idGeomCache* geomCache; // Offset: 0x0

        unsigned int stagingBufferOffset; // Offset: 0x8

        unsigned int destinationOffset; // Offset: 0xC

        unsigned int length; // Offset: 0x10

    }; // Size: 0x18

    struct nameHashIndexPair_t
    {
        unsigned long long nameHash; // Offset: 0x0

        geomCacheStream_t* stream; // Offset: 0x8

    }; // Size: 0x10

    typedef idQueueMPMC < idGeomCacheStreamerLocal::staticDataUploadRequest_t , ( 1 << ( ( ( ( 128 - 1 ) & ( 1 << 31 ) ) ? 31 : ( ( 128 - 1 ) & ( 1 << 30 ) ) ? 30 : ( ( 128 - 1 ) & ( 1 << 29 ) ) ? 39 : ( ( 128 - 1 ) & ( 1 << 28 ) ) ? 28 : ( ( 128 - 1 ) & ( 1 << 27 ) ) ? 27 : ( ( 128 - 1 ) & ( 1 << 26 ) ) ? 26 : ( ( 128 - 1 ) & ( 1 << 25 ) ) ? 25 : ( ( 128 - 1 ) & ( 1 << 24 ) ) ? 24 : ( ( 128 - 1 ) & ( 1 << 23 ) ) ? 23 : ( ( 128 - 1 ) & ( 1 << 22 ) ) ? 22 : ( ( 128 - 1 ) & ( 1 << 21 ) ) ? 21 : ( ( 128 - 1 ) & ( 1 << 20 ) ) ? 20 : ( ( 128 - 1 ) & ( 1 << 19 ) ) ? 19 : ( ( 128 - 1 ) & ( 1 << 18 ) ) ? 18 : ( ( 128 - 1 ) & ( 1 << 17 ) ) ? 17 : ( ( 128 - 1 ) & ( 1 << 16 ) ) ? 16 : ( ( 128 - 1 ) & ( 1 << 15 ) ) ? 15 : ( ( 128 - 1 ) & ( 1 << 14 ) ) ? 14 : ( ( 128 - 1 ) & ( 1 << 13 ) ) ? 13 : ( ( 128 - 1 ) & ( 1 << 12 ) ) ? 12 : ( ( 128 - 1 ) & ( 1 << 11 ) ) ? 11 : ( ( 128 - 1 ) & ( 1 << 10 ) ) ? 10 : ( ( 128 - 1 ) & ( 1 << 9 ) ) ? 9 : ( ( 128 - 1 ) & ( 1 << 8 ) ) ? 8 : ( ( 128 - 1 ) & ( 1 << 7 ) ) ? 7 : ( ( 128 - 1 ) & ( 1 << 6 ) ) ? 6 : ( ( 128 - 1 ) & ( 1 << 5 ) ) ? 5 : ( ( 128 - 1 ) & ( 1 << 4 ) ) ? 4 : ( ( 128 - 1 ) & ( 1 << 3 ) ) ? 3 : ( ( 128 - 1 ) & ( 1 << 2 ) ) ? 2 : ( ( 128 - 1 ) & ( 1 << 1 ) ) ? 1 : ( ( 128 - 1 ) & ( 1 << 0 ) ) ? 0 : - 1 ) + 1 ) ) > staticDataUploadRequestChannel_t;

    int poolSize; // Offset: 0x8

    void* poolMemory; // Offset: 0x10

    idSysMutex poolAllocatorMutex; // Offset: 0x18

    idDefragAllocator poolAllocator; // Offset: 0x40

    unsigned char* stagingBuffer; // Offset: 0x2250

    idListSet < geomCacheStream_t * > streams; // Offset: 0x2258

    idListMap < idGeomCache * , geomCacheStreamData_t * > registeredGeomCaches; // Offset: 0x2270

    idSysMutex updateMutex; // Offset: 0x22A0

    std::atomic < bool > flushing; // Offset: 0x22C8

    idList < unsigned long long , TAG_IDLIST , false > prefetchNames; // Offset: 0x22D0

    idHashIndex streamNameHashIndex; // Offset: 0x22E8

    idList < idGeomCacheStreamerLocal::nameHashIndexPair_t , TAG_IDLIST , false > streamNameHashes; // Offset: 0x2318

    idList < int , TAG_IDLIST , false > streamNameHashesFree; // Offset: 0x2330

    idQueueMPMC < idGeomCacheStreamerLocal::staticDataUploadRequest_t , 2 > staticDataUploadRequestChannel; // Offset: 0x2350

}; // Size: 0x3780

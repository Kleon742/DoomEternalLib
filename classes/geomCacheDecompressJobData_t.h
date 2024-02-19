struct geomCacheDecompressJobData_t
{
    streamerDecompressGeomCacheAnimationParms_t decodeParms; // Offset: 0x0

    std::atomic < uint32 >* remainingFrameGroupsToDecompress; // Offset: 0x10

    std::atomic < uint32 >* decompressJobsRemaining; // Offset: 0x18

    geomCacheFrameGroupStreamData_t* frameGroupDecompressData; // Offset: 0x20

    streamDecodeId_t decodeId; // Offset: 0x28

    unsigned int meshDataOffset; // Offset: 0x30

    idSysMutex* poolAllocatorMutex; // Offset: 0x38

    idDefragAllocator* poolAllocator; // Offset: 0x40

    idGeomCache* geomCache; // Offset: 0x48

    unsigned long long frameGroupIndex; // Offset: 0x50

}; // Size: 0x58

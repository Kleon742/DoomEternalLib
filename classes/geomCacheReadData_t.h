struct geomCacheReadData_t
{
    geomCacheStreamData_t* streamData; // Offset: 0x0

    unsigned long long firstFrameGroupNormalized; // Offset: 0x8

    unsigned long long lastFrameGroupNormalized; // Offset: 0x10

    std::atomic < uint32 > remainingFrameGroupsToDecompress; // Offset: 0x18

    idGrowableList < geomCacheReadBlock_t , 2 , TAG_IDLIST > blocks; // Offset: 0x20

    unsigned int ioId; // Offset: 0x58

}; // Size: 0x60

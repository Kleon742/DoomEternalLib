struct geomCacheFrameGroupStreamData_t
{
    enum decompressDataState_t : int
    {
        ALLOCATED = 0,
        READING = 1,
        READ_COMPLETE = 2,
        DECOMPRESSING = 3,
        DECODING = 4,
        DECODED = 5,
        ABORTING = 6,
        ABORTED = 7,
        DELETING = 8
    };

    enum wantedState_t : int
    {
        UNWANTED = 0,
        READ_COMBINE = 1,
        WANTED = 2
    };

    unsigned long long normalizedFrameGroupIndex; // Offset: 0x0

    idGeomCache* geomCache; // Offset: 0x8

    std::atomic < uint32 > state; // Offset: 0x10

    std::atomic < uint32 > decompressJobsRemaining; // Offset: 0x14

    std::atomic < uint32 > inversePredictJobsRemaining; // Offset: 0x18

    geomCacheReadData_t* readData; // Offset: 0x20

    unsigned char* buffer; // Offset: 0x28

    idDefragAllocatorHdl bufferHandle; // Offset: 0x30

    size_t bufferSize; // Offset: 0x38

    // Update book keeping
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > minWantedTimeDelta; // Offset: 0x40

    geomCacheFrameGroupStreamData_t::wantedState_t wantedState; // Offset: 0x48

}; // Size: 0x50

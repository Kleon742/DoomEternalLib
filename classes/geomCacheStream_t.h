struct geomCacheStream_t
{
    unsigned long long name; // Offset: 0x0

    idGeomCache* geomCache; // Offset: 0x8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > gpuTime; // Offset: 0x10

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > wantedTime; // Offset: 0x18

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > prefetchTime; // Offset: 0x20

    int gpuTimeAssociatedBufferIndex; // Offset: 0x28

    // If streaming is enabled data for future frames are kept in memory for playback. Otherwise only enough data for wanted frame is read and then discarded after GPU upload completed.
    bool streaming; // Offset: 0x2C

    bool prefetching; // Offset: 0x2D

    bool manualPrefetching; // Offset: 0x2E

    bool looping; // Offset: 0x2F

    float playbackSpeed; // Offset: 0x30

}; // Size: 0x38

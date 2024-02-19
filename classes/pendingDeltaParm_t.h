struct pendingDeltaParm_t
{
    // Input Number of objects this job needs to process
    ptrdiff_t numObjects; // Offset: 0x0

    // Object headers
    objHeader_t* headers; // Offset: 0x8

    // Cur snap time
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > curTime; // Offset: 0x10

    // Base snap time
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > baseTime; // Offset: 0x18

    int baseSequence; // Offset: 0x20

    // This stream should continue where the last one left off
    bool fragmented; // Offset: 0x24

    // In/Out In/Out
    pendingDeltaInfo_t* ioData; // Offset: 0x28

}; // Size: 0x30

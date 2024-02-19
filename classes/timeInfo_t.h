struct timeInfo_t
{
    // current frame number
    int framenum; // Offset: 0x0

    // the current hz value
    int hz; // Offset: 0x4

    // the current time value in Seconds
    idTypesafeTime < float , secondUnique_t , 1 > timeSec; // Offset: 0x8

    // the previous time value in Seconds
    idTypesafeTime < float , secondUnique_t , 1 > previousTimeSec; // Offset: 0xC

    // time scalar
    float scale; // Offset: 0x10

    // gameSecondsPerFrame = gameTimeMS * 0.001
    idTypesafeTime < float , secondUnique_t , 1 > gameSecondsPerFrame; // Offset: 0x14

    // real MS per Frame i.e. time delta
    idTypesafeTime < int , millisecondUnique_t , 1000 > realMsPerFrame; // Offset: 0x18

    // realMsPerFrame * 0.001f;
    idTypesafeTime < float , secondUnique_t , 1 > realSecondsPerFrame; // Offset: 0x1C

    // only valid for server time
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > snapshotStartTime; // Offset: 0x20

    // only valid for server time
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > snapshotEndTime; // Offset: 0x28

}; // Size: 0x30

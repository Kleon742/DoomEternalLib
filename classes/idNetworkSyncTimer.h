struct idNetworkSyncTimer
{
    idTypesafeTime < int , millisecondUnique_t , 1000 > netServerUpdateFrequencyMS; // Offset: 0x8

    idTypesafeTime < int , millisecondUnique_t , 1000 > netRTTUpdateIntervalMS; // Offset: 0xC

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > replicatedServerTimeGT; // Offset: 0x10

    idTypesafeTime < int , millisecondUnique_t , 1000 > replicatedServerTimeMS; // Offset: 0x18

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > previousReplicatedServerTimeGT; // Offset: 0x20

    idTypesafeTime < int , millisecondUnique_t , 1000 > previousReplicatedServerTimeMS; // Offset: 0x28

    idTypesafeTime < int , millisecondUnique_t , 1000 > timerMarkMS; // Offset: 0x2C

    idTypesafeTime < int , millisecondUnique_t , 1000 > serverTimeMSSmoothEnd; // Offset: 0x30

    idTypesafeTime < int , millisecondUnique_t , 1000 > clientTimeMSSmoothStart; // Offset: 0x34

    // This is the end point for smoothing
    idTypesafeTime < int , millisecondUnique_t , 1000 > lastServerReplicatedTimeMS; // Offset: 0x38

    // This is the smoothed value on the client
    idTypesafeTime < int , millisecondUnique_t , 1000 > rawTimeMS; // Offset: 0x3C

    // The last time an updated server value was received
    idTypesafeTime < int , millisecondUnique_t , 1000 > lastServerUpdateTimeMS; // Offset: 0x40

    // The delta value that we consider close enough to the server value to stop applying smoothing
    idTypesafeTime < int , millisecondUnique_t , 1000 > deltaValueSmoothingDeadZone; // Offset: 0x44

    // The last time the raw network time was updated
    idTypesafeTime < int , millisecondUnique_t , 1000 > LastRawTimeUpdatedMs; // Offset: 0x48

    // The last time we sent for a RTT update
    idTypesafeTime < int , millisecondUnique_t , 1000 > lastRTTUpdateInterval; // Offset: 0x4C

    // On init, the timer will usually jump while the first couple updates come from the server. Generally it is not useful to throw warnings for this
    idTypesafeTime < int , millisecondUnique_t , 1000 > swallowWarningsTimeMS; // Offset: 0x50

    idTypesafeTime < int , millisecondUnique_t , 1000 > outlierRTTRejectionLimit; // Offset: 0x54

    bool adjustForPing; // Offset: 0x58

    bool adjustByFramerateAverage; // Offset: 0x59

    bool markedDirtyForNetworkSerialization; // Offset: 0x5A

    bool firstReplication; // Offset: 0x5B

    bool RTTUpdateRequested; // Offset: 0x5C

}; // Size: 0x60

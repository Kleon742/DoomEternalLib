struct idClockManager
{
    struct gamePlayTimeResetData_t
    {
        idTypestrictTimeSpan < long long , idCompileTimeRatio < 1 , 1000000 > > lastGamePlayTime; // Offset: 0x0

        idTypestrictTimeSpan < long long , idCompileTimeRatio < 1 , 1000000 > > lastActionTime; // Offset: 0x8

    }; // Size: 0x10

    struct runTimeSuspendedData_t
    {
        idTypestrictTimeSpan < long long , idCompileTimeRatio < 1 , 1000000 > > suspendedTime; // Offset: 0x0

    }; // Size: 0x8

    struct idleEndedData_t
    {
        idTypestrictTimeSpan < long long , idCompileTimeRatio < 1 , 1000000 > > idleTime; // Offset: 0x0

    }; // Size: 0x8

    struct updateState_t
    {
        bool updatedSessionTime; // Offset: 0x0

        bool updatedGamePlayTime; // Offset: 0x1

        bool updatedActionTime; // Offset: 0x2

        bool isGamePlayTimeScaled; // Offset: 0x3

        idTypestrictTimeSpan < long long , idCompileTimeRatio < 1 , 1000000 > > idleTime; // Offset: 0x8

        idTypestrictTimeSpan < long long , idCompileTimeRatio < 1 , 1000000 > > noInputTIme; // Offset: 0x10

    }; // Size: 0x18

    // Most recent clock updates
    idTypestrictTimePoint < typestrictMonotonicTimestampUnique > lastUpdated; // Offset: 0x0

    idTypestrictTimePoint < typestrictProcessTimestampUnique > lastProcessTime; // Offset: 0x8

    idTypestrictTimePoint < typestrictWallClockTimestampUnique > lastWallClock; // Offset: 0x10

    // Aggregated clocks
    idTypestrictTimePoint < typestrictRelativeSystemTimestampUnique > relativeSystemTime; // Offset: 0x18

    idTypestrictTimePoint < typestrictRuntimeTimestampUnique > runtimeTime; // Offset: 0x20

    idTypestrictTimePoint < typestrictSessionTimestampUnique > sessionTime; // Offset: 0x28

    // Aggregated clocks that reset on map load
    idTypestrictTimeSpan < long long , idCompileTimeRatio < 1 , 1000000 > > gamePlayTime; // Offset: 0x30

    idTypestrictTimeSpan < long long , idCompileTimeRatio < 1 , 1000000 > > actionTime; // Offset: 0x38

    // Sync point for network adjusted time
    idTypestrictTimePoint < typestrictMonotonicTimestampUnique > networkSyncPoint; // Offset: 0x40

    idTypestrictTimePoint < typestrictWallClockTimestampUnique > networkSyncPointWallClock; // Offset: 0x48

    bool gotKeepAlive; // Offset: 0x50

    idTypestrictTimePoint < typestrictRuntimeTimestampUnique > lastNotIdleTime; // Offset: 0x58

    uint16 broadcastId; // Offset: 0x60

}; // Size: 0x68

struct idStopWatchManager
{
    enum trackingClock_t : int
    {
        TRACKING_WALL_CLOCK = 0,
        TRACKING_MONOTONIC = 1,
        TRACKING_RUNTIME = 2,
        TRACKING_SESSION = 3,
        TRACKING_GAME_PLAY = 4,
        TRACKING_ACTION = 5
    };

    enum registerState_t : int
    {
        REGISTER_NO_CHANGE = 0,
        REGISTER_PAUSED = 1,
        REGISTER_STARTED = 2,
        REGISTER_STARTED_FORCED = 3
    };

    struct stopWatch_t
    {
        idStringHandle id; // Offset: 0x0

        bool persistToProfile; // Offset: 0x8

        idTypestrictTimeSpan < long long , idCompileTimeRatio < 1 , 1000000 > > accumulated; // Offset: 0x10

        idVariant < wallClockTimestamp_t , monotonicTimestamp_t , runtimeTimestamp_t , sessionTimestamp_t , microsecondsI64_t , microsecondsI64_t > startTime; // Offset: 0x18

    }; // Size: 0x28

    bool loadedFromProfile; // Offset: 0x0

    idVector < idStopWatchManager::stopWatch_t > stopWatches; // Offset: 0x8

    uint16 broadcastId; // Offset: 0x20

}; // Size: 0x28

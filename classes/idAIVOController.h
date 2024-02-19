struct idAIVOController
{
    enum eShutdownStatus : int
    {
        initial_shutdown = 0,
        inflight_request = 1,
        results_available = 2,
        shutdown_complete = 3
    };

    // AI
    idAnimatedEntity* AI; // Offset: 0x0

    // voice lines id
    idSoundVoiceLinesID voiceLinesID; // Offset: 0x8

    // true if shutdown has occurred
    bool shutdown; // Offset: 0xA

    // true if shutdown has been requested
    bool shutdownRequested; // Offset: 0xB

    // the current status of the shutdown request
    int shutdownStatus; // Offset: 0xC

    // active event count during shutdown
    int activeEventCount; // Offset: 0x10

}; // Size: 0x18

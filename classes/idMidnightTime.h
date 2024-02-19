struct idMidnightTime
{
    // Scene time (stopped when a synchro is active)
    int sceneTime; // Offset: 0x0

    // Real scene time (always running even when a synchro is active)
    int sceneRealTime; // Offset: 0x4

}; // Size: 0x8

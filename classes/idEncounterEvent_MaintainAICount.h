struct idEncounterEvent_MaintainAICount : idEncounterEvent
{
    // The desired AI count
    int desiredAiCount; // Offset: 0x90

    // Max number of AI this command will generate
    int maxAIToRespawn; // Offset: 0x94

    // Min Delay (game time) before the AI count is replenished
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > groupRespawnDelayGT; // Offset: 0x98

    // Max spawn delay (game time)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > maxGroupRespawnDelayGT; // Offset: 0xA0

    // Min Spawn Delay when first initiated
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > initialSpawnDelayGT; // Offset: 0xA8

    // Max Spawn Delay when first initiated
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > maxInitialSpawnDelayGT; // Offset: 0xB0

    // the number of AI to go below before replenishing
    int minAIToTriggerRespawn; // Offset: 0xB8

    // Min AI count was hit, just waiting for the delay before respawning
    bool waitingToRespawn; // Offset: 0xBC

    // Conditions have been met and the spawning loop should be active
    bool readyForSpawningLoop; // Offset: 0xBD

    // The game time when we should start respawning
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > gameTimeToRespawn; // Offset: 0xC0

    // Tally of AI that have been spawned by this command
    int currentCount; // Offset: 0xC8

    // Turns the maintanace behavior off
    bool disabled; // Offset: 0xCC

    // Initialization flag for setting up the initial update and spawning
    bool initialized; // Offset: 0xCD

    idManagedClassPtr < idTargetSpawnGroup > spawnGroup; // Offset: 0xD0

    idManagedClassPtr < idEncounterEvent_SyncMaintainAITriggers > syncTrackingEvent; // Offset: 0xF0

    idList < idEncounterSpawn_t , TAG_IDLIST , false > trackedActors; // Offset: 0x110

    // List of delay time when respawning. This is for offsetting multiple spawns
    idList < idTypesafeTime < long long , gameTimeUnique_t , 999960 > , TAG_IDLIST , false > respawnDelaysGT; // Offset: 0x128

}; // Size: 0x140

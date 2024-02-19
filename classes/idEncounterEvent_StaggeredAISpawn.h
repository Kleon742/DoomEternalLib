struct idEncounterEvent_StaggeredAISpawn : idEncounterEvent
{
    // The desired AI count
    int spawnAICount; // Offset: 0x90

    // Min Delay (in game time) before the AI count is replenished
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > minSpawnDelayGT; // Offset: 0x98

    // Max spawn delay (in game time)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > maxSpawnDelayGT; // Offset: 0xA0

    // Min AI count was hit, just waiting for the delay before respawning
    int remainingAIToSpawn; // Offset: 0xA8

    // The game time when we should start respawning
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > gameTimeToRespawn; // Offset: 0xB0

    // Initialization flag for setting up the initial update and spawning
    bool initialized; // Offset: 0xB8

    // Turns the spawn tracking behavior off
    bool disabled; // Offset: 0xB9

    idManagedClassPtr < idTargetSpawnGroup > spawnGroup; // Offset: 0xC0

    idList < idEncounterSpawn_t , TAG_IDLIST , false > trackedActors; // Offset: 0xE0

    // List of delay time when respawning. This is for offsetting multiple spawns
    idList < idTypesafeTime < long long , gameTimeUnique_t , 999960 > , TAG_IDLIST , false > spawnTimesGT; // Offset: 0xF8

}; // Size: 0x110

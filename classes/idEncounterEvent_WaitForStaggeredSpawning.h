struct idEncounterEvent_WaitForStaggeredSpawning : idEncounterEvent_Wait
{
    // Keep a list of all spawning commands that pertain to this AI type
    idList < idEncounterEvent_StaggeredAISpawn * , TAG_IDLIST , false > trackedSpawningCommands; // Offset: 0xA8

    // Wait is complete if all staggered spawning reaches this remaining spawn count.
    int remainingSpawnCount; // Offset: 0xC0

}; // Size: 0xC8

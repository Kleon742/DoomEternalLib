struct idEncounterEvent_WaitAIRemaining : idEncounterEvent_Wait
{
    // Keep a list of all actors that need to be tracked for death
    idList < idEncounterSpawn_t , TAG_IDLIST , false > trackedActors; // Offset: 0xA8

    // When this number is hit, the script will resume
    int targetAICount; // Offset: 0xC0

}; // Size: 0xC8

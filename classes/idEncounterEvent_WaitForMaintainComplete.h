struct idEncounterEvent_WaitForMaintainComplete : idEncounterEvent_Wait
{
    // Keep a list of all maintanance commands that pertain to this AI type
    idList < idEncounterEvent_MaintainAICount * , TAG_IDLIST , false > trackedMaintainCommands; // Offset: 0xA8

    // Wait is complete if all maintains reach this remaining spawn count.
    int remainingSpawnCount; // Offset: 0xC0

}; // Size: 0xC8

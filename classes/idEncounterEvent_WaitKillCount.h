struct idEncounterEvent_WaitKillCount : idEncounterEvent_Wait
{
    // Current kill count for this stage of the script
    int activeKillCount; // Offset: 0xA8

    // target kill count to continue the script
    int desiredkillCount; // Offset: 0xAC

    // If this is set, count sych melee starts as kills
    bool includeSyncStartAsKill; // Offset: 0xB0

}; // Size: 0xB8

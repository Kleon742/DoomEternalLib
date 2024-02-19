struct idEncounterEvent_WaitStatCount : idEncounterEvent_Wait
{
    // Event notifications from encounter manager
    idManagedClassPtr < idAbnormalPlayerMetrics > playerMetricEnt; // Offset: 0xA8

    // Current stat count for this stage of the script
    int activeStatCount; // Offset: 0xC8

    // target stat count to continue the script
    int desiredStatCount; // Offset: 0xCC

    gameStat_t watchStat; // Offset: 0xD0

}; // Size: 0xD8

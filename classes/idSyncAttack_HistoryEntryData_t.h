struct idSyncAttack_HistoryEntryData_t
{
    // SubWeb used.
    idStr subWeb; // Offset: 0x0

    // SubWeb Node used.
    idStr subWebNode; // Offset: 0x30

    // When it was used last.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeOfEntry; // Offset: 0x60

    // How many times it was used.
    int numUses; // Offset: 0x68

    // How many times it was used in the current level
    int numLevelUses; // Offset: 0x6C

}; // Size: 0x70

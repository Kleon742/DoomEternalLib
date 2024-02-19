struct idTarget_Secret : idTarget
{
    bool secretFound; // Offset: 0xB88

    bool savedData; // Offset: 0xB89

    // the stats to increase
    idList < statManipulation_t , TAG_IDLIST , false > incrementExtraStats; // Offset: 0xB90

    // Order that the secret should appear in the mission screen.
    int dossierOrder; // Offset: 0xBA8

    // If the secret should unlock a classic map, pick the stat here
    gameStat_t classicMapStat; // Offset: 0xBAC

    // The automap group containing the secret
    automapMapGroupId_t automapGroup; // Offset: 0xBB0

}; // Size: 0xBB8

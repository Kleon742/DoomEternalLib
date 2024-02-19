struct idSummoningWave_t
{
    // First tier AI spawn list
    idList < eEncounterSpawnType_t , TAG_IDLIST , false > tier1_SpawnList; // Offset: 0x0

    // Second tier AI spawn list
    idList < eEncounterSpawnType_t , TAG_IDLIST , false > tier2_SpawnList; // Offset: 0x18

    // Third tier AI spawn list
    idList < eEncounterSpawnType_t , TAG_IDLIST , false > tier3_SpawnList; // Offset: 0x30

    // Testing type for moving to the next group
    summonConditions_t completionTest; // Offset: 0x48

}; // Size: 0x50

struct idSummoningGroup_t
{
    // AI Type to spawn
    idList < eEncounterSpawnType_t , TAG_IDLIST , false > aiSpawnTypeList; // Offset: 0x0

    // Testing type for moving to the next group
    summonConditions_t completionTest; // Offset: 0x18

    // If the summoner is interrupted, the timer will be raised to this amount. Weighted timer kills will not go below this value. The timer will only go below this value by naturally ticking down.
    float interuptionTimeBuffer; // Offset: 0x1C

    // If the summoner is interrupted, the timer will be raised to this amount
    bool skipGroupOnInterupt; // Offset: 0x20

}; // Size: 0x28

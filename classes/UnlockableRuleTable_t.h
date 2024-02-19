struct UnlockableRuleTable_t
{
    // the stat we are tracking.
    gameStat_t stat; // Offset: 0x0

    gameStatDuration_t statDuration; // Offset: 0x4

    // number of times it's been updated.
    int statCount; // Offset: 0x8

    // is the rule satisfied?
    bool satisfied; // Offset: 0xC

}; // Size: 0x10

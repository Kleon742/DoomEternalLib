struct idTarget_PlayerStatModifier : idTarget
{
    // which game stat to modify
    gameStat_t gameStat; // Offset: 0xB88

    // how much to add/sub to the stat
    int value; // Offset: 0xB8C

    // difficulty this applies to
    gameDifficulty_t difficulty; // Offset: 0xB90

    // stat duration
    gameStatDuration_t duration; // Offset: 0xB94

    // is this stat gated
    bool gated; // Offset: 0xB98

}; // Size: 0xBA0

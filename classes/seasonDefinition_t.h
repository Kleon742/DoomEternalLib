struct seasonDefinition_t
{
    idStr description; // Offset: 0x0

    // when the season started
    idTypestrictTimePoint < typestrictWallClockTimestampUnique > start; // Offset: 0x30

    // when the season ended
    idTypestrictTimePoint < typestrictWallClockTimestampUnique > end; // Offset: 0x38

    // The Reward structures.
    idList < seasonLevelDefinition_t , TAG_IDLIST , false > levels; // Offset: 0x40

}; // Size: 0x58

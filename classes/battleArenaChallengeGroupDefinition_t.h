struct battleArenaChallengeGroupDefinition_t
{
    idStr id; // Offset: 0x0

    idStr description; // Offset: 0x30

    int weekNumber; // Offset: 0x60

    // when the battleArenaChallenge started
    idTypestrictTimePoint < typestrictWallClockTimestampUnique > start; // Offset: 0x68

    // when the battleArenaChallenge ended
    idTypestrictTimePoint < typestrictWallClockTimestampUnique > end; // Offset: 0x70

    idDeclWarehouseItem* reward; // Offset: 0x78

    idVector < idSharedPtr < battleArenaChallengeCharacterDefinition_t > > characters; // Offset: 0x80

}; // Size: 0x98

struct idProwler_PerchCalculator
{
    // Demon owning these calculations
    idManagedClassPtr < idDemonPlayer > owner; // Offset: 0x0

    // Surface trace results {{ units = m }}
    idVec3 adjustedPerchPos; // Offset: 0x20

    idVec3 adjustedPerchForward; // Offset: 0x2C

    // Internal data for testing an alternate perch position
    idVec3 adjustedPerchSurfaceNormal; // Offset: 0x38

    int primaryPosNumAttaches; // Offset: 0x44

    idVec3 secondaryTraceDir; // Offset: 0x48

    // {{ units = m }}
    idVec3 secondaryPerchPos; // Offset: 0x54

    idVec3 secondaryPerchForward; // Offset: 0x60

    idVec3 secondaryPerchSurfaceNormal; // Offset: 0x6C

    // Head smash check results
    bool headSmashPossible; // Offset: 0x78

    idStaticList < idProwler_PerchCalcFSMStateInterface * , 8 , false , TAG_IDLIST > states; // Offset: 0x80

    prowlerCalculationState_t currentState; // Offset: 0xD8

}; // Size: 0xE0

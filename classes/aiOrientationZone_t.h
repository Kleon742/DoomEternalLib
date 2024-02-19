struct aiOrientationZone_t
{
    bodyMoveAngleBadZoneInfo_t badZoneInfo; // Offset: 0x0

    idTypesafeNumber < float , DegreesUnique_t > angle_target; // Offset: 0x28

    int next; // Offset: 0x2C

    int prev; // Offset: 0x30

    bool safe; // Offset: 0x34

}; // Size: 0x38

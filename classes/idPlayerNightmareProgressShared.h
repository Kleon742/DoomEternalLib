struct idPlayerNightmareProgressShared
{
    // last ground player position
    idVec3 lastKnownPos; // Offset: 0x0

    // Sys_DateStr()
    time_t sysTimeStamp; // Offset: 0x10

    // the score when you died
    float score; // Offset: 0x18

    // integer used by servers to sort data, divided into 4 bytes[ level ][ checkpoint ][ unused ][ unused ]
    int sortIndicator; // Offset: 0x1C

    // the number of checkpoints triggered by the player
    int numChckPtsUsed; // Offset: 0x20

    // map name when you died
    idStrStatic < 128 > mapName; // Offset: 0x28

    // name of the entity that killed us
    idStrStatic < 128 > killerName; // Offset: 0xD8

}; // Size: 0x188

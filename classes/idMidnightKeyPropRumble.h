struct idMidnightKeyPropRumble : idMidnightKeyProperties
{
    // low
    float rumbleLow; // Offset: 0x10

    // high
    float rumbleHigh; // Offset: 0x14

    // duration
    durationTime_t duration; // Offset: 0x18

    // max distance to player in meter
    float maxDistanceToPlayer; // Offset: 0x1C

}; // Size: 0x20

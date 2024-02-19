struct automapEncounterLight_t
{
    idVec3 pos; // Offset: 0x0

    unsigned int colorPacked; // Offset: 0xC

    // Alpha is current alpha of the light's pulsing inner core.
    unsigned int pulseColorPacked; // Offset: 0x10

    float radius; // Offset: 0x14

    float height; // Offset: 0x18

    float coreRadius; // Offset: 0x1C

    // (unit: sec)
    float pulsePeriod; // Offset: 0x20

    // (unit: sec)
    float pulsePhase; // Offset: 0x24

    float pulseSpeed; // Offset: 0x28

    // [15:8] pulseDotsDensity (normalized), [7:0] num rings,
    unsigned int packedParms; // Offset: 0x2C

}; // Size: 0x30

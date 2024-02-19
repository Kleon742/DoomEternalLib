struct idSector
{
    // radius of the sector {{ units = m }}
    float radius; // Offset: 0x0

    // angle of the sector arc, in degrees
    idTypesafeNumber < float , DegreesUnique_t > angle; // Offset: 0x4

}; // Size: 0x8

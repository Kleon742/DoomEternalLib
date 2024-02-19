struct blurRadialParms_t
{
    // {{ units = m }}
    idVec3 center; // Offset: 0x0

    // {{ units = m }}
    float peakRadius; // Offset: 0xC

    float fadeSlope; // Offset: 0x10

    float scale; // Offset: 0x14

}; // Size: 0x18

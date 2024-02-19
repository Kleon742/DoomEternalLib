struct idViseme_Simple : idVisemeEvent
{
    // time when the viseme peaks
    unsigned short peakTimeMS; // Offset: 0x18

    // peak weight of the viseme
    unsigned char peakWeight; // Offset: 0x1A

}; // Size: 0x20

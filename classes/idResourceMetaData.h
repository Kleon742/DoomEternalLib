struct idResourceMetaData
{
    // (Warnings, Infos, etc.)
    unsigned short category; // Offset: 0x0

    // (
    unsigned short subtype; // Offset: 0x2

    // 4 gig should be enough for metadata.. right?
    unsigned int size; // Offset: 0x4

}; // Size: 0x8

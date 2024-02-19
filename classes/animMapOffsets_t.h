struct animMapOffsets_t
{
    // offset to RLE stream that specifies how many constant R joints there are and which target joint indices they map to
    unsigned short constRRLEOffset; // Offset: 0x0

    // offset to RLE stream that specifies how many constant S joints there are and which target joint indices they map to
    unsigned short constSRLEOffset; // Offset: 0x2

    // offset to RLE stream that specifies how many constant T joints there are and which target joint indices they map to
    unsigned short constTRLEOffset; // Offset: 0x4

    // offset to RLE stream that specifies how many constant user channels there are and which target user channel indices they map to
    unsigned short constURLEOffset; // Offset: 0x6

    // offset to RLE stream that specifies how many animated R joints there are and which target joint indices they map to
    unsigned short animRRLEOffset; // Offset: 0x8

    // offset to RLE stream that specifies how many animated S joints there are and which target joint indices they map to
    unsigned short animSRLEOffset; // Offset: 0xA

    // offset to RLE stream that specifies how many animated T joints there are and which target joint indices they map to
    unsigned short animTRLEOffset; // Offset: 0xC

    // offset to RLE stream that specifies how many animated user channels there are and which target user channel indices they map to
    unsigned short animURLEOffset; // Offset: 0xE

}; // Size: 0x10

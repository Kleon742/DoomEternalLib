struct frameSetData_t
{
    // offset to compressed base rotation keys
    unsigned short firstROffset; // Offset: 0x0

    // offset to compressed base scale keys
    unsigned short firstSOffset; // Offset: 0x2

    // offset to compressed base translation keys
    unsigned short firstTOffset; // Offset: 0x4

    // offset to compressed base user channel keys
    unsigned short firstUOffset; // Offset: 0x6

    // offset to compressed additional rotation keys
    unsigned short rangeROffset; // Offset: 0x8

    // offset to compressed additional scale keys
    unsigned short rangeSOffset; // Offset: 0xA

    // offset to compressed additional translation keys
    unsigned short rangeTOffset; // Offset: 0xC

    // offset to compressed additional user channel keys
    unsigned short rangeUOffset; // Offset: 0xE

    // offset to rotation frame offset bits
    unsigned short RBitsOffset; // Offset: 0x10

    // offset to scale frame offset bits
    unsigned short SBitsOffset; // Offset: 0x12

    // offset to translation frame offset bits
    unsigned short TBitsOffset; // Offset: 0x14

    // offset to user channel frame offset bits
    unsigned short UBitsOffset; // Offset: 0x16

    // offset to compressed base rotation keys of next frame set
    unsigned short nextROffset; // Offset: 0x18

    // offset to compressed base scale keys of next frame set
    unsigned short nextSOffset; // Offset: 0x1A

    // offset to compressed base translation keys of next frame set
    unsigned short nextTOffset; // Offset: 0x1C

    // offset to compressed base user channel keys of next frame set
    unsigned short nextUOffset; // Offset: 0x1E

    // total size of the frame set
    unsigned short totalSize; // Offset: 0x20

    // number of the first frame of the animation this frame set encodes
    unsigned short frameStart; // Offset: 0x22

    // number of frames this set encodes (62 max)
    unsigned short frameRange; // Offset: 0x24

    unsigned char pad[10]; // Offset: 0x26

}; // Size: 0x30

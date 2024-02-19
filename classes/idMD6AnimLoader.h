struct idMD6AnimLoader
{
    int numJoints; // Offset: 0x0

    int numPaddedJoints; // Offset: 0x4

    int numFrames; // Offset: 0x8

    int frameRate; // Offset: 0xC

    idList < idTokenStatic < 64 > , TAG_IDLIST , false > names; // Offset: 0x10

    idList < short , TAG_IDLIST , false > parents; // Offset: 0x28

    idList < short , TAG_IDLIST , false > lastChildTable; // Offset: 0x40

    // {{ units = m }}
    idList < float , TAG_IDLIST , false > positions; // Offset: 0x58

    idList < float , TAG_IDLIST , false > orientations; // Offset: 0x70

    idList < float , TAG_IDLIST , false > scale; // Offset: 0x88

}; // Size: 0xA0

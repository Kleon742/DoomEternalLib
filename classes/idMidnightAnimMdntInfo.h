struct idMidnightAnimMdntInfo
{
    // All clips of the scene
    idList < idMidnightAnimClipInfo , TAG_ARK_MIDNIGHT , false > clipList; // Offset: 0x0

    idMidnight::groupDynFlags_t dynamicFlags; // Offset: 0x18

    int priorityOffset; // Offset: 0x1C

    unsigned int mdntInstHandle; // Offset: 0x20

    idTypesafeTime < int , millisecondUnique_t , 1000 > midnightTime; // Offset: 0x24

    unsigned char loopCounter; // Offset: 0x28

    bool preventFalling; // Offset: 0x29

    bool paused; // Offset: 0x2A

}; // Size: 0x30

struct idMidnightGraphNextInfo
{
    enum Type : int
    {
        EAMNT_FINAL = 0,
        EAMNT_SCENE = 1,
        EAMNT_NODE = 2
    };

    // indicate type of next
    idMidnightGraphNextInfo::Type nextType; // Offset: 0x0

    // indicate next connection point handle
    idMidnightGraphHandle nextCPoint; // Offset: 0x4

}; // Size: 0x8

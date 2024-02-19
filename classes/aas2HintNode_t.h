struct aas2HintNode_t
{
    enum hintNodeType_t : int
    {
        HINT_NODE_TYPE_SEARCH_AUTO = 0,
        HINT_NODE_TYPE_SEARCH_ANIMATION = 1,
        HINT_NODE_TYPE_GRENADE = 2
    };

    // {{ units = m }}
    idVec3 origin; // Offset: 0x0

    short areaNum; // Offset: 0xC

    short radius; // Offset: 0xE

    unsigned char hintType; // Offset: 0x10

    unsigned char orientation; // Offset: 0x11

    unsigned char dirFlags; // Offset: 0x12

    unsigned char grouping; // Offset: 0x13

    int hintData; // Offset: 0x14

}; // Size: 0x18

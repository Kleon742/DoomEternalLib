struct idCornerInfo
{
    enum cornerFlags_t : int
    {
        CORNER_NONE = 0,
        CORNER_NOT_A_LINK = 1,
        CORNER_LINKSTART = 2,
        CORNER_LINKEND = 4,
        CORNER_GOAL = 8,
        CORNER_STOP_TO_USE = 16
    };

    // {{ units = m }}
    idVec3 position; // Offset: 0x0

    idFlags flags; // Offset: 0xC

}; // Size: 0x10

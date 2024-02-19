struct oaAnimQueryResult_t
{
    // {{ units = m }}
    idVec2 startOrigin; // Offset: 0x0

    // {{ units = m }}
    idVec2 destOrigin; // Offset: 0x8

    idVec2 destAxis; // Offset: 0x10

    idVec2 startAxis; // Offset: 0x18

    int cacheID; // Offset: 0x20

    int selectionIndex; // Offset: 0x24

    rejectReason_t rejectReasons[32]; // Offset: 0x28

    float errors[32]; // Offset: 0xA8

    int animIndices[32]; // Offset: 0x128

    // {{ units = m }}
    float approximatePathDistance; // Offset: 0x1A8

    bool wasRejectedOnDistanceAlone; // Offset: 0x1AC

    animQueryFlags_t flags; // Offset: 0x1B0

}; // Size: 0x1B4

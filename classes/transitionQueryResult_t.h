struct transitionQueryResult_t
{
    idMat3 destAxis; // Offset: 0x0

    idMat3 startAxis; // Offset: 0x24

    idAnimWebState dst; // Offset: 0x48

    idAnimWebState via; // Offset: 0x68

    // {{ units = m }}
    idVec3 startOrigin; // Offset: 0x88

    // {{ units = m }}
    idVec3 destOrigin; // Offset: 0x94

    idMD6Anim* anim; // Offset: 0xA0

    int selectionIndex; // Offset: 0xA8

    int cacheID; // Offset: 0xAC

    // {{ units = m }}
    float approximatePathDistance; // Offset: 0xB0

    bool hasApex; // Offset: 0xB4

}; // Size: 0xB8

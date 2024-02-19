struct idRemovedPortal
{
    int areaNum; // Offset: 0x0

    removedPortal_t type; // Offset: 0x4

    // {{ units = m }}
    idList < idVec3 , TAG_AAS , false > leakTrail; // Offset: 0x8

}; // Size: 0x20

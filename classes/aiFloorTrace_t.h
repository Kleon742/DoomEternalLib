struct aiFloorTrace_t
{
    // {{ units = m }}
    idVec3 start; // Offset: 0x0

    // {{ units = m }}
    idVec3 end; // Offset: 0xC

    idIndex < int , invalidArea_t , - 1 > startAreaNum; // Offset: 0x18

    idNavIndex < invalidEdge_t > edgeToIgnore; // Offset: 0x1C

    // {{ units = m }}
    float heightTolerance; // Offset: 0x20

    // {{ units = m }}
    idVec3 hitPosition; // Offset: 0x24

    float fraction; // Offset: 0x30

    idIndex < int , invalidArea_t , - 1 > hitAreaNum; // Offset: 0x34

    idNavIndex < invalidEdge_t > hitEdge; // Offset: 0x38

}; // Size: 0x3C

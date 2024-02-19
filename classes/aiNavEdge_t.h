struct aiNavEdge_t
{
    // {{ units = m }}
    idVec3 p1; // Offset: 0x0

    // {{ units = m }}
    idVec3 p2; // Offset: 0xC

    idNavIndex < invalidEdge_t > index; // Offset: 0x18

    idNavIndex < invalidEdge_t > oppositeIndex; // Offset: 0x1C

    idNavIndex < invalidEdge_t > parentIndex; // Offset: 0x20

    idIndex < int , invalidArea_t , - 1 > fromAreaNum; // Offset: 0x24

    idIndex < int , invalidArea_t , - 1 > toAreaNum; // Offset: 0x28

    unsigned int travelFlags; // Offset: 0x2C

    int vertNum_a; // Offset: 0x30

    int vertNum_b; // Offset: 0x34

    // number in ordered reach list, for pathfinding -- has no relationship to anything else
    int absoluteNum; // Offset: 0x38

    bool hidden; // Offset: 0x3C

}; // Size: 0x40

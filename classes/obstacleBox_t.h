struct obstacleBox_t
{
    idMat3 axis; // Offset: 0x0

    // {{ units = m }}
    idVec3 center; // Offset: 0x24

    // {{ units = m }}
    idVec3 extents; // Offset: 0x30

    int id; // Offset: 0x3C

    // if true, don't treat as an obstacle if the goal is inside of it
    bool soft; // Offset: 0x40

    // what a waste...
    unsigned char pad[15]; // Offset: 0x41

}; // Size: 0x50

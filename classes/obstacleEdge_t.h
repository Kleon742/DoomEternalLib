struct obstacleEdge_t
{
    // AAS edge flags
    int flags; // Offset: 0x0

    // point into the obstacleVertex_t array
    short verts[2]; // Offset: 0x4

    // AAS vertex numbers
    int vertNums[2]; // Offset: 0x8

}; // Size: 0x10

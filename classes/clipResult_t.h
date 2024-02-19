struct clipResult_t
{
    // number of used verts
    int numVerts; // Offset: 0x0

    // number of used indices
    int numIndices; // Offset: 0x4

    int pad[2]; // Offset: 0x8

    // verts of clipped triangles {{ units = m }}
    idVec3 verts[32]; // Offset: 0x10

    // indices of clipped triangles
    short indices[264]; // Offset: 0x190

}; // Size: 0x3A0

struct surfaceEdge_t
{
    // edge vertices always with ( verts[0] < verts[1] )
    int verts[2]; // Offset: 0x0

    // edge triangles
    int tris[2]; // Offset: 0x8

}; // Size: 0x10

struct idSurface
{
    // vertices
    idList < idDrawVert , TAG_IDLIB , false > verts; // Offset: 0x0

    // 3 references to vertices for each triangle
    idList < int , TAG_IDLIB , false > indexes; // Offset: 0x18

    // edges
    idList < surfaceEdge_t , TAG_IDLIB , false > edges; // Offset: 0x30

    // 3 references to edges for each triangle, may be negative for reversed edge
    idList < int , TAG_IDLIB , false > edgeIndexes; // Offset: 0x48

}; // Size: 0x60

struct cm_node_t
{
    // node axial plane type
    short planeType; // Offset: 0x0

    // first primitive in index list
    unsigned short firstPrimitive; // Offset: 0x2

    // node plane distance {{ units = m }}
    float planeDist; // Offset: 0x4

    // children of this node
    unsigned short children[2]; // Offset: 0x8

    // number of polygons on this node
    unsigned short numPolygons; // Offset: 0xC

    // first polytope starts at firstPrimitive + numPolygons
    unsigned short numPolytopes; // Offset: 0xE

}; // Size: 0x10

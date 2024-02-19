struct cm_polygon_t
{
    // polygon bounds
    idBoundsShort bounds; // Offset: 0x0

    // material index
    unsigned char material; // Offset: 0xC

    // number of edges
    unsigned char numEdges; // Offset: 0xD

    // first edge in cm_polygonEdge_t list
    unsigned short firstEdge; // Offset: 0xE

}; // Size: 0x10

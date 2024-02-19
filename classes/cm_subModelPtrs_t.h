struct cm_subModelPtrs_t
{
    int isConvex; // Offset: 0x0

    cm_node_t* nodes; // Offset: 0x8

    unsigned short* primitiveIndices; // Offset: 0x10

    cm_material_t* materials; // Offset: 0x18

    cm_polygon_t* polygons; // Offset: 0x20

    unsigned short* polygonEdges; // Offset: 0x28

    cm_edge_t* edges; // Offset: 0x30

    cm_vertex_t* vertices; // Offset: 0x38

    cm_polytope_t* polytopes; // Offset: 0x40

    idPlane* polytopePlanes; // Offset: 0x48

}; // Size: 0x50

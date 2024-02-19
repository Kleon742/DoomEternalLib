struct cm_subModelData_t
{
    cm_subModelHeader_t header; // Offset: 0x0

    int isConvex; // Offset: 0x20

    int numNodes; // Offset: 0x24

    int nodeOffset; // Offset: 0x28

    int numPrimitiveIndices; // Offset: 0x2C

    int primitiveIndexOffset; // Offset: 0x30

    int numMaterials; // Offset: 0x34

    int materialOffset; // Offset: 0x38

    int numPolygons; // Offset: 0x3C

    int polygonOffset; // Offset: 0x40

    int numPolygonEdges; // Offset: 0x44

    int polygonEdgeOffset; // Offset: 0x48

    int numEdges; // Offset: 0x4C

    int edgeOffset; // Offset: 0x50

    int numVertices; // Offset: 0x54

    int vertexOffset; // Offset: 0x58

    int numPolytopes; // Offset: 0x5C

    int polytopeOffset; // Offset: 0x60

    int numPolytopePlanes; // Offset: 0x64

    int polytopePlaneOffset; // Offset: 0x68

    int contentFlags; // Offset: 0x6C

}; // Size: 0x70

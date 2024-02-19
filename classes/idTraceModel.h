struct idTraceModel
{
    // {{ units = m }}
    float vertsX[32]; // Offset: 0x0

    // {{ units = m }}
    float vertsY[32]; // Offset: 0x80

    // {{ units = m }}
    float vertsZ[32]; // Offset: 0x100

    float edgeNormalX[32]; // Offset: 0x180

    float edgeNormalY[32]; // Offset: 0x200

    float edgeNormalZ[32]; // Offset: 0x280

    float polyPlaneX[16]; // Offset: 0x300

    float polyPlaneY[16]; // Offset: 0x340

    float polyPlaneZ[16]; // Offset: 0x380

    // {{ units = m }}
    float polyPlaneW[16]; // Offset: 0x3C0

    unsigned char polyEdges[16][16]; // Offset: 0x400

    unsigned int numPolyEdges[16]; // Offset: 0x500

    traceModelEdge_t edges[32]; // Offset: 0x540

    traceModel_t type; // Offset: 0x5C0

    unsigned int numVerts; // Offset: 0x5C4

    unsigned int numEdges; // Offset: 0x5C8

    unsigned int numPolys; // Offset: 0x5CC

    unsigned int maxPolyEdges; // Offset: 0x5D0

    // offset to center of model {{ units = m }}
    idVec3 offset; // Offset: 0x5D4

    // bounds of model
    idBounds bounds; // Offset: 0x5E0

    // radius of sphere containing the model {{ units = m }}
    float radius; // Offset: 0x5F8

    // true when model is convex
    bool isConvex; // Offset: 0x5FC

    unsigned char pad[3]; // Offset: 0x5FD

}; // Size: 0x600

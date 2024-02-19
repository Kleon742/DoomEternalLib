struct surfGeoDecalProjComputeData_t
{
    geoDecalProjComputeMode_t mode; // Offset: 0x0

    short geoDecalProjSet; // Offset: 0x2

    unsigned int posVertexOffset; // Offset: 0x4

    unsigned int texcoordVertexOffset; // Offset: 0x8

    // Can be either projection to tri indices or the projections themselves
    idBufferView projDataBufferView; // Offset: 0x10

    unsigned int geoDecalPositionsOffset; // Offset: 0x28

    unsigned int geoDecalTexcoordsOffset; // Offset: 0x2C

    idVec3 posBias; // Offset: 0x30

    idVec3 posScale; // Offset: 0x3C

    idVec2 texcoordBias; // Offset: 0x48

    idVec2 texcoordScale; // Offset: 0x50

    unsigned int transformsOffset; // Offset: 0x58

}; // Size: 0x60

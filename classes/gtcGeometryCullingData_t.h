struct gtcGeometryCullingData_t
{
    unsigned int numTris; // Offset: 0x0

    unsigned int indexOffset; // Offset: 0x4

    unsigned int positionOffset; // Offset: 0x8

    unsigned int normalTangentOffset; // Offset: 0xC

    unsigned int colorOffset; // Offset: 0x10

    unsigned int modelIndex; // Offset: 0x14

    unsigned int packedData; // Offset: 0x18

    unsigned int unused; // Offset: 0x1C

    unsigned int geometryStartGroupIndex; // Offset: 0x20

    unsigned int outGeometrySetBaseIndex; // Offset: 0x24

    unsigned int surfaceMatricesIndex; // Offset: 0x28

    unsigned int debugSurfaceType; // Offset: 0x2C

    unsigned int lodAndGeometryIndex; // Offset: 0x30

    float posBiasX; // Offset: 0x34

    float posBiasY; // Offset: 0x38

    float posBiasZ; // Offset: 0x3C

    float posScale; // Offset: 0x40

    unsigned int skinningMode; // Offset: 0x44

    unsigned int instanceDescSetIndex; // Offset: 0x48

    unsigned int surfaceDescSetIndex; // Offset: 0x4C

}; // Size: 0x50

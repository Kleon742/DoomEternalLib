struct gtcGeometryRenderingData_t
{
    unsigned int inlineConstants[4]; // Offset: 0x0

    unsigned int instanceDescSetIndex; // Offset: 0x10

    unsigned int surfaceDescSetIndex; // Offset: 0x14

    unsigned int positionOffset; // Offset: 0x18

    unsigned int normalTangentOffset; // Offset: 0x1C

    unsigned int lightmapUVOffset; // Offset: 0x20

    unsigned int materialUVOffset; // Offset: 0x24

    unsigned int colorOffset; // Offset: 0x28

    unsigned int flags; // Offset: 0x2C

}; // Size: 0x30

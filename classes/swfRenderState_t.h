struct swfRenderState_t
{
    swfMatrix_t matrix; // Offset: 0x0

    swfColorXform_t cxf; // Offset: 0x18

    idMaterial2* material; // Offset: 0x38

    int materialWidth; // Offset: 0x40

    int materialHeight; // Offset: 0x44

    int activeStencilMasks; // Offset: 0x48

    float z; // Offset: 0x4C

    int filterParms; // Offset: 0x50

    unsigned char blendMode; // Offset: 0x54

    bool isAtlasMaterial; // Offset: 0x55

}; // Size: 0x58

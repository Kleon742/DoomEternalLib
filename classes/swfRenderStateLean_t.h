struct swfRenderStateLean_t
{
    swfColorXform_t cxf; // Offset: 0x0

    idMaterial2* material; // Offset: 0x20

    uint16_t materialWidth; // Offset: 0x28

    uint16_t materialHeight; // Offset: 0x2A

    int activeStencilMasks; // Offset: 0x2C

    float z; // Offset: 0x30

    int filterParms; // Offset: 0x34

    unsigned char blendMode; // Offset: 0x38

    bool isAtlasMaterial; // Offset: 0x39

}; // Size: 0x40

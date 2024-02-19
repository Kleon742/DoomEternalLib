struct particleRenderView_t
{
    idVec3 viewOrg; // Offset: 0x0

    idVec3 viewFwd; // Offset: 0xC

    idVec3 viewLeft; // Offset: 0x18

    idVec3 viewUp; // Offset: 0x24

    int renderTime; // Offset: 0x30

    int previousRenderTime; // Offset: 0x34

    int deltaTime; // Offset: 0x38

}; // Size: 0x3C

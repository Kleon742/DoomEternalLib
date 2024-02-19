struct idMaterialRayPayload
{
    // hit-group program for payload
    idDeclRenderProg* hitGroup; // Offset: 0x0

    // require the hit group anyhit to be invoked
    bool requireAnyHit; // Offset: 0x8

    // cached renderLayerIndex so we don't have to do searches.
    int renderLayerIndex; // Offset: 0xC

}; // Size: 0x10

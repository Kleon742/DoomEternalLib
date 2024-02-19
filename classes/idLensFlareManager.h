struct idLensFlareManager
{
    idRenderModelFlare* flareRenderModel; // Offset: 0x0

    // offset the occlusion quad from the origin by this amount {{ units = m }}
    idVec3 occlusionOffset; // Offset: 0x8

    // system has been initialized
    bool isInitialized; // Offset: 0x14

}; // Size: 0x18

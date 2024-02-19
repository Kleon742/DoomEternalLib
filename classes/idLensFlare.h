struct idLensFlare : idDynamicEntity
{
    // true to start off
    bool startOff; // Offset: 0xCF8

    // turn off and on with sequential triggerings
    bool cycleTrigger; // Offset: 0xCF9

    // flare decl
    idDeclFlare* declFlare; // Offset: 0xD00

    // flare starts fading at this distance {{ units = m }}
    float fadeStart; // Offset: 0xD08

    // flare is fully faded at this distance {{ units = m }}
    float fadeEnd; // Offset: 0xD0C

    // orient the occlusion quad to the viewer to simulate omni-directional light flares
    bool autospriteOcclusionQuad; // Offset: 0xD10

    // if non-zero, overrides the entity scale for sub-flares rendering
    idVec2 subFlaresScale; // Offset: 0xD14

    idLensFlareManager flareManager; // Offset: 0xD20

}; // Size: 0xD38

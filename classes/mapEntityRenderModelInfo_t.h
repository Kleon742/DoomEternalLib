struct mapEntityRenderModelInfo_t
{
    idStr renderModelName; // Offset: 0x0

    idVec3 scale; // Offset: 0x30

    idColor instanceEmissiveColor; // Offset: 0x3C

    float instanceEmissiveScale; // Offset: 0x4C

    bool lightmapFromDynamicModel; // Offset: 0x50

    bool staticShadowsFromDynamicModel; // Offset: 0x51

    bool hasStaticShadowsFromDynamicModel; // Offset: 0x52

    bool noShadows; // Offset: 0x53

}; // Size: 0x58

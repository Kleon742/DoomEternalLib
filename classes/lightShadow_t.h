struct lightShadow_t
{
    idRenderMatrix worldPosToShadowMap; // Offset: 0x0

    idVec3 shadowOrigin; // Offset: 0x40

    unsigned int numTrisStatic; // Offset: 0x4C

    unsigned int numTrisDynamic; // Offset: 0x50

    bool hasDirtyGeometry; // Offset: 0x54

    float nearZ; // Offset: 0x58

    float farZ; // Offset: 0x5C

    float shadowSliceStep; // Offset: 0x60

}; // Size: 0x64

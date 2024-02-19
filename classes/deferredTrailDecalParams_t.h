struct deferredTrailDecalParams_t
{
    // Decal material
    idMaterial2* decalMat; // Offset: 0x0

    // Decal clip depth {{ units = m }}
    float depth; // Offset: 0x8

    // lifetime
    idTypesafeTime < int , millisecondUnique_t , 1000 > lifetime; // Offset: 0xC

    // fadetime
    idTypesafeTime < int , millisecondUnique_t , 1000 > fadetime; // Offset: 0x10

    // corners used to build Trm and texture coords
    idVec3 corners[4]; // Offset: 0x14

    // left dir
    idVec3 left; // Offset: 0x44

    // y scale
    float markYScale; // Offset: 0x50

    // y bias
    float markYBias; // Offset: 0x54

    // half width of decal {{ units = m }}
    float halfWidth; // Offset: 0x58

    // half height of decal {{ units = m }}
    float halfHeight; // Offset: 0x5C

    // for vert color
    bool markStart; // Offset: 0x60

    // for vert color
    bool markEnd; // Offset: 0x61

    // persist until forceably removed
    bool isPersistent; // Offset: 0x62

}; // Size: 0x68

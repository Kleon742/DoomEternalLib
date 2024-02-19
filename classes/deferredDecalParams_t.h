struct deferredDecalParams_t
{
    // Decal material
    idMaterial2* decalMat; // Offset: 0x0

    // drip material
    idMaterial2* dripMat; // Offset: 0x8

    // Decal clip depth {{ units = m }}
    float depth; // Offset: 0x10

    // Width/height size {{ units = m }}
    idVec2 size; // Offset: 0x14

    // width/height of drip decal {{ units = m }}
    idVec2 dripSize; // Offset: 0x1C

    // Rotation angle
    float angle; // Offset: 0x24

    // lifetime
    idTypesafeTime < int , millisecondUnique_t , 1000 > lifetime; // Offset: 0x28

    // time after start at which it should fade out
    idTypesafeTime < int , millisecondUnique_t , 1000 > fadetime; // Offset: 0x2C

    // when the fade in should be done, set 0 for no fade in
    idTypesafeTime < int , millisecondUnique_t , 1000 > fadeInEndTime; // Offset: 0x30

    // persist until forceably removed
    bool isPersistent; // Offset: 0x34

    // is forced persistent
    bool isForcedPersistent; // Offset: 0x35

    // priority used to spawn the deferred decals for sorting / group spawning
    int priority; // Offset: 0x38

    // blending parms for flags to determine how to blend the decal with underlying surface details
    int blendingParms; // Offset: 0x3C

    // opacity parms perchannel diffuse, spec, smoothness, normal 0 - 1
    idVec4 opacityParms; // Offset: 0x40

}; // Size: 0x50

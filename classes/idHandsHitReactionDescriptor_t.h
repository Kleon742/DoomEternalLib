struct idHandsHitReactionDescriptor_t
{
    // enable or disable this reaction
    bool enable; // Offset: 0x0

    // what type of hit reaction is this
    idHandsHitReactionType_t type; // Offset: 0x4

    // allows perturbation of the actual angle by up to this much, for variation
    float anglePerturbDegs; // Offset: 0x8

    // table that describes the blend strength
    idDeclTable* strengthTable; // Offset: 0x10

    // does the hit reaction animation set allow weapon alpha overrides. Special animation sets need to always play at full strength (i.e. FIRE )
    bool allowWeaponAlphaOverride; // Offset: 0x18

    // alpha value in range 0..1 that is used to describe how much to blend the hit reaction in
    float blendStrength; // Offset: 0x1C

    // used to specify movement, for example during a push
    idDeclTable* movementGraph; // Offset: 0x20

    // if true then there are different subwebs for different weapons, look at idDeclWeapon::handsHitReactionSubweb
    bool weaponSpecific; // Offset: 0x28

    // keep gravity in explicit motion
    bool gravity; // Offset: 0x29

}; // Size: 0x30

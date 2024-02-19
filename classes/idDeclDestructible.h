struct idDeclDestructible : idGameDeclTypeInfo
{
    // How many to preallocate ( determined by frequency of use )
    int preallocate; // Offset: 0x90

    // model ( LWO / Discrete Animation Object ) ( TODO: MAKE THIS LOD'able )
    idDiscreteAnimationResource* discreteAnimation; // Offset: 0x98

    // Cosmetic materials that need to be swapped.
    idList < materialRemap_t , TAG_IDLIST , false > materialRemap; // Offset: 0xA0

    // The per piece physics / FX information.
    idList < idDestructiblePieceInfo , TAG_IDLIST , false > pieces; // Offset: 0xB8

    // Global Attributes for each piece. Can be Overridden by each piece.
    idDestructiblePhysicsAttribs_t globalAttribs; // Offset: 0xD0

    // Global flags for the destructible.
    destructibleFlags_t flags; // Offset: 0x110

    // FX Decl for the Destructible.
    idDeclFX* fxDecl; // Offset: 0x118

    // local offset from entity origin for fx spawning origin
    idVec3 fxOffset; // Offset: 0x120

    // local axis offset from entity origin for fx spawning origin
    idMat3 fxAxisOffset; // Offset: 0x12C

    // local offset from entity origin for sound spawning origin
    idVec3 soundOffset; // Offset: 0x150

    // local axis offset from entity origin for sound spawning origin
    idMat3 soundAxisOffset; // Offset: 0x15C

    // Damage Piece does when it hits. ( global )
    idDeclDamage* damage; // Offset: 0x180

    // What element functionality class to use.
    idTypeInfoPtr < idDestructibleMechanic > class; // Offset: 0x188

    // global Force to apply to all pieces.
    idDestructibleImpulse globalForce; // Offset: 0x190

    // apply this preset impulse constraint to all pieces ( if not specifically defined )
    idDestructiblePresetData_t globalPresetData; // Offset: 0x1B0

    // How much impact before impactEffect resolves.
    float impactForceNeeded; // Offset: 0x1F4

    // How long after being inactive, do we remove.
    idTypesafeTime < int , millisecondUnique_t , 1000 > removalTime; // Offset: 0x1F8

    // How long after being spawned do we remove.
    idTypesafeTime < int , millisecondUnique_t , 1000 > removalTimeForced; // Offset: 0x1FC

    // How long after being removed, do we fade.
    idTypesafeTime < int , millisecondUnique_t , 1000 > fadeTime; // Offset: 0x200

    // This position is used for aim targeting for the player's melee attack
    idVec3 targetingPosition; // Offset: 0x204

    // Play this when i activate.
    idSoundEvent* soundOnActivate; // Offset: 0x210

    // Screen Shake when Activated.
    idDeclAdvancedViewShake* screenShake; // Offset: 0x218

    // Must be using constraint class to use this.
    idList < idDestructibleConstraint , TAG_IDLIST , false > constraints; // Offset: 0x220

    // ribbon to use instead of the model ( needs ribbon class )
    idDeclRibbon2* ribbon; // Offset: 0x238

    // The shape decomposition
    convexDecomposition_t convexDecomposition; // Offset: 0x240

    // Uses Owners axis to orient itsself ( not FX TAG or external )
    bool orientToOwnerAxis; // Offset: 0x248

    // Dont just apply damage once.
    bool applyContinuousDamage; // Offset: 0x249

}; // Size: 0x250

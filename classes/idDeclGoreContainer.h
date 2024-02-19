struct idDeclGoreContainer : idGameDeclTypeInfo
{
    struct cheatCodeOverride_t
    {
        // fx decl override used if this cheat is active
        idDeclFX* fxDecl; // Offset: 0x0

        // sound event override used if this cheat is active
        idSoundEvent* soundEvent; // Offset: 0x8

    }; // Size: 0x10

    struct signatureDeathMapping_t
    {
        // type of signature death, can be multiple types at once if needed
        woundType_t woundType; // Offset: 0x0

        // animweb node name
        idAtomicString stateName; // Offset: 0x8

    }; // Size: 0x10

    // Source model
    idDeclMD6* model; // Offset: 0x90

    // Base model. Skeleton hierarchy will be inferred from this MD6 when applying joint filtering rules. Useful for chainsaw MD6s that may have a different skeleton hierarchy than their original pristine MD6.
    idDeclMD6* skeletonModel; // Offset: 0x98

    // If set, the joint matching for the base skeleton will be based on joint location rather than joint names
    bool useBaseJointPositions; // Offset: 0xA0

    // If set, the wound baking process will use the md6 with the '_old_unwrap' postfix to bake wounds. Makes it possible to migrate wounds authored with a different set of UVs and/or materials.
    bool useOldUnwrap; // Offset: 0xA1

    // Scales the radius of blood spheres
    float bloodSphereRadiusMultiplier; // Offset: 0xA4

    // FX Decl to use for the gore component.
    idDeclFX* fxDecl; // Offset: 0xA8

    // Data used if the confetti cheat code is active
    idDeclGoreContainer::cheatCodeOverride_t confettiCheatCodeOverride; // Offset: 0xB0

    // The wound to turn on for this whole area to wound.
    idList < const idDeclGoreWound * , TAG_IDLIST , false > wounds; // Offset: 0xC0

    // blood splatter decals ( Splotches )
    idList < deferredDecalParams_t , TAG_IDLIST , false > damageSplatterDecals; // Offset: 0xD8

    // blood splatter decals ( Splotches forced to be veritcally down )
    idList < deferredDecalParams_t , TAG_IDLIST , false > damageSplatterDecalsForcePersistent; // Offset: 0xF0

    // blood pools on death.
    idList < gibBloodPoolDecal_t , TAG_IDLIST , false > bloodPools; // Offset: 0x108

    // not completely at rest threshold to trigger a blood pool
    float bloodPoolRagdollLinearVelSumThreshold; // Offset: 0x120

    // override these behaviors.
    idList < goreBehaviorOverride_t , TAG_IDLIST , false > behaviorOverrides; // Offset: 0x128

    // Meshkits that need to be enabled by default.
    idList < idAtomicString , TAG_IDLIST , false > meshKits; // Offset: 0x140

    // list of signature death anims
    idList < idDeclGoreContainer::signatureDeathMapping_t , TAG_IDLIST , false > signatureDeaths; // Offset: 0x158

    idBinaryGoreContainer* binaryGoreContainer; // Offset: 0x170

    idList < unsigned int , TAG_FX , false > materialLocks; // Offset: 0x178

    // overrideslist of override key/property pairs
    idList < overrideGoreProperties_t , TAG_IDLIST , false > overrideProperties; // Offset: 0x190

}; // Size: 0x1A8

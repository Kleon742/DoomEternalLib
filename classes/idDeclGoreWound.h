struct idDeclGoreWound : idGameDeclTypeInfo
{
    struct goreVisuals_t
    {
        // name of joint to zero out
        idAtomicString jointToZeroOut; // Offset: 0x0

        // list of meshes to show
        idList < idAtomicString , TAG_IDLIST , false > meshKits; // Offset: 0x8

        // list of meshes to hide.
        idList < idAtomicString , TAG_IDLIST , false > disableMeskKits; // Offset: 0x20

        // gore spray
        gibSprayDecal_t goreSpray; // Offset: 0x38

        // clipping ellipsoid passed to the gpu
        clippingEllipsoid_t clippingEllipsoid; // Offset: 0x78

        // How long ClipSphere is visible
        idTypesafeTime < int , millisecondUnique_t , 1000 > clippingSphereTime; // Offset: 0xAC

        // spawns blood pool
        gibBloodPoolDecal_t bloodPool; // Offset: 0xB0

        // which wound mask to use.
        idList < int , TAG_IDLIST , false > woundMasks; // Offset: 0xD8

        // Use the clipping spheres as blood spheres.
        bool useClippingAsBlood; // Offset: 0xF0

        // Hide the owning rendermodel.
        bool hideRenderModel; // Offset: 0xF1

        // Hide the owning rendermodel.
        bool woundHideRenderModel; // Offset: 0xF2

        // how many to randomly enable. ( no Half body )
        int randomWoundMin; // Offset: 0xF4

        // how many to randomly enable. ( no Half body )
        int randomWoundMax; // Offset: 0xF8

    }; // Size: 0x100

    struct goreEffects_t
    {
        // Sound to play when this gore wound activates.
        idSoundEvent* soundEvent; // Offset: 0x0

        // Sounds to play in MP when this gore wound activates
        idList < const idSoundEvent * , TAG_IDLIST , false > mpSoundEvents; // Offset: 0x8

        // fx to activate on owner when wound is enabled
        idList < fxCondition_t , TAG_IDLIST , false > fxToStart; // Offset: 0x20

        // fx to deactivateon owner when wound is disabled.
        idList < fxCondition_t , TAG_IDLIST , false > fxToStop; // Offset: 0x38

        // Do we want to screen shake on this full body gib.
        goreScreenShakeParms_t screenShake; // Offset: 0x50

    }; // Size: 0x90

    struct destructible_t
    {
        // how to arrange the destructible pieces.
        idList < idDestructiblePiecePlacement_t , TAG_IDLIST , false > meshPlacement; // Offset: 0x0

        // destructible to use when wound enables.
        idDeclDestructible* decl; // Offset: 0x18

        // tag used for spawning this destructible.
        idAtomicString fxTagName; // Offset: 0x20

        // milestone to award when this destructible is spawned.
        gameStat_t stat; // Offset: 0x28

        // required damage decls to increment the stat above - if NULL no damage requirement
        idDeclAIDamageDeclCollection* requiredDamageForStat; // Offset: 0x30

    }; // Size: 0x38

    struct goreSpawning_t
    {
        // list of entities to spawn
        idList < goreSpawnerInfo_t , TAG_IDLIST , false > spawnEntities; // Offset: 0x0

    }; // Size: 0x18

    struct woundDamageUpgrades_t
    {
        // which decl applies this damage scalar
        idList < const idDeclUpgrade * , TAG_IDLIST , false > upgradeDecls; // Offset: 0x0

        // scales wound damage from inflictor projectiles that have one of the associated upgrades
        float damageScale; // Offset: 0x18

    }; // Size: 0x20

    // If < 1.0 the fraction of the time it will occur even when other conditions are met.
    float chanceOfOccurrence; // Offset: 0x90

    // these context flags are set when this wound activates
    aiContextFlags_t contextFlagsToSet; // Offset: 0x94

    // requirements for this wound to enable.
    goreDamageInfo_t damageRequirements; // Offset: 0x98

    // type of wound piece this is -- this affects how declGoreBehavior can enable gore pieces
    woundType_t woundType; // Offset: 0x100

    // Flags for this wound.
    woundFlags_t woundFlags; // Offset: 0x104

    // pain type for wound
    painType_t requestedPainType; // Offset: 0x108

    // Bake this wound using the current MD6, even if there's an "_old_unwrap" version available.
    bool bypassOldUnwrap; // Offset: 0x10C

    // visuals Wound Visual Behavior.
    idDeclGoreWound::goreVisuals_t visuals; // Offset: 0x110

    // effects
    idDeclGoreWound::goreEffects_t effects; // Offset: 0x210

    // all destructibles activated on this wound activation
    idList < idDeclGoreWound::destructible_t , TAG_IDLIST , false > destructibles; // Offset: 0x2A0

    // spawning Wound Spawning behavior
    idDeclGoreWound::goreSpawning_t spawning; // Offset: 0x2B8

    // damage scaling from upgrade decls
    idList < idDeclGoreWound::woundDamageUpgrades_t , TAG_IDLIST , false > woundDamageUpgradeScalars; // Offset: 0x2D0

    // per-material wound mask data
    idList < woundMaskData_t , TAG_IDLIST , false > woundMasks; // Offset: 0x2E8

    // override these behaviors.
    idList < goreBehaviorOverride_t , TAG_IDLIST , false > behaviorOverrides; // Offset: 0x300

    // AF bodies to unlink from the ragdoll
    idList < idAtomicString , TAG_IDLIST , false > afBodiesToRemove; // Offset: 0x318

    // Death anim for the character.
    idAnimWebPath deathAnim; // Offset: 0x330

    // list of wounds as children
    idList < idDeclGoreWound * , TAG_IDLIST , false > childWounds; // Offset: 0x360

    // Turn these Wounds off if on, when this wound is active.
    idList < idDeclGoreWound * , TAG_IDLIST , false > excludeWounds; // Offset: 0x378

    // list of hit test groups that we should change to a damaged version
    idList < idAtomicString , TAG_IDLIST , false > hitTestGroupsToSwap; // Offset: 0x390

    // override the wound with this wound on weapon type damage.
    idList < weaponWoundOverride_t , TAG_IDLIST , false > weaponSpecificOverride; // Offset: 0x3A8

    // name of the associated targeting group that is disabled when this gore is activated
    idAtomicString targetingGroupToDisable; // Offset: 0x3C0

    // turns off a group associated with a skillshot highlight flash from taking damage
    idAtomicString highlightGroupToDisable; // Offset: 0x3C8

    // disables the "weakpoint" behavior of a damage group when this wound is active
    idAtomicString damageGroupWeakpointToDisable; // Offset: 0x3D0

    // controls how override properties can be applied to this wound
    overrideGorePropertyFlags_t overridePropertyFlags; // Offset: 0x3D8

    // Stats stats to increment when this wound is enabled
    idList < gameStat_t , TAG_IDLIST , false > woundStats; // Offset: 0x3E0

}; // Size: 0x3F8

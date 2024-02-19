struct idDeclAIComponent_KhanMaykr : idDeclAIComponent
{
    struct sacrificeHazard_t
    {
        // Environmental damage trigger for the AI explosion
        idDeclEntityDef* envDmgTriggerDef; // Offset: 0x0

        // FX entity to use for the AI explosion
        idDeclEntityDef* envFXDef; // Offset: 0x8

        // FX entity to use for AI frozen in the sacrifice attack
        idDeclEntityDef* shockedFXDef; // Offset: 0x10

        // damage from the radial blast
        idDeclDamage* radialDmgDef; // Offset: 0x18

        // How long the hazards last
        float hazardLifetimeSec; // Offset: 0x20

    }; // Size: 0x28

    struct sectDestroyGroup_t
    {
        // Group with damage volumes and FX
        idAtomicString damageVolFXGroup; // Offset: 0x0

        // Geo to show when the area is about to disappear
        idAtomicString hazardGeoGroup; // Offset: 0x8

    }; // Size: 0x10

    // if true, the owner of this component is a gold boss (master level)
    bool isGoldBoss; // Offset: 0x98

    // An entity def for the purifying beam phase 1
    idDeclEntityDef* purifyingBeamPhase1Def; // Offset: 0xA0

    // An entity def for the purifying beam phase 2
    idDeclEntityDef* purifyingBeamPhase2Def; // Offset: 0xA8

    // An entity def for the purifying beam phase 3
    idDeclEntityDef* purifyingBeamPhase3Def; // Offset: 0xB0

    // Time (seconds) that is takes for the shield to reactivate once the purifying beam is finished
    float purifyingBeamCooldownTime; // Offset: 0xB8

    // Number of blood punch shots needed to defeat the maykr
    int stage1HealthPipCount; // Offset: 0xBC

    // Number of blood punch shots needed to defeat the maykr
    int stage2HealthPipCount; // Offset: 0xC0

    // Number of pips in stage1 phase 1
    int stage1Phase1PipCount; // Offset: 0xC4

    // Number of pips in stage1 phase 2
    int stage1Phase2PipCount; // Offset: 0xC8

    // Number of pips in stage2 phase 1
    int stage2Phase1PipCount; // Offset: 0xCC

    // Number of pips in stage2 phase 2
    int stage2Phase2PipCount; // Offset: 0xD0

    // Health of the core shield for stage 1
    int stage1ShieldHealth; // Offset: 0xD4

    // Health of the core shield for stage 2
    int stage2ShieldHealth; // Offset: 0xD8

    // Health of the core shield for stage 2
    int stage2bShieldHealth; // Offset: 0xDC

    // Health of the core shield for stage 2
    int stage2cShieldHealth; // Offset: 0xE0

    // Cooldown between damage and the shield regenerating
    float stage1ShieldRegenWait; // Offset: 0xE4

    // Cooldown between damage and the shield regenerating
    float stage2ShieldRegenWait; // Offset: 0xE8

    // HP regen per second
    float stage1ShieldRegenRate; // Offset: 0xEC

    // HP regen per second
    float stage2ShieldRegenRate; // Offset: 0xF0

    // Length of time the KM is invulnerable after a bloodpunch
    float bloodPunchInvulnerableTime; // Offset: 0xF4

    // Length of time the KM is invulnerable after naturally recovering the shield
    float shieldRecoverInvulnerableTime; // Offset: 0xF8

    // Bloodpunch window when shield is down
    float stage1BloodPunchWindow; // Offset: 0xFC

    // Bloodpunch window when shield is down
    float stage2BloodPunchWindow; // Offset: 0x100

    // List of encounter manager names used in stage 1
    idList < idAtomicString , TAG_IDLIST , false > stage1EncounterManagers; // Offset: 0x108

    // Benediction encounter manager
    idAtomicString benedictionEncounter; // Offset: 0x120

    // Group label to search for in finding a benediction spawn
    idAtomicString benedictionGroupLabel; // Offset: 0x128

    // Benediction encounter manager
    idAtomicString stage1MassSummonEncounter; // Offset: 0x130

    // List of encounter manager names used in stage 2
    idList < idAtomicString , TAG_IDLIST , false > stage2EncounterManagers; // Offset: 0x138

    // Benediction encounter manager
    idAtomicString stage2BenedictionEncounter; // Offset: 0x150

    // Mass summon encounter manager
    idAtomicString stage2MassSummonEncounter; // Offset: 0x158

    // modifiers to be applied to a single AI during benediction
    idList < idTypeInfoObjectPtr < idEntityModifier > , TAG_IDLIST , false > benedictionModifiers; // Offset: 0x160

    // Velocity that is applied to the player when on the ground and touching the side walls
    float repelGroundVel; // Offset: 0x178

    // Velocity that is applied to the player when in the air and touching the side walls
    float repelAirVel; // Offset: 0x17C

    // Inner radius for repel
    float repelInnerRadius; // Offset: 0x180

    // Outer radius for repel
    float repelOuterRadius; // Offset: 0x184

    // damage from the radial blast
    idDeclDamage* repelDmgDef; // Offset: 0x188

    // List of all sacrifice hazards left behing each class of AI
    idDeclAIComponent_KhanMaykr::sacrificeHazard_t sacrificeHazards[4]; // Offset: 0x190

    // additional damage modifiers
    idList < damageDeclModifier_t , TAG_IDLIST , false > sacrificeDeclModifiers; // Offset: 0x230

    // How long in seconds the hazards will last
    float hazardLifetime; // Offset: 0x248

    // decl that will be used on the AI to stun them
    idDeclDamage* stunDmgDecl; // Offset: 0x250

    // additional damage modifiers
    idDeclDamage* fullBodyGibDmgDecl; // Offset: 0x258

    // Target nodes for phase 1 movement (use info nulls)
    idList < idAtomicString , TAG_IDLIST , false > movementNodes_phase1; // Offset: 0x260

    // Target nodes for phase 2 movement (use info nulls)
    idList < idAtomicString , TAG_IDLIST , false > movementNodes_phase2; // Offset: 0x278

    // Target nodes for phase 2 aerial attacks (use info nulls)
    idList < idAtomicString , TAG_IDLIST , false > aerialAttackNodes; // Offset: 0x290

    // Tag where the maykr core (sphere) is stored and animates from
    idAtomicString maykrCoreTageName; // Offset: 0x2A8

    // List of info entities that point to geo groups used for sect and destroy
    idList < idDeclAIComponent_KhanMaykr::sectDestroyGroup_t , TAG_IDLIST , false > sectAndDestroyGroups; // Offset: 0x2B0

    // List of info entities that point to geo groups used for sect and destroy during the final phase of stage 2
    idList < idDeclAIComponent_KhanMaykr::sectDestroyGroup_t , TAG_IDLIST , false > sectAndDestroyFinaleGroups; // Offset: 0x2C8

    // Duration of the warning period
    float sectDestroyWarningPeriod; // Offset: 0x2E0

    // Duration of the shock period for cycling in the major sect and destroy
    float sectDestroyShockPeriod; // Offset: 0x2E4

    // Minimum number of times to cycle section in the major sect/destroy
    int minSectDestroyMajorCycles; // Offset: 0x2E8

    // Maximum number of times to cycle section in the major sect/destroy
    int maxSectDestroyMajorCycles; // Offset: 0x2EC

    // Info null ent to mark the stagger location for stage 1
    idAtomicString stage1StaggerNode; // Offset: 0x2F0

    // Info null ent to mark the stagger location for stage 2
    idAtomicString stage2StaggerNode; // Offset: 0x2F8

    // list of damage defs that the maykr is vulnerable to
    idList < const idDeclDamage * , TAG_IDLIST , false > vulnerableDmgDefs; // Offset: 0x300

    // list of anims use for movement
    idList < idAnimWebPath , TAG_IDLIST , false > movementAnims; // Offset: 0x318

    // Length to project out from the KM to perform ground traces
    float aerialTestLength; // Offset: 0x330

    // The angle offset from the forward vector (left/right is determined by the owner)
    idTypesafeNumber < float , DegreesUnique_t > aerialPathAngleOffset; // Offset: 0x334

    // The cone spread around the test path
    idTypesafeNumber < float , DegreesUnique_t > aerialPathAngleSpread; // Offset: 0x338

    // Number of projectiles tested along the path
    int aerialProjectileCount; // Offset: 0x33C

    // Time it takes for the aerial projectiles to travel
    float aerialFlightTime; // Offset: 0x340

    // Time it takes for the aerial projectiles to detonate once they have landed
    float aerialDetonationTime; // Offset: 0x344

    // Additional random time offset for detonation
    float aerialDetonationRange; // Offset: 0x348

    // Time between projectile spawns
    float aerialSpawnInterval; // Offset: 0x34C

    // Spread left/right from the ideal projection
    float aerialPathLateralSpread; // Offset: 0x350

    // The initial angle in the aerial sweep
    idTypesafeNumber < float , DegreesUnique_t > aerialSweepStartAngle; // Offset: 0x354

    // The full arc of the aerial sweep
    idTypesafeNumber < float , DegreesUnique_t > aerialSweepTotalArc; // Offset: 0x358

    // Entity def for the aerial projectile
    idDeclEntityDef* aerialProjectileDef; // Offset: 0x360

    // damage from the aerial projectile radial blast
    idDeclDamage* aerialRadialDmgDef; // Offset: 0x368

    // Damage groups for shield damage
    idList < idAtomicString , TAG_IDLIST , false > damageGroups; // Offset: 0x370

    // Damage groups for when the KM is invulnerable
    idList < idAtomicString , TAG_IDLIST , false > damageGroupsInvulnerable; // Offset: 0x388

    // Mesh kit name for the green crack
    idAtomicString greenCrackMeshKit; // Offset: 0x3A0

    // Gore wound groups listed in order they will be removed as the KM is bloodpunched
    idList < idList < const idDeclGoreWound * > , TAG_IDLIST , false > goreWoundGroups; // Offset: 0x3A8

    // decl for blood punch loot droppable items
    idDeclLootDropComponent* bloodPunchLootDropComp; // Offset: 0x3C0

    // Info null ent to mark the stagger location for stage 1
    idAtomicString tutorialEntity; // Offset: 0x3C8

    // Sound for shield starting to regen
    idSoundEvent* sound_shieldRegenStart; // Offset: 0x3D0

    // Sound for shield completely regen'ed
    idSoundEvent* sound_shieldRegenComplete; // Offset: 0x3D8

    // Entity to activate to get the tooltip to activate
    idAtomicString tooltipEntityName; // Offset: 0x3E0

}; // Size: 0x3E8

struct idDeclAIComponent_Samuel : idDeclAIComponent
{
    struct phase2TimerStage_t
    {
        // Duration of the stage
        float duration; // Offset: 0x0

        // Flag to raise when the duration is reached
        idAtomicString userFlag; // Offset: 0x8

    }; // Size: 0x10

    // stage 1 health
    int stage1_health; // Offset: 0x98

    // stage 2 health
    int stage2_health; // Offset: 0x9C

    // decl for loot on punch
    idDeclLootDropComponent* healthBreakLootDropComp; // Offset: 0xA0

    // decl for loot from tendril
    idDeclLootDropComponent* tendrilEyeLootDropComp; // Offset: 0xA8

    // For spawning during thresholds, left tag
    idAtomicString spiritSpawnTag_left; // Offset: 0xB0

    // For spawning during thresholds, right tag
    idAtomicString spiritSpawnTag_right; // Offset: 0xB8

    // __def const idAtomicStringspiritSpawnTag_center; For spawning during thresholds, center tag Left spawner name for threshold spawning
    idAtomicString spiritSpawnerLeft; // Offset: 0xC0

    // Right spawner name for threshold spawning
    idAtomicString spiritSpawnerRight; // Offset: 0xC8

    // Right spawner name for threshold spawning
    idAtomicString spiritLeft_P1_validGroupLabel; // Offset: 0xD0

    // Right spawner name for threshold spawning
    idAtomicString spiritRight_P1_validGroupLabel; // Offset: 0xD8

    // Right spawner name for threshold spawning
    idAtomicString spiritLeft_P2_validGroupLabel; // Offset: 0xE0

    // Right spawner name for threshold spawning
    idAtomicString spiritRight_P2_validGroupLabel; // Offset: 0xE8

    // Number of spline entries in each shield ribbon
    int shieldSplineNumSegments; // Offset: 0xF0

    // ribbon for the normal shield link
    idDeclRibbon2* shieldRibbonNormal; // Offset: 0xF8

    // ribbon for the active shield link
    idDeclRibbon2* shieldRibbonActive; // Offset: 0x100

    // FX entity to play at the starting point for the ribbon
    idDeclEntityDef* shieldRibbonStartFX; // Offset: 0x108

    // FX entity to play at the end point for the ribbon
    idDeclEntityDef* shieldRibbonEndFX; // Offset: 0x110

    // Entity for the bubble shield (needs to be an idSamuelShield entity type)
    idDeclEntityDef* bubbleShieldEntityDef; // Offset: 0x118

    // For spawning during thresholds, left ta
    idAtomicString tendrilEyeSpawnTag; // Offset: 0x120

    // Entity for the tendril eye (needs to be an idTendrilEye entity type)
    idDeclEntityDef* tendrilEyeEntityDef; // Offset: 0x128

    // Min delay between tendril eye spawns
    int tendrilEye_minDelay; // Offset: 0x130

    // Max delay between tendril eye spawns
    int tendrilEye_maxDelay; // Offset: 0x134

    // The health percentage where samur will start spawning tendril eyes in phase 1
    float tendrilEye_stage1HealthPct; // Offset: 0x138

    // The health percentage where samur will start spawning tendril eyes in phase 3
    float tendrilEye_stage3HealthPct; // Offset: 0x13C

    // Summoning template for spirits in phase 1
    idAtomicString phase1_spiritTemplate; // Offset: 0x140

    // Summoning template for minions in phase 1
    idAtomicString phase1_minionsTemplate; // Offset: 0x148

    // Horizontal spread for rapid shot projectiles (degrees)
    float rapidShot_wedgeAngleDeg; // Offset: 0x150

    // Z variations in the rapid shot (+/- meters)
    float rapidShot_zVariation; // Offset: 0x154

    // Z variations in the rapid shot (+/- meters)
    float rapidShot_speed; // Offset: 0x158

    // Number of projectiles to launch at once
    int rapidShot_projectileCount; // Offset: 0x15C

    // Projectile to spawn for rapid shot
    idDeclEntityDef* rapidShot_entityDef; // Offset: 0x160

    // rapid fire muzzle tag left
    idAtomicString rapidShot_muzzleLeft; // Offset: 0x168

    // rapid fire muzzle tag right
    idAtomicString rapidShot_muzzleRight; // Offset: 0x170

    // Min number of rapid fire loops to play
    int rapidShot_minCount; // Offset: 0x178

    // Max number of rapid fire loops to play
    int rapidShot_maxCount; // Offset: 0x17C

    // Min delay between starting a new series of rapid fire shots
    int rapidShot_minDelay; // Offset: 0x180

    // Max delay between starting a new series of rapid fire shots
    int rapidShot_maxDelay; // Offset: 0x184

    // encounter to control adds for phase 1
    idAtomicString phase1MinionEncounter; // Offset: 0x188

    // encounter to control adds for phase 3
    idAtomicString phase3MinionEncounter; // Offset: 0x190

    // manager info objects that will target all possible move locations for a tendril eye.
    idList < idAtomicString , TAG_IDLIST , false > phase1TenrilTargetGroups; // Offset: 0x198

    // manager info objects that will target all possible move locations for a tendril eye.
    idList < idAtomicString , TAG_IDLIST , false > phase3TenrilTargetGroups; // Offset: 0x1B0

    // position to teleport samuel to when he hits the first health break and spawns a shield
    idAtomicString phase1HealthBreakMoveTarget; // Offset: 0x1C8

    // position to teleport samuel to when phase 2 starts
    idAtomicString phase2MoveTarget; // Offset: 0x1D0

    // position to teleport samuel to when phase 3 starts
    idAtomicString phase3MoveTarget; // Offset: 0x1D8

    // position to teleport samuel to when he hits the second health break and spawns a shield
    idAtomicString phase3HealthBreakMoveTarget; // Offset: 0x1E0

    // relay to trigger the spectacle cam for the the final stagger
    idAtomicString phase3StaggerSpectacleCam; // Offset: 0x1E8

    // Combat stages based on health regeneration for phase2
    idList < idDeclAIComponent_Samuel::phase2TimerStage_t , TAG_IDLIST , false > phase2HealthStages; // Offset: 0x1F0

    // Entity that points to other teleport points on top of the columns
    idAtomicString p3ColumnTeleportGroup; // Offset: 0x208

    // Entity that points to other teleport points on top of the columns
    idAtomicString finalStaggerTriggerActivate; // Offset: 0x210

    // Gore wound 1A
    idDeclGoreWound* stage1WoundA; // Offset: 0x218

    // Gore wound 1B
    idDeclGoreWound* stage1WoundB; // Offset: 0x220

    // Gore wound 3A
    idDeclGoreWound* stage3WoundA; // Offset: 0x228

    // Gore wound 3B
    idDeclGoreWound* stage3WoundB; // Offset: 0x230

}; // Size: 0x238

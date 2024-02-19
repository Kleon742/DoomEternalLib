struct idDeclAIComponent_Gladiator : idDeclAIComponent
{
    // GLADIATOR INFO enable gold boss attacks
    bool gold_boss; // Offset: 0x98

    // stage 1 health
    int stage1_health; // Offset: 0x9C

    // stage 2 health
    int stage2_health; // Offset: 0xA0

    // Name of the encounter entity the gladiator will be added to after being spawned
    idAtomicString parentEncounterName; // Offset: 0xA8

    // Name of the entity that marks the center of the arena.
    idAtomicString arenaCenterMarkerName; // Offset: 0xB0

    // An entity def for a target that will be spawned and moved around the arena to be used as a move target
    idDeclEntityDef* moveTargetEntity; // Offset: 0xB8

    // Model for the head of the flail
    idDeclEntityDef* etherealSkullEntityDef; // Offset: 0xC0

    // joint on the shield MD6 to attach FX (starting with the modeled skull)
    idAtomicString etherealSkullShieldJoint; // Offset: 0xC8

    // Damage from a skull hit
    idDeclDamage* etherealSkullDamage; // Offset: 0xD0

    // Travel Speed for the skull
    float etherealSkullSpeed; // Offset: 0xD8

    // Lifetime of the ethereal skull
    float etherealSkullLifetime; // Offset: 0xDC

    // Number of AI to spawn from the ethereal rush
    int etherealSkullSpawnCount; // Offset: 0xE0

    // Decl to enable full body gib on the AI
    idDeclDamage* fullBodyGoreDamage; // Offset: 0xE8

    // Group label to use for minions that have been summoned during the fight
    idAtomicString minionGroupLabel; // Offset: 0xF0

    // The talking shield def used in the first phase
    idDeclEntityDef* talkingShieldEntityDef; // Offset: 0xF8

    // tag on the gladiator MD6 to attach the talking shield
    idAtomicString talkingShieldTag; // Offset: 0x100

    // Model for the projectile shield (needs to be an idProjectileShield entity type)
    idDeclEntityDef* projectileShieldEntityDef; // Offset: 0x108

    // tag on the gladiator MD6 to attach the projectile shield
    idAtomicString projectileShieldTag; // Offset: 0x110

    // tag on the gladiator MD6 to attach the left projectile shield
    idAtomicString projectileShieldLeftTag; // Offset: 0x118

    // This is the damage decl to test against to return fire when the projectile shield is up
    idDeclDamage* bfgZapDamage; // Offset: 0x120

    // Heat cone effect for bullrush
    idDeclEntityDef* bullrushHeatConeEntityDef; // Offset: 0x128

    // tag on the gladiator MD6 to attach the heat cone
    idAtomicString bullrushHeatConeTag; // Offset: 0x130

    // Damage from a bullrush hit
    idDeclDamage* bullrushDamage; // Offset: 0x138

    // The inner radius for the shield bash repel
    float bullrushInnerRepel; // Offset: 0x140

    // The outer radius for the shield bash repel
    float bullrushOuterRepel; // Offset: 0x144

    // Animation to foreshadow the direct strike
    idAnimWebPath directStrikeShieldAnim; // Offset: 0x148

    // Animation to foreshadow the hop and strike
    idAnimWebPath hopStrikeShieldAnim; // Offset: 0x178

    // Animation to foreshadow the overhead and strike
    idAnimWebPath overheadShieldAnim; // Offset: 0x1A8

    // Animation to foreshadow the ethereal rush
    idAnimWebPath etherealRushShieldAnim; // Offset: 0x1D8

    // Projectile def to use for creating projectiles in the clearout attack
    idDeclEntityDef* clearOutProjectile; // Offset: 0x208

    // Clear out projectile speed
    float clearOutProjectileSpeed; // Offset: 0x210

    // Clear out projectile angular spread
    float clearOutProjectileAngleSpread; // Offset: 0x214

    // Clear out projectile count
    int clearOutProjectileCount; // Offset: 0x218

    // Distance from the player the gladiator lands during the hop strike
    float hopStrikeTargetOffset; // Offset: 0x21C

    // Distance past the player the gladiator attempts to slide during the bullrush attack
    float bullRushTargetOffset; // Offset: 0x220

    // For spawning during thresholds, left tag
    idAtomicString minionSpawnTag_left; // Offset: 0x228

    // For spawning during thresholds, right tag
    idAtomicString minionSpawnTag_right; // Offset: 0x230

    // For spawning during thresholds, center tag
    idAtomicString minionSpawnTag_center; // Offset: 0x238

    // Decls to use when spawning from the ethereal rush
    idList < const idDeclEntityDef * , TAG_IDLIST , false > etherealRushSpawnDecls; // Offset: 0x240

    // Center spawner name for threshold spawning
    idAtomicString thresholdSpawnerCenter; // Offset: 0x258

    // Left spawner name for threshold spawning
    idAtomicString thresholdSpawnerLeft; // Offset: 0x260

    // Right spawner name for threshold spawning
    idAtomicString thresholdSpawnerRight; // Offset: 0x268

    // Blend from 0 (wide) to 1 (narrow)
    float jacobsLadderBlend; // Offset: 0x270

    // FLAIL INFO Model for the head of the flail
    idDeclEntityDef* flailHeadEntityDef; // Offset: 0x278

    // Model to use for FX and collision when the flail is spun in front of the gladiator
    idDeclEntityDef* flailShieldEntityDef; // Offset: 0x280

    // projectile entity to use to create a damage cylinder when the flail chain is snapped.
    idDeclDamage* chainPopDamage; // Offset: 0x288

    // List of ribbons to use for the energy chain between the handle and head
    idList < const idDeclRibbon2 * , TAG_IDLIST , false > flailChainRibbonList; // Offset: 0x290

    // Ribbon to use for the trail left behind the flail head
    idList < const idDeclRibbon2 * , TAG_IDLIST , false > flailHeadTrailRibbonList; // Offset: 0x2A8

    // List of ribbons to use for the jacobs ladder arc
    idList < const idDeclRibbon2 * , TAG_IDLIST , false > jacobsLadderArcRibbonList; // Offset: 0x2C0

    // List of ribbons to use for the jacobs ladder peak
    idList < const idDeclRibbon2 * , TAG_IDLIST , false > jacobsLadderPeakRibbonList; // Offset: 0x2D8

    // List of ribbons to use for the jacobs ladder wall
    idList < const idDeclRibbon2 * , TAG_IDLIST , false > jacobsLadderWallRibbonList; // Offset: 0x2F0

    // FX entity that will be attached to either end of the jacob's ladder arc
    idDeclEntityDef* jacobsLadderArcEndEntityDef; // Offset: 0x308

    // An entity def for jacobs ladder wall collision
    idDeclEntityDef* jacobsLadderWallCollision; // Offset: 0x310

    // FX entity that will used along the top of the wall
    idDeclEntityDef* jacobsLadderWallFXEntityDef; // Offset: 0x318

    // Approximate spacing (in meters) between wall FX entities
    float jacobsLadderWallFXSpacing; // Offset: 0x320

    // Height of the jacobs ladder walls
    float jacobsLadderWallHeight; // Offset: 0x324

    // Forward travel speed of the jacob's ladder arc
    float jacobsLadderFwdSpeed; // Offset: 0x328

    // Sideways roll of the sine wave used for the jacob's ladder
    float jacobsLadderRollSpeed; // Offset: 0x32C

    // width of the peak in the sine wave used for the jacob's ladder
    float jacobsLadderValleyWidth; // Offset: 0x330

    // This is the exponent in the sine wave, sin( theta )^pow, used to change the curve shape
    float jacobsLadderCurveExponent; // Offset: 0x334

    // Velocity that is applied to the player when on the ground and touching the side walls
    float jacobsLadderBounceGroundVel; // Offset: 0x338

    // Velocity that is applied to the player when in the air and touching the side walls
    float jacobsLadderBounceAirVel; // Offset: 0x33C

    // Distance in meters it takes the wave to develop
    float jacobsLadderGrowthDistance; // Offset: 0x340

    // Radius of the field surrounding the gladiator during the JL attack.
    float jacobsLadderFieldRadius; // Offset: 0x344

    // Radius of the field blast synch'ed with the arc during the JL attack.
    float jacobsLadderArcBlastRadius; // Offset: 0x348

    // FX entity that will used in front of the gladiator as a part of the initial arc blast
    idDeclEntityDef* jacobsLadderArcBlastFXEnt; // Offset: 0x350

    // Beam speaker entity that will be updated with the arcs
    idDeclEntityDef* jacobsLadderArcSpeakerEnt; // Offset: 0x358

    // Beam speaker entity that will be lined up with the walls of the jacob's ladder
    idDeclEntityDef* jacobsLadderWallSpeakerEnt; // Offset: 0x360

    // Damage applied to the player when hit
    idDeclDamage* flailPlayerDamage; // Offset: 0x368

    // Damage applied to the player when touching the chain
    idDeclDamage* chainPlayerDamage; // Offset: 0x370

    // Damage applied to the player when touching the chains during the jacobs ladder
    idDeclDamage* jacobsLadderChainDamage; // Offset: 0x378

    // Damage applied to the player when touching the arc during the jacobs ladder
    idDeclDamage* jacobsLadderArcDamage; // Offset: 0x380

    // Damage applied when the flail strikes the ground
    idDeclDamage* flailBashRadialDamage; // Offset: 0x388

    // Damage applied when the flail pops mid-air
    idDeclDamage* flailPopRadialDamage; // Offset: 0x390

    // Duration of the electric wall that is raised during stage 1
    float electricWallDuration; // Offset: 0x398

    // Joint to connect the flail head to.
    idAtomicString rightFlailHeadJoint; // Offset: 0x3A0

    // Joint to attach the chain ribbon to the right flail handle
    idAtomicString rightFlailHandleJoint; // Offset: 0x3A8

    // Joint to connect the flail head to.
    idAtomicString leftFlailHeadJoint; // Offset: 0x3B0

    // Joint to attach the chain ribbon to the left flail handle
    idAtomicString leftFlailHandleJoint; // Offset: 0x3B8

    // List of joints (in order from base to tip) to build the flail chain from
    idList < idAtomicString , TAG_IDLIST , false > rightFlailChainJoints; // Offset: 0x3C0

    // List of joints (in order from base to tip) to build the flail chain from
    idList < idAtomicString , TAG_IDLIST , false > leftFlailChainJoints; // Offset: 0x3D8

    // entity that has the chain link model
    idDeclEntityDef* chainEntityDecl; // Offset: 0x3F0

    // name of chain link model
    idStrRenderModel chainLinkModelName; // Offset: 0x3F8

    // Speed that the flail will travel when tossed at the player {{ units = m / s}}
    float flailTravelSpeed; // Offset: 0x400

    // This is the max additional extension beyond the intended target {{ units = m }}
    float maxFlailOvershoot; // Offset: 0x404

    // The length of the chain during the clear-out swing {{ units = m }}
    float clearOutChainLength; // Offset: 0x408

    // Min extension for the hop strike flail chain
    float hopStrike_minExtension; // Offset: 0x40C

    // Max extension for the hop strike flail chain
    float hopStrike_maxExtension; // Offset: 0x410

    // TEMP: THis is the amount of time the gladiator will spend in the stuck cycle
    float stuckTimer; // Offset: 0x414

    // Length of the chain (from the base anim) during the single handed direct strike
    float directStrikeChainLength; // Offset: 0x418

    // loot drop decl for glory hits
    idDeclLootDropComponent* gloryHitLoot; // Offset: 0x420

    // loot drop decl for combo hits
    idDeclLootDropComponent* comboHitLoot; // Offset: 0x428

    // loot drop decl for falter (boss - hp thresholds)
    idDeclLootDropComponent* healthBreakLoot; // Offset: 0x430

    // Amount damage is scaled during the stagger loop
    float staggerDamageScale; // Offset: 0x438

    // The inner radius for the shield bash repel
    float shieldBashInnerRepel; // Offset: 0x43C

    // The outer radius for the shield bash repel
    float shieldBashOuterRepel; // Offset: 0x440

    // FX condition to call to end the projectile shield
    fxCondition_t projShieldKillFXCond; // Offset: 0x444

    // Sound to call to kill the projectile shield loop
    idSoundEvent* projShieldKillSound; // Offset: 0x448

    // Sound to call to when the gladiator performs a projectile shield rush
    idSoundEvent* projShieldRushSound; // Offset: 0x450

    // Gore wounds that will be removed when starting stage 2
    idList < const idDeclGoreWound * , TAG_IDLIST , false > stage1ArmorWounds; // Offset: 0x458

    // The interaction decl used to complete stage 1. This is being removed from the AI as to avoid any potential for it triggering during stage 2
    idDeclSyncInteraction* stage1InteractionDecl; // Offset: 0x470

    // GOLD ADDITIONS entity def to use to spawn a sound box to approximate hazard sounds
    idDeclEntityDef* flailHazardSoundBoxEntity; // Offset: 0x478

    // entity def to use to place hazards
    idDeclEntityDef* flailHazardEntDef; // Offset: 0x480

    // Duration of hazard trail
    float flailHazardLifetime; // Offset: 0x488

    // modifiers to be applied to a single AI during benediction
    idList < idTypeInfoObjectPtr < idEntityModifier > , TAG_IDLIST , false > benedictionModifiers; // Offset: 0x490

}; // Size: 0x4A8

struct idDeclAIComponent_IconOfSin : idDeclAIComponent
{
    struct armorGroup_t
    {
        // Name for the armor group
        idAtomicString armorGroupName; // Offset: 0x0

        // Name of the mesh kit associated with this armor group
        idAtomicString meshKitName; // Offset: 0x8

        // Name of the mesh kit associated with this underlying body mesh
        idAtomicString bodyMeshKitName; // Offset: 0x10

        // Name of the mesh kit associated with this underlying body shield mesh
        idAtomicString bodyShieldMeshKitName; // Offset: 0x18

        // Name of the tag to attach the targeting AI proxy to for rocket lock on
        idAtomicString targetingTagName; // Offset: 0x20

        // Damage groups linked to the health of this armor group
        idList < idAtomicString , TAG_IDLIST , false > damageGroups; // Offset: 0x28

        // Damage groups that should be activated once this armor group has been depleted
        idList < idAtomicString , TAG_IDLIST , false > damageGroupsInvulnerable; // Offset: 0x40

        // Neighbor groups
        idList < idAtomicString , TAG_IDLIST , false > neighborGroup; // Offset: 0x58

        // Initial health for this armor group
        float startingHealth; // Offset: 0x70

        // AI memory key that will be read by the AI FSM to trigger the proper detonation animation
        idAtomicString detonationFsmMemKey; // Offset: 0x78

        // AI memory key that will be compared against the animation key to remove the armor piece
        idAtomicString detonationAnimMemKey; // Offset: 0x80

        // Map alembic entity to show and play when this armor piece explodes
        idAtomicString detonationAlembicEnt; // Offset: 0x88

        // The FX condition to start and stop when the piece has malfunctioned and is ready to explode.
        fxCondition_t malfunctionFXCondition; // Offset: 0x90

        // Material remaps for the initial gore phase
        idList < materialRemap_t , TAG_IDLIST , false > goreMaterial_RemapList; // Offset: 0x98

        // Name of the mesh kit associated with the first stage of gore
        idAtomicString dmgState1_meshKitName; // Offset: 0xB0

        // Name of the mesh kit associated with the second stage of gore
        idAtomicString dmgState2_meshKitName; // Offset: 0xB8

        // Material remap for the texture swap gore phase
        float materialSwap_Health; // Offset: 0xC0

        // Health damage required to initiate the swap on the first damage state
        float dmgState1_health; // Offset: 0xC4

        // Health damage required to initiate the swap on the second damage state
        float dmgState2_health; // Offset: 0xC8

        // Gore wound for the material swap transition
        idDeclGoreWound* materialSwapWound; // Offset: 0xD0

        // Gore wound transition 1
        idDeclGoreWound* goreWound1; // Offset: 0xD8

        // Gore wound transition 2
        idDeclGoreWound* goreWound2; // Offset: 0xE0

        // any map entities that need to be triggered once this gore group has reached its final stage.
        idList < idAtomicString , TAG_IDLIST , false > entsToTrigger_Stage2; // Offset: 0xE8

    }; // Size: 0x100

    struct minionDeathHazard_t
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

    // if true, the owner of this component is a gold boss (master level)
    bool isGoldBoss; // Offset: 0x98

    // stage 1 health
    int stage1_health; // Offset: 0x9C

    // stage 2 health
    int stage2_health; // Offset: 0xA0

    // List of different managers or zones to drop meteors.
    idList < idAtomicString , TAG_IDLIST , false > meteorTargetManagers; // Offset: 0xA8

    // List of different managers or zones to drop meteors for stage 2.
    idList < idAtomicString , TAG_IDLIST , false > meteorTargetManagers_Stage2; // Offset: 0xC0

    // List of different managers or zones to drop meteors for stage 2.
    idList < idAtomicString , TAG_IDLIST , false > meteorTargetManagers_Stage2A; // Offset: 0xD8

    // List of different managers or zones to drop meteors for stage 2.
    idList < idAtomicString , TAG_IDLIST , false > meteorTargetManagers_Stage2B; // Offset: 0xF0

    // List of different managers or zones to drop meteors for stage 2.
    idList < idAtomicString , TAG_IDLIST , false > meteorTargetManagers_Stage2C; // Offset: 0x108

    // Range of meteors to drop
    idRange < int > meteorCount; // Offset: 0x120

    // entity def to use to spawn meteor crater
    idDeclEntityDef* meteorCraterEntityDef; // Offset: 0x128

    // Locations for the icon to return to in stage 2
    idList < idAtomicString , TAG_IDLIST , false > stage2RechargeLocations; // Offset: 0x130

    // Anim web node reference
    idAnimWebPath laserReferenceNode; // Offset: 0x148

    // The laser tag name in the md6 (under the prop)
    idAtomicString laserTagName; // Offset: 0x178

    // The laser prop name in the md6 (if not _info)
    idAtomicString laserPropName; // Offset: 0x180

    // Duration of the aim cycle in the laser shot
    float laserAimTime; // Offset: 0x188

    // amount of time between the warning sound and the actual shot
    float laserWarningTime; // Offset: 0x18C

    // The laser tag name in the md6 (under the prop)
    idAtomicString markOfBeastTagName; // Offset: 0x190

    // The laser prop name in the md6 (if not _info)
    idAtomicString markOfBeastPropName; // Offset: 0x198

    // Projectile decl used for the mark of the beast
    idDeclProjectile* markOfBeastProjectileDecl; // Offset: 0x1A0

    // The head armor tag name in the md6 (under the prop)
    idAtomicString headArmorTag; // Offset: 0x1A8

    // The head armor prop name in the md6 (if not _info)
    idAtomicString headArmorPropName; // Offset: 0x1B0

    // entity def for the head armor
    idDeclEntityDef* headArmorEntity; // Offset: 0x1B8

    // upper left arm armor tag name in the md6 (under the prop)
    idAtomicString upperArmLeftArmorTag; // Offset: 0x1C0

    // The head armor prop name in the md6 (if not _info)
    idAtomicString upperArmLeftArmorPropName; // Offset: 0x1C8

    // entity def for the upper left arm
    idDeclEntityDef* upperArmLeftArmorEntity; // Offset: 0x1D0

    // forearm left armor tag name in the md6 (under the prop)
    idAtomicString forearmLeftArmorTag; // Offset: 0x1D8

    // The head armor prop name in the md6 (if not _info)
    idAtomicString forearmLeftArmorPropName; // Offset: 0x1E0

    // entity def for the forearm left
    idDeclEntityDef* forearmLeftArmorEntity; // Offset: 0x1E8

    // upper right arm armor tag name in the md6 (under the prop)
    idAtomicString upperArmRightArmorTag; // Offset: 0x1F0

    // The head armor prop name in the md6 (if not _info)
    idAtomicString upperArmRightArmorPropName; // Offset: 0x1F8

    // entity def for the upper right arm
    idDeclEntityDef* upperArmRightArmorEntity; // Offset: 0x200

    // forearm right armor tag name in the md6 (under the prop)
    idAtomicString forearmRightArmorTag; // Offset: 0x208

    // The head armor prop name in the md6 (if not _info)
    idAtomicString forearmRightArmorPropName; // Offset: 0x210

    // entity def for the forearm right
    idDeclEntityDef* forearmRightArmorEntity; // Offset: 0x218

    // chest left armor tag name in the md6 (under the prop)
    idAtomicString chestLeftArmorTag; // Offset: 0x220

    // The head armor prop name in the md6 (if not _info)
    idAtomicString chestLeftArmorPropName; // Offset: 0x228

    // entity def for the chest left
    idDeclEntityDef* chestLeftArmorEntity; // Offset: 0x230

    // chest right armor tag name in the md6 (under the prop)
    idAtomicString chestRightArmorTag; // Offset: 0x238

    // The head armor prop name in the md6 (if not _info)
    idAtomicString chestRightArmorPropName; // Offset: 0x240

    // entity def for the chest right
    idDeclEntityDef* chestRightArmorEntity; // Offset: 0x248

    // chest right armor tag name in the md6 (under the prop)
    idAtomicString torsoArmorTag; // Offset: 0x250

    // The head armor prop name in the md6 (if not _info)
    idAtomicString torsoArmorPropName; // Offset: 0x258

    // entity def for the chest right
    idDeclEntityDef* torsoArmorEntity; // Offset: 0x260

    // Armor groups
    idList < idDeclAIComponent_IconOfSin::armorGroup_t , TAG_IDLIST , false > armorGroups; // Offset: 0x268

    // Tag for flame hand left
    idAtomicString flameHandLeftTag; // Offset: 0x280

    // Tag for flame hand right
    idAtomicString flameHandRightTag; // Offset: 0x288

    // Fist pound left tag
    idAtomicString fistPoundLeftTag; // Offset: 0x290

    // Fist pound right tag
    idAtomicString fistPoundRightTag; // Offset: 0x298

    // Tag for punch tests
    idAtomicString punchLeftHazardTag1; // Offset: 0x2A0

    // Tag for punch tests
    idAtomicString punchLeftHazardTag2; // Offset: 0x2A8

    // Tag for punch tests
    idAtomicString punchLeftHazardTag3; // Offset: 0x2B0

    // Tag for punch tests
    idAtomicString punchLeftHazardTag4; // Offset: 0x2B8

    // Tag for punch tests
    idAtomicString punchRightHazardTag1; // Offset: 0x2C0

    // Tag for punch tests
    idAtomicString punchRightHazardTag2; // Offset: 0x2C8

    // Tag for punch tests
    idAtomicString punchRightHazardTag3; // Offset: 0x2D0

    // Tag for punch tests
    idAtomicString punchRightHazardTag4; // Offset: 0x2D8

    // entity def to use to place hazards during flame hands
    idDeclEntityDef* flameHandHazardEntDef; // Offset: 0x2E0

    // entity def to use to place hazards during flame hands during the transition between the s1 and s2
    idDeclEntityDef* flameHandLoopingHazardEntDef; // Offset: 0x2E8

    // entity def to use to place hazards during ground pounds
    idDeclEntityDef* groundPoundHazardEntDef; // Offset: 0x2F0

    // Duration for flamehand hazards
    float flameHandHazardTimeoutSec; // Offset: 0x2F8

    // Duration for ground pound hazards
    float groundPoundHazardTimeoutSec; // Offset: 0x2FC

    // all encounters that are used to spawn minions in stage 1
    idList < idAtomicString , TAG_IDLIST , false > stage1_minionEncounters; // Offset: 0x300

    // all encounters that are used to spawn minions in stage 2
    idList < idAtomicString , TAG_IDLIST , false > stage2_minionEncounters; // Offset: 0x318

    // all encounters that are used to summon in stage 2
    idList < idAtomicString , TAG_IDLIST , false > stage2_summmonEncounters; // Offset: 0x330

    // all encounters that are used to spawn fodder in stage 2
    idList < idAtomicString , TAG_IDLIST , false > stage2_fodderEncounters; // Offset: 0x348

    // default spawn group that will be assigned to summoning in Pos A
    idAtomicString stage2_summonSpawnGroupA; // Offset: 0x360

    // default spawn group that will be assigned to summoning in Pos B
    idAtomicString stage2_summonSpawnGroupB; // Offset: 0x368

    // default spawn group that will be assigned to summoning in Pos C
    idAtomicString stage2_summonSpawnGroupC; // Offset: 0x370

    // default spawn group for zombies and aerial spawns in Pos A
    idAtomicString stage2_fodderSpawnGroupA; // Offset: 0x378

    // default spawn group for zombies and aerial spawns in Pos B
    idAtomicString stage2_fodderSpawnGroupB; // Offset: 0x380

    // default spawn group for zombies and aerial spawns in Pos C
    idAtomicString stage2_fodderSpawnGroupC; // Offset: 0x388

    // damage decl to kill ai before summons
    idDeclDamage* fullBodyGibDmgDecl; // Offset: 0x390

    // entity def to use to spawn ai proxies for lock on targeting
    idDeclEntityDef* aiProxyTargetEntityDef; // Offset: 0x398

    // entity def to use to spawn a sound box to approximate flame hazard sounds
    idDeclEntityDef* flameHandSoundBoxEntity; // Offset: 0x3A0

    // List of all death hazards left behind each class of AI
    idDeclAIComponent_IconOfSin::minionDeathHazard_t minionDeathHazards[4]; // Offset: 0x3A8

    // If its detected the player was repelled away from the radial blastm, apply this direct damage
    idDeclDamage* groundPoundDirectDmgDef; // Offset: 0x448

    // damage from the ground pound radial blast
    idDeclDamage* groundPoundDmgDef; // Offset: 0x450

    // Screen shake decl for ground pounds
    idDeclAdvancedViewShake* groundPoundShakeDef; // Offset: 0x458

    // First point in a line that will be tested for proximity to repel the player during building smashes
    idAtomicString smashRepelLineS1Pt1; // Offset: 0x460

    // Second point in a line that will be tested for proximity to repel the player during building smashes
    idAtomicString smashRepelLineS1Pt2; // Offset: 0x468

    // Sound to call to when each individula piece of the icon of sin's armor become disfunctional
    idSoundEvent* armorDisabledSound; // Offset: 0x470

    // Sound to call to when each individula piece of the icon of sin's armor become disfunctional
    idSoundEvent* flamehandHazardGroupSound; // Offset: 0x478

    // Sound to call to when the laser is started. This will end the laser sound.
    idSoundEvent* laserLoopSound; // Offset: 0x480

    // Sound to call to when the laser is completed. This will end the laser sound.
    idSoundEvent* laserFinishedSound; // Offset: 0x488

    // Amount of damage that needs to accumulate before activating the tooltip
    float goreDamageTootipThreshold; // Offset: 0x490

    // Entity to activate to get the tooltip to activate
    idAtomicString p2TooltipEntityName; // Offset: 0x498

}; // Size: 0x4A0

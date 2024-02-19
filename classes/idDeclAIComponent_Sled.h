struct idDeclAIComponent_Sled : idDeclAIComponent
{
    struct hitFromUnderneathData_t
    {
        // when the sled is hit from underneath, the sled damage will be multiplied by this amount
        float sledDamageMultiplier; // Offset: 0x0

        // this will always be the pain type when hit from underneath
        painType_t painType; // Offset: 0x4

        // if one of the following hit groups is hit, it's considered an "underside" hit
        idList < idAtomicString , TAG_IDLIST , false > hitGroups; // Offset: 0x8

    }; // Size: 0x20

    struct rocketFiringData_t
    {
        // anim key for rocket rotation in
        idAtomicString rotateInAnimKey; // Offset: 0x0

        // anim key for rocket rotation out
        idAtomicString rotateOutAnimKey; // Offset: 0x8

        // how long can a burst last?
        idRange < float > burstDuration; // Offset: 0x10

        // how much time between each rocket in a burst?
        idTypesafeTime < int , millisecondUnique_t , 1000 > betweenRocketTimer; // Offset: 0x18

        // fire mode for rockets
        aiFireMode_t fireMode; // Offset: 0x1C

        // equipment slot for left rocket
        equipSlot_t leftSlot; // Offset: 0x20

        // equipment slot for right rocket
        equipSlot_t rightSlot; // Offset: 0x24

    }; // Size: 0x28

    struct damageScale_t
    {
        // scale to use
        float scale; // Offset: 0x0

        // damages to match ( logical OR )
        idDeclAIDamageDeclCollection* declCollection; // Offset: 0x8

        // damages to match ( logical OR )
        idList < const idDeclDamage * , TAG_IDLIST , false > decls; // Offset: 0x10

        // if true, this damage scale applies to the shield
        bool appliesToShield; // Offset: 0x28

        // if true, this damage scale applies to the sled
        bool appliesToSled; // Offset: 0x29

        // if true, destroys with one shot
        bool oneShot; // Offset: 0x2A

        // if true, forces damage to shield even if it isn't touching the shield (ie: BFG tendrils)
        bool forceApplyToShield; // Offset: 0x2B

        // if true, damage ignores shield and always hits character
        bool ignoreShield; // Offset: 0x2C

    }; // Size: 0x30

    struct shieldData_t
    {
        // The name of the shield entity that disables when the sled is destroyed
        idAtomicString shieldName; // Offset: 0x0

        // how many hit points does the shield have? Weak against plasma.
        float hitPoints; // Offset: 0x8

        // when shield is deactivated by plasma shots, it will multiply damage by this multiplier
        float deactivatedDamageScale; // Offset: 0xC

        // when shield is deactivated by plasma shots, how long?
        idTypesafeTime < int , millisecondUnique_t , 1000 > deactivationMS; // Offset: 0x10

        // FX condition to play on the owner entity when the shield activates
        fxCondition_t activateFXCondition; // Offset: 0x14

        // FX condition to play on the owner entity when the shield deactivates
        fxCondition_t deactivateFXCondition; // Offset: 0x18

        // Recharging How long after taking damage before recharging starts
        idTypesafeTime < int , millisecondUnique_t , 1000 > rechargingDelayMS; // Offset: 0x1C

        // How many hitpoints to recharge per second once recharging starts
        float rechargeHitPointsPerSecond; // Offset: 0x20

        // FX condition to play when shield recharging starts
        fxCondition_t rechargingBeginFXCondition; // Offset: 0x24

        // FX condition to play when shield recharging ends
        fxCondition_t rechargingEndFXCondition; // Offset: 0x28

        // Mesh kit for the shield
        aiMeshKitInfo meshKit; // Offset: 0x30

        // change the shield color based on damage
        idList < idDeclAIComponent_Shield::floatColorTuple_t , TAG_IDLIST , false > colorTable; // Offset: 0x40

    }; // Size: 0x58

    // if true, the owner of this component is a mini-boss
    bool isMiniBoss; // Offset: 0x98

    // if true, the owner of this component is a gold mini-boss (master level)
    bool isGoldBoss; // Offset: 0x99

    // list of hit group names for the sled
    idList < idAtomicString , TAG_IDLIST , false > hitGroups; // Offset: 0xA0

    // hit groups to enable while shielded
    idList < idAtomicString , TAG_IDLIST , false > shieldedHitGroups; // Offset: 0xB8

    // hit groups to enable while unshielded
    idList < idAtomicString , TAG_IDLIST , false > unshieldedHitGroups; // Offset: 0xD0

    // gore wound hit groups that are covered when shielded (these wounds will be disabled when shielded)
    idList < idAtomicString , TAG_IDLIST , false > shieldedWoundHitGroups; // Offset: 0xE8

    // how many hit points should the sled have?
    float hitPoints; // Offset: 0x100

    // Root joint of the sled
    idJointName rootJointName; // Offset: 0x108

    // How long after detachment should the sled explode?
    idTypesafeTime < int , millisecondUnique_t , 1000 > explosionDelayMS; // Offset: 0x138

    // The damage decl for the sled explosion
    idDeclDamage* explosionDamageDecl; // Offset: 0x140

    // The MD6 tag used for the position of the explosion
    idAtomicString explosionMD6TagName; // Offset: 0x148

    // Wound name in the gore container
    idAtomicString explosionWoundName; // Offset: 0x150

    // damage to main health is multiplied by this amount when the detaching anim is playing
    float mainHealthDeatchingAnimDamageMultiplier; // Offset: 0x158

    // When shield is deactivated or sled is detached from a lock-on weapon, how long should the lock be broken afterwards
    idTypesafeTime < int , millisecondUnique_t , 1000 > attackWeaponLockBreakTimeoutMS; // Offset: 0x15C

    // data for when the sled is hit from underneath
    idDeclAIComponent_Sled::hitFromUnderneathData_t hitFromUnderneath; // Offset: 0x160

    // data for firing rockets
    idDeclAIComponent_Sled::rocketFiringData_t rocketFiring; // Offset: 0x180

    // scale incoming damage by this much, when decls are matched
    idList < idDeclAIComponent_Sled::damageScale_t , TAG_IDLIST , false > damageScales; // Offset: 0x1A8

    // shield properties
    idDeclAIComponent_Sled::shieldData_t shield; // Offset: 0x1C0

    // decls in this collection will instakill the owner
    idDeclAIDamageDeclCollection* instaKillDamageDeclCollection; // Offset: 0x218

    // ------------------------------ GOLD MODE ADDITIONS ------------------------------ entity def to use to spawn a sound box to approximate hazard sounds
    idDeclEntityDef* flameHazardSoundBoxEntity; // Offset: 0x220

    // entity def to use to place hazards
    idDeclEntityDef* flameHazardEntDef; // Offset: 0x228

    // Duration of hazard trail
    float flameHazardLifetime; // Offset: 0x230

    // distance between hazards when testing placement
    float flameHazardSpread; // Offset: 0x234

    // entity def to use to for the chainsaw extension
    idDeclEntityDef* chainsawEntDef; // Offset: 0x238

    // Tag to attach the chainsaw to for gold attacks
    idAtomicString chainsawTag; // Offset: 0x240

    // Entity def for the chainsaw projectile
    idDeclEntityDef* chainsawProjectileDef; // Offset: 0x248

    // Entity def for the chainsaw projectile
    idDeclEntityDef* chainsawGrenadeDef; // Offset: 0x250

    // damage from the chainsaw projectile radial blast when it first hits the ground
    idDeclDamage* chainsawRadialDmgDef; // Offset: 0x258

    // damage from the chainsaw projectile radial blast when it explodes
    idDeclDamage* chainsawExplodeRadialDmgDef; // Offset: 0x260

    // Count down time for the chainsaw projectile
    float chainsawExplodeTimer; // Offset: 0x268

    // Explode timer sound for the chainsaw projectile
    idSoundEvent* sound_chainsawExplodeTick; // Offset: 0x270

    // Explode timer sound for the chainsaw projectile
    idSoundEvent* sound_chainsawExplodeTickEnd; // Offset: 0x278

    // This is the base distance from the DH to the point that the chainsaw mine will hit the ground. This is used for scaling.
    float baseMineDropDistance; // Offset: 0x280

    // How far the mine should be placed from the player
    float minePlayerOffset; // Offset: 0x284

    // Max z offset (above or below) for scaling the z height of the animation.
    float chainsawMineZOffsetMax; // Offset: 0x288

    // z offset of the mine from the ground when it is planted and starts ticking down to detonate
    float chainsawMineZGroundOffset; // Offset: 0x28C

    // Center spawner name for threshold spawning
    idAtomicString thresholdSpawnerCenter; // Offset: 0x290

    // First Left spawner name for threshold spawning
    idAtomicString thresholdSpawnerLeft1; // Offset: 0x298

    // Second Left spawner name for threshold spawning
    idAtomicString thresholdSpawnerLeft2; // Offset: 0x2A0

    // First Right spawner name for threshold spawning
    idAtomicString thresholdSpawnerRight1; // Offset: 0x2A8

    // Second Right spawner name for threshold spawning
    idAtomicString thresholdSpawnerRight2; // Offset: 0x2B0

    // For spawning during thresholds, left 1 tag
    idAtomicString minionSpawnTag_left1; // Offset: 0x2B8

    // For spawning during thresholds, left 2 tag
    idAtomicString minionSpawnTag_left2; // Offset: 0x2C0

    // For spawning during thresholds, right 1 tag
    idAtomicString minionSpawnTag_right1; // Offset: 0x2C8

    // For spawning during thresholds, right 2 tag
    idAtomicString minionSpawnTag_right2; // Offset: 0x2D0

    // For spawning during thresholds, center tag
    idAtomicString minionSpawnTag_center; // Offset: 0x2D8

    // For spawning during thresholds, alternate
    idAtomicString minionSpawnTag_altLeft3; // Offset: 0x2E0

    // For spawning during thresholds, alternate
    idAtomicString minionSpawnTag_altRight3; // Offset: 0x2E8

    // For spawning during thresholds, alternate
    idAtomicString minionSpawnTag_altBack; // Offset: 0x2F0

}; // Size: 0x2F8

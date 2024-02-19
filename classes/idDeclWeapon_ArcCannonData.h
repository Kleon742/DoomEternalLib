struct idDeclWeapon_ArcCannonData : idDeclWeapon_Data
{
    struct primaryFire_t
    {
        // the FOV of the primary fire targeting reticle for projectiles
        float reticleFOV_projectile; // Offset: 0x0

        // the FOV of the primary fire targeting reticle for enemies
        float reticleFOV_enemy; // Offset: 0x4

        // the projectile to use for primary fire
        idDeclProjectile* projectileDecl; // Offset: 0x8

        // target speed for fireballs being attracted
        float fireballAttractSpeed; // Offset: 0x10

        // angular acceleration for fireballs being attracted (degs/sec2)
        float fireballAttractAngularAccel; // Offset: 0x14

        // max angular velocity for fireballs being attracted (degs/sec)
        float fireballAttractMaxAngularVel; // Offset: 0x18

        // the projectile to use for primary fire after a fireball has been absorbed
        idDeclProjectile* fireballAttractProjectileDecl; // Offset: 0x20

        // maximum length of time a fireball attraction charge can be held
        int fireballAttractChargeDurationMS; // Offset: 0x28

        // sound to play when a fireball is absorbed and the weapon is charged
        idSoundEvent* fireballAttractChargeSound; // Offset: 0x30

        // sound to play when a charged weapon expires and discharges
        idSoundEvent* fireballAttractDischargeSound; // Offset: 0x38

    }; // Size: 0x40

    struct secondaryFire_t
    {
        // the FOV of the secondary fire targeting reticle for projectiles
        float reticleFOV_projectile; // Offset: 0x0

        // the FOV of the secondary fire targeting reticle for enemies
        float reticleFOV_enemy; // Offset: 0x4

        // how long to charge to maximum in MS
        milliToGameTime_t chargeTimeMS; // Offset: 0x8

        // how long to a charge can be held before being forced to discharge in MS
        milliToGameTime_t chargeTimeMaxMS; // Offset: 0x18

        // the projectile to use for secondary fire targets
        idDeclProjectile* projectileDecl; // Offset: 0x28

        // sound to play when starting a secondary fire charge / lock
        idSoundEvent* startSound; // Offset: 0x30

        // looping charge sound that uses variable pitch according to fire lock data
        idSoundEvent* chargeSound; // Offset: 0x38

        // pitch of the charged sound
        float chargeSoundPitch; // Offset: 0x40

        // how many secs to change to this pitch
        float chargeSoundPitchChangeSecs; // Offset: 0x44

        // sound to play when weapon discharges because charge was held too long
        idSoundEvent* dischargeSound; // Offset: 0x48

        // secondary fire charge scale table
        idDeclTable* chargeDamageScaleTable; // Offset: 0x50

        // how much ammo is used at max charge
        int ammoUsedAtMaxCharge; // Offset: 0x58

        // additive animation to expand the muzzle
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > muzzleAnim; // Offset: 0x5C

        // how many MS to transition from fully open to fully closed
        milliToGameTime_t muzzleContractMS; // Offset: 0x60

    }; // Size: 0x70

    struct cumulativeCharge_t
    {
        // how much the charge decays per second [0 - 1]
        float energyDecayPerSecond; // Offset: 0x0

        // how fast energy decays when you deploy secondary mode. [0 - 1]
        float energyDecayDeployed; // Offset: 0x4

        // how much the charge increases per shot hit [0 - 1]
        float energyIncreasePerHit; // Offset: 0x8

        // energy level you have to reach to deploy secondary [0 - 1]
        float deployThreshold; // Offset: 0xC

        // how much energy stays on the weapon when you swap it out [0 - 1]
        float energyRetainedOnSwap; // Offset: 0x10

        // damage multiplier when dispensing charge
        float damageMultiplier; // Offset: 0x14

        // max chains when the secondary is deployed
        int maxChainsDeployed; // Offset: 0x18

        // the ribbon effect that should play when charged
        idDeclRibbon2* chargedRibbonEffect; // Offset: 0x20

        // the ribbon effect that should play for chains
        idDeclRibbon2* chargedRibbonChainEffect; // Offset: 0x28

        // how many MS to transition from fully open to fully closed
        milliToGameTime_t animContractMS; // Offset: 0x30

        // sound to play when the gun's energy is fully charged
        idSoundEvent* fullyChargedSound; // Offset: 0x40

        // sound to play when deploying the secondary and gaining the damage boost
        idSoundEvent* secondaryDeploySound; // Offset: 0x48

        // sound to play when the gun runs out of energy
        idSoundEvent* energyDepletedSound; // Offset: 0x50

    }; // Size: 0x58

    // the entity def for the beam spline paths
    idDeclEntityDef* beamSplinePathDef; // Offset: 0x90

    // min and max values of the control point offsets x is a percentage, 0 to 1, describing the percentage of the distance to the target where the mid control point is placed y and z are absolute right and up displacements of the mid control point relative to the line connecting the muzzle to the target the min value of the control point offsets, described above
    idVec3 beamSplineControlPointOffsetsMin; // Offset: 0x98

    // the max value of the control point offsets, described above
    idVec3 beamSplineControlPointOffsetsMax; // Offset: 0xA4

    // max range from the primary target for other targets to be hit by secondary arcs
    float chainRange; // Offset: 0xB0

    // 0 to 1 describing the chance each chain has to actually connect
    float chainChance; // Offset: 0xB4

    // the max number of arcs that can exit from a given target to other nearby targets
    int maxChains; // Offset: 0xB8

    // the max depth of the chain tree (i.e. max number of chain segments back to the primary target)
    int maxChainDepth; // Offset: 0xBC

    // optional alternate ribbon effect for chained arcs
    idDeclRibbon2* chainRibbonEffect; // Offset: 0xC0

    // optional third person ribbon effect for non-local players. If NULL, the normal effect is used.
    idDeclRibbon2* ribbonEffect3rdPerson; // Offset: 0xC8

    // optional alternate projectile for chained fire
    idDeclProjectile* chainProjDecl; // Offset: 0xD0

    // minimum charge % (0-1) in order to chain fire
    float chainMinChargePercent; // Offset: 0xD8

    // how long to wait to charge after firing.
    float afterFireChargeDelay; // Offset: 0xDC

    // FOV of reticle
    float reticleFOV; // Offset: 0xE0

    // flag to use the cumulative charge behavior for the secondary fire
    bool useCumulativeCharge; // Offset: 0xE4

    // primary fire parms
    idDeclWeapon_ArcCannonData::primaryFire_t primaryFire; // Offset: 0xE8

    // secondary fire parms
    idDeclWeapon_ArcCannonData::secondaryFire_t secondaryFire; // Offset: 0x128

    // cumulative charge mechanic params
    idDeclWeapon_ArcCannonData::cumulativeCharge_t cumulativeCharge; // Offset: 0x198

}; // Size: 0x1F0

struct idDeclWeapon_ChaingunData : idDeclWeapon_Data
{
    struct progressiveFiringInterval_t
    {
        // If true, the chaingun can fire almost immediately, but progressivly lerps between firingIntervalMin and the normal firing interval
        bool useProgressiveFiringInterval; // Offset: 0x0

        // min firing interval for when the barrel has not spun up( lerp between this and actual firing interval)
        milliToGameTime_t firingIntervalMin; // Offset: 0x8

    }; // Size: 0x18

    struct damageReductionRange_t
    {
        // angle that describes region of maximal damage reduction (0 to 180)
        float degreesInner; // Offset: 0x0

        // damage reduction percent that occurs within the inner angular range (0 to 1)
        float reductionPercentInner; // Offset: 0x4

        // angle that describes the region of minimal damage reduction (degreesInner to 180)
        float degreesOuter; // Offset: 0x8

        // damage reduction percent that occurs at the outer angle (0 to 1)
        float reductionPercentOuter; // Offset: 0xC

    }; // Size: 0x10

    struct damageReduction_t
    {
        // projectile damage reduction
        idDeclWeapon_ChaingunData::damageReductionRange_t projectileDamageReduction; // Offset: 0x0

        // melee damage reduction
        idDeclWeapon_ChaingunData::damageReductionRange_t meleeDamageReduction; // Offset: 0x10

        // knockback reduction
        idDeclWeapon_ChaingunData::damageReductionRange_t knockbackReduction; // Offset: 0x20

    }; // Size: 0x30

    struct drillbackRounds_t
    {
        // fire a drillback round every this many shots
        int freq; // Offset: 0x0

        // if true then drillback counter resets each time firing begins
        bool restartEachBurst; // Offset: 0x4

        // drillback projectile decl
        idDeclProjectile* projDef; // Offset: 0x8

        // max num of drillback rounds that can be active at once, or -1 for unlimited
        int maxActive; // Offset: 0x10

        // hold long trigger must be held to activate recall
        idTypesafeTime < int , millisecondUnique_t , 1000 > recallTriggerHoldMS; // Offset: 0x14

        // recall projectile decl
        idDeclProjectile* recallProjDef; // Offset: 0x18

        // how much ammo each recalled round gives the player
        float ammoReceivedPerRecall; // Offset: 0x20

    }; // Size: 0x28

    // if true then skip the barrel spin
    bool dontSpinBarrel; // Offset: 0x90

    // MS to spin up the rotating barrels from a stop
    milliToGameTime_t spinUpTimeMS; // Offset: 0x98

    // MS to spin down the rotating barrels to a stop
    milliToGameTime_t spinDownTimeMS; // Offset: 0xA8

    // degrees per second to rotate forwards if positive or backwards if negative to align a barrel after firing stops, or 0 to disable this behavior
    float barrelAlignDegsPerSec; // Offset: 0xB8

    // how many angular sectors are alignable?
    float barrelAlignSectors; // Offset: 0xBC

    // if true then barrel angle will reset to 0 at a configurable rate when this fire mode is selected
    bool resetBarrelAngleOnFireModeChange; // Offset: 0xC0

    // barrel reset accel
    float barrelResetAccel; // Offset: 0xC4

    // barrel reset vel, or 0 for instant reset
    float barrelResetVel; // Offset: 0xC8

    // number of barrels in rotating barrel assembly
    int numBarrels; // Offset: 0xCC

    // additive anim for rotating barrel
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > barrelAnim; // Offset: 0xD0

    // allow barrel to spin up while idling without firing
    bool allowIdleBarrelSpin; // Offset: 0xD2

    // sound to play when barrel starts accelerating
    idSoundEvent* barrel_accel_sound; // Offset: 0xD8

    // sound to play when barrel starts decelerating
    idSoundEvent* barrel_decel_sound; // Offset: 0xE0

    // sound to play when barrel stops
    idSoundEvent* barrel_stop_sound; // Offset: 0xE8

    // sound to play when barrel spins (variable pitch)
    idSoundEvent* barrel_spin_sound; // Offset: 0xF0

    // minimum pitch shift for spinning barrel sound
    float barrel_spin_sound_pitch_min; // Offset: 0xF8

    // maximum pitch shift for spinning barrel sound
    float barrel_spin_sound_pitch_max; // Offset: 0xFC

    // RTPC spin sound, parameter = "chaingun_barrel_vel"
    idSoundEvent* barrel_spin_sound_RTPC; // Offset: 0x100

    // movement speed scale while weapon is firing and player is traveling forward
    float movementSpeedScaleFiringForward; // Offset: 0x108

    // movement speed scale while weapon is firing and player is traveling back
    float movementSpeedScaleFiringBack; // Offset: 0x10C

    // movement speed scale while weapon is firing and player is strafing
    float movementSpeedScaleFiringStrafe; // Offset: 0x110

    // movement speed scale while weapon is not firing and player is traveling forward
    float movementSpeedScaleNotFiringForward; // Offset: 0x114

    // movement speed scale while weapon is not firing and player is traveling back
    float movementSpeedScaleNotFiringBack; // Offset: 0x118

    // movement speed scale while weapon is not firing and player is strafing
    float movementSpeedScaleNotFiringStrafe; // Offset: 0x11C

    // if true, player can't jump while barrel is spinning (firing or not)
    bool preventJumpWhileSpinning; // Offset: 0x120

    // if true, player can't ledge grab while barrel is spinning (firing or not)
    bool preventLedgeGrabWhileSpinning; // Offset: 0x121

    // if true, does not let the weapon spin up while dry firing
    bool preventSpinUpWhileDryfiring; // Offset: 0x122

    // aim sensitivity while firing
    float sensitivityWhileFiring; // Offset: 0x124

    // aim sensitivity while firing with the mouse
    float sensitivityWhileFiring_Mouse; // Offset: 0x128

    // aim sensitivity while spinning
    float sensitivityWhileSpinning; // Offset: 0x12C

    // seconds to start building higher damage ammo
    idTypesafeTime < float , secondUnique_t , 1 > highDamageSpinupTimeSec; // Offset: 0x130

    // ammo to fire when high damage upgrade active
    idDeclAmmo* highDamageAmmoDecl; // Offset: 0x138

    // seconds to hold ammo when not firing, before it starts depleting
    idTypesafeTime < float , secondUnique_t , 1 > highDamageAmmoHoldTimeSec; // Offset: 0x140

    // seconds to deplete entire high damage ammo load ( highDamageAmmoDecl->maxCount ) ( -1 never depletes over time, only depletes by shooting )
    idTypesafeTime < float , secondUnique_t , 1 > highDamageDepletionTimeSec; // Offset: 0x144

    // seconds to acquire entire high damage ammo load ( highDamageAmmoDecl->maxCount )
    idTypesafeTime < float , secondUnique_t , 1 > highDamageAcquireTimeSec; // Offset: 0x148

    // sound to play when building up high damage ammo
    idSoundEvent* highDamageAmmoBuildupSound; // Offset: 0x150

    // chaingun only fire when high damage ammo is built up
    bool highDamageAmmoRequiredToFire; // Offset: 0x158

    // sound to play when HDA is required, there's none built up, and you try firing
    idSoundEvent* highDamageAmmoRequiredSound; // Offset: 0x160

    // alternate ammo decl to use when chaingun is fully spun up
    idDeclAmmo* fullSpinAmmoDecl; // Offset: 0x168

    // allow normal movement during fire delay
    bool normalMovementDuringFireDelay; // Offset: 0x170

    // min barrelVelT to allow firing
    float minBarrelVelT_ToFire; // Offset: 0x174

    // Zion/campaign/game/base/declTree/weaponDataChainGun/weapondata/base/chaingun_gatling.decl progressive firing interval parms
    idDeclWeapon_ChaingunData::progressiveFiringInterval_t progressiveFiringInterval; // Offset: 0x178

    // damage reduction parms
    idDeclWeapon_ChaingunData::damageReduction_t damageReduction; // Offset: 0x190

    // drillback rounds
    idDeclWeapon_ChaingunData::drillbackRounds_t drillbackRounds; // Offset: 0x1C0

}; // Size: 0x1E8

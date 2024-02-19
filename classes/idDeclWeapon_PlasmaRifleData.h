struct idDeclWeapon_PlasmaRifleData : idDeclWeapon_Data
{
    struct secondary_fire_t
    {
        // How many projectiles that can be held by secondary fire.
        int maxStuckProjectiles; // Offset: 0x0

        // Scaler for projectile explosion damage when held.
        float projectileExplosionMultiplier; // Offset: 0x4

        // How close does projectiles have to be to each other to get damage multiplier.
        float projectileRangeToApplyMultiplier; // Offset: 0x8

        // reset the detonation on Alt Fire.
        bool resetDetonationOnAlt; // Offset: 0xC

    }; // Size: 0x10

    struct secondary_fire_charged_t
    {
        // charging requires button (secondary) to be pressed
        bool requiresButtonPressToCharge; // Offset: 0x0

        // seek enemy within this fov
        int seekFov; // Offset: 0x4

        // charging happens using primary trigger
        bool chargeWithPrimaryTrigger; // Offset: 0x8

        // amount of time (in sec) reduced from charge time
        float timeReductionPrimaryHitSec; // Offset: 0xC

        // max time (in sec) that can be reduced
        float maxReductionTimeSec; // Offset: 0x10

    }; // Size: 0x14

    struct secondary_fire_barb_t
    {
        // enables the barb behavior
        bool enable; // Offset: 0x0

        // the FOV of the targeting cone
        float reticleFOV; // Offset: 0x4

        // if false then must wait for cooldown to detonate barb and fire another
        bool canDetonateBarbDuringCooldown; // Offset: 0x8

        // used to preview the barb trajectory
        idDeclRibbon2* barbTrajectory; // Offset: 0x10

        // offset used to hide artifacts at the muzzle of the weapon {{ units = m }}
        idVec3 barbTrajectoryOffset; // Offset: 0x18

    }; // Size: 0x28

    struct secondary_force_beam_t
    {
        struct tierInfo_t
        {
            // time (in MS) to stay in this tier
            idTypesafeTime < int , millisecondUnique_t , 1000 > lifeTimeMS; // Offset: 0x0

            // projectile decl for this tier
            idDeclProjectile* projectileDecl; // Offset: 0x8

        }; // Size: 0x10

        struct aiKillData_t
        {
            // AI this damage mitigation applies to
            aiMonsterType_t monsterType; // Offset: 0x0

            // time (in MS) it takes to kill this AI
            idTypesafeTime < int , millisecondUnique_t , 1000 > killTimeMS; // Offset: 0x8

            // entityDef to Explode() when time expires and AI gibs
            idDeclEntityDef* cookedAiExplosionDecl; // Offset: 0x10

            // delay (in MS) before concussive explosion is activated
            idTypesafeTime < int , millisecondUnique_t , 1000 > upgradedConcussionDelayMS; // Offset: 0x18

            // entityDef to Explode() concussive blaster mastery is active
            idDeclEntityDef* upgradedConcussionDecl; // Offset: 0x20

        }; // Size: 0x28

        struct aiKillFx_t
        {
            // AI this damage mitigation applies to
            aiMonsterType_t monsterType; // Offset: 0x0

            // fx played on AI when being killed by microwave
            fxCondition_t fxCondition; // Offset: 0x8

        }; // Size: 0x10

        // max fov (angle) from weapon crosshair for a target to be considered valid
        float maxFovForValidTarget; // Offset: 0x0

        // __edit floatbeamReadyPlayerMovementScale; player movement scale when beam is ready to use (secondary fire pressed) but not firing __edit floatbeamFiringPlayerMovementScale; player movement scale while beam is firing force beam weapon decl
        idDeclWeapon* declWeapon; // Offset: 0x8

        // damage applied to AI when time runs out
        idDeclDamage* declGibAiWhenTimeExpires; // Offset: 0x10

        // __edit const idDeclDamage *declSplashDamageOnDeath; splash damage applied at AI location when beam kills it max size AI is scaled to during beam
        float maxScaleSize; // Offset: 0x18

        // speed that microwave beam moves towards target
        float speed; // Offset: 0x1C

        // movement speed scale to apply when there is a valid target
        float movementSpeedScaleWithTarget; // Offset: 0x20

        // movement speed scale to apply when there is NO valid target
        float movementSpeedScaleNoTarget; // Offset: 0x24

        // sound played when AI is being killed by microwave
        idSoundEvent* explosionSoundDecl; // Offset: 0x28

        // ribbon for microwave fx
        idDeclRibbon2* declRibbon2; // Offset: 0x30

        // second ribbon for microwave fx
        idDeclRibbon2* declRibbon2_2; // Offset: 0x38

        // third ribbon for microwave fx
        idDeclRibbon2* declRibbon2_3; // Offset: 0x40

        // ribbon for microwave fx (used during range upgrade)
        idDeclRibbon2* declRibbon2_rangeUpgrade; // Offset: 0x48

        // second ribbon for microwave fx (used during range upgrade)
        idDeclRibbon2* declRibbon2_2_rangeUpgrade; // Offset: 0x50

        // third ribbon for microwave fx (used during range upgrade)
        idDeclRibbon2* declRibbon2_3_rangeUpgrade; // Offset: 0x58

        // defines max ofs along the spline (0 - near, 1 - far)
        idDeclTable* splineOfsTable; // Offset: 0x60

        // defines rate of movement along the spline (0 - near, 1 - far)
        idDeclTable* splineOfsMoveTable; // Offset: 0x68

        // sound played when fire is pressed and there's a target
        idSoundEvent* startHasTargetSoundDecl; // Offset: 0x70

        // sound played when fire is released when there's a target
        idSoundEvent* stopHasTargetSoundDecl; // Offset: 0x78

        // sound played when fire is pressed and there's no target
        idSoundEvent* startNoTargetSoundDecl; // Offset: 0x80

        // sound played when fire is released when there's no target
        idSoundEvent* stopNoTargetSoundDecl; // Offset: 0x88

        // sound played when fire is pressed
        idSoundEvent* startIdleSoundDecl; // Offset: 0x90

        // sound played when fire is released
        idSoundEvent* stopIdleSoundDecl; // Offset: 0x98

        // targeting delay applied after current target is released (after releasing fire button, after AI is gibbed)
        idTypesafeTime < int , millisecondUnique_t , 1000 > releaseTargetingDelayMS; // Offset: 0xA0

        // sound played when targeting delay starts
        idSoundEvent* startTargetingDelaySoundDecl; // Offset: 0xA8

        // sound played when targeting delay stops
        idSoundEvent* stopTargetingDelaySoundDecl; // Offset: 0xB0

        // list of damage tiers
        idList < idDeclWeapon_PlasmaRifleData::secondary_force_beam_t::tierInfo_t , TAG_IDLIST , false > tierList; // Offset: 0xB8

        // entityDef to Explode() when time expires and actor gibs
        idDeclEntityDef* defaultCookedExplosionDecl; // Offset: 0xD0

        // beam's kill data for different types of AI
        idList < idDeclWeapon_PlasmaRifleData::secondary_force_beam_t::aiKillData_t , TAG_IDLIST , false > aiKillList; // Offset: 0xD8

        // beam's kill data for different types of AI
        idList < idDeclWeapon_PlasmaRifleData::secondary_force_beam_t::aiKillFx_t , TAG_IDLIST , false > aiKillFx; // Offset: 0xF0

    }; // Size: 0x108

    struct secondary_fire_phase_shift_t
    {
        // how long phase shift is active
        idTypesafeTime < int , millisecondUnique_t , 1000 > lifeTimeMS; // Offset: 0x0

        // cooldown time after phase shift is used
        idTypesafeTime < int , millisecondUnique_t , 1000 > cooldownTimeMS; // Offset: 0x4

        // phase shift weapon decl
        idDeclWeapon* declWeapon; // Offset: 0x8

        // sound played when phase shift activated
        idSoundEvent* activateSoundDecl; // Offset: 0x10

        // sound played when phase shift deactivated
        idSoundEvent* deactivateSoundDecl; // Offset: 0x18

        // sound played when phase shift is ready
        idSoundEvent* readySoundDecl; // Offset: 0x20

        // damage scalar applied to primary when phase shift is active
        float primaryDamageScalar; // Offset: 0x28

        // player becomes 'notarget' to enemy when phase shift is active
        bool notargetWhenActive; // Offset: 0x2C

        // projectile to use when phase shift is active
        idDeclProjectile* declProjectileDuringPhaseShift; // Offset: 0x30

    }; // Size: 0x38

    // secondary fire parms
    idDeclWeapon_PlasmaRifleData::secondary_fire_t secondaryFire; // Offset: 0x90

    // secondary fire parms, for Charged Shot iteration
    idDeclWeapon_PlasmaRifleData::secondary_fire_charged_t secondaryFire_Charged; // Offset: 0xA0

    // secondary fire parms, for Barb 2.0 iteration
    idDeclWeapon_PlasmaRifleData::secondary_fire_barb_t secondaryFire_Barb; // Offset: 0xB8

    // secondary fire parms, for Force Beam
    idDeclWeapon_PlasmaRifleData::secondary_force_beam_t secondaryFire_ForceBeam; // Offset: 0xE0

    // secondary fire parms, for Barb 2.0 iteration
    idDeclWeapon_PlasmaRifleData::secondary_fire_phase_shift_t secondaryFire_PhaseShift; // Offset: 0x1E8

}; // Size: 0x220

struct idDemonPlayer_Dreadknight : idDemonPlayer
{
    enum dreadknightUIBarType_t : int
    {
        DREADKNIGHT_UI_BAR_INVALID = -1,
        DREADKNIGHT_UI_BAR_ENERGY_WAVE = 0,
        DREADKNIGHT_UI_BAR_BERSERK = 1,
        DREADKNIGHT_UI_BAR_MELEE = 2,
        DREADKNIGHT_UI_BAR_GROUND_SLAM = 3,
        DREADKNIGHT_UI_BAR_QUANTUM_ORB = 4,
        NUM_DREADKNIGHT_UI_BARS = 5
    };

    enum dreadknightUIBarContextFlags_t : int
    {
        DREADKNIGHT_UI_BAR_CONTEXT_NONE = 0,
        DREADKNIGHT_UI_BAR_CONTEXT_DEFAULT = 1,
        DREADKNIGHT_UI_BAR_CONTEXT_COOLDOWN = 2,
        DREADKNIGHT_UI_BAR_CONTEXT_ACTIVE = 4
    };

    struct blendAnimData_t
    {
        // animation alias
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > alias; // Offset: 0x0

        // animation blend-in in milliseconds
        idTypesafeTime < int , millisecondUnique_t , 1000 > blendIn; // Offset: 0x4

        // animation blend-out in milliseconds
        idTypesafeTime < int , millisecondUnique_t , 1000 > blendOut; // Offset: 0x8

    }; // Size: 0xC

    struct dreadknightData_t
    {
        // button used for primary attack
        usercmdButton_t primaryAttackButton; // Offset: 0x0

        // button used to launch/trigger secondary attack
        usercmdButton_t secondaryAttackButton; // Offset: 0x8

        // button used to trigger berserk state
        usercmdButton_t berserkButton; // Offset: 0x10

        // button used for berserk charge
        usercmdButton_t chargeButton; // Offset: 0x18

        // button used for ground slam
        usercmdButton_t groundSlamButton; // Offset: 0x20

        // button used for jumping
        usercmdButton_t jumpButton; // Offset: 0x28

        // explicitly disable hands lag
        bool disableHandsLag; // Offset: 0x30

        // allow separate in air melee chain
        bool inAirMeleeEnabled; // Offset: 0x31

    }; // Size: 0x38

    struct groundSlamData_t
    {
        enum useageDuringJockeyTime_t : int
        {
            DISABLED = 0,
            ALLOWED = 1,
            ALLOWED_BUT_NO_DAMAGE = 2
        };

        struct groundSlamExplosionData_t
        {
            // Projectile to create and immediately explode
            idDeclEntityDef* projectileEntityDef; // Offset: 0x0

            // Spawn locally
            bool spawnEntityLocally; // Offset: 0x8

            // snap to ground
            bool snapSpawnEntityToGround; // Offset: 0x9

            // scale to splash radius
            bool spawnEntScaleToSplashRadius; // Offset: 0xA

            // orient to surface
            bool spawnEntOrientToSurface; // Offset: 0xB

        }; // Size: 0x10

        struct groundSlamTypeData_t
        {
            // explosion data on landing
            idDemonPlayer_Dreadknight::groundSlamData_t::groundSlamExplosionData_t explosionData; // Offset: 0x0

            // lingering AOE entity def
            idDeclEntityDef* aoeEntityDef; // Offset: 0x10

            // duration of aoe entity
            idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > aoeEntityDuration; // Offset: 0x18

        }; // Size: 0x40

        struct groundSlamExplicitMoveData_t
        {
            // leap speed
            float leapSpeed; // Offset: 0x0

            // min arc distance to use
            float minArcDistance; // Offset: 0x4

            // if arc distance / leap speed is greater than this we will bump the speed
            idTypesafeTime < int , millisecondUnique_t , 1000 > maxLeapDuration; // Offset: 0x8

            // disable contents flags
            bool disableContentsFlags; // Offset: 0xC

            // disable gravity during the leap
            bool disableGravity; // Offset: 0xD

        }; // Size: 0x10

        // how far to try to ground slam
        float groundSlamMaxDistance; // Offset: 0x0

        // how much vertical room do we need to ground slam
        float groundSlamHeightCheck; // Offset: 0x4

        // cooldown time
        idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > groundSlamCooldown; // Offset: 0x8

        // pause movement for this amount of time, after ground slam
        idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > groundSlamPauseTime; // Offset: 0x30

        // sfx for ground slam start
        idSoundEvent* groundSlamStartSound; // Offset: 0x58

        // sfx for ground slam end
        idSoundEvent* groundSlamEndSound; // Offset: 0x60

        // sfx for ground slam target loop
        idSoundEvent* groundSlamTargetLoopSound; // Offset: 0x68

        // sfx for ground slam fail
        idSoundEvent* groundSlamFailSound; // Offset: 0x70

        // decl for targeting ribbon with valid location
        idDeclRibbon2* groundSlamValidRibbon; // Offset: 0x78

        // decl for targeting ribbon with invalid location
        idDeclRibbon2* groundSlamInvalidRibbon; // Offset: 0x80

        // ground slam targeting reticle
        idDeclEntityDef* reticleEntityDef; // Offset: 0x88

        // ground slam targeting adjusted destination
        idDeclEntityDef* targetEntityDef; // Offset: 0x90

        // normal ground slam type data
        idDemonPlayer_Dreadknight::groundSlamData_t::groundSlamTypeData_t groundSlam_Default; // Offset: 0x98

        // berserk ground slam type data
        idDemonPlayer_Dreadknight::groundSlamData_t::groundSlamTypeData_t groundSlam_Berserk; // Offset: 0xD8

        // explicit move data
        idDemonPlayer_Dreadknight::groundSlamData_t::groundSlamExplicitMoveData_t explictMoveData; // Offset: 0x118

        // hit ground hands anim info
        idDemonPlayer_Dreadknight::blendAnimData_t groundPoundUseAnim; // Offset: 0x128

        // intro anim before looping m_groundPoundTelegraphLoopAnim
        idDemonPlayer_Dreadknight::blendAnimData_t groundPoundTelegraphIntoAnim; // Offset: 0x134

        // telegraph hands anim info
        idDemonPlayer_Dreadknight::blendAnimData_t groundPoundTelegraphLoopAnim; // Offset: 0x140

        // cancel hands anim info
        idDemonPlayer_Dreadknight::blendAnimData_t groundPoundTelegraphCancelAnim; // Offset: 0x14C

        // looping anim while leaping
        idDemonPlayer_Dreadknight::blendAnimData_t groundPoundLeapLoopAnim; // Offset: 0x158

        // min and max allowed camera pitch during the ground slam leap
        idRange < float > clampedLeapViewPitchDegrees; // Offset: 0x164

        // sensitivity during the leap controller
        float leapSensitivityScalarController; // Offset: 0x16C

        // sensitivity during the leap mouse
        float leapSensitivityScalarMouse; // Offset: 0x170

        // time to lerp the pitch
        idTypesafeTime < int , millisecondUnique_t , 1000 > leapPitchClampTime; // Offset: 0x174

        // modify leap pitch
        bool allowCameraPitchAdjustmentsDuringLeap; // Offset: 0x178

        // modify sensitivity during leap
        bool allowSensitivityModifiersDuringLeap; // Offset: 0x179

        // how to handle during jockey time
        idDemonPlayer_Dreadknight::groundSlamData_t::useageDuringJockeyTime_t useageDuringJockeying; // Offset: 0x17C

        // time to be in spectre cloak after enshroud full invisibility
        idTypesafeTime < int , millisecondUnique_t , 1000 > spectreTimeAfterEndingInvisibility; // Offset: 0x180

        // offset from the hands angle for the telegraph ribbon to use
        float groundSlamTelegraphInitialAngleOffset; // Offset: 0x184

        // min pitch angle
        float groundSlamTelegraphMinPitchAngle; // Offset: 0x188

        // time deemed stuck to forcibly finish the ground slam
        idTypesafeTime < int , millisecondUnique_t , 1000 > groundSlamStuckTimeout; // Offset: 0x18C

        // Z velocity to consider stuck after the spline is finished
        float groundSlamZVelocityToConsiderStuck; // Offset: 0x190

        // super failsafe if the velocity stuck case never triggers our stuck timeout
        idTypesafeTime < int , millisecondUnique_t , 1000 > groundSlamAbortAfterLeapStartTimeout; // Offset: 0x194

    }; // Size: 0x198

    struct chargeData_t
    {
        struct modifyEnergyWaveAtEndOfCharge_t
        {
            // damage multiplier if you shoot the energy wave at the end of the berserk charge
            float damageMultiplier; // Offset: 0x0

        }; // Size: 0x4

        // max time for the berserk charge
        idTypesafeTime < int , millisecondUnique_t , 1000 > maxDuration; // Offset: 0x0

        // should be < max duration. Time of the window where attacks do extra damage at the end of the charge.
        idTypesafeTime < int , millisecondUnique_t , 1000 > extraDamageWindowDuration; // Offset: 0x4

        // cooldown after use
        idTypesafeTime < int , millisecondUnique_t , 1000 > cooldown; // Offset: 0x8

        // movement scale when charge is active
        float movementScale; // Offset: 0xC

        // sound to play when we start the charge
        idSoundEvent* startSound; // Offset: 0x10

        // Usually -127 to 127 clamp to > 0 for forward only movement
        idRange < int > forwardMoveCmdRange; // Offset: 0x18

        // Usually -127 (strafe left) to 127 (strafe right). Clamp within a small amount near 0 to effectively remove/limit strafing
        idRange < int > sideMoveCmdRange; // Offset: 0x20

        // reduce sensitivity controller
        float sensitivityScalarController; // Offset: 0x28

        // reduce sensitivity mouse
        float sensitivityScalarMouse; // Offset: 0x2C

        // sound to play on the attacker if the target is charging and you damage them
        idSoundEvent* damageDuringChargeSound; // Offset: 0x30

        // take no damage during berserk charge
        bool invincibleDuringCharge; // Offset: 0x38

        // reduce damage by this multiplier during charge ( ignored if invincibleDuringCharge is true )
        float damageMultiplierDuringCharge; // Offset: 0x3C

        // ledge grab anim rate if the charge is active
        float ledgeGrabAnimRateMultiplier; // Offset: 0x40

        // energy wave modifications
        idDemonPlayer_Dreadknight::chargeData_t::modifyEnergyWaveAtEndOfCharge_t energyWaveModifier; // Offset: 0x44

        // if you can jump during a berserk charge
        bool allowJumpDuringCharge; // Offset: 0x48

        // friendly repulsor radius while the berserk charge is active
        float repulsorRadiusDuringCharge; // Offset: 0x4C

        // outro anim alias for the first person demon hands
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > handsOutroAnimAlias; // Offset: 0x50

    }; // Size: 0x58

    struct berserkData_t
    {
        // how long berserk state lasts
        idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > duration; // Offset: 0x0

        // time it takes until berserk can be used again
        idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > cooldown; // Offset: 0x28

        // how long after round start that berserk will be usable
        idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > roundStartCooldown; // Offset: 0x50

        // dreadknight speed while in berserk state
        idBranchedOptionValue < declInputBranch_t , float > boostedSpeed; // Offset: 0x78

        // status effect to add while in berserk state
        idDeclStatusEffect* statusEffect; // Offset: 0xA0

        // how long debuff should be enabled
        idTypesafeTime < int , millisecondUnique_t , 1000 > debuffLifetime; // Offset: 0xA8

        // debuff effect to add when exiting berserk state
        idDeclStatusEffect* debuffEffect; // Offset: 0xB0

        // void status effect used to show that berserk is ready to use
        idDeclStatusEffect* cooldownVoidEffect; // Offset: 0xB8

        // sound to play when we start berserk state
        idSoundEvent* startSound; // Offset: 0xC0

        // sound to alert players berserk in ready to use
        idSoundEvent* readyUpSound; // Offset: 0xC8

        // demon card used for ui purposes
        idDeclDemonCard* card; // Offset: 0xD0

        // berserk enter animation data
        idDemonPlayer_Dreadknight::blendAnimData_t enterAnim; // Offset: 0xD8

        // berserk exit animation data
        idDemonPlayer_Dreadknight::blendAnimData_t exitAnim; // Offset: 0xE4

        // into anim
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > thirdPersonIntoAnim; // Offset: 0xF0

        // loop anim base
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > thirdPersonLoopAnim; // Offset: 0xF2

        // out anim
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > thirdPersonOutAnim; // Offset: 0xF4

    }; // Size: 0xF8

    struct meleeData_t
    {
        struct meleeChainInfo_t
        {
            // fsm state for this chained attack
            demonPlayerState_t fsmState; // Offset: 0x0

            // first person anim aliases
            idList < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , TAG_IDLIST , false > animAliases; // Offset: 0x8

            // first person post melee loop anim alias
            idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > loopAnimAlias; // Offset: 0x20

            // loop fsm state
            demonPlayerState_t loopFsmState; // Offset: 0x24

            // blend in time
            idTypesafeTime < int , millisecondUnique_t , 1000 > blendInDuration; // Offset: 0x28

            // blend out time
            idTypesafeTime < int , millisecondUnique_t , 1000 > blendOutDuration; // Offset: 0x2C

            // chain to next melee attack blend out time
            idTypesafeTime < int , millisecondUnique_t , 1000 > chainBlendOutDuration; // Offset: 0x30

            // cooldown
            idTypesafeTime < int , millisecondUnique_t , 1000 > cooldown; // Offset: 0x34

            // third person anim aliases
            idList < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , TAG_IDLIST , false > thirdPersonAnimAliases; // Offset: 0x38

            // third person blend in time
            idTypesafeTime < int , millisecondUnique_t , 1000 > thirdPersonBlendInDuration; // Offset: 0x50

            // third person blend out time
            idTypesafeTime < int , millisecondUnique_t , 1000 > thirdPersonBlendOutDuration; // Offset: 0x54

            // duration to play the post melee loop anim
            idTypesafeTime < int , millisecondUnique_t , 1000 > postMeleeLoopDuration; // Offset: 0x58

            // rate of the melee anim
            float animRateScale; // Offset: 0x5C

            // rate of the post melee loop
            float loopAnimRateScale; // Offset: 0x60

            // after the melee swipe + loop should we play the bring up anim back to idle?
            bool playBringUpBackToIdle; // Offset: 0x64

        }; // Size: 0x68

        // cooldown
        idTypesafeTime < int , millisecondUnique_t , 1000 > cooldown; // Offset: 0x0

        // duration
        idTypesafeTime < int , millisecondUnique_t , 1000 > duration; // Offset: 0x4

        // melee bounds box from center
        idVec3 meleeBoundsSize; // Offset: 0x8

        // melee bounds offset
        idVec3 meleeBoundsOffset; // Offset: 0x14

        // melee chain info in order
        idList < idDemonPlayer_Dreadknight::meleeData_t::meleeChainInfo_t , TAG_IDLIST , false > meleeChainInfos; // Offset: 0x20

        // start index normal in the meleeChainInfos
        int startChainIndexNormal; // Offset: 0x38

        // start index out of berserk charge in the meleeChainInfos
        int startIndexFromBerserkCharge; // Offset: 0x3C

        // if in the last entry in the meleeChainInfos you can go back to startChainIndexNormal
        bool allowRestartingChain; // Offset: 0x40

        // if berserk ends during a combo do we allow the player to extend the combo or not?
        bool allowMeleeComboAfterBerserkDuration; // Offset: 0x41

        // do melee obstruction test
        bool doObstructionTest; // Offset: 0x42

    }; // Size: 0x48

    struct energyWaveData_t
    {
        // how long to cool down after firing
        idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > cooldown; // Offset: 0x0

        // sound to play when wild fire is used
        idSoundEvent* useSound; // Offset: 0x28

        // loop sound when charging
        idSoundEvent* chargeLoopSound; // Offset: 0x30

        // one shot to play when fully charged
        idSoundEvent* fullyChargedSound; // Offset: 0x38

        // sound played when cooldown is finished
        idSoundEvent* cooldownStopSound; // Offset: 0x40

        // allow hold and charge shot
        bool allowChargeShot; // Offset: 0x48

        // instead of randomly picking from m_shootAnims go in order and wrap around
        bool forceSequenceForShootAnims; // Offset: 0x49

        // intro to charge loop anim alias
        idDemonPlayer_Dreadknight::blendAnimData_t chargeIntroAnim; // Offset: 0x4C

        // charge loop anim
        idDemonPlayer_Dreadknight::blendAnimData_t chargeLoopAnim; // Offset: 0x58

        // how much to refund berserk cooldown on direct hit
        idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > berserkRefundAmount; // Offset: 0x68

        // blend duration from idle/charge idle to shoot
        idTypesafeTime < int , millisecondUnique_t , 1000 > shootBlendInDuration; // Offset: 0x90

        // blend duration idle to shoot for third person anims
        idTypesafeTime < int , millisecondUnique_t , 1000 > shootBlendInDuration_ThirdPerson; // Offset: 0x94

        // blend out duration from shoot
        idTypesafeTime < int , millisecondUnique_t , 1000 > shootBlendOutDuration; // Offset: 0x98

        // blend out duration from shoot for third person anims
        idTypesafeTime < int , millisecondUnique_t , 1000 > shootBlendOutDuration_ThirdPerson; // Offset: 0x9C

        // time to fully charge up a shot
        idTypesafeTime < int , millisecondUnique_t , 1000 > timeToFullyCharge; // Offset: 0xA0

        // random primary fire shoot anim
        idList < idDemonPlayer_Dreadknight::blendAnimData_t , TAG_IDLIST , false > shootAnims; // Offset: 0xA8

        // shoot at end of berserk charge anim aliases
        idList < idDemonPlayer_Dreadknight::blendAnimData_t , TAG_IDLIST , false > shootBerserkChargeAnims; // Offset: 0xC0

        // fully charged anims
        idList < idDemonPlayer_Dreadknight::blendAnimData_t , TAG_IDLIST , false > shootFullyChargedAnims; // Offset: 0xD8

        // third person anims
        idList < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , TAG_IDLIST , false > shootAnimAliases_ThirdPerson; // Offset: 0xF0

    }; // Size: 0x108

    struct quantumOrbData_t
    {
        struct lerpTimeInfo_t
        {
            // minimum amount of time to teleport
            idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > minLerpTime; // Offset: 0x0

            // maximum amount of time to teleport
            idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > maxLerpTime; // Offset: 0x28

            // distance traveled below this value will use min lerp time
            float minDistance; // Offset: 0x50

            // distance traveled above this value will use max lerp time
            float maxDistance; // Offset: 0x54

        }; // Size: 0x58

        // how long to cool down orb is used
        idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > cooldown; // Offset: 0x0

        // how long to cool down if orb is destroyed but not used
        idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > quickCooldown; // Offset: 0x28

        // how long orb should last after firing
        idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > lifetime; // Offset: 0x50

        // info on how long teleport should take
        idDemonPlayer_Dreadknight::quantumOrbData_t::lerpTimeInfo_t lerpInfo; // Offset: 0x78

        // projectile decl for quantum orb
        idDeclProjectile* projectile; // Offset: 0xD0

        // projectile decl for damaging teleportation
        idDeclProjectile* teleProj; // Offset: 0xD8

        // offset applied to account for character height
        float teleportHeightOffset; // Offset: 0xE0

        // What content to check collision against
        contentMask_t collCheckContentMask; // Offset: 0xE4

        // Multiplier to vertical collision check (e.g. 1.0 = full clip height)
        float upCheckMultiplier; // Offset: 0xE8

        // amount to increase fov by when teleporting
        float teleportFovIncrease; // Offset: 0xEC

        // Should blend fov during teleport
        bool doFovBlend; // Offset: 0xF0

        // blend time to teleport fov
        idTypesafeTime < int , millisecondUnique_t , 1000 > fovBlendTime; // Offset: 0xF4

        // sound to play at start of teleport
        idSoundEvent* teleportStartSound; // Offset: 0xF8

        // sound to play at end of teleport
        idSoundEvent* teleportEndSound; // Offset: 0x100

        // demon card used for ui purposes
        idDeclDemonCard* card; // Offset: 0x108

        // casting orb animation alias
        idDemonPlayer_Dreadknight::blendAnimData_t castAnim; // Offset: 0x110

        // teleporting to orb location animation alias
        idDemonPlayer_Dreadknight::blendAnimData_t teleportAnim; // Offset: 0x11C

        // flurry of blows animation alias when exiting teleport
        idDemonPlayer_Dreadknight::blendAnimData_t flurryAnim; // Offset: 0x128

    }; // Size: 0x138

    struct uiInstanceData_t
    {
        idList < idStr , TAG_IDLIST , false > activeDebugBarNames; // Offset: 0x0

        // 0 to 1 anim phase of the chain anim blend anim event
        float chainAnimEventPhase; // Offset: 0x18

        // 0 to 1 phase for the extra damage
        float extraDamageWindowPhase; // Offset: 0x1C

    }; // Size: 0x20

    struct uiData_t
    {
        struct barInfo_t
        {
            struct contextInfo_t
            {
                struct idSort_ContextInfoPtr : idSort_Quick < const idDemonPlayer_Dreadknight::uiData_t::barInfo_t::contextInfo_t * , idDemonPlayer_Dreadknight::uiData_t::barInfo_t::contextInfo_t::idSort_ContextInfoPtr >
                {
                }; // Size: 0x8

                // unique bar name id ( internal not readable text )
                idStr uniqueBarName; // Offset: 0x0

                // context flags
                idDemonPlayer_Dreadknight::dreadknightUIBarContextFlags_t context; // Offset: 0x30

                // bar color
                idColor barColor; // Offset: 0x34

                // valid percentage range
                idRange < float > validPercentageRange; // Offset: 0x44

                // 0 to 1 for width of this context
                idRange < float > drawPercentageRange; // Offset: 0x4C

                // draw layer
                int layer; // Offset: 0x54

                // enabled
                bool enabled; // Offset: 0x58

                // use anim events to effectively calculate the width
                bool useChainWindowAnimEventsForDrawRange; // Offset: 0x59

                // extra damage window
                bool useExtraDamageWindowForDrawRange; // Offset: 0x5A

            }; // Size: 0x60

            // gameplay bar type
            idDemonPlayer_Dreadknight::dreadknightUIBarType_t barType; // Offset: 0x0

            // pos x
            float barPosX; // Offset: 0x4

            // pos y
            float barPosY; // Offset: 0x8

            // width
            float barWidth; // Offset: 0xC

            // height
            float barHeight; // Offset: 0x10

            // frame color
            idColor barFrameColor; // Offset: 0x14

            // bar text
            idStr barText; // Offset: 0x28

            // bar is enabled
            bool enabled; // Offset: 0x58

            // bars to draw based on context
            idList < idDemonPlayer_Dreadknight::uiData_t::barInfo_t::contextInfo_t , TAG_IDLIST , false > contexts; // Offset: 0x60

        }; // Size: 0x78

        // all UI bars
        idList < idDemonPlayer_Dreadknight::uiData_t::barInfo_t , TAG_IDLIST , false > uiBars; // Offset: 0x0

        // is the prototype UI enabled at all?
        bool enabled; // Offset: 0x18

    }; // Size: 0x20

    // data specific to dreadknight
    idDemonPlayer_Dreadknight::dreadknightData_t dreadknightData; // Offset: 0x36FC8

    // data specific to dreadknight berserk
    idDemonPlayer_Dreadknight::berserkData_t berserkData; // Offset: 0x37000

    // data specific to dreadknight melee
    idDemonPlayer_Dreadknight::meleeData_t meleeData; // Offset: 0x370F8

    // data specific to dreadknight melee, when in the air
    idDemonPlayer_Dreadknight::meleeData_t meleeData_inAir; // Offset: 0x37140

    // data specific to ground slam
    idDemonPlayer_Dreadknight::groundSlamData_t groundSlamData; // Offset: 0x37188

    // primary attack data
    idDemonPlayer_Dreadknight::energyWaveData_t energyWaveData; // Offset: 0x37320

    // quantum orb data
    idDemonPlayer_Dreadknight::quantumOrbData_t quantumOrbData; // Offset: 0x37428

    // charge berserk data
    idDemonPlayer_Dreadknight::chargeData_t chargeData; // Offset: 0x37560

    // ui data
    idDemonPlayer_Dreadknight::uiData_t uiData; // Offset: 0x375B8

    // next time energy wave can be used
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextFireTime; // Offset: 0x375D8

    // next time the dreadknight can ground slam
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextValidGroundSlamTime; // Offset: 0x375E0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextValidChargeTime; // Offset: 0x375E8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > berserkChargeEndTime; // Offset: 0x375F0

    // end of berserk state
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > berserkEndTime; // Offset: 0x375F8

    // next time berserk state can be triggered
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextValidBerserkTime; // Offset: 0x37600

    // energy wave
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > primaryFireStartChargeTime; // Offset: 0x37608

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > endGroundSlamPauseTime; // Offset: 0x37610

    // time when attempting to use quantum orb on cooldown
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastQuantumOrbUseFailTime; // Offset: 0x37618

    // time when attempting to use berserk on cooldown
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastBerserkUseFailTime; // Offset: 0x37620

    // when spectre camo should end after enshroud
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > endSpectreTime; // Offset: 0x37628

    // component to help snap the camera and move the demon to hit with melee
    idDemonMeleeLungeComponent meleeComponent; // Offset: 0x37630

    // current target
    idManagedClassPtr < idEntity > currentMeleeTarget; // Offset: 0x37670

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > meleeStartTime; // Offset: 0x37690

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > meleeEndTime; // Offset: 0x37698

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startMeleeCooldownTime; // Offset: 0x376A0

    // ...
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextValidMeleeTime; // Offset: 0x376A8

    // ...
    idHavokShapePointer customMeleeBoundsPtr; // Offset: 0x376B0

    // ...
    bool customMeleeBoundsActive; // Offset: 0x376B8

    // we create an entity to display FX at the ground slam crosshair location
    idManagedClassPtr < idEntity > groundSlamReticleEntity; // Offset: 0x376C0

    // we create an entity to display FX at the adjusted ground slam destination location
    idManagedClassPtr < idEntity > groundSlamTargetEntity; // Offset: 0x376E0

    // number of points for ground slam calculations list of ground slam points
    idArray < idVec3 , 100 > groundSlamArcPoints; // Offset: 0x37700

    // list of traversal points that takes the dreadknight from start to end of slam
    idArray < idVec3 , 100 > groundSlamTraversalPoints; // Offset: 0x37BB0

    // number of ground slam traces
    int numGroundSlamTraces; // Offset: 0x38060

    // targetting ribbon for dreadknight ground slam with valid destination
    idRibbon2 groundSlamRibbon_valid; // Offset: 0x38068

    // targetting ribbon for dreadknight ground slam with invalid destination
    idRibbon2 groundSlamRibbon_invalid; // Offset: 0x38180

    // which ribbon are we using currently?
    idRibbon2* currentRibbon; // Offset: 0x38298

    // owner wants to ground slam
    bool ownerWantsToGroundSlam; // Offset: 0x382A0

    // spectating client currently has fx/visuals setup for wanting to ground slam
    bool clientWantsToGroundSlam; // Offset: 0x382A1

    bool playingIntoGroundSlamTelegraphAnim; // Offset: 0x382A2

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > intoGroundSlamTelegraphAnimEndTime; // Offset: 0x382A8

    // are we searching for a ground slam destination right now?
    bool wantsToGroundSlam; // Offset: 0x382B0

    // is our current destination valid?
    bool validGroundSlamDestination; // Offset: 0x382B1

    bool groundSlamTargetSoundPlaying; // Offset: 0x382B2

    idHavokQueryId groundSlamQuery; // Offset: 0x382B8

    trace_t groundSlamResult; // Offset: 0x382C0

    idVec3 groundSlamDestination; // Offset: 0x38340

    // normal of the ground slam destination
    idVec3 groundSlamDestinationNormal; // Offset: 0x3834C

    // is the ground slam indicator showing?
    bool groundSlamButtonShowing; // Offset: 0x38358

    // is primary attack button down
    bool primaryAttackDown; // Offset: 0x38359

    // active
    bool berserkChargeActive; // Offset: 0x3835A

    // owner is doing berserk charge
    bool ownerIsInBerserkCharge; // Offset: 0x3835B

    // input down - needed for charge shot
    bool primaryFireInputDown; // Offset: 0x3835C

    // fully charged?
    bool primaryFireFullyCharged; // Offset: 0x3835D

    bool primaryFireInstigatedAtEndOfBerserkCharge; // Offset: 0x3835E

    bool isInAirMelee; // Offset: 0x3835F

    bool energyWaveCooldown; // Offset: 0x38360

    bool wasInAir; // Offset: 0x38361

    // is dreadknight in berserk state?
    bool inBerserkState; // Offset: 0x38362

    // should we refund berserk cooldown on energy wave hit?
    bool refundBerserkCooldownOnHit; // Offset: 0x38363

    // if true lock berserk ability
    bool berserkRoundLock; // Offset: 0x38364

    // has berserk been used for the first time?
    bool berserkNotUsed; // Offset: 0x38365

    // was berserk on cooldown in the last cycle
    bool berserkOnCooldown; // Offset: 0x38366

    // run speed prior to entering berserk state
    float defaultRunSpeed; // Offset: 0x38368

    idManagedClassPtr < idProjectile > quantumOrbEntity; // Offset: 0x38370

    idManagedClassPtr < idProjectile > quantumTeleProjectile; // Offset: 0x38390

    idVec3 orbTeleportPosition; // Offset: 0x383B0

    idVec3 orbLaunchPosition; // Offset: 0x383BC

    idMat3 orbLaunchAxis; // Offset: 0x383C8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > quantumOrbDestructTime; // Offset: 0x383F0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > quantumOrbNextValidTime; // Offset: 0x383F8

    bool isQuickCooldown; // Offset: 0x38400

    idArray < idDemonPlayer_Dreadknight::uiInstanceData_t , 5 > uiInstanceData; // Offset: 0x38408

    // likely need to serialize something for clients
    int meleeChainIndex; // Offset: 0x384A8

    // for alternating anims
    uint32_t primaryFireCounter; // Offset: 0x384AC

    idTypesafeTime < int , millisecondUnique_t , 1000 > invisibilityAfterGroundSlam_Duration; // Offset: 0x384B0

    idDeclEntityDef* invisibilityAfterGroundSlam_ExplosionEntityDef; // Offset: 0x384B8

    idDeclEntityDef* invisibilityAfterGroundSlam_AOEEntityDef; // Offset: 0x384C0

    idTypesafeTime < int , millisecondUnique_t , 1000 > invisibilityAfterGroundSlam_AOEEntityDuration; // Offset: 0x384C8

    idSoundEvent* invisibilityAfterGroundSlam_StartSound; // Offset: 0x384D0

    idSoundEvent* invisibilityAfterGroundSlam_StopSound; // Offset: 0x384D8

    // if active
    bool invisibilityAfterGroundSlam_Active; // Offset: 0x384E0

}; // Size: 0x384E8

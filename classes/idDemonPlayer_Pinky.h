struct idDemonPlayer_Pinky : idDemonPlayer
{
    enum invaliCloakShimmerHandle_t : int
    {
        INVALID_CLOAK_SHIMMER_HANDLE = -1
    };

    struct CloakShimmerEvent_t
    {
        // specifies the cloak opacity value to be applied while the shimmer event is active [0.0-1.0]
        float cloakOpacityValue; // Offset: 0x0

        // if true, this shimmer event definition can be active multiple times simultaneously (ex. for damage events) [boolean]
        bool allowStacking; // Offset: 0x4

        // looping audio to play while the shimmer is active
        idSoundEvent* audioShader; // Offset: 0x8

    }; // Size: 0x10

    struct CloakShimmerEventInstance_t
    {
        // reference to the shimmer event that holds the shimmer properties
        idDemonPlayer_Pinky::CloakShimmerEvent_t* shimmerEvent; // Offset: 0x0

        // when the shimmer event should end (if less than 0, the shimmer event must be manually stopped)
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > endTime; // Offset: 0x8

        // handle to identify this specific shimmer event
        short handle; // Offset: 0x10

    }; // Size: 0x18

    struct PinkyData_t
    {
        struct ChompAttack_t
        {
            // duration of the chomp attack 'wind up' [ms]
            idTypesafeTime < int , millisecondUnique_t , 1000 > lungeDuration; // Offset: 0x0

            // if set to true, cloaking should be disabled for the duration of the attack (deactivating any active cloak) [boolean]
            bool shouldCancelCloak; // Offset: 0x4

            // specifies the 'cloak shimmer' properties applied for the duration of the chomp attack
            idDemonPlayer_Pinky::CloakShimmerEvent_t cloakShimmer; // Offset: 0x8

            // melee Left anim alias for 3rd person
            idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > meleeLeftAnimAlias; // Offset: 0x18

            // melee Right anim alias for 3rd person
            idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > meleeRightAnimAlias; // Offset: 0x1A

        }; // Size: 0x20

        struct BullRushAttack_t
        {
            struct ImpactVictimImpulse_t
            {
                // minimum angle for the pitch (above the horizon) for the impulse applied to victims of the BullRush attack [degrees]
                float pitchAngleMinDeg; // Offset: 0x0

                // maximum angle for the pitch (above the horizon) for the impulse applied to victims of the BullRush attack [degrees]
                float pitchAngleMaxDeg; // Offset: 0x4

                // minimum angle for random right/left (heading) rotation for the impulse applied to victims of the BullRush attack [degrees]
                float yawAngleMinDeg; // Offset: 0x8

                // maximum angle for random right/left (heading) rotation for the impulse applied to victims of the BullRush attack [degrees]
                float yawAngleMaxDeg; // Offset: 0xC

            }; // Size: 0x10

            struct ImpactCameraShake_t
            {
                // how much the controller shakes on low rumble for hit
                float controllerShakeHighMag; // Offset: 0x0

                // how long in MS the controller will shake.
                idTypesafeTime < int , millisecondUnique_t , 1000 > controllerShakeHighTime; // Offset: 0x4

                // how much the controller shakes on high rumble for hit
                float controllerShakeLowMag; // Offset: 0x8

                // how long in MS the controller will shake.
                idTypesafeTime < int , millisecondUnique_t , 1000 > controllerShakeLowTime; // Offset: 0xC

            }; // Size: 0x10

            // duration of the intro transition into the bull-rush [ms]
            idTypesafeTime < int , millisecondUnique_t , 1000 > introDuration; // Offset: 0x0

            // how long it takes for pinky to accelerate up to max speed during the BullRush intro [ms]
            idTypesafeTime < int , millisecondUnique_t , 1000 > introAccelerateDuration; // Offset: 0x4

            // duration of the bull rush [ms]
            idTypesafeTime < int , millisecondUnique_t , 1000 > rushDuration; // Offset: 0x8

            // duration of the outro transition out of the bull-rush [ms]
            idTypesafeTime < int , millisecondUnique_t , 1000 > outroDuration; // Offset: 0xC

            // how long it takes for pinky to decelerate during the BullRush outro [ms]
            idTypesafeTime < int , millisecondUnique_t , 1000 > outroDecelerateDuration; // Offset: 0x10

            // if true, the player is allowed to continue steering left/right during the outro [boolean]
            bool outroSteeringEnabled; // Offset: 0x14

            // duration of the collision outro transition of the bull-rush [ms]
            idTypesafeTime < int , millisecondUnique_t , 1000 > collideDuration; // Offset: 0x18

            // forward movement speed during the bull rush attack {{ units = m / s }}
            float forwardMovementSpeed; // Offset: 0x1C

            // distance searched for ground below Pinky, used to stick Pinky to the ground plane while running off ramps and such {{ units = m }}
            float groundSearchDist; // Offset: 0x20

            // maximum amount camera can turn around the yaw during the bull rush attack [degrees / sec]
            float cameraMaxYawTurnRate; // Offset: 0x24

            // maximum amount camera can turn around the yaw during the bull rush attack [degrees / sec]
            float cameraMaxPitchTurnRate; // Offset: 0x28

            // scaler applied to the camera's rotation sensitivity during the bull rush attack [scaler]
            float cameraSensitivtyScaler; // Offset: 0x2C

            // FOV applied to the camera while bull rushing
            float cameraFOV; // Offset: 0x30

            // Transition time for applying and removing the camera FOV override
            idTypesafeTime < int , millisecondUnique_t , 1000 > cameraFOVTransitionTime; // Offset: 0x34

            // Transition time for applying and removing the camera FOV override
            idTypesafeTime < int , millisecondUnique_t , 1000 > cameraFOVTransitionOutTime; // Offset: 0x38

            // damage to apply during the bull rush attack
            idDeclDamage* impactDamage; // Offset: 0x40

            // default impact effect for the bull rush attack when dealing damage
            idDeclImpactEffect* impactDamageEffects; // Offset: 0x48

            // impact effect played specifically when colliding head on with static geometry that aborts the BullRush
            idDeclImpactEffect* impactWallCollisionEffects; // Offset: 0x50

            // anim index for the additive animation to play on the Pinky when impacting a player
            int impactFirstPersonAnimIdx; // Offset: 0x58

            // controls the blend time for the additive first person impact anim
            idTypesafeTime < int , millisecondUnique_t , 1000 > impactFirstPersonAnimBlendMS; // Offset: 0x5C

            // amount of time that must elapse before the same entity can be hit again from the same BullRush (prevent multiple impacts stacking from one 'perceived' hit)
            idTypesafeTime < int , millisecondUnique_t , 1000 > impactEntityRehitTime; // Offset: 0x60

            // impact victim impulse
            idDemonPlayer_Pinky::PinkyData_t::BullRushAttack_t::ImpactVictimImpulse_t impactVictimImpulse; // Offset: 0x64

            // cooldown time before the bull rush attack can be used again [ms]
            idTypesafeTime < int , millisecondUnique_t , 1000 > cooldownTime; // Offset: 0x74

            // dimension of the melee clip box {{ units = m }}
            idVec3 meleeClipDimensions; // Offset: 0x78

            // distance in front of pinky to extend the melee tract sweep during the bull rush attack {{ units = m }}
            float meleeTraceForwardSweepDist; // Offset: 0x84

            // offset applied to the bull rush attack melee trace (world space) {{ units = m }}
            idVec3 meleeTraceOffset; // Offset: 0x88

            // controls the epsilon ('depth') added to the clip model's bounding box when performing the contact query {{ units = m }}
            float meleeTraceContactDepth; // Offset: 0x94

            // clip mask to use for the damage melee trace
            idContents meleeTraceClipMask; // Offset: 0x98

            // radius used for a secondary LOS check against potential targets to ensure they can be hit (not behind a wall) {{ units = m }}
            float meleeTraceLOSRadius; // Offset: 0x9C

            // how far ahead of pinky to look ahead for contacts that should abort an active bull rush attack {{ units = m }}
            float abortContactLookAheadDist; // Offset: 0xA0

            // max dot product, COS(theta) from XY plane, between contact normal and up-vector that should abort the bull rush [COS(radians)]
            float abortContactNormalMaxVertDot; // Offset: 0xA4

            // min dot product, COS(theta) from f-vec, between contact normal and movement vector that should abort the bull rush [COS(radians)]
            float abortContactNormalMaxHorzDot; // Offset: 0xA8

            // controls the epsilon ('depth') added to the clip model's bounding box when performing the contact query {{ units = m }}
            float abortContactDepth; // Offset: 0xAC

            // if true, the user must press AND hold the button to continue the attack (releasing will abort the attack), otherwse pressing the button a second time will abort the attack [boolean]
            bool pressAndHold; // Offset: 0xB0

            // if true, the user may begin a BullRush attack while in mid-air, otherwise if false, the user must be standing on the ground to initiate a BullRush. [boolean]
            bool canBeginRushInAir; // Offset: 0xB1

            // if set to true, cloaking should be disabled for the duration of the attack (deactivating any active cloak) [boolean]
            bool shouldCancelCloak; // Offset: 0xB2

            // specifies the 'cloak shimmer' properties applied for the duration of the bull rush attack
            idDemonPlayer_Pinky::CloakShimmerEvent_t cloakShimmer; // Offset: 0xB8

            // the additive animation to play during the bullrush intro when starting from idle
            idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > thirdPersonAdditiveIntroAnimIdle; // Offset: 0xC8

            // the additive animation to play during the bullrush intro when starting from a walk/run
            idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > thirdPersonAdditiveIntroAnimRun; // Offset: 0xCA

            // index of the first person additive intro anim
            int firstPersonAdditiveIntroAnimIdx; // Offset: 0xCC

            // blend time for the first person additive intro anim [ms]
            idTypesafeTime < int , millisecondUnique_t , 1000 > firstPersonAdditiveIntroBlendTime; // Offset: 0xD0

            // looping audio to play while the bullrush is active
            idSoundEvent* audioStartRushShader; // Offset: 0xD8

            // audio to play when the bullrush ends
            idSoundEvent* audioEndRushShader; // Offset: 0xE0

            // impact camera-shake parameters
            idDemonPlayer_Pinky::PinkyData_t::BullRushAttack_t::ImpactCameraShake_t impactCameraShake; // Offset: 0xE8

        }; // Size: 0xF8

        struct CloakAbility_t
        {
            // what material to use on first person models when below the opacity max threshold
            idMaterial2* cloakFirstPersonMaterial; // Offset: 0x0

            // what material to use on third person models when below the opacity max threshold
            idMaterial2* cloakThirdPersonMaterialBody; // Offset: 0x8

            // what material to use on third person models when below the opacity max threshold
            idMaterial2* cloakThirdPersonMaterialArmor; // Offset: 0x10

            // what material to use on hostile third person models when below the opacity max threshold
            idMaterial2* cloakThirdPersonHostileMaterialBody; // Offset: 0x18

            // what material to use on hostile third person models when below the opacity max threshold
            idMaterial2* cloakThirdPersonHostileMaterialArmor; // Offset: 0x20

            // the maximum opacity threshold where the cloak material should be applied for first person (above this opacity the default model material(s) are used) [0.0 - 1.0]
            float cloakFirstPersonMaterialOpacityMax; // Offset: 0x28

            // the maximum opacity threshold where the cloak material should be applied for third person (above this opacity the default model material(s) are used) [0.0 - 1.0]
            float cloakThirdPersonMaterialOpacityMax; // Offset: 0x2C

            // the maximum opacity threshold where the cloak material should be applied for hostile third person (above this opacity the default model material(s) are used) [0.0 - 1.0]
            float cloakThirdPersonHostileMaterialOpacityMax; // Offset: 0x30

            // list of third person mesh indexes that use the body material
            idList < int , TAG_IDLIST , false > modelBodyMeshIndexes; // Offset: 0x38

            // list of third person mesh indexes that use the armor material
            idList < int , TAG_IDLIST , false > modelArmorMeshIndexes; // Offset: 0x50

            // default opacity for the cloak effect (may be overridden by active shimmer events) [0.0 - 1.0]
            float defaultOpacity; // Offset: 0x68

            // how long to delay before beginning the transition into cloak (when turning ON) [ms]
            idTypesafeTime < int , millisecondUnique_t , 1000 > transitionInDelay; // Offset: 0x6C

            // how long the cloak effect transition takes to blend in after the delay (when turning ON) [ms]
            idTypesafeTime < int , millisecondUnique_t , 1000 > transitionInBlendTime; // Offset: 0x70

            // how long to delay before beginning the transition out of cloak (when turning OFF) [ms]
            idTypesafeTime < int , millisecondUnique_t , 1000 > transitionOutDelay; // Offset: 0x74

            // how long the cloak effect transition takes to blend out after the delay (when turning OFF) [ms]
            idTypesafeTime < int , millisecondUnique_t , 1000 > transitionOutBlendTime; // Offset: 0x78

            // scaler applied to the demon's movement speed while cloak is active [scaler 0.0 - X]
            float movementSpeedScaler; // Offset: 0x7C

            // looping audio to play while the cloak ability is active
            idSoundEvent* audioShader; // Offset: 0x80

            // audio to play when the cloak ability deactivates
            idSoundEvent* audioDeactivateShader; // Offset: 0x88

        }; // Size: 0x90

        struct WeakSpot_t
        {
            // amount of damage to the weak spot to cause the 'vulnerable' state to be entered
            float enterVulnerableDamageAmount; // Offset: 0x0

            // maximum span of time between damage events before the damage count towards the 'vulnerable' state should be cleared [ms]
            idTypesafeTime < int , millisecondUnique_t , 1000 > enterVulnerableDamageResetTime; // Offset: 0x4

            // how long the vulnerable state should last [ms]
            idTypesafeTime < int , millisecondUnique_t , 1000 > vulnerableDuration; // Offset: 0x8

            // how much time must elapse after exiting the 'vulnerable' state before the vulnerable state can be entered again [ms]
            idTypesafeTime < int , millisecondUnique_t , 1000 > vulnerableCooldownTime; // Offset: 0xC

            // set to true if the cloaking ability should be interrupted when entering the 'vulnerable' state [boolean]
            bool vulnerableInterruptsCloak; // Offset: 0x10

            // set to true if the cloaking ability should be disabled (cannot be activated) for the duration of the 'vulnerable' state [boolean]
            bool vulnerableDisablesCloak; // Offset: 0x11

        }; // Size: 0x14

        // chomp attack parameters
        idDemonPlayer_Pinky::PinkyData_t::ChompAttack_t chompAttack; // Offset: 0x0

        // bull rush attack parameters
        idDemonPlayer_Pinky::PinkyData_t::BullRushAttack_t bullRushAttackInfo; // Offset: 0x20

        // cloaking ability parameters
        idDemonPlayer_Pinky::PinkyData_t::CloakAbility_t cloakAbilityInfo; // Offset: 0x118

        // weak spot parameters
        idDemonPlayer_Pinky::PinkyData_t::WeakSpot_t weakSpotInfo; // Offset: 0x1A8

    }; // Size: 0x1C0

    typedef short CloakShimmerHandle_t;

    // Entity decl data specific for the pinky demon
    idDemonPlayer_Pinky::PinkyData_t pinkyData; // Offset: 0x36FC8

    // Run-time variables   Chomp attack component to help snap the camera and move the demon to hit with melee ChompAttacks
    idDemonMeleeLungeComponent meleeComponent; // Offset: 0x37188

    // current melee ChompAttack target
    idManagedClassPtr < idEntity > reticleMeleeTarget; // Offset: 0x371C8

    // interpolater to smoothly slide the reticle spread based the validity of your meleeTarget
    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > reticleMeleeTargetBlend; // Offset: 0x371E8

    // handle to the cloak shimmer event created for the chomp attack
    short chompAttackClaokShimmerHandle; // Offset: 0x37218

    // BullRush attack the start position used for the previous target search clip query {{ units = m }}
    idVec3 rushTargetSearchStartPos; // Offset: 0x3721C

    // the end position used for the previous target search clip query {{ units = m }}
    idVec3 rushTargetSearchEndPos; // Offset: 0x37228

    // clip model used to collect potential targets to damage during the BullRush
    idHavokShapePointer rushDamageClipModel; // Offset: 0x37238

    // clip model used to test for LOS to specific models collected to verify they can be damaged (not behind a wall)
    idHavokShapePointer rushDamageLOSClipModel; // Offset: 0x37240

    // server time when the bull rush attack last started
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > rushPreviousAttackTime; // Offset: 0x37248

    // server time when the bull rush attack last ended (used for the cooldown mechanic)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > rushPreviousAttackEndTime; // Offset: 0x37250

    // handle to the cloak shimmer event created for the bull rush attack
    short rushCloakShimmerHandle; // Offset: 0x37258

    // list of entities hit with current rush attack and local time it occurred. (Uses underlying types of idSpawnId & gameTime_t, since they are incompatible with idHashTable<>)
    idHashTableT < int , int , 4 > rushHitEntities; // Offset: 0x37260

    // percentage of the maximum rush speed to be applied (set from the FSM states)
    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > rushMaxSpeedPercentage; // Offset: 0x37280

    // Cloaking ability internal flag for tracking the cloaking state
    bool cloakIsActive; // Offset: 0x372B0

    // internal flag for tracking whether or not the cloak effects are currently applied
    bool cloakEffectsApplied; // Offset: 0x372B1

    // local time when cloak was last activated
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > cloakLastActivatedTime; // Offset: 0x372B8

    // local time when the cloak was last deactivated
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > cloakLastDeactivatedTime; // Offset: 0x372C0

    // the cloak percentage when the most recent transition (activation/deactivation) occured
    float cloakLastTransitionPercent; // Offset: 0x372C8

    // Cloak shimmer next handle to assign when starting a cloak shimmer event
    short nextShimmerHandle; // Offset: 0x372CC

    // list of active cloak shimmer events (wrapper around the buffer for ease-of-use)
    idStaticList < idDemonPlayer_Pinky::CloakShimmerEventInstance_t , 4 , false , TAG_IDLIST > cloakShimmerActiveList; // Offset: 0x372D0

    // Weak-spot state internal flag for tracking Pinky's vulnerable state
    bool vulnerableIsActive; // Offset: 0x37348

    // running total for the damage received to the 'weak spot' used to trigger the vulnerable state
    float weakSpotAccumDamage; // Offset: 0x3734C

    // timestamp for the last received 'weak spot' damage event
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > weakSpotLastDamagedTime; // Offset: 0x37350

    // timestamp for when the vulnerable state started (used to calculate duration and cooldown times)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > weakSpotVulnerableStartTime; // Offset: 0x37358

}; // Size: 0x37360

struct idDemonPlayer_Cacodemon : idDemonPlayer
{
    struct CacodemonData
    {
        struct BloomScaleData
        {
            // bloom scale at min level
            float minValue; // Offset: 0x0

            // bloom scale at max level
            float maxValue; // Offset: 0x4

            // how long it takes to reach max level
            float chargeUpTime; // Offset: 0x8

            // how long it takes to return from max level to min level
            float chargeDownTime; // Offset: 0xC

            // power to drive the mask harder
            float power; // Offset: 0x10

        }; // Size: 0x14

        struct SnarePingFX
        {
            // Time between highlight pings (seconds)
            float pingPeriodSeconds; // Offset: 0x0

            // How fast the ping wave moves {{ units = m / s }}
            float pingSpeed; // Offset: 0x4

            // How long players are highlighted by pings (seconds)
            float pingDurationSeconds; // Offset: 0x8

            // Parameter fed into the bfg vision ping shader to control what the ping looks like
            float pingPowerExponent; // Offset: 0xC

            // How often to tile based on depth {{ units = m }}
            float zDepthTileRate; // Offset: 0x10

            // How often to tile based on height {{ units = m }}
            float zHeightTileRate; // Offset: 0x14

        }; // Size: 0x18

        // damage to apply when snare attack is done
        idDeclDamage* snareDamage; // Offset: 0x0

        // max vertical speed {{ units = m / s }}
        float verticalSpeed; // Offset: 0x8

        // vertical accel rate {{ units = 1 / s }}
        float verticalAccelRate; // Offset: 0xC

        // vertical friction {{ units = 1 / s }}
        float verticalFriction; // Offset: 0x10

        // horizontal friction {{ units = 1 / s }}
        float horizontalFriction; // Offset: 0x14

        // horizontal accel rate {{ units = 1 / s }}
        float horizontalAccelRate; // Offset: 0x18

        // maximum movement speed {{ units = m / s }}
        float maximumSpeed; // Offset: 0x1C

        // maximum falling speed when idle {{ units = m / s }}
        float gravitySpeed; // Offset: 0x20

        // Length of the short snare animation {{ units = m }}
        float snareAnimRangeMin; // Offset: 0x24

        // How far the snare animation reaches {{ units = m }}
        float snareAnimRange; // Offset: 0x28

        // Length of the short snare animation (third Person) {{ units = m }}
        float snareAnimRangeMin3p; // Offset: 0x2C

        // How far the snare animation reaches (third Person) {{ units = m }}
        float snareAnimRange3p; // Offset: 0x30

        // How far we want the snare to reach, must be less than meleeAnimSnareRange {{ units = m }}
        float snareRange; // Offset: 0x34

        // How far off center we can snare something at the base {{ units = m }}
        float snareTargetBaseRadius; // Offset: 0x38

        // How far off center we can snare something {{ units = m }}
        float snareTargetRadius; // Offset: 0x3C

        // in ms how long to charge snare attack to get full range
        idTypesafeTime < int , millisecondUnique_t , 1000 > snareChargeTime; // Offset: 0x40

        // in ms how long to wind down
        idTypesafeTime < int , millisecondUnique_t , 1000 > snareChargeCancelTime; // Offset: 0x44

        // what percentage to start wind down at
        float snareChargeCancelStart; // Offset: 0x48

        // maximum movement speed when charging {{ units = m / s }}
        float maximumSpeedWhenCharging; // Offset: 0x4C

        // How many kills we need to fire our attack
        int killsToFire; // Offset: 0x50

        // Size of collision radius of snare attack {{ units = m }}
        float snareCollisionCheckRadius; // Offset: 0x54

        // At this distance do a melee attack instead of a snare {{ units = m }}
        float meleeRange; // Offset: 0x58

        // rumble decl when hitting the enviroment
        idDeclRumble* rumbleOnHitEnvTargetDecl; // Offset: 0x60

        // rumble decl when charging
        idDeclRumble* rumbleOnSnareChargeDecl; // Offset: 0x68

        // table for proper impact effect of snare attack
        idDeclImpactEffect* snareHitEffectTable; // Offset: 0x70

        // looping charge sound that uses variable pitch according to charge value
        idSoundEvent* chargeSound; // Offset: 0x78

        // sound to play when fully charged
        idSoundEvent* fullChargeSound; // Offset: 0x80

        // sound to play when fully charged (looping)
        idSoundEvent* fullyChargedLoopingSound; // Offset: 0x88

        // sound to play when we have a valid target
        idSoundEvent* targetAcquiredSound; // Offset: 0x90

        // sound to play when we lose our target
        idSoundEvent* targetLostSound; // Offset: 0x98

        // sound to play when trying to snare to early
        idSoundEvent* snareFailedSound; // Offset: 0xA0

        // sound to play when the a victim gets snared
        idSoundEvent* victimSnaredSound; // Offset: 0xA8

        // sound to play when the a victim gets snared is locally controlled
        idSoundEvent* localVictimSnaredSound; // Offset: 0xB0

        // sound to play when in idle state (not attacking and just moving around)
        idSoundEvent* idleSound; // Offset: 0xB8

        // sound to play when staying in out of bounds area
        idSoundEvent* outOfBoundsSound; // Offset: 0xC0

        // interval the out of bounds sound plays at in ms
        int outOfBoundsSoundInterval; // Offset: 0xC8

        // Button used to fire weapon
        usercmdButton_t weaponFireButton; // Offset: 0xD0

        // Button used for snare attack
        usercmdButton_t snareFireButton; // Offset: 0xD8

        // amount of damage to the weak spot to cause the 'vulnerable' state to be entered
        float enterVulnerableDamageAmount; // Offset: 0xE0

        // maximum span of time between damage events before the damage count towards the 'vulnerable' state should be cleared [ms]
        idTypesafeTime < int , millisecondUnique_t , 1000 > enterVulnerableDamageResetTime; // Offset: 0xE4

        // how long the vulnerable state should last [ms]
        idTypesafeTime < int , millisecondUnique_t , 1000 > vulnerableDuration; // Offset: 0xE8

        // the scale of the range for magnetizing a prop
        float magnetizationRangeScale; // Offset: 0xEC

        // data for bloom scale while charging on 1p cacodemon
        idDemonPlayer_Cacodemon::CacodemonData::BloomScaleData snareBloomScaleData; // Offset: 0xF0

        // data to control snaring fx
        idDemonPlayer_Cacodemon::CacodemonData::SnarePingFX snarePingFX; // Offset: 0x104

    }; // Size: 0x120

    // data specific for cacodemon
    idDemonPlayer_Cacodemon::CacodemonData cacoDemonData; // Offset: 0x36FC8

    // additive lag for third person animations
    idDemonPlayerAdditiveLagAnim thirdPersonAdditiveLag; // Offset: 0x370E8

    idManagedClassPtr < idPlayer > snareTarget; // Offset: 0x37350

    // The Contents query where the cursor is pointing
    idHavokQueryId snareQuery; // Offset: 0x37370

    bool hasSnareTargetPos; // Offset: 0x37378

    // {{ units = m }}
    idVec3 snareEndPos; // Offset: 0x3737C

    idHavokShapePointer snareTraceBoxHavok; // Offset: 0x37388

    int currentEatCountSinceLastFire; // Offset: 0x37390

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > snareChargeStartTime; // Offset: 0x37398

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > snareChargeStartCancelTime; // Offset: 0x373A0

    // Weak-spot state tracking vulnerable state is active
    bool vulnerableIsActive; // Offset: 0x373A8

    // running total for the damage received to the 'weak spot' used to trigger the vulnerable state
    float weakSpotAccumDamage; // Offset: 0x373AC

    // timestamp for the last received 'weak spot' damage event
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > weakSpotLastDamagedTime; // Offset: 0x373B0

    // timestamp for when the vulnerable state started (used to calculate duration and cooldown times)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > weakSpotVulnerableStartTime; // Offset: 0x373B8

    bool isOutOfArea; // Offset: 0x373C0

    // when to start taking damage from outOfBound in server time
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > outOfAreaStartDamageServerTime; // Offset: 0x373C8

    // the last time the out of area sound was played
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > outOfAreaLastSoundPlayedTime; // Offset: 0x373D0

    idVec3 lastDesiredLookDir; // Offset: 0x373D8

    bool hadFirstLookUpdate; // Offset: 0x373E4

    float bloomScaleMask; // Offset: 0x373E8

}; // Size: 0x373F0

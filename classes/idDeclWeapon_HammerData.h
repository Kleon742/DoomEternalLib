struct idDeclWeapon_HammerData : idDeclWeapon_Data
{
    struct launchParms_t
    {
        // How much of our forward / left motion do we want to carry over
        float movementVectorScale; // Offset: 0x0

        // How many seconds before slam is initiated
        float preSlamJumpTimeSec; // Offset: 0x4

        // upwards y velocity applied during pre-slam jump
        float slamJumpImpulse; // Offset: 0x8

        // upwards y velocity to apply if we activate this slam from the ground;
        float slamJumpImpulseFromGround; // Offset: 0xC

        // How far from the ground do we need to be to differentiate between the slam jump impulses
        float slamJumpGroundCushion; // Offset: 0x10

        // use slow motion when pre-slam is initiated
        bool slowMoEnabled; // Offset: 0x14

        // how long is slow mo active
        float slowMoDurationSec; // Offset: 0x18

        // How long to ease in to slow mo
        float slowMoEaseInSec; // Offset: 0x1C

        // How long to ease out of slow mo
        float slowMoEaseOutSec; // Offset: 0x20

        // How slow do we go
        float slowMoScale; // Offset: 0x24

    }; // Size: 0x28

    struct landingParms_t
    {
        // AOE damage done by the slam
        idDeclDamage* damage_Slam; // Offset: 0x0

        // Scales slam AOE damage by distance traveled before landing
        idDeclTable* damageScalePerDistanceTraveled; // Offset: 0x8

        // Sound to play when landing as a result of the ground slam
        idSoundEvent* landingSound; // Offset: 0x10

        // fx to play when landed ( if not set will use FX_PLAYER_GROUND_SLAM )
        fxCondition_t slamFX; // Offset: 0x18

        // Player view is lerped back to 0 after ground slam. This value scales that up or down to happen faster or slower, respectively.
        float viewLevelingLerpScalar; // Offset: 0x1C

    }; // Size: 0x20

    struct repulsionParms_t
    {
        // -Z offset for the hammer slam repulsor
        float hammerSlamRepulsorOffset; // Offset: 0x0

        // custom height for the repulsor when doing a hammer slam
        float hammerSlamRepulsorHeight; // Offset: 0x4

        // custom repulsor radius when doing a hammer slam
        float hammerSlamRepulsorRadius; // Offset: 0x8

        // allow player collision with AI during slam
        bool allowCollisionWithAIDuringSlam; // Offset: 0xC

        // allow repulsion at all during slam
        bool allowRepulsionDuringSlam; // Offset: 0xD

        // otherwise AI might be considered "ground"
        bool doCustomGroundTracesForSlam; // Offset: 0xE

    }; // Size: 0x10

    // Movement speed and direction of the ground slap
    idDeclTable* movementTable_Slam; // Offset: 0x90

    // Sound to play when the ground slam is activated
    idSoundEvent* slamActivationSound; // Offset: 0x98

    // Sound to play when the super charged ground slam is activated
    idSoundEvent* superSlamActivationSound; // Offset: 0xA0

    // Player must be this minimum height above the ground to activate the ground slam
    float minActivationHeight; // Offset: 0xA8

    // ground trace distance when doing the hammer slam
    float groundTraceDistance; // Offset: 0xAC

    // Can dash cancel hammer slam
    bool dashCanCancel; // Offset: 0xB0

    // How long after a slam can slam be activated again
    idTypesafeTime < float , secondUnique_t , 1 > slamCooldown; // Offset: 0xB4

    // How much time after initiating hammer slam do we have to cancel out with dash
    idTypesafeTime < float , secondUnique_t , 1 > slamCancellationTime; // Offset: 0xB8

    // Once a slam is landed how long until we can start refilling supermeter ( ms )
    idTypesafeTime < int , millisecondUnique_t , 1000 > chargeMeterRefillCooldown; // Offset: 0xBC

    // Use radial dash blur on slam
    bool enableRadialDashBlur; // Offset: 0xC0

    // radial dash fade out time
    idTypesafeTime < int , millisecondUnique_t , 1000 > radialDashFadeOutTime; // Offset: 0xC4

    // Parameters related to launch before slam
    idDeclWeapon_HammerData::launchParms_t launchParms; // Offset: 0xC8

    // slam parms
    idDeclWeapon_HammerData::landingParms_t superSlamLandingParms; // Offset: 0xF0

    // repulsion parms
    idDeclWeapon_HammerData::repulsionParms_t hammerSlamRepulsionParms; // Offset: 0x110

}; // Size: 0x120

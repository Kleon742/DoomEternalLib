struct idDeclBoostPack : idDeclInventory
{
    // Primary boost settings vertical boost impulse applied to the player when first activated to try and clear any obstacles in front of the player before applying the primary boost {{ units = kg * m / s }}
    float initialVerticalBoostImpulse; // Offset: 0x3F8

    // max total impulse (0.0 means no clamp)
    float maxImpulse; // Offset: 0x3FC

    // physics impulse applied to the player when activated {{ units = kg * m / s }}
    float primaryBoostImpulse; // Offset: 0x400

    // delay for the primary boost impulse after user presses uses the BoostPack, to allow the initial vertical boost some time to help clear the player over obstacles [ms]
    idTypesafeTime < int , millisecondUnique_t , 1000 > primaryBoostImpulseDelay; // Offset: 0x404

    // if true, the boost impulse will be applied after first zeroing all downward velocity
    bool zeroDownwardVelocity; // Offset: 0x408

    // if true, holding jump button will activate
    bool jumpActivation; // Offset: 0x409

    // how long player has to hold jump before boost activates
    idTypesafeTime < int , millisecondUnique_t , 1000 > jumpActivationDelayMS; // Offset: 0x40C

    // linear velocity cannot drop below this limit when boosting (likely to be something negative and small)
    float verticalVelocityLowerLimit; // Offset: 0x410

    // linear velocity cannot go above this limit when boosting (likely to be something larger and positive)
    float verticalVelocityUpperLimit; // Offset: 0x414

    // Low speed 'bonus' impulse settings optional additional impulse applied to the player when stationary or traveling at linear velocity less than m_lowSpeedBonusImpulseMaxVel (Lerp'd from 0.0 GU / s) {{ units = kg * m / s }}
    float lowSpeedBonusImpulse; // Offset: 0x418

    // the maximum linear velocity of the player where the low speed bonus impulse is still applied (the actual bonus impulse is Lerp'd from 0.0 Game Units/s) {{ units = m / s }}
    float lowSpeedBonusImpulseMaxVel; // Offset: 0x41C

    // if true, the low speed bonus impulse will be applied along the ground plane, otherwise it's applied in the XYZ direction of the boost impulse [boolean]
    bool lowSpeedBonusImpulseAlongGround; // Offset: 0x420

    // Boost trajectory pitch controls minimum pitch angle (above horizon) for the boost impulse direction [degrees]
    float minLaunchPitchAngleDeg; // Offset: 0x424

    // Ramp avoidance parameters pitch angle that will be added to the ground plane tangent when on the ground to try and avoid collisions on ramps, slopes, etc. [degrees]
    float groundAvoidanceTangentAngleDeg; // Offset: 0x428

    // when activated, the player's forward movement input is disabled for this duration, to try and help preventing player's moving into a ramp they're boosting up [ms]
    idTypesafeTime < int , millisecondUnique_t , 1000 > disableForwardInputDuration; // Offset: 0x42C

    // if the player makes ground contact before this timer elapses, the boost will not be interrupted and the player be propelled along the ground [ms]
    idTypesafeTime < int , millisecondUnique_t , 1000 > groundedBoostDuration; // Offset: 0x430

    // Boost direction settings Specifies the angle of forward input where the boost direction should use the current look direction [degrees]
    float useLookDirInputAngleDeg; // Offset: 0x434

    // Minimum movement input threshold for considering movement directions (strafe, back-peddle) to be used as the boost direction [0.0 - 1.0]
    float movementInputMinValue; // Offset: 0x438

    // Boost end settings minimum amount of time the boost 'state' will be active [ms]
    idTypesafeTime < int , millisecondUnique_t , 1000 > boostMinDuration; // Offset: 0x43C

    // when the owning player's linear vel is below this threshold, the boost's jump (and associated effects) are ended {{ units = m / s }}
    float endBoostVelocity; // Offset: 0x440

    // Boost camera FOV settings specifies the local player's FOV delta to apply while jumping with the boost pack [degrees]
    float cameraFOVDelta; // Offset: 0x444

    // transition time for applying the camera FOV override [ms]
    idTypesafeTime < int , millisecondUnique_t , 1000 > cameraFOVTransitionTimeIn; // Offset: 0x448

    // transition time for removing the camera FOV override [ms]
    idTypesafeTime < int , millisecondUnique_t , 1000 > cameraFOVTransitionTimeOut; // Offset: 0x44C

    // Fuel settings fuel burn rate per second (max fuel is 100.0)
    float fuelBurnRate; // Offset: 0x450

    // fuel recharge rate per second (max fuel is 100.0)
    float fuelRechargeRate; // Offset: 0x454

    // minimum fuel to be able to activate boost [0.0 - 100.0]
    float fuelMin; // Offset: 0x458

    // cooldown time before can activate again when spent all fuel [ms]
    idTypesafeTime < int , millisecondUnique_t , 1000 > cooldownOnEmptyMS; // Offset: 0x45C

    // Sound start sound event
    idSoundEvent* startSoundEvent; // Offset: 0x460

    // loop sound event
    idSoundEvent* loopSoundEvent; // Offset: 0x468

    // stop sound event
    idSoundEvent* stopSoundEvent; // Offset: 0x470

}; // Size: 0x478

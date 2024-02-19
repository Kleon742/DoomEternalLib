struct weaponFeedBack_t
{
    // OLD KICK SYSTEM this will do the same unique kick every time instead of additive random kick
    bool doUniqueKick; // Offset: 0x0

    // smooth the kick and recovery back to origin between pitch and yaw
    bool doSmoothKick; // Offset: 0x1

    // the amount the gun will kick up each shot
    float pitchKickAmount; // Offset: 0x4

    // randomness added to the pitchKickAmount
    float pitchKickAmountDelta; // Offset: 0x8

    // the max amount the gun will kick up
    float pitchKickTopBound; // Offset: 0xC

    // the amount the gun will kick sideways each shot
    float yawKickAmount; // Offset: 0x10

    // randomness added to the yawKickAmount each shot
    float yawKickAmountDelta; // Offset: 0x14

    // the speed in degrees pre second kick will go into
    float pitchKickSpeedInto; // Offset: 0x18

    // the minimum speed as percentage of pitchKickSpeedInto
    float pitchKickSpeedIntoMin; // Offset: 0x1C

    // per shot addition as percentage of pitchKickSpeedInto
    float pitchKickSpeedIntoPerShot; // Offset: 0x20

    // the speed in degrees pre second kick will recover
    float pitchKickSpeedFrom; // Offset: 0x24

    // the speed in degrees pre second the sideways kick will go into
    float yawKickSpeedInto; // Offset: 0x28

    // the speed in degrees pre second the sideways kick will recover
    float yawKickSpeedFrom; // Offset: 0x2C

    // how long to delay the recovery after triggering a kick (-1 for the fire interval of the weapon)
    milliToGameTime_t kickRecoveryDelay; // Offset: 0x30

    // NEW KICK SYSTEM bool to turn new kick system on for a given weapon - this is only temporary until we switch all weapons over
    bool useNewKickSystem; // Offset: 0x40

    // yaw axis kick parameters
    weaponKick_t kickYaw; // Offset: 0x48

    // pitch axis kick parameters
    weaponKick_t kickPitch; // Offset: 0xA0

    // roll axis kick parameters
    weaponKick_t kickRoll; // Offset: 0xF8

    // fov kick parameters
    weaponKick_t kickFov; // Offset: 0x150

    // rumble decl for weapons
    idDeclRumble* controllerRumbleDecl; // Offset: 0x1A8

    // how much the controller shakes on high rumble during fire
    float controllerShakeHighMag; // Offset: 0x1B0

    // how long in MS the controller will shake with a high low
    milliToGameTime_t controllerShakeHighTime; // Offset: 0x1B8

    // how much the controller shakes on low rumble during fire
    float controllerShakeLowMag; // Offset: 0x1C8

    // how long in MS the controller will shake with a low rumble
    milliToGameTime_t controllerShakeLowTime; // Offset: 0x1D0

    // how much the controller shakes on low rumble during fire
    float controllerLTriggerShakeMag; // Offset: 0x1E0

    // how long in MS the controller will shake with a low rumble
    milliToGameTime_t controllerLTriggerShakeTime; // Offset: 0x1E8

    // how much the controller shakes on low rumble during fire
    float controllerRTriggerShakeMag; // Offset: 0x1F8

    // how long in MS the controller will shake with a low rumble
    milliToGameTime_t controllerRTriggerShakeTime; // Offset: 0x200

    // Game distance units player is knocked back. {{ units = m / s }}
    float weaponKnockback; // Offset: 0x210

    // velocity applied to player when weapon is fired in doom gravity volume {{ units = m / s }}
    float doomGravityKnockback; // Offset: 0x214

}; // Size: 0x218

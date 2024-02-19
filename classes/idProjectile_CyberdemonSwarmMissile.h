struct idProjectile_CyberdemonSwarmMissile : idProjectile_Rocket
{
    // adjust angle by a minimum of this amount on launch
    float launchAngleBase; // Offset: 0x3038

    // adjust angle (randomly, -launchAngleRange to +launchAngleRange) on launch
    float launchAngleRange; // Offset: 0x303C

    // degrees rocket adjusts to track it's target {{ units = degrees / s }}
    float trackingDegreesPerSec; // Offset: 0x3040

    // change in yaw (horizontal) movement
    float yawDegreesPerSec; // Offset: 0x3044

    // change in pitch (vertical) movement
    float pitchDegreesPerSec; // Offset: 0x3048

    // radius (from line to final target) used by 'chasing target' {{ units = m }}
    float chasingTargetRadius; // Offset: 0x304C

    // forwad offset used by 'chasing target' {{ units = m }}
    float chasingTargetFwdOfs; // Offset: 0x3050

    // rotation (around line to final target) used by 'chasing target'
    float chasingTargetRotationPerSec; // Offset: 0x3054

    // distance from initial 'target' to stop flying out and target the player {{ units = m }}
    float targetPlayerDist; // Offset: 0x3058

    // decal that shows where missile is targeting
    deferredDecalParams_t deferredDecalParms; // Offset: 0x3060

    float decalAngle; // Offset: 0x30B0

    float pitchAngle; // Offset: 0x30B4

    float yawAngle; // Offset: 0x30B8

    float rotAngle; // Offset: 0x30BC

    // {{ units = m }}
    float lastDistFromTarget; // Offset: 0x30C0

    // {{ units = m }}
    idVec3 lastChasingTargetPos; // Offset: 0x30C4

    // {{ units = m }}
    idVec3 startPos; // Offset: 0x30D0

    bool flyingOut; // Offset: 0x30DC

    bool targetLineHasReset; // Offset: 0x30DD

    // {{ units = m }}
    float lastZpos; // Offset: 0x30E0

    // {{ units = m }}
    idVec3 finalTargetPos; // Offset: 0x30E4

    float yawDegs; // Offset: 0x30F0

    float pitchDegs; // Offset: 0x30F4

    // active target position, moving or not {{ units = m }}
    idVec3 targetPos; // Offset: 0x30F8

    // offset from the target to seek {{ units = m }}
    idVec3 targetOffset; // Offset: 0x3104

    idManagedClassPtr < idEntity > targetEntity; // Offset: 0x3110

    idManagedClassPtr < idEntity > ignoreEntity; // Offset: 0x3130

}; // Size: 0x3150

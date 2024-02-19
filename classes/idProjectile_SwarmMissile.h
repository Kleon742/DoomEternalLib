struct idProjectile_SwarmMissile : idProjectile_Rocket
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

    // amount of time the missile will change course for. ( -1 is forever )
    idTypesafeTime < int , millisecondUnique_t , 1000 > swarmTime; // Offset: 0x3058

    // If just swarming to a point in front, how far away is that point? (The swarm radius will scale down to 0 at that point) {{ units = m }}
    float swarmTargetDistance; // Offset: 0x305C

    // acquire a target automatically as it moves
    bool autoAcquireTarget; // Offset: 0x3060

    // if set, will always keep rotating around the line (rotation won't stop at 180)
    bool continuousSwarmRotation; // Offset: 0x3061

    idHavokGatherQueryId boundsQuery; // Offset: 0x3068

    float pitchAngle; // Offset: 0x3070

    float yawAngle; // Offset: 0x3074

    float rotAngle; // Offset: 0x3078

    // {{ units = m }}
    idVec3 startPos; // Offset: 0x307C

    // {{ units = m }}
    float swarmDistance; // Offset: 0x3088

    float yawDegs; // Offset: 0x308C

    float pitchDegs; // Offset: 0x3090

    // {{ units = m }}
    idVec3 targetPos; // Offset: 0x3094

    idManagedClassPtr < idEntity > targetEntity; // Offset: 0x30A0

    idHavokQueryId clipQuery; // Offset: 0x30C0

}; // Size: 0x30C8

struct idProjectile_SwarmMissile_V2 : idProjectile_Rocket
{
    // adjust pitch by this amount on launch (-number points up a little, to keep from hitting ground so easily)
    float launchAngleBase; // Offset: 0x3038

    // randomly adjust pitch angle, from launchAngleBase (-launchAngleRange to +launchAngleRange) on launch
    float launchAngleRange; // Offset: 0x303C

    // degrees rocket adjusts to track it's target {{ units = degrees / s }}
    float trackingDegreesPerSec; // Offset: 0x3040

    // change in yaw (horizontal) movement (side to side rate of change .. think sine wave)
    float yawDegreesPerSec; // Offset: 0x3044

    // change in pitch (vertical) movement (up and down rate of change .. also sine wave)
    float pitchDegreesPerSec; // Offset: 0x3048

    // radius outward from target line (a reference line from the startpos to the target) used by 'chasing target' {{ units = m }}
    float chasingTargetRadius; // Offset: 0x304C

    // forward offset of the 'chasing target' (the actual position the rocket is moving towards) {{ units = m }}
    float chasingTargetFwdOfs; // Offset: 0x3050

    // rotation around target line, used by 'chasing target'
    float chasingTargetRotationPerSec; // Offset: 0x3054

    // amount of time the missile will change course for. ( -1 is forever )
    idTypesafeTime < int , millisecondUnique_t , 1000 > swarmTime; // Offset: 0x3058

    // distance to fake target, when no real target (AI) is found (basically, a really big number, probably should just be hard-coded) {{ units = m }}
    float swarmTargetDistance; // Offset: 0x305C

    // acquire a target automatically as the rocket flies through the air
    bool autoAcquireTarget; // Offset: 0x3060

    // randomly adjust the pitch of the rockets at launch (amount defined by launchAngleRange)
    bool adjustLaunchPitchAngles; // Offset: 0x3061

    // distance at which rockets zero in on target, trying to directly hit it (larger value == rocket starts zeroing in sooner; more likely to hit target) {{ units = m }}
    float zeroInDist; // Offset: 0x3064

    // distance from the target line to clamp the Z position of the target that the rockets are chasing {{ units = m }}
    float clampZDistFromTargetLine; // Offset: 0x3068

    // true = aligns the rockets at spawn, to the target they're chasing. false = alignment to target will happen over time,
    bool alignToChasingTarget; // Offset: 0x306C

    idHavokGatherQueryId boundsQuery; // Offset: 0x3070

    float pitchAngle; // Offset: 0x3078

    float yawAngle; // Offset: 0x307C

    float rotAngle; // Offset: 0x3080

    // {{ units = m }}
    idVec3 startPos; // Offset: 0x3084

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > swarmTimeGT; // Offset: 0x3090

    bool foundTargetEntity; // Offset: 0x3098

    float yawDegs; // Offset: 0x309C

    float pitchDegs; // Offset: 0x30A0

    // {{ units = m }}
    idVec3 targetPos; // Offset: 0x30A4

    idManagedClassPtr < idEntity > targetEntity; // Offset: 0x30B0

    // havok'd
    idHavokQueryId clipQuery; // Offset: 0x30D0

}; // Size: 0x30D8

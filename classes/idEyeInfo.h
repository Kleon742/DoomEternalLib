struct idEyeInfo
{
    enum eye_t : int
    {
        EYE_LEFT = 0,
        EYE_RIGHT = 1,
        EYE_MAX = 2
    };

    struct perEyeInfo_t
    {
        // offset to apply focus point. Allows focus to appear artificially closer or farther away.
        float focusScale; // Offset: 0x0

        // rate of wandering eye, in degrees per second.
        float wanderRate; // Offset: 0x4

        // maximum pitch of wandering eye, in degrees.
        float maxWanderPitch; // Offset: 0x8

        // maximum yaw of wandering eye, in degrees.
        float maxWanderYaw; // Offset: 0xC

        // scale to apply to jitter offset
        float jitterScale; // Offset: 0x10

        // amount of spherical interpolation per frame... 1.0 would slerp the full distance to ideal in 1 frame, 0.5 would slerp 1/2 of the distance per frame, etc.
        float slerpScale; // Offset: 0x14

        // offset to apply to eye angle
        idAngles angleOffset; // Offset: 0x18

    }; // Size: 0x24

    // name of this eye track group
    idStr name; // Offset: 0x0

    // handle of this eye group
    idHandle < unsigned short , invalidEyeInfo_t , INVALID_EYE_GROUP > handle; // Offset: 0x30

    // index of joint that should be use as the basis rotation for the eyes
    idIndex < short , invalidJointIndex_t , - 1 > basisJointIndex; // Offset: 0x32

    // minimum pitch of the eye
    float minEyePitch; // Offset: 0x34

    // maximum pitch of the eye
    float maxEyePitch; // Offset: 0x38

    // minimum yaw of the eye
    float minEyeYaw; // Offset: 0x3C

    // maximum yaw of the eye
    float maxEyeYaw; // Offset: 0x40

    // minimum eye pitch at which the lid will reach maximum pitch deformation
    float lidMinPitch; // Offset: 0x44

    // maximum eye pitch at which the lid will reach maximum pitch deformation
    float lidMaxPitch; // Offset: 0x48

    // minimum eye yaw at which the lid will reach maximum yaw deformation
    float lidMinYaw; // Offset: 0x4C

    // maximum eye yaw at which the lid will reach maximum yaw deformation
    float lidMaxYaw; // Offset: 0x50

    // info for each eye
    idEyeInfo::perEyeInfo_t perEyeInfo[2]; // Offset: 0x54

}; // Size: 0xA0

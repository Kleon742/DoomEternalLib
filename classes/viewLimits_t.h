struct viewLimits_t
{
    // enable/disable
    bool enabled; // Offset: 0x0

    // min angles. Note that min yaw requires special movement modes and should normally be left at -180
    idAngles minAngles; // Offset: 0x4

    // max angles. Note that max yaw requires special movement modes and should normally be left at 180
    idAngles maxAngles; // Offset: 0x10

    // soft min angles
    idAngles softMinAngles; // Offset: 0x1C

    // soft max angles
    idAngles softMaxAngles; // Offset: 0x28

    // Clamp speed, 0 is instant
    float yawClampDegsPerSec; // Offset: 0x34

    // Clamp speed, 0 is instant
    float pitchClampDegsPerSec; // Offset: 0x38

}; // Size: 0x3C

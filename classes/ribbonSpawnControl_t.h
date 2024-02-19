struct ribbonSpawnControl_t
{
    float widthMultiplier; // Offset: 0x0

    float alphaMultiplier; // Offset: 0x4

    float speedMultiplier; // Offset: 0x8

    float inheritWorldVelocity; // Offset: 0xC

    float inheritWorldSpeedCap; // Offset: 0x10

    // ensures at least one point gets emitted
    bool forceEmit; // Offset: 0x14

}; // Size: 0x18

struct motionProperties_t
{
    // linear damping
    float linearDamping; // Offset: 0x0

    // angular damping
    float angularDamping; // Offset: 0x4

    // max linear speed
    float maxLinearSpeed; // Offset: 0x8

    // max angular speed
    float maxAngularSpeed; // Offset: 0xC

    // gravity factor
    float gravityFactor; // Offset: 0x10

    // use aggressive deactivation strategy
    int agressiveDeactivation; // Offset: 0x14

}; // Size: 0x18

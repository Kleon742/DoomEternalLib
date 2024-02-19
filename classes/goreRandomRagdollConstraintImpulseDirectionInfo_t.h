struct goreRandomRagdollConstraintImpulseDirectionInfo_t
{
    // Lower bound for pitch modifier on impulse vector randomPitch = randomPitchMin + random( 0.0f, randomPitchMax - randomPitchMin )
    float randomPitchMin; // Offset: 0x0

    // Upper bound for pitch modifier on impulse vector randomPitch = randomPitchMin + random( 0.0f, randomPitchMax - randomPitchMin )
    float randomPitchMax; // Offset: 0x4

    // Lower bound for yaw modifier on impulse vector randomPitch = randomYawMin + random( 0.0f, randomYawMax - randomYawMin )
    float randomYawMin; // Offset: 0x8

    // Upper bound for yaw modifier on impulse vector randomYaw = randomYawMin + random( 0.0f, randomYawMax - randomYawMin )
    float randomYawMax; // Offset: 0xC

    // 0 - 1 percent chance we use the reflected vector (reflected against the up vector)
    float chanceUseReflectedDirection; // Offset: 0x10

}; // Size: 0x14

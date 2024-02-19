struct idParticleScalarModifierLinearRamp : idParticleScalarModifier
{
    // Initial value
    float initialValue; // Offset: 0x10

    // Final value
    float finalValue; // Offset: 0x14

    // Function parametrization
    particleFunctionOf_t functionOf; // Offset: 0x18

}; // Size: 0x20

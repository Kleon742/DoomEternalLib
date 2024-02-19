struct idParticleScalarModifierSine : idParticleScalarModifier
{
    // minimum value
    float minValue; // Offset: 0x10

    // maximum value
    float maxValue; // Offset: 0x14

    // frequency
    float frequency; // Offset: 0x18

    // Function parametrization
    particleFunctionOf_t functionOf; // Offset: 0x1C

}; // Size: 0x20

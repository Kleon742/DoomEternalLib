struct idParticleScalarModifierNoise : idParticleScalarModifier
{
    // function parametrization
    particleFunctionOf_t functionOf; // Offset: 0x10

    // frequency
    float frequency; // Offset: 0x14

    // frequency in Time
    float timeFrequency; // Offset: 0x18

    // octaves
    int octaves; // Offset: 0x1C

    // min
    float min; // Offset: 0x20

    // max
    float max; // Offset: 0x24

}; // Size: 0x28

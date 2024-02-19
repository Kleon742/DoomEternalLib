struct idParticleScalarModifierRandom : idParticleScalarModifier
{
    // Random seed source
    particleSeedSource_t seedSource; // Offset: 0x10

    // Minimal value
    float min; // Offset: 0x14

    // Maximal value
    float max; // Offset: 0x18

}; // Size: 0x20

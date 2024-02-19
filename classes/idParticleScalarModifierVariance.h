struct idParticleScalarModifierVariance : idParticleScalarModifier
{
    // Random seed source
    particleSeedSource_t seedSource; // Offset: 0x10

    // +/- Variance
    float variance; // Offset: 0x14

}; // Size: 0x18

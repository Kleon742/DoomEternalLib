struct idParticleScalarModifierFadeInOut : idParticleScalarModifier
{
    // fade in time
    float fadeIn; // Offset: 0x10

    // fade out time
    float fadeOut; // Offset: 0x14

    // Function parametrization
    particleFunctionOf_t functionOf; // Offset: 0x18

}; // Size: 0x20

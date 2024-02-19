struct idParticleScalarModifierOverride : idParticleScalarModifier
{
    // Name of the scalar that can be overridden from outside
    idAtomicString name; // Offset: 0x10

    // Scope at which the scalar is exposed for override
    overrideScope_t scope; // Offset: 0x18

    // from value
    float from; // Offset: 0x1C

    // to value
    float to; // Offset: 0x20

}; // Size: 0x28

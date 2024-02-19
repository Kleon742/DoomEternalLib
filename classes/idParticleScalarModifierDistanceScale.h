struct idParticleScalarModifierDistanceScale : idParticleScalarModifier
{
    // Name of the scalar that can be overridden from outside
    idAtomicString name; // Offset: 0x10

    // Scope at which the scalar is exposed for override
    overrideScope_t scope; // Offset: 0x18

    // Scale at far distance
    float scale; // Offset: 0x1C

}; // Size: 0x20

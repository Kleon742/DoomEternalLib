struct idParticleScalarModifierCurve : idParticleScalarModifier
{
    // Curve
    idDeclTable* curve; // Offset: 0x10

    // Function parametrization
    particleFunctionOf_t functionOf; // Offset: 0x18

    // Offset that is added to sampled curve value
    float offset; // Offset: 0x1C

    // used for conversion only
    int tableIndex; // Offset: 0x20

}; // Size: 0x28

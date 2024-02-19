struct idParticleScalar
{
    // Base value
    float baseValue; // Offset: 0x0

    // List of modifiers that are multiplied with the base value {{ units = none }}
    idList < idTypeInfoObjectPtr < idParticleScalarModifier > , TAG_PARTICLE , false > modifiers; // Offset: 0x8

}; // Size: 0x20

struct idTarget_Damage : idTarget
{
    // damage def to apply to its target list
    idDeclDamage* damageDecl; // Offset: 0xB88

    // direction damage came from
    idAngles damageDir; // Offset: 0xB90

    // radius damage if non-zero
    float radiusDamage; // Offset: 0xB9C

    // do damage to the activator
    bool damageActivator; // Offset: 0xBA0

}; // Size: 0xBA8

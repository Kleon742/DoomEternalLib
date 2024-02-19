struct damageDeclModifier_t
{
    // the source of damage we have to modify
    idDeclDamage* damageSourceDecl; // Offset: 0x0

    // the modifier/multiplier for that specific type
    float damageModifier; // Offset: 0x8

}; // Size: 0x10

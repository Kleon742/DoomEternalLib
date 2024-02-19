struct idEnvironmentalDamage_Point : idBloatedEntity
{
    // warning value will be set between 0.0 and 1.0 on the player and he will decide what to do with that information. the height of the cylindrical volume {{ units = m }}
    float cylinderHeight; // Offset: 0xB88

    // radius where the warning will be at a minimum. i.e. the sound at it's weakest {{ units = m }}
    float warningRadiusOuter; // Offset: 0xB8C

    // radius where the warning will be at a maximum. i.e. the sound will be most intense {{ units = m }}
    float warningRadiusInner; // Offset: 0xB90

    // radius where the damage type will be set to scale value on the player {{ units = m }}
    float normalDamageRadius; // Offset: 0xB94

    // radius where the damage type will be set to the extreme scale value on the player {{ units = m }}
    float extremeDamageRadius; // Offset: 0xB98

    // scale the environmental damage will be set to on the player if in the normal Damage Radius
    float normalDamageScale; // Offset: 0xB9C

    // scale the environmental damage will be set to on the player if in the extreme damage Radius
    float extremeDamageScale; // Offset: 0xBA0

    // Damage we are doing.
    idDeclDamage* envDamage; // Offset: 0xBA8

    // How many MS between damages.
    idTypesafeTime < int , millisecondUnique_t , 1000 > envDamageIntervalMin; // Offset: 0xBB0

    // How many MS between damages.
    idTypesafeTime < int , millisecondUnique_t , 1000 > envDamageIntervalMax; // Offset: 0xBB4

    // How many MS between warning sounds.
    idTypesafeTime < int , millisecondUnique_t , 1000 > envWarningIntervalMin; // Offset: 0xBB8

    // How many MS between warning sounds.
    idTypesafeTime < int , millisecondUnique_t , 1000 > envWarningIntervalMax; // Offset: 0xBBC

}; // Size: 0xBC0

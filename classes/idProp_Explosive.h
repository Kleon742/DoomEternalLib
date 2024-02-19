struct idProp_Explosive : idProp_Moveable
{
    // Are we active? ( explode timer starts when spawned )
    bool isArmed; // Offset: 0x2540

    // How long until we explode?
    float explosiveTimeSec; // Offset: 0x2544

    // Damage we inflict when explodes.
    idDeclDamage* explodeDamage; // Offset: 0x2548

    // When do we explode?
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > explodeGameTime; // Offset: 0x2550

    // Have we exploded?
    bool hasExploded; // Offset: 0x2558

}; // Size: 0x2560

struct trackedDamageDone_t
{
    idSpawnId attackerSpawnID; // Offset: 0x0

    idDeclDamage* damageDecl; // Offset: 0x8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timestamp; // Offset: 0x10

    float damage; // Offset: 0x18

}; // Size: 0x20

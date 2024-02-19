struct idDamageInstanceInfo
{
    int damageGroupIndex; // Offset: 0x0

    bool criticalHit; // Offset: 0x4

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeOfLastHit; // Offset: 0x8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeOfHitFlashFinish; // Offset: 0x10

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeOfLastDeath; // Offset: 0x18

    int frameOfLastDeath; // Offset: 0x20

    idManagedClassPtr < idEntity > attacker; // Offset: 0x28

}; // Size: 0x48

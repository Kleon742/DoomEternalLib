struct idEncounterSpawn_t
{
    eEncounterSpawnType_t type; // Offset: 0x0

    idManagedClassPtr < idEntity > actor; // Offset: 0x8

    idStr label; // Offset: 0x28

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeDamageDiffDetected; // Offset: 0x58

    bool damageDiffDetected; // Offset: 0x60

    float healthAtLastDamageCall; // Offset: 0x64

}; // Size: 0x68

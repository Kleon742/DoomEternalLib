struct idCyberdemonMissileShooter : idBloatedEntity
{
    int numToSpawn; // Offset: 0xB88

    int numSpawned; // Offset: 0xB8C

    float nextSpawnTime; // Offset: 0xB90

    int ofsIndex[15]; // Offset: 0xB94

    // number of rockets to shoot out
    int numProjectilesToSpawn; // Offset: 0xBD0

    // delay (in sec) between each projectile
    float delayBetweenShotsSec; // Offset: 0xBD4

    // weapon decl
    idDeclWeapon* declWeapon; // Offset: 0xBD8

    idWeapon weapon; // Offset: 0xBE0

    idManagedClassPtr < idAnimatedEntity > cyberDemon; // Offset: 0x4780

}; // Size: 0x47A0

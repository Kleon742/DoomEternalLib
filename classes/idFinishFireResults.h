struct idFinishFireResults
{
    // number of projectiles fired
    int numProjectiles; // Offset: 0x0

    // the projectiles that were fired, if any
    idManagedClassPtr < idProjectile > projectiles[16]; // Offset: 0x8

    // spawn Ids of AI that were hit
    idList < idSpawnId , TAG_IDLIST , false > targetsHit; // Offset: 0x208

}; // Size: 0x220

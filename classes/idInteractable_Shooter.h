struct idInteractable_Shooter : idInteractable
{
    struct muzzleInfo_t
    {
        // name of tag that defines position of this muzzle
        idStr tagName; // Offset: 0x0

        // projectile that will shoot from this muzzle
        idDeclEntityDef* projectileDef; // Offset: 0x30

        // initial speed of the projectile (will accelerate to notHitscanInfo.speed)
        float initialSpeed; // Offset: 0x38

        // seeks player in volume
        bool targetPlayer; // Offset: 0x3C

        // seeks entity defs in volume
        idDeclEntityDef* targetEntityDef; // Offset: 0x40

        // seeks specific entity instance in map
        idManagedClassPtr < idEntity > targetInstance; // Offset: 0x48

        // target for this muzzle
        idVec3 targetPos; // Offset: 0x68

        // MS delay between shots fired
        idTypesafeTime < int , millisecondUnique_t , 1000 > firingInterval; // Offset: 0x74

        // TODO: if robby wants a slight delay for mulitple shots __edit milliseconds_tminFireDelay; min time to wait before firing __edit milliseconds_tmaxFireDelay; max time to wait before firing
        tagData_t tagData; // Offset: 0x78

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > fireTime; // Offset: 0x98

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > preFireFxTime; // Offset: 0xA0

        // when projectiles will fire
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextFireTime; // Offset: 0xA8

    }; // Size: 0xB0

    struct projectileInfo_t
    {
        idManagedClassPtr < idProjectile > projectile; // Offset: 0x0

        float explodeDistSqr; // Offset: 0x20

        idVec3 origin; // Offset: 0x24

    }; // Size: 0x30

    // list of shooter points
    idList < idInteractable_Shooter::muzzleInfo_t , TAG_IDLIST , false > shooterList; // Offset: 0x2B50

    // amount of time pre fire fx is triggered, before actual shot fires
    idTypesafeTime < int , millisecondUnique_t , 1000 > preFireFxTime; // Offset: 0x2B68

    // delay before first shot is fired
    idTypesafeTime < int , millisecondUnique_t , 1000 > initialDelayMS; // Offset: 0x2B6C

    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > inVolume; // Offset: 0x2B70

    idList < idInteractable_Shooter::projectileInfo_t , TAG_IDLIST , false > activeProjectiles; // Offset: 0x2B88

}; // Size: 0x2BA0

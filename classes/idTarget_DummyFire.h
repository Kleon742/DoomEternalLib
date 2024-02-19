struct idTarget_DummyFire : idTarget
{
    // the projectile that will be fire
    idDeclWeapon* weaponDecl; // Offset: 0xB88

    // the index to the ammo to be fired
    int ammoIndex; // Offset: 0xB90

    // how many shots will be fired
    int numShots; // Offset: 0xB94

    // this will allow the dummy fire to reset every time activate is called on this target.
    bool shouldReset; // Offset: 0xB98

    // Should the weapon attached to this dummy fire entity ever be visible? Should be fine to hide weapon if not using hitscan and 1-2 targets are provided
    bool hideWeaponAlways; // Offset: 0xB99

    // Once currentShotsLeft reaches zero, should we hide the weapon?
    bool hideWeaponAfterShotsFinished; // Offset: 0xB9A

    // spawn dummy projectiles instead of real ones, ( does NOT work with hitScan decls, those would only be fx playing )
    bool useDummyProjectile; // Offset: 0xB9B

    // remove the dummy projectiles after this amount of time in flight
    idTypesafeTime < int , millisecondUnique_t , 1000 > removeDummyProjectileAfterMs; // Offset: 0xB9C

    float netRelCustomDistanceCoefficient; // Offset: 0xBA0

    // this is how many shots are left in this dummy
    int currentShotsLeft; // Offset: 0xBA4

    // where the dummy fire will start from
    idManagedClassPtr < idEntity > startPos; // Offset: 0xBA8

    // where the dummy fire will end
    idManagedClassPtr < idEntity > targetPos; // Offset: 0xBC8

    // when we can fire next
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextFireTime; // Offset: 0xBE8

    idWeapon* weaponToFire; // Offset: 0xBF0

    idWeaponEntity* weaponEntityToFire; // Offset: 0xBF8

}; // Size: 0xC00

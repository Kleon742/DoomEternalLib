struct idTrigger_DummyFire : idTrigger
{
    // the projectile that will be fired
    idDeclWeapon* weaponDecl; // Offset: 0xC90

    // the index to the ammo to be fired
    int ammoIndex; // Offset: 0xC98

    // how many shots will be fired
    int numShots; // Offset: 0xC9C

    // this will allow the dummy fire to reset every time this trigger is touched.
    bool shouldReset; // Offset: 0xCA0

    // this is how many shots are left in this dummy
    int currentShotsLeft; // Offset: 0xCA4

    // where the dummy fire will start from
    idManagedClassPtr < idEntity > startPos; // Offset: 0xCA8

    // where the dummy fire will end
    idManagedClassPtr < idEntity > targetPos; // Offset: 0xCC8

    // when we can fire next
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextFireTime; // Offset: 0xCE8

}; // Size: 0xCF0

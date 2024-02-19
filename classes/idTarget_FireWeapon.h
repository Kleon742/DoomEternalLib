struct idTarget_FireWeapon : idWeaponEntity
{
    // hides weapon model
    bool hideWeaponModel; // Offset: 0x1F28

    // the projectile that will be fire
    idDeclWeapon* declWeapon; // Offset: 0x1F30

    // how many shots will be fired
    int numShots; // Offset: 0x1F38

    // this will allow the dummy fire to reset every time activate is called on this target.
    bool shouldReset; // Offset: 0x1F3C

    // number of seconds to shoot (IF NON-ZERO, overrides "numShots")
    float shootTimeSecs; // Offset: 0x1F40

    // amount of time to delay before starting to fire
    float delayToFireSecs; // Offset: 0x1F44

    // faction for this weapon (damage code may check factions to allow / disallow damage being done)
    idAtomicString factionName; // Offset: 0x1F48

    // this is how many shots are left in this dummy
    int currentShotsLeft; // Offset: 0x1F50

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > stopShootingTime; // Offset: 0x1F58

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startShootingTime; // Offset: 0x1F60

    // where the dummy fire will start from
    idManagedClassPtr < idEntity > startEnt; // Offset: 0x1F68

    // where the dummy fire will end
    idManagedClassPtr < idEntity > targetEnt; // Offset: 0x1F88

    // weapon
    idWeapon weapon; // Offset: 0x1FA8

    bool isFiring; // Offset: 0x5B48

}; // Size: 0x5B50

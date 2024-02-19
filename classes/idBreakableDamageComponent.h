struct idBreakableDamageComponent : idDamageComponent
{
    enum breakableState_t : int
    {
        NORMAL = 0,
        DAMAGED = 1,
        EXPLODING = 2,
        BROKEN = 3
    };

    // the data for this class
    idDeclProp_BreakableComponent* componentData; // Offset: 0x30

    // how much health we start with.
    float health; // Offset: 0x38

    // health right now
    float currentHealth; // Offset: 0x3C

    // current state of the breakable
    idBreakableDamageComponent::breakableState_t state; // Offset: 0x40

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > smokeStartTime; // Offset: 0x48

    idList < idEntity * , TAG_IDLIST , false > spawnParts; // Offset: 0x50

    idList < idEntity * , TAG_IDLIST , false > spawnSplinters; // Offset: 0x68

    idManagedClassPtr < idEntity > replacementPart; // Offset: 0x80

    int nextCollideTime; // Offset: 0xA0

    weaponStatsTag_t statsTag; // Offset: 0xA8

    bool swappedToProjectile; // Offset: 0xB8

    bool effectsSpawned; // Offset: 0xB9

    // stores the smoke time, since the decl data can cause it to be randomized
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > smokeTime; // Offset: 0xC0

    // if idDeclProp_BreakableComponent::mineActivationRadius > 0
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > breakTime; // Offset: 0xC8

    // First entity to attack this breakable. This will be the entity that is passed as the attacker  for anything damaged by radial blasts.
    idManagedClassPtr < idEntity > initialAttacker; // Offset: 0xD0

    idDeclDamage* initialDamageDecl; // Offset: 0xF0

    // Only for serialization.
    idManagedClassPtr < idEntity > breakActivator; // Offset: 0xF8

    idVec3 breakDir; // Offset: 0x118

    idManagedClassPtr < idEntity > respawnEntity; // Offset: 0x128

}; // Size: 0x148

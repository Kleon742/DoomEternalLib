struct idBfgBurn : idBloatedEntity
{
    // Data parameters life time in MS.
    float lifetime; // Offset: 0xB88

    // sound to play on Activation.
    idSoundEvent* activationSound; // Offset: 0xB90

    // sound to play for lifetime of entity.
    idSoundEvent* loopSound; // Offset: 0xB98

    // sound to play on Deactivation.
    idSoundEvent* deactivationSound; // Offset: 0xBA0

    // damage decl that is applied on each tick
    idDeclDamage* damageDecl; // Offset: 0xBA8

    // an fx decl to use
    idDeclFX* fxDecl; // Offset: 0xBB0

    // minimum distance between this burn entity and another burn entity (reduces overlapping volumes) {{ units = m }}
    float minDistanceBetweenBurns; // Offset: 0xBB8

    // Run-time parameters entity that gets credit for putting this puddle on the ground
    idManagedClassPtr < idEntity > activator; // Offset: 0xBC0

    // time we expire
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > expirationTime; // Offset: 0xBE0

    idHavokGatherQueryId boundsQuery; // Offset: 0xBE8

    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > targetList; // Offset: 0xBF0

}; // Size: 0xC08

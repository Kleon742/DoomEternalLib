struct idProp_Breakable : idProp_Moveable
{
    enum breakableState_t : int
    {
        NORMAL = 0,
        DAMAGED = 1,
        EXPLODING = 2,
        BROKEN = 3
    };

    // current state of the breakable
    idProp_Breakable::breakableState_t state; // Offset: 0x2540

    // how much damage the prop will take before it gibs
    float health; // Offset: 0x2544

    // if true, prop only breaks when receiving melee damage
    bool onlyMeleeDamage; // Offset: 0x2548

    // entity to replace this one with when prop is gibbed
    idDeclEntityDef* replacement; // Offset: 0x2550

    // parts are entities that are always spawned when prop is gibbed. the replacement recieves no initial velocity.
    idList < const idDeclEntityDef * , TAG_IDLIST , false > parts; // Offset: 0x2558

    // splinters are entities that are randomly spawned when prop is gibbed
    idList < const idDeclEntityDef * , TAG_IDLIST , false > splinters; // Offset: 0x2570

    // the minimum # of splinters to spawn when gibbed
    int minSplinters; // Offset: 0x2588

    // the maximum # of splinters to spawn when gibbed
    int maxSplinters; // Offset: 0x258C

    // Become projectile on sprint melee damage;
    idDeclEntityDef* sprintMeleeProjectile; // Offset: 0x2590

    // sound to play when object breaks
    idSoundEvent* sound_break; // Offset: 0x2598

    // delay bounce sounds this long ( in seconds ) after broken
    float delaySoundAfterBreak; // Offset: 0x25A0

    // if set item will start smoking when damaged
    idDeclParticle* smokeParticle; // Offset: 0x25A8

    // if true this will break if activated from a trigger
    bool breakFromTrigger; // Offset: 0x25B0

    // if true this breakable explodes
    bool explodes; // Offset: 0x25B1

    // a projectile to use for the explosion if desired
    idDeclEntityDef* explosionProjectile; // Offset: 0x25B8

    // AI event to send for explosion
    idDeclAiEvent* explosionEventDecl; // Offset: 0x25C0

    // damage decl to use for explosion
    idDeclDamage* explodeDamage; // Offset: 0x25C8

    // breakable entity
    idDeclEntityDef* breakable; // Offset: 0x25D0

    // entity will be spawned when this breakable breaks.
    idDeclEntityDef* entityToSpawnOnBreak; // Offset: 0x25D8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > smokeStartTime; // Offset: 0x25E0

    idList < idEntity * , TAG_IDLIST , false > spawnParts; // Offset: 0x25E8

    idList < idEntity * , TAG_IDLIST , false > spawnSplinters; // Offset: 0x2600

    idEntity* replacementPart; // Offset: 0x2618

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextCollideTime; // Offset: 0x2620

    weaponStatsTag_t statsTag; // Offset: 0x2628

    bool swappedToProjectile; // Offset: 0x2638

    // types of ammo that can damage this breakable
    idList < const idDeclDamage * , TAG_IDLIST , false > ammoDamage; // Offset: 0x2640

}; // Size: 0x2658

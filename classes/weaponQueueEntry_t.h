struct weaponQueueEntry_t
{
    idDecl* decl; // Offset: 0x0

    weaponStatsTag_t tag; // Offset: 0x8

    weaponStats_t wstats; // Offset: 0x18

    int referenceCount; // Offset: 0x68

    // for tracking impressive shots
    int shotId; // Offset: 0x6C

    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > killed; // Offset: 0x70

    // time to remove this entry -- so shots that have holes in the tracking code flow don't hang around for ever.  as initially implemented: * hitscan shots expireTime is 2 secs * projectiles expireTime is 15 sec when spawned and reduced to current time + 2 secs when removed/exploded  ideally, shots are tracked properly and removed through normal code flow -- this just catches buggy shots, and automatically closes them out.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > expireTime; // Offset: 0x88

}; // Size: 0x90

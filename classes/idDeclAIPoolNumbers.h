struct idDeclAIPoolNumbers : idGameDeclTypeInfo
{
    // entries
    idList < aiSpawnPoolEntry_t , TAG_IDLIST , false > spawnPoolEntries; // Offset: 0x90

    // put map specific entitydef names in here if you DONT want them to pull from pool
    idList < idAtomicString , TAG_IDLIST , false > suppressedEntityDefNames; // Offset: 0xA8

    // projectile ents to pre-spawn as well
    idList < const idDeclEntityDef * , TAG_IDLIST , false > projectileEnts; // Offset: 0xC0

    // fx ents to pre-spawn
    idList < const idDeclEntityDef * , TAG_IDLIST , false > fxEntities; // Offset: 0xD8

    // hurt trigger ents to pre-spawn
    idList < const idDeclEntityDef * , TAG_IDLIST , false > hurtTriggerEnts; // Offset: 0xF0

    // whether or not we want this pool enabled
    bool enabled; // Offset: 0x108

}; // Size: 0x110

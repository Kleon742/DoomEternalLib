struct idGoreEntitySpawnManager
{
    // All the ents that were spawned.
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > spawnedEntities; // Offset: 0x0

    // Registered gore graphs
    idList < const idDeclGoreContainer * , TAG_IDLIST , false > registeredGoreContainers; // Offset: 0x18

}; // Size: 0x30

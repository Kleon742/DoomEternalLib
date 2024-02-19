struct idSpawnablePropManager
{
    struct spawnables_t
    {
        // multiple spawnables of a specific type
        idStaticList < idProp_Spawnable * , 4 , false , TAG_IDLIST > entity; // Offset: 0x0

        // index of last spawnable used
        int next; // Offset: 0x38

    }; // Size: 0x40

    // all spawnables, separated by type
    idStaticList < idSpawnablePropManager::spawnables_t , 8 , false , TAG_IDLIST > spawnable; // Offset: 0x0

}; // Size: 0x218

struct idSpawnPoint : idSpawnNode
{
    // entity to trigger on player death -- copied by player
    idManagedClassPtr < idEntity > deathTrigger; // Offset: 0xBB8

}; // Size: 0xBD8

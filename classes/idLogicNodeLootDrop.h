struct idLogicNodeLootDrop
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1,
        INPUT_ENTITY = 2,
        INPUT_SPAWN_OFFSET = 3,
        INPUT_AMOUNT_TO_SPAWN = 4
    };

    // loot drop to drop
    idDeclLootDrop* lootDropDecl; // Offset: 0x0

    idLootDropComponent* lootDropComponent; // Offset: 0x8

    // location to drop the loots
    idVec3 spawnOffset; // Offset: 0x10

    // number of loots to drop
    int numberToSpawn; // Offset: 0x1C

}; // Size: 0x20

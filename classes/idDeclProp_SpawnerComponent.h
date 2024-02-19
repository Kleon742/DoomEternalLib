struct idDeclProp_SpawnerComponent : idDeclProp_UseComponent
{
    // item's that will be dropped.
    idList < idDroppableLootDef , TAG_IDLIST , false > droppableItems; // Offset: 0x130

    // offset from owner position to start spawning items.
    idVec3 spawnOffset; // Offset: 0x148

    // Maximum number of items dropped.
    int maxDroppedItems; // Offset: 0x154

    // How fast to drop each item.
    idTypesafeTime < int , millisecondUnique_t , 1000 > dropTimeIntervalMS; // Offset: 0x158

    // How many times we can use this spawner.
    int numberOfUses; // Offset: 0x15C

}; // Size: 0x160

struct idMapReference : idMapPrimitive
{
    idStr mapName; // Offset: 0x28

    // used when reconstructing the map file when doing in-game edits
    idStr worldSpawnText; // Offset: 0x58

    // used when reconstructing the map file when doing in-game edits
    idMapModel* worldSpawnModel; // Offset: 0x88

    idMapFileLocal* map; // Offset: 0x90

    idMapFileLocal* parentMap; // Offset: 0x98

}; // Size: 0xA0

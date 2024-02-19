struct idMissionSelectInfo
{
    // maps to spawn into
    idStrMapName mapName; // Offset: 0x0

    // layers to add. if empty will use the starting layers of the map.
    idList < const idDeclLayer * , TAG_IDLIST , false > activeLayers; // Offset: 0x30

    // If the map is a classic map, the stat that corresponds to the map
    gameStat_t classicMapStat; // Offset: 0x48

    // HUB map flag, we always want to show the HUB map in mission select
    bool isHUBMap; // Offset: 0x4C

}; // Size: 0x50

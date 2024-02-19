struct idDeclMapLoad : idDeclTypeInfo
{
    // name to show to user
    idStrId menuDisplayName; // Offset: 0x88

    // maps to spawn into
    idStrMapName menuMapName; // Offset: 0x90

    // image to show for the menu.
    idMaterial2* menuImage; // Offset: 0xC0

    // Information to display for the map.
    idStrId menuMapInfo; // Offset: 0xC8

    // What kind of map this is.
    masterLevelMapType_t mapType; // Offset: 0xCC

    // layers to add. if empty will use the starting layers of the map.
    idList < const idDeclLayer * , TAG_IDLIST , false > activeLayers; // Offset: 0xD0

    // name of development inventory loadout override to use for specified map
    idDeclDevInvLoadoutRef inventoryLoadout; // Offset: 0xE8

    // if true - load the map with slowmap.
    bool loadAsMissionSelect; // Offset: 0xF0

    // This will override the pool data specified in the game challenge entity
    idDeclAIPoolNumbers* aiPoolNumbersOverride; // Offset: 0xF8

    // rewards to give when map is complete
    idList < idDeclWarehouseOfflineContainer * , TAG_IDLIST , false > mapRewards; // Offset: 0x100

    // master level challenge rewards
    idDeclMasterLevelChallengeRewards* challengeRewards; // Offset: 0x118

}; // Size: 0x120

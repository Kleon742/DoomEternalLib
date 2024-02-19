struct idDeclMasterLevelInfo : idDeclTypeInfo
{
    // The name of the map for the menu
    idStrId menuDisplayName; // Offset: 0x88

    // The description of the master level
    idStrId levelDescription; // Offset: 0x8C

    // Map load
    idDeclMapLoad* mapLoad; // Offset: 0x90

    // The master level map to load
    idMaterial2* menuImage; // Offset: 0x98

    // Information to display for the map.
    idStrId menuMapInfo; // Offset: 0xA0

    // Completion reward
    idDeclWarehouseItem* completionReward; // Offset: 0xA8

    // The Completion reward image if we need to override for asthetics
    idMaterial2* completionRewardImageOverride; // Offset: 0xB0

    // Automatically reconcile rewards on warehouse refresh. This is primarily a workaround for players affected by a certain bug ( GHOST-137799 ), and should typically not be set.
    bool reconcileRewards; // Offset: 0xB8

    // The list of of available missions for this master level, can be empty
    idList < idDeclMasterLevelMissionSelectInfo , TAG_IDLIST , false > missionList; // Offset: 0xC0

}; // Size: 0xD8

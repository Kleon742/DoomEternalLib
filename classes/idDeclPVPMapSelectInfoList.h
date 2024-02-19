struct idDeclPVPMapSelectInfoList : idDeclTypeInfo
{
    struct pvpMapSelectInfo_t
    {
        // maps to spawn into
        idStrMapName mapName; // Offset: 0x0

        // ui info for the map we spawn into
        idDeclMapInfo* mapInfo; // Offset: 0x30

        // layers to add. if empty will use the starting layers of the map.
        idList < const idDeclLayer * , TAG_IDLIST , false > activeLayers; // Offset: 0x38

        // forces this map to be available for use (doesn't require map to be listed on the backend)
        bool forceUseMap; // Offset: 0x50

    }; // Size: 0x58

    // List of maps
    idList < idDeclPVPMapSelectInfoList::pvpMapSelectInfo_t , TAG_IDLIST , false > mapSelectList; // Offset: 0x88

}; // Size: 0xA0

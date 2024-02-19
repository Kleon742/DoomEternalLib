struct idDeclDevMenuList : idDeclTypeInfo
{
    struct idDevMenuOption
    {
        // TODO: reexamine the layers. could be useful as checkpoint options in the dev menu but probably only if I have it automatically create them. name to show on the dev menu
        idStr devMenuDisplayName; // Offset: 0x0

        // if set this is a further layer of abstraction in the debug lists.
        idDeclDevMenuList* devMenuSubList; // Offset: 0x30

        // maps to spawn into
        idStrMapName devMenuMapName; // Offset: 0x38

        // if true - load the map as a MP game.
        bool devMenuLoadMapAsMP; // Offset: 0x68

        // if true - load the map with slowmap.
        bool devMenuLoadMapSlow; // Offset: 0x69

        // if true - load the map with horde game type.
        bool devMenuLoadMapAsHorde; // Offset: 0x6A

        // list of console cmd strings to be executed (i.e. as if entered into the console ) before the map loads.
        idList < idStr , TAG_IDLIST , false > devMenuCommandStrings; // Offset: 0x70

        // list of console cmd strings to be executed (i.e. as if entered into the console ) before the map loads.
        idList < idStr , TAG_IDLIST , false > devMenuCommandStrings_AfterMapLoad; // Offset: 0x88

        // checkpoint to load
        idStr devMenuCheckpoint; // Offset: 0xA0

        // layers to add. if empty will use the starting layers of the map.
        idList < const idDeclLayer * , TAG_IDLIST , false > devMenuActiveLayers; // Offset: 0xD0

        // name of development inventory loadout override to use for specified map
        idDeclDevInvLoadoutRef devMenuInventoryLoadout; // Offset: 0xE8

    }; // Size: 0xF0

    // List of options for the dev menu.
    idList < idDeclDevMenuList::idDevMenuOption , TAG_IDLIST , false > devMenuList; // Offset: 0x88

}; // Size: 0xA0

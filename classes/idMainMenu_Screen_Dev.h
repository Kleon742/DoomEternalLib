struct idMainMenu_Screen_Dev : idMenuElement
{
    struct indexInfo_t
    {
        char* name; // Offset: 0x0

        int focusIndex; // Offset: 0x8

    }; // Size: 0x10

    // the current dev menu, set by RecalculateDevMenu()
    idDeclDevMenuList* devMenuList; // Offset: 0x100

    idList < idMainMenu_Screen_Dev::indexInfo_t , TAG_MENU , false > devMapListInfos; // Offset: 0x108

    idList < idDevMenu_CheckpointInfo , TAG_IDLIST , false > checkpointList; // Offset: 0x120

    idStr declListName; // Offset: 0x138

    int declListIndex; // Offset: 0x168

    bool selectingLaunchType; // Offset: 0x16C

    bool showCheckpointList; // Offset: 0x16D

    bool presentLoadOptions; // Offset: 0x16E

    int previousFocusedIndex; // Offset: 0x170

    bool queuedNavigation; // Offset: 0x174

    int queuedForwardIndex; // Offset: 0x178

}; // Size: 0x180

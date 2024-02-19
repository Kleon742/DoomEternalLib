struct idSWFWidget_ProgressionCategoryList : idSWFWidget
{
    idDeclUIDataGroup* progressionCategoryData; // Offset: 0x180

    idList < idHUDEvent_OpenEndOfLevelScreen::openEOLData_t::itemInfo_t , TAG_IDLIST , false > itemInfo; // Offset: 0x188

    idStrId labelId; // Offset: 0x1A0

    int current; // Offset: 0x1A4

    int max; // Offset: 0x1A8

    int count; // Offset: 0x1AC

    bool showCompleteState; // Offset: 0x1B0

    bool animateCompleteState; // Offset: 0x1B1

    idSWFWidget_List* itemList; // Offset: 0x1B8

}; // Size: 0x1C0

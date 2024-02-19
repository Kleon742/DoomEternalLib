struct idEndOfLevel_Items : idMenuElement
{
    idList < idHUDEvent_OpenEndOfLevelScreen::openEOLData_t::itemInfo_t , TAG_IDLIST , false > itemsList; // Offset: 0x100

    idSWFWidget_ProgressionCategoryList* categoryList; // Offset: 0x118

    int lastCompletedIndex; // Offset: 0x120

    bool animationStarted; // Offset: 0x124

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > initialDelayEndTime; // Offset: 0x128

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > animDelayEndTime; // Offset: 0x130

    int itemToAnimate; // Offset: 0x138

    int categoryToAnimate; // Offset: 0x13C

}; // Size: 0x140

struct missionSelectMapInfo_t
{
    int mapIndex; // Offset: 0x0

    idList < idHUDEvent_OpenEndOfLevelScreen::openEOLData_t::itemInfo_t , TAG_IDLIST , false > itemsFound; // Offset: 0x8

    idArray < challengeInfo_t , 3 > challengeInfo; // Offset: 0x20

    idArray < int , 5 > corruptionMeterPoints; // Offset: 0x530

    gameDifficulty_t lastCompleteDifficulty; // Offset: 0x544

    time_t lastCompleteDate; // Offset: 0x548

}; // Size: 0x550

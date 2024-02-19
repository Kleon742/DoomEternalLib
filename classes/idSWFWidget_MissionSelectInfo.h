struct idSWFWidget_MissionSelectInfo : idSWFWidget
{
    // The map name, without the 'maps/' prefix or '.map' file extension, should match the mapInfo decl name
    idStr mapName; // Offset: 0x180

    idDeclMapInfo* mapInfo; // Offset: 0x1B0

    idSWFWidget_ProgressionCategoryList* itemList; // Offset: 0x1B8

    gameDifficulty_t mapLastCompleteDifficulty; // Offset: 0x1C0

    time_t mapLastCompleteDate; // Offset: 0x1C8

    idArray < challengeInfo_t , 3 > challengeInfo; // Offset: 0x1D0

    idArray < int , 5 > corruptionMeterPoints; // Offset: 0x6E0

    idSWFWidget_CorruptionMeter* corruptionMeter; // Offset: 0x6F8

}; // Size: 0x700

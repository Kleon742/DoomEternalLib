struct idHorde_SummaryScreen : idMenuElement
{
    idHUDEvent_ShowHordeSummary::hordeSummaryData_t eventData; // Offset: 0x100

    bool isFromMainMenu; // Offset: 0x464

    int currentSubscreen; // Offset: 0x468

    int currentLevel; // Offset: 0x46C

    bool animateSummarySubscreen; // Offset: 0x470

    idSWFWidget_TabList* tabList; // Offset: 0x478

    idSWFWidget_Text* screenHeader; // Offset: 0x480

    idSWFWidget_UserInfo* userInfo; // Offset: 0x488

    idList < waveData_t , TAG_IDLIST , false > arenaDataList; // Offset: 0x490

    idDeclUICustomData_Widget_HordeProgress* dataDecl; // Offset: 0x4A8

    idArray < idHUDEvent_HordeTimelineUpdate::hordeTimelineData_t , 3 > mapData; // Offset: 0x4B0

}; // Size: 0x4F8

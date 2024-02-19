struct idHorde_MapScoreScreen : idMenuElement
{
    idHUDEvent_ShowHordeSummary::hordeSummaryData_t* mapData; // Offset: 0x100

    idDeclHordeSummaryUtility* uiData; // Offset: 0x108

    bool isFromMainMenu; // Offset: 0x110

    int mapIndex; // Offset: 0x114

    idSWFWidget_Text* screenHeader; // Offset: 0x118

    idList < scoreRow_t , TAG_IDLIST , false > scoreRows; // Offset: 0x120

    idSWFWidget_MarqueeText* rowNames[6]; // Offset: 0x138

}; // Size: 0x168

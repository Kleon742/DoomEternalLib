struct idHorde_SummarySubScreen_SummaryTab : idMenuElement
{
    idSWFWidget_HordeSummary* hordeSummaryWidget; // Offset: 0x100

    idHUDEvent_ShowHordeSummary::hordeSummaryData_t* eventData; // Offset: 0x108

    int initialScore; // Offset: 0x110

    int finalScore; // Offset: 0x114

    int previousScore; // Offset: 0x118

    gameDifficulty_t difficulty; // Offset: 0x11C

}; // Size: 0x120

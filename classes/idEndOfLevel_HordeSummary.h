struct idEndOfLevel_HordeSummary : idMenuElement
{
    idDeferredFuncList deferred; // Offset: 0x100

    idDeclUICustomData_EndOfLevel_HordeSummary* uiData; // Offset: 0x148

    idSWFWidget_Seasons_XP_Counter* ammoScoreCounter; // Offset: 0x150

    idSWFWidget_Seasons_XP_Counter* extraLivesScoreCounter; // Offset: 0x158

    idSWFWidget_Seasons_XP_Counter* finalScoreCounter; // Offset: 0x160

    int finalScore; // Offset: 0x168

    int ammoScore; // Offset: 0x16C

    int ammoCount; // Offset: 0x170

    int extraLifeScore; // Offset: 0x174

    int extraLifeCount; // Offset: 0x178

    int difficulty; // Offset: 0x17C

    bool isPlayerDead; // Offset: 0x180

}; // Size: 0x188

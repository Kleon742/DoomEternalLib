struct idEndOfLevel_Horde : idMenuElement
{
    idDeferredFuncList deferred; // Offset: 0x100

    idDeclUICustomData_EndOfLevel_Horde* uiData; // Offset: 0x148

    idSWFWidget_EOL_MasterLevelChallenge* challenge; // Offset: 0x150

    idSWFWidget_Seasons_XP_Counter* scoreCounter; // Offset: 0x158

    int difficulty; // Offset: 0x160

    int score; // Offset: 0x164

}; // Size: 0x168

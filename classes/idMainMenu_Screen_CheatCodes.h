struct idMainMenu_Screen_CheatCodes : idMenuElement
{
    enum state_cheatCodes_t : int
    {
        STATE_CHEAT_CODES_INVALID = -1,
        STATE_CHEAT_CODES_ROOT = 0
    };

    idDeclCampaign* campaignDecl; // Offset: 0x100

    idMainMenu_Screen_CheatCodes::state_cheatCodes_t state; // Offset: 0x108

    idMainMenu_Screen_CheatCodes::state_cheatCodes_t nextState; // Offset: 0x10C

    int selectedMissionIndex; // Offset: 0x110

    idStr cachedMapIsCompletedName; // Offset: 0x118

    bool cachedMapIsCompleted; // Offset: 0x148

    idSWFWidget_SelectCheatsPrompt* selectCheatsPrompt; // Offset: 0x150

}; // Size: 0x158

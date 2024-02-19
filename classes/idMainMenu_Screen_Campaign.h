struct idMainMenu_Screen_Campaign : idMenuElement
{
    enum screenState_campaign_t : int
    {
        SCREEN_STATE_CAMPAIGN_INVALID = -1,
        SCREEN_STATE_CAMPAIGN_LOADING = 0,
        SCREEN_STATE_CAMPAIGN_SAVE_SLOTS = 1,
        SCREEN_STATE_CAMPAIGN_ROOT = 2
    };

    idDeclCampaign* campaignDecl; // Offset: 0x100

    idMainMenu_Screen_Campaign::screenState_campaign_t state; // Offset: 0x108

    idMainMenu_Screen_Campaign::screenState_campaign_t nextState; // Offset: 0x10C

    idSWFWidget_Button* btnNewGame; // Offset: 0x110

    idSWFWidget_Button* btnContinueGame; // Offset: 0x118

    idSWFWidget_Button* btnMissionSelect; // Offset: 0x120

    idSWFWidget_Button* btnMasterLevels; // Offset: 0x128

    idSWFWidget_Button* btnMilestones; // Offset: 0x130

    idSWFWidget_CampaignRewardCarousel* campaignRewardCarousel; // Offset: 0x138

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > saveRefreshStartTime; // Offset: 0x140

    bool waitingOnSaveSlotRefresh; // Offset: 0x148

}; // Size: 0x150

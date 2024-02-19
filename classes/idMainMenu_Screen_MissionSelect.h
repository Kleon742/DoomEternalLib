struct idMainMenu_Screen_MissionSelect : idMenuElement
{
    enum state_missionSelect_t : int
    {
        STATE_MISSION_SELECT_INVALID = -1,
        STATE_MISSION_SELECT_ROOT = 0,
        STATE_MISSION_SELECT_ACTIVATE_CHEATS_PROMPT = 1
    };

    idDeclCampaign* campaignDecl; // Offset: 0x100

    idMainMenu_Screen_MissionSelect::state_missionSelect_t state; // Offset: 0x108

    idMainMenu_Screen_MissionSelect::state_missionSelect_t nextState; // Offset: 0x10C

    idDeclMissionSelectInfoList* mapListDecl; // Offset: 0x110

    idSWFWidget_MissionSelectInfo* missionSelectInfo; // Offset: 0x118

    idList < missionSelectMapInfo_t , TAG_IDLIST , false > availableMaps; // Offset: 0x120

    idSWFWidget_ActivateCheatsPrompt* activateCheatsPrompt; // Offset: 0x138

    int selectedMissionIndex; // Offset: 0x140

    bool currentlySaving; // Offset: 0x144

    idDialogParms waitForSaveDialog; // Offset: 0x148

    idStr cachedMapIsCompletedName; // Offset: 0x2F0

    bool cachedMapIsCompleted; // Offset: 0x320

    idList < idHUDEvent_OpenEndOfLevelScreen::openEOLData_t::itemInfo_t , TAG_IDLIST , false > cachedMapItemList; // Offset: 0x328

    idArray < challengeInfo_t , 3 > cachedMapChallenges; // Offset: 0x340

    idArray < int , 5 > cachedMapCorruptionMeterPoints; // Offset: 0x850

    gameDifficulty_t cachedMapLastCompleteDifficulty; // Offset: 0x864

    time_t cachedMapLastCompleteDate; // Offset: 0x868

    idMissionSelectInfo* missionToLoadAfterSaving; // Offset: 0x870

}; // Size: 0x878

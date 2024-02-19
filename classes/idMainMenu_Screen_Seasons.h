struct idMainMenu_Screen_Seasons : idMenuElement
{
    idSWFWidget_Seasons_Summary* summary; // Offset: 0x100

    idSWFWidget_Seasons_Challenges* challenges; // Offset: 0x108

    seasonsScreenTabID_t currentTab; // Offset: 0x110

    idDeclPlayableCharacter* previousVisibleCharacter; // Offset: 0x118

    asyncio::idTaskResultPtr < bool , bool > refreshTask_season; // Offset: 0x120

    asyncio::idTaskResultPtr < bool , bool > refreshTask_onlineChallenges; // Offset: 0x128

    asyncio::idTaskResultPtr < bool , bool > refreshTask_warehouseManager; // Offset: 0x130

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > requestStartTime; // Offset: 0x138

    bool timerUpdateRequested; // Offset: 0x140

    bool cameraUpdateRequested; // Offset: 0x141

    bool goBackToSocialScreen; // Offset: 0x142

    bool failedToLoadSeasonData; // Offset: 0x143

    bool hasActiveSeason; // Offset: 0x144

    idStr seasonsHeader; // Offset: 0x148

    swfPlatform_t swfPlatform; // Offset: 0x178

    // telemetry
    seasonsScreenData_t seasonsScreen; // Offset: 0x17C

}; // Size: 0x1A8

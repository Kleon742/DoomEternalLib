struct idMainMenu_Screen_Triumphs : idMenuElement
{
    idSWFWidget_Triumphs* triumphs; // Offset: 0x100

    asyncio::idTaskResultPtr < bool , bool > refreshTask_onlineChallenges; // Offset: 0x108

    asyncio::idTaskResultPtr < bool , bool > refreshTask_warehouseManager; // Offset: 0x110

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > requestStartTime; // Offset: 0x118

    bool timerUpdateRequested; // Offset: 0x120

    float boostersTabAbsolutePos; // Offset: 0x124

    int numBoosters; // Offset: 0x128

    bool queueBoostersUpdate; // Offset: 0x12C

    bool hasRegisteredSocialBroadcasts; // Offset: 0x12D

    bool goBackToSocialScreen; // Offset: 0x12E

    bool failedToLoadSeasonData; // Offset: 0x12F

    bool hasActiveSeason; // Offset: 0x130

    gameType_t defaultGameType; // Offset: 0x134

}; // Size: 0x138

struct idSWFWidget_Seasons_Summary : idSWFWidget
{
    idSWFWidget_Seasons_LevelList* levelList; // Offset: 0x180

    idSWFWidget_Seasons_CollectionList* activeCollectionList; // Offset: 0x188

    idSWFWidget_Seasons_UnlockInfo* unlockInfo; // Offset: 0x190

    idSWFWidget* comingSoon; // Offset: 0x198

    idMenu* menu; // Offset: 0x1A0

    idSWFWidget* previousFocus; // Offset: 0x1A8

    // I hate this
    idMainMenu_Screen_Seasons* seasonsScreen; // Offset: 0x1B0

    idSharedPtr < seasonProgress_t > seasonProgress; // Offset: 0x1B8

    idStr podiumCameraPlacement; // Offset: 0x1C0

    asyncio::idTaskResultPtr < bool , bool > refreshSeasonsTask; // Offset: 0x1F0

    idTypesafeTime < int , millisecondUnique_t , 1000 > fakeClaimXpStartTime; // Offset: 0x1F8

    int seasonXPBeforeClaimingBoosterXP; // Offset: 0x1FC

    int claimedBoostersXP; // Offset: 0x200

    idTypesafeTime < int , millisecondUnique_t , 1000 > refreshSeasonStartTime; // Offset: 0x204

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > animationStartTime; // Offset: 0x208

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > animationDuration; // Offset: 0x210

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > pipStartTime; // Offset: 0x218

}; // Size: 0x220

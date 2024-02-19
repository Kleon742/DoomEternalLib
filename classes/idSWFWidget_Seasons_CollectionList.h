struct idSWFWidget_Seasons_CollectionList : idSWFWidget
{
    idArray < idSWFWidget_Seasons_CollectionButton * , 5 > collectionWidgets; // Offset: 0x180

    idList < seasonCollectionInfo_t , TAG_IDLIST , false > activeProgressableSets; // Offset: 0x1A8

    idList < seasonCollectionInfo_t , TAG_IDLIST , false > collectionListOverride; // Offset: 0x1C0

    idSWFWidget_Button* btnPreviousPage; // Offset: 0x1D8

    idSWFWidget_Button* btnNextPage; // Offset: 0x1E0

    int pageIndex; // Offset: 0x1E8

    int cachedFocusIndex; // Offset: 0x1EC

    // Needs to be updated when focusing on a reward
    idSWFWidget_Seasons_Summary* summaryWidget; // Offset: 0x1F0

    swfPlatform_t currentPlatform; // Offset: 0x1F8

    int animateIndex; // Offset: 0x1FC

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > animateNextCollectionStartTime; // Offset: 0x200

    int boosterXPGained; // Offset: 0x208

    bool animateInParallel; // Offset: 0x20C

    bool useExactTweenDuration; // Offset: 0x20D

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > progressBarTweenDuration; // Offset: 0x210

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > delayBetweenLevels; // Offset: 0x218

    swfSoundType_t animationProgressFillSound; // Offset: 0x220

    swfSoundType_t animationLevelCompleteSound; // Offset: 0x224

}; // Size: 0x228

struct idSWFWidget_Seasons_CollectionButton : idSWFWidget_Button
{
    seasonCollectionInfo_t collectionData; // Offset: 0x2A0

    idSWFWidget_Seasons_XP_Bar* xpBar; // Offset: 0x2B0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > progressBarTweenDuration; // Offset: 0x2B8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > delayBetweenLevels; // Offset: 0x2C0

    swfSoundType_t animationProgressFillSound; // Offset: 0x2C8

    swfSoundType_t animationLevelCompleteSound; // Offset: 0x2CC

    bool useExactTweenDuration; // Offset: 0x2D0

    int boosterXP; // Offset: 0x2D4

    bool boostersClaimed; // Offset: 0x2D8

    int animateStartingProgress; // Offset: 0x2DC

    int animateEndProgress; // Offset: 0x2E0

    int animateCurrentProgress; // Offset: 0x2E4

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > animateNextLevelStartTime; // Offset: 0x2E8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > animateCurrentLevelEndTime; // Offset: 0x2F0

}; // Size: 0x2F8

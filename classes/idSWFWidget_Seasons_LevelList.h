struct idSWFWidget_Seasons_LevelList : idSWFWidget
{
    idSharedPtr < seasonProgress_t > seasonProgress; // Offset: 0x180

    bool levelsSelectable; // Offset: 0x188

    idArray < idSWFWidget_Seasons_LevelListItem * , 5 > levelWidgets; // Offset: 0x190

    idSWFWidget_Button* btnPreviousPage; // Offset: 0x1B8

    idSWFWidget_Button* btnNextPage; // Offset: 0x1C0

    bool pageButtonsEnabled; // Offset: 0x1C8

    int pageIndex; // Offset: 0x1CC

    int cachedFocusIndex; // Offset: 0x1D0

    swfPlatform_t currentPlatform; // Offset: 0x1D4

    // definitely not an abstraction leak or anything. :P
    idMenu* menu; // Offset: 0x1D8

    // Needs to be updated when focusing on a reward
    idSWFWidget_Seasons_Summary* summaryWidget; // Offset: 0x1E0

    bool waitingForSeasonProgress; // Offset: 0x1E8

    int animateStartingProgress; // Offset: 0x1EC

    int animateEndProgress; // Offset: 0x1F0

    int animateLevel; // Offset: 0x1F4

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > animateNextLevelStartTime; // Offset: 0x1F8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > animateCurrentLevelEndTime; // Offset: 0x200

    swfSoundType_t animationProgressFillSound; // Offset: 0x208

    swfSoundType_t animationLevelCompleteSound; // Offset: 0x20C

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > progressBarTweenDuration; // Offset: 0x210

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > delayBetweenLevels; // Offset: 0x218

    bool useExactTweenDuration; // Offset: 0x220

    bool resetSelectableAfterAnimation; // Offset: 0x221

    bool rebuildWhenSeasonRefreshComplete; // Offset: 0x222

    int boosterXP; // Offset: 0x224

    int currentXPOverride; // Offset: 0x228

}; // Size: 0x230

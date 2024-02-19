struct idSWFWidget_HordeSummary : idSWFWidget
{
    gameDifficulty_t difficulty; // Offset: 0x180

    idDeclHordeSummaryUtility* hordeUtilityDecl; // Offset: 0x188

    idSWFWidget_HordeSummary_scoreItem* scoreItemWidget; // Offset: 0x190

    idSWFWidget_HordeSummary_finalScoreDisplay* finalScoreWidget; // Offset: 0x198

    idSWFCachedSpriteInstance previousScoreSprite; // Offset: 0x1A0

    idSWFWidget_ProgressBar* progressBar; // Offset: 0x1D0

    idSWFWidget_HordeSummary_currentScoreContainer* currentScoreContainer; // Offset: 0x1D8

    idSWFWidget_HordeSummary_currentScoreTitle* currentScoreTitle; // Offset: 0x1E0

    int currentScore; // Offset: 0x1E8

    int previousScore; // Offset: 0x1EC

    int initialScore; // Offset: 0x1F0

    int previousBest; // Offset: 0x1F4

    bool isNewHigh; // Offset: 0x1F8

    int scoreItemIndex; // Offset: 0x1FC

    bool isScoreItemQueueEmpty; // Offset: 0x200

    idSWFWidget_Seasons_XP_Counter* scoreValue; // Offset: 0x208

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > tweenDuration; // Offset: 0x210

    idSWFWidget_HordeSummary_progressBarMedal* medalWidgetBronze; // Offset: 0x218

    idSWFWidget_HordeSummary_progressBarMedal* medalWidgetSilver; // Offset: 0x220

    idSWFWidget_HordeSummary_progressBarMedal* medalWidgetGold; // Offset: 0x228

    idSWFWidget_HordeSummary_progressBarMedal* medalWidgetSlayer; // Offset: 0x230

    int medalThresholds[4]; // Offset: 0x238

    idHordeSummaryMedalRank_t currentMedalRank; // Offset: 0x248

    bool hasShownCurrent; // Offset: 0x24C

    // should this screen animate?
    bool animate; // Offset: 0x24D

    // has animation actually started?
    bool animationStarted; // Offset: 0x24E

    idHUDEvent_ShowHordeSummary::hordeSummaryData_t* eventData; // Offset: 0x250

    int currentScoreItemCount; // Offset: 0x258

    idList < scoreItemEventData_t , TAG_IDLIST , false > activeScoreItemList; // Offset: 0x260

    idSWFWidget_HordeSummary::anon_41 scoreSprites; // Offset: 0x278

    idSWFWidget_HordeSummary::anon_42 logicEvents; // Offset: 0x2D8

    idSWFWidget_HordeSummary::anon_43 logicProperties; // Offset: 0x2F8

}; // Size: 0x6F8

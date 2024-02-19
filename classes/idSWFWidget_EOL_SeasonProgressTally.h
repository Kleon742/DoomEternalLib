struct idSWFWidget_EOL_SeasonProgressTally : idSWFWidget
{
    enum seasonProgressTallyStage_t : int
    {
        SEASON_PROGRESS_TALLY_STAGE_SHOW_AND_ANIMATE_XP_COUNTER = 0,
        SEASON_PROGRESS_TALLY_STAGE_SHOW_SEASONS = 1,
        SEASON_PROGRESS_TALLY_STAGE_ANIMATE_SEASONS = 2,
        NUM_SEASON_PROGRESS_TALLY_STAGES = 3
    };

    idMenu* menu; // Offset: 0x180

    asyncio::idTaskResultPtr < bool , bool > seasonRefreshTask; // Offset: 0x188

    bool seasonRefreshComplete; // Offset: 0x190

    int seasonRefreshRetryAttempts; // Offset: 0x194

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > seasonRefreshRetryTime; // Offset: 0x198

    idSharedPtr < seasonProgress_t > seasonProgress; // Offset: 0x1A0

    bool updateOnRefresh; // Offset: 0x1A8

    idSWFWidget* spinner; // Offset: 0x1B0

    idSWFWidget_Seasons_XP_Counter* xpCounter; // Offset: 0x1B8

    idSWFWidget_Seasons_LevelList* levelList; // Offset: 0x1C0

    bool levelListBuilt; // Offset: 0x1C8

    bool levelsSelectable; // Offset: 0x1C9

    bool pageButtonsEnabled; // Offset: 0x1CA

    int previousXP; // Offset: 0x1CC

    bool animationEnabled; // Offset: 0x1D0

    bool animationRepeatable; // Offset: 0x1D1

    int currentStage; // Offset: 0x1D4

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > stageDuration[3]; // Offset: 0x1D8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeUntilNextStage; // Offset: 0x1F0

    swfSoundType_t xpCounterLoopSound; // Offset: 0x1F8

    swfSoundType_t xpCounterEndSound; // Offset: 0x1FC

    swfSoundType_t seasonShowSound; // Offset: 0x200

    swfSoundType_t seasonProgressFillSound; // Offset: 0x204

    swfSoundType_t seasonLevelCompleteSound; // Offset: 0x208

}; // Size: 0x210

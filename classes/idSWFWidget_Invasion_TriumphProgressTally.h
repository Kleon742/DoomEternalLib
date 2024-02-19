struct idSWFWidget_Invasion_TriumphProgressTally : idSWFWidget
{
    enum triumphProgressTallyStage_t : int
    {
        TRIUMPH_PROGRESS_TALLY_STAGE_SHOW_TRIUMPHS = 0,
        TRIUMPH_PROGRESS_TALLY_STAGE_ANIMATE_TRIUMPHS = 1,
        NUM_TRIUMPH_PROGRESS_TALLY_STAGES = 2
    };

    idSWFWidget* spinner; // Offset: 0x180

    // "fake" list used to group widgets, 'cause idSWFWidget_List is troublesome
    idSWFWidget* triumphList; // Offset: 0x188

    idSWFWidget* triumphWidget; // Offset: 0x190

    bool triumphListBuilt; // Offset: 0x198

    int numListItems; // Offset: 0x19C

    int currentPage; // Offset: 0x1A0

    bool inputEnabled; // Offset: 0x1A4

    keyNum_t prevJoyKey; // Offset: 0x1A8

    keyNum_t nextJoyKey; // Offset: 0x1AC

    keyNum_t prevPCKey; // Offset: 0x1B0

    keyNum_t nextPCKey; // Offset: 0x1B4

    swfPlatform_t lastSWFPlatform; // Offset: 0x1B8

    asyncio::idTaskResultPtr < bool , bool > triumphRefreshTask; // Offset: 0x1C0

    bool triumphRefreshComplete; // Offset: 0x1C8

    idList < triumphProgressInfo_t , TAG_IDLIST , false > triumphProgress; // Offset: 0x1D0

    bool updateOnRefresh; // Offset: 0x1E8

    bool animationEnabled; // Offset: 0x1E9

    bool animationRepeatable; // Offset: 0x1EA

    int currentStage; // Offset: 0x1EC

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > stageDuration[2]; // Offset: 0x1F0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeUntilNextStage; // Offset: 0x200

}; // Size: 0x208

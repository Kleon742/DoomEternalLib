struct idViolenceAnalytics
{
    struct statsTagKillCount_t
    {
        gameStat_t statsTag; // Offset: 0x0

        int count; // Offset: 0x4

        unsigned int shotNum; // Offset: 0x8

        bool awarded; // Offset: 0xC

    }; // Size: 0x10

    struct statsTagHitCount_t
    {
        gameStat_t statsTag; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x8

        int index; // Offset: 0x10

        bool awarded; // Offset: 0x14

        idList < int , TAG_IDLIST , false > entityList; // Offset: 0x18

    }; // Size: 0x30

    struct statsTagOpposingHitCount_t
    {
        gameStat_t statsTag; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x8

        int index; // Offset: 0x10

        int attacker; // Offset: 0x14

        int victim; // Offset: 0x18

    }; // Size: 0x20

    struct statsViolenceData_t
    {
        idDeclViolenceEvent* violenceEvent; // Offset: 0x0

        // list of kills to track for kill X enemies N times
        idViolenceAnalytics::statsTagKillCount_t statKillCount; // Offset: 0x8

        // list of unique damaged entites to track for hit X enemies N times
        idViolenceAnalytics::statsTagHitCount_t statHitCount; // Offset: 0x18

        idViolenceAnalytics::statsTagOpposingHitCount_t statOpposingHitCount; // Offset: 0x48

    }; // Size: 0x68

    // How many Worldly hits have we had.
    int NumHits; // Offset: 0x0

    // How many Worldly deaths have we had.
    int NumDeaths; // Offset: 0x4

    // frame number we are on.
    int FrameNumber; // Offset: 0x8

    // the num of alt fires
    int numAltFires; // Offset: 0xC

    // Last n Amount of frames of deaths.
    idArray < idViolenceHistoryFrameData , 10 > FrameData; // Offset: 0x10

    // Last n Amount of deaths.
    idArray < idCompiledDamageData , 20 > ViolenceHistory; // Offset: 0x470

    // list of all listeners that have registered with us.
    idList < idDamageCompiler_Listener * , TAG_IDLIST , false > listeners; // Offset: 0x1B90

    // damage data for each entity we've encountered.
    idList < idViolenceEntityData_t , TAG_IDLIST , false > entityDamageData; // Offset: 0x1BA8

    idList < idViolenceAnalytics::statsViolenceData_t * , TAG_IDLIST , false > statTracking; // Offset: 0x1BC0

}; // Size: 0x1BD8

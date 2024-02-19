struct idHUD_DemonScore : idHUDElement
{
    struct scoreTickerInfo_t
    {
        int score; // Offset: 0x0

        idStr message; // Offset: 0x8

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > endTime; // Offset: 0x38

        bool isHiding; // Offset: 0x40

        int spriteIndex; // Offset: 0x44

    }; // Size: 0x48

    float totalScore; // Offset: 0xF8

    float nextTotalScore; // Offset: 0xFC

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > totalScoreStartTime; // Offset: 0x100

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > totalScoreEndTime; // Offset: 0x108

    bool totalScoreTimesNeedUpdate; // Offset: 0x110

    idList < idHUD_DemonScore::scoreTickerInfo_t , TAG_IDLIST , false > queuedScores; // Offset: 0x118

    idList < idHUD_DemonScore::scoreTickerInfo_t , TAG_IDLIST , false > activeScores; // Offset: 0x130

    int numSprites; // Offset: 0x148

    bool waitingForUpTween; // Offset: 0x14C

    int queuedUpCount; // Offset: 0x150

}; // Size: 0x158

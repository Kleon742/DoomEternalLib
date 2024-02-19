struct idSWFWidget_EOL_SummaryCategory : idSWFWidget
{
    eolSummaryCategory_t category; // Offset: 0x180

    int valueEarned; // Offset: 0x184

    int valueMax; // Offset: 0x188

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > initialDelayEndTime; // Offset: 0x190

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > progressShowEndTime; // Offset: 0x198

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > progressTweenEndTime; // Offset: 0x1A0

    bool animationComplete; // Offset: 0x1A8

}; // Size: 0x1B0

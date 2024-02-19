struct idSWFWidget_BanIndicator : idSWFWidget
{
    idTypestrictTimeSpan < long long , idCompileTimeRatio < 1 , 1000000 > > timeRemaining; // Offset: 0x180

    idTypestrictTimePoint < typestrictWallClockTimestampUnique > endTime; // Offset: 0x188

    banIndicatorType_t nextIndicatorType; // Offset: 0x190

    banIndicatorType_t indicatorType; // Offset: 0x194

    prohibitionFeatureType_t prohibitedFeature; // Offset: 0x198

    prohibitionEnforcementType_t prohibitedEnforcement; // Offset: 0x19C

    int numInfractions; // Offset: 0x1A0

    int maxInfractions; // Offset: 0x1A4

    float width; // Offset: 0x1A8

    float rightEdge; // Offset: 0x1AC

    bool showIndicator; // Offset: 0x1B0

}; // Size: 0x1B8

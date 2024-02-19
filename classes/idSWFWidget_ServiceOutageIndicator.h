struct idSWFWidget_ServiceOutageIndicator : idSWFWidget
{
    idStr displayMessageIdText; // Offset: 0x180

    idSWFWidget_MarqueeText* cascadeText; // Offset: 0x1B0

    idTypestrictTimePoint < typestrictWallClockTimestampUnique > startTime; // Offset: 0x1B8

    idTypestrictTimePoint < typestrictWallClockTimestampUnique > endTime; // Offset: 0x1C0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastUpdateTime; // Offset: 0x1C8

    float width; // Offset: 0x1D0

}; // Size: 0x1D8

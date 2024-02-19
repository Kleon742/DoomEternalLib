struct idSWFWidget_CorruptionMeter : idSWFWidget
{
    int corruptionTypeMap[5]; // Offset: 0x180

    idSWFWidget_CorruptionMeterData* corruptionData; // Offset: 0x198

    int corruptionDataCount; // Offset: 0x1A0

    // 0.0 -> 1.0
    float overallProgress; // Offset: 0x1B0

    int completedBars; // Offset: 0x1B4

    bool isComplete; // Offset: 0x1B8

    idSoundEvent* allCompleteSound; // Offset: 0x1C0

    bool animateHeader; // Offset: 0x1C8

    bool headerAnimationStarted; // Offset: 0x1C9

}; // Size: 0x1D0

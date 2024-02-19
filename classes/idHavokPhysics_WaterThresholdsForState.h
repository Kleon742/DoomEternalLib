struct idHavokPhysics_WaterThresholdsForState
{
    // player state these values are used for
    waterThresholdState_t state; // Offset: 0x0

    // do not submit - not used
    float waterLevelWading; // Offset: 0x4

    // knees water level for this state
    float waterLevelKnees; // Offset: 0x8

    // waist water level for this state
    float waterLevelWaist; // Offset: 0xC

    // breach water level for this state
    float waterLevelBreach; // Offset: 0x10

    // eyes water level for this state
    float waterLevelEyes; // Offset: 0x14

    // head water level for this state
    float waterLevelHead; // Offset: 0x18

}; // Size: 0x1C

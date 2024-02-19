struct hapticFeedbackSettings_t
{
    // haptic mode
    hapticModeType_t mode; // Offset: 0x0

    // trigger start percent
    hapticTriggerPercent_t startPercent; // Offset: 0x4

    // trigger end percent
    hapticTriggerPercent_t endPercent; // Offset: 0x8

    // feedback strength
    hapticFeedbackStrength_t strength; // Offset: 0xC

    // vibration frequency
    uint8_t vibrationFrequency; // Offset: 0x10

}; // Size: 0x14

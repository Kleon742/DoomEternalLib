struct hapticFeedbackParms_t
{
    // triggers
    hapticTriggerButton_t trigger; // Offset: 0x0

    // haptic settings
    hapticFeedbackSettings_t settings[2]; // Offset: 0x4

}; // Size: 0x2C

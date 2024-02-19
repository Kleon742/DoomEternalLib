struct healingFeedbackComponentData_t
{
    // FX condition to trigger when healing occurs
    fxCondition_t healingFX; // Offset: 0x0

    // Sound to play when observing someone else heal
    idSoundEvent* healSound; // Offset: 0x8

}; // Size: 0x10

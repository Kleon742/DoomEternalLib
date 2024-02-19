struct idDeclAdvancedViewShake : idDeclTypeInfo
{
    struct shakeData_t
    {
        // Table for modulating shake strength.
        idDeclTable* amplitudeTable; // Offset: 0x0

        // Scale for the Roll / Pitch / Yaw rotation. degrees
        idVec3 scale; // Offset: 0x8

        // Minimum shake frequency (in hertz)
        float minFrequencyHz; // Offset: 0x14

        // Maximum shake frequency (in hertz)
        float maxFrequencyHz; // Offset: 0x18

        // Maximum offset to use when sampling a point on the sine curve used for calculating the base shake power (0.0f - 1.0f)
        float maxSampleRandomizationPercent; // Offset: 0x1C

        // The maximum instantaneous deviation that can be applied to an amplitude sample (0.0f - 1.0f)
        float maxAmplitudeRandomizationPercent; // Offset: 0x20

    }; // Size: 0x28

    struct shakeTranslationData_t
    {
        // Table for modulating shake strength.
        idDeclTable* amplitudeTable; // Offset: 0x0

        // Scale for the Forward / Left / Up translation. World units {{ units = m }}
        idVec3 scale; // Offset: 0x8

        // Minimum shake frequency (in hertz)
        float minFrequencyHz; // Offset: 0x14

        // Maximum shake frequency (in hertz)
        float maxFrequencyHz; // Offset: 0x18

        // Maximum offset to use when sampling a point on the sine curve used for calculating the base shake power (0.0f - 1.0f)
        float maxSampleRandomizationPercent; // Offset: 0x1C

        // The maximum instantaneous deviation that can be applied to an amplitude sample (0.0f - 1.0f)
        float maxAmplitudeRandomizationPercent; // Offset: 0x20

    }; // Size: 0x28

    // The length of time to delay before starting the shake, in milliseconds.
    milliToGameTime_t shakeDelayMS; // Offset: 0x88

    // The length of time to shake the camera, in milliseconds.
    milliToGameTime_t shakeTimeMS; // Offset: 0x98

    // Parameters describing rotational shaking
    idDeclAdvancedViewShake::shakeData_t rotationShakeParam; // Offset: 0xA8

    // Parameters describing translational shaking
    idDeclAdvancedViewShake::shakeTranslationData_t translationShakeParam; // Offset: 0xD0

    // Max distance at which no shake occurs. Shake is scaled based on reference entity's distance to player. ** Code MUST pass a reference entity for this to work. **
    float maxShakeDistance; // Offset: 0xF8

    // The scale for the rotational params, normalized from 0.0f - 1.0f
    idVec3 normalizedRotationScale; // Offset: 0xFC

}; // Size: 0x108

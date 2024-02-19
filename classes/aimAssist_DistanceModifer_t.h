struct aimAssist_DistanceModifer_t
{
    // Type of ramp style.
    aimAssistInterpolateType_t rampType; // Offset: 0x0

    // Distance for ramping down distance modifier. {{ units = m }}
    float rampDownDistance; // Offset: 0x4

    // Minimum Optimal Distance for aim assist effect {{ units = m }}
    float optimalDistanceMin; // Offset: 0x8

    // Maximum Optimal Distance for aim assist effect {{ units = m }}
    float optimalDistanceMax; // Offset: 0xC

    // Distance for ramping up distance modifier. {{ units = m }}
    float rampUpDistance; // Offset: 0x10

}; // Size: 0x14

struct aimAssist_Tracking_t
{
    // Radius used to apply adhesion amount {{ units = m }}
    float radius; // Offset: 0x0

    // The percentage of the calculated radius to use as the inner radius for rolloff calculation
    float innerRadiusRolloffPct; // Offset: 0x4

    // Value 0 - 1. How much we track the target's velocity.
    float targetTrackingPercentage; // Offset: 0x8

}; // Size: 0xC

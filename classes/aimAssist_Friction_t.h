struct aimAssist_Friction_t
{
    // Optimal Distance for Friction to take an effect {{ units = m }}
    float optimalRadius; // Offset: 0x0

    // Friction Collision Sphere Radius {{ units = m }}
    float radius; // Offset: 0x4

    // The percentage of the calculated radius to use as the inner radius for rolloff calculation
    float innerRadiusRolloffPct; // Offset: 0x8

    // Minimum Friction Scalar - Value must be in 0..1 and smaller than corresponding max value
    float multiplierMin; // Offset: 0xC

    // Maximum Friction Scalar - Value must be in 0..1 and larger than corresponding min value
    float multiplierMax; // Offset: 0x10

    // Minimum Friction Scalar - Value must be in 0..1 and smaller than corresponding max value
    float multiplierMinMP; // Offset: 0x14

    // Maximum Friction Scalar - Value must be in 0..1 and larger than corresponding min value
    float multiplierMaxMP; // Offset: 0x18

    // Minimum Friction Scalar while in Zoom - Value must be in 0..1 and smaller than corresponding max value
    float multiplierMinZoom; // Offset: 0x1C

    // Maximum Friction Scalar while in Zoom - Value must be in 0..1 and larger than corresponding min value
    float multiplierMaxZoom; // Offset: 0x20

    // Distance to target where the fade out starts {{ units = m }}
    float cutoffDistanceStart; // Offset: 0x24

    // Distance to target where the fade out ends {{ units = m }}
    float cutoffDistanceEnd; // Offset: 0x28

    // Apply distance modifier to friction value ( Better friction within sweet spot )
    bool applyDistanceModifier; // Offset: 0x2C

}; // Size: 0x30

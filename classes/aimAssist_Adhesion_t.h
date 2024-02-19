struct aimAssist_Adhesion_t
{
    // Optimal Distance for adhesion to take an effect {{ units = m }}
    float optimalRadius; // Offset: 0x0

    // Radius used to apply adhesion amount {{ units = m }}
    float radius; // Offset: 0x4

    // The percentage of the calculated radius to use as the inner radius for rolloff calculation
    float innerRadiusRolloffPct; // Offset: 0x8

    // Max Yaw Adhesion Speed
    float yawSpeedMax; // Offset: 0xC

    // Max Pitch Adhesion Speed
    float pitchSpeedMax; // Offset: 0x10

    // Min Adhesion strength for MP (Value must be in 0..1 range)
    float strengthMinMP; // Offset: 0x14

    // Max Adhesion strength for MP (Value must be in 0..1 range)
    float strengthMaxMP; // Offset: 0x18

    // a 0-1 percentage of the aim angles to target added as a slight boost to stay tethered to your current target
    float tetherBoostMP; // Offset: 0x1C

    // Max Adhesion Contribution Percentage (Value must be in 0..1 range)
    float contributionPctMax; // Offset: 0x20

    // Max Adhesion Contribution Percentage while in Zoom (Value must be in 0..1 range)
    float contributionPctMaxZoom; // Offset: 0x24

    // Distance to target where the fade out starts {{ units = m }}
    float cutoffDistanceStart; // Offset: 0x28

    // Distance to target where the fade out ends {{ units = m }}
    float cutoffDistanceEnd; // Offset: 0x2C

    // Zoom Max Yaw Adhesion Speed
    float zoomYawSpeedMax; // Offset: 0x30

    // Zoom Max Pitch Adhesion Speed
    float zoomPitchSpeedMax; // Offset: 0x34

    // Apply distance modifier to friction value ( Better friction within sweet spot )
    bool applyDistanceModifier; // Offset: 0x38

}; // Size: 0x3C

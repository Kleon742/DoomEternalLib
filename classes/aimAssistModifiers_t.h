struct aimAssistModifiers_t
{
    // scale the max distance
    float targetMaxDistanceScale; // Offset: 0x0

    // scale the target selection radius for normal and zoomed modes
    float targetSelectionRadiusScale; // Offset: 0x4

    // scale the target adhesion radius;
    float targetAdhesionRadiusScale; // Offset: 0x8

    // scale the adhesion yaw and pitch speeds for normal and zoomed modes
    float targetAdhesionSpeedScale; // Offset: 0xC

    // modifies target Adhesion While Moving setting
    aimAssistOverride_t targetAdhesionEnableWhileMovingOverride; // Offset: 0x10

    // scale the target friction max distance and optimal distance
    float targetFrictionDistanceScale; // Offset: 0x14

    // scale the target friction radius and optimal radius
    float targetFrictionRadiusScale; // Offset: 0x18

}; // Size: 0x1C

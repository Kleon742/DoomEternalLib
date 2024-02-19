struct aimAssistData_t
{
    struct aimAssist_HostilityIndication_t
    {
        // Lookup table for angles, input value is distance from target
        idDeclTable* angleLookupTable; // Offset: 0x0

    }; // Size: 0x8

    // Forces aim assist to be used when this specific data is active (basically, specific weapons can override global aim assist option)
    bool forceGlobalAimAssist; // Offset: 0x0

    // Enables Target Adhesion
    bool targetAdhesionEnable; // Offset: 0x1

    // Enables Target Friction
    bool targetFrictionEnable; // Offset: 0x2

    // Enables Target Adhesion While Moving
    bool targetAdhesionEnableWhileMoving; // Offset: 0x3

    // Enables target adhesion while looking
    bool targetAdhesionEnableWhileLooking; // Offset: 0x4

    // Enables Snapping to next closest target when zooming in
    bool targetZoomSnapEnable; // Offset: 0x5

    // Do we allow Target Tracking.
    bool targetTrackingEnabled; // Offset: 0x6

    // If true, enables usage of "weak point" aim assist targets
    bool weakPointEnabled; // Offset: 0x7

    // Target must be within this angle from aim axis (view center).
    float targetValidAngle; // Offset: 0x8

    // Target must be within this FOV. (cosine of fov angle - must be between -1...1)
    float targetValidFovDot; // Offset: 0xC

    // Target must be within this angle from aim axis (view center) when meleeing.
    float meleeTargetValidAngle; // Offset: 0x10

    // Target must be within this FOV when meleeing. (cosine of fov angle - must be between -1...1)
    float meleeTargetValidFovDot; // Offset: 0x14

    // Enables name specific target groups for this weapon mode's aim assist
    idList < aimAssist_TargetGroups_t , TAG_IDLIST , false > targetGroups; // Offset: 0x18

    // highlight parms for highlighting weakpoints
    idColor weakpointHighlightColor; // Offset: 0x30

    // Target Selection Modifiers
    aimAssist_Selection_t targetSelection; // Offset: 0x40

    // Target Distance Modifier Values ( sweet spot )
    aimAssist_DistanceModifer_t targetDistanceModifier; // Offset: 0x5C

    // Target Adhesion Modifiers ( stickiness )
    aimAssist_Adhesion_t targetAdhesion; // Offset: 0x70

    // Target Friction Modifiers
    aimAssist_Friction_t targetFriction; // Offset: 0xAC

    // Target Melee Modifiers
    aimAssist_Melee_t targetMelee; // Offset: 0xE0

    // Target Tracking Modifiers.
    aimAssist_Tracking_t targetTracking; // Offset: 0x180

    // The weapon's hostility indication parameters
    aimAssistData_t::aimAssist_HostilityIndication_t hostilityIndication; // Offset: 0x190

}; // Size: 0x198

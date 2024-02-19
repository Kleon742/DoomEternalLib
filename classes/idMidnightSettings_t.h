struct idMidnightSettings_t : idClass
{
    // Priority of the Midnight
    idMidnight::Priority_t priority; // Offset: 0x10

    // Blend in override time (s), take precedence over the blend out time of an interrupted midnight, if specified (-1 = disabled)
    float blendInOverrideTime; // Offset: 0x14

    // Blend out time (s)
    float blendOutTime; // Offset: 0x18

    // Maximum LOD level for the entities involved, LOD_LEVEL_MAX to set the maximum.
    idLODLevel_t maxLODLevel; // Offset: 0x1C

    // If checked the patrol will be paused when starting midnight
    bool pausePatrol; // Offset: 0x20

    // Allows user to skip
    bool allowUserSkip; // Offset: 0x21

    // Forces the midnight to evaluate animations during the game frame. This will degrade performance but make physics on it more stable. Used for elevators and such.
    bool forceSynchronous; // Offset: 0x22

    // Shows the hud
    bool showHud; // Offset: 0x23

    // Leaves the HUD hidden after the scene is complete, if the HUD was hidden.
    bool leaveHudHidden; // Offset: 0x24

    // If false sound occlusion will be disabled else its what ever the current default is
    bool soundOcclusionEnabled; // Offset: 0x25

    // If true dof enabled
    bool dofEnabled; // Offset: 0x26

    // If true dof near will be enabled
    bool dofNearEnabled; // Offset: 0x27

    // Enable prefetch of assets while playing
    bool prefetcherEnabled; // Offset: 0x28

    // Should this play on clients? (typically yes)
    bool playOnClient; // Offset: 0x29

    // If true forces hands to swim fist at the end of the cinematic
    bool endInWater; // Offset: 0x2A

}; // Size: 0x30

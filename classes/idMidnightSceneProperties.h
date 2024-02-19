struct idMidnightSceneProperties : idClass
{
    // Duration of the scene
    idTypesafeTime < int , millisecondUnique_t , 1000 > length; // Offset: 0x10

    // Name of the midnight scene
    idStr name; // Offset: 0x18

    // Show hud
    bool showHud; // Offset: 0x48

    // if true dof will be enabled
    bool dofEnabled; // Offset: 0x49

    // if true dof near will be enabled requires the above setting to be true
    bool dofNearEnabled; // Offset: 0x4A

    // if false sound occlusion will be disabled else its what ever the current default is
    bool soundOcclusionEnabled; // Offset: 0x4B

    // Disable prefetch of assets while playing
    bool prefetcherDisabled; // Offset: 0x4C

    // If enabled, will not override the player's current FoV.
    bool usePlayerFOV; // Offset: 0x4D

    // The time (in milliseconds) it takes to blend between the player's FoV and the cinematic's FoV at the start of the scene. A value of 0 is instant.
    int fovTransitionInDuration; // Offset: 0x50

    // The time (in milliseconds) it takes to blend between the cinematic's FoV and the player's FoV at the end of the scene. A value of 0 is instant.
    int fovTransitionOutDuration; // Offset: 0x54

}; // Size: 0x58

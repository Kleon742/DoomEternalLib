struct idWorkflowInfo
{
    enum designPhase_t : int
    {
        DESIGN_UNSET = 0,
        DESIGN_LEVEL_EXPERIENCE_IDEATION = 100,
        DESIGN_TOP_DOWN = 200,
        DESIGN_BlOCK_PLAY_1 = 300,
        DESIGN_BlOCK_PLAY_2 = 310,
        DESIGN_LEVEL_FLOW_1 = 400,
        DESIGN_LEVEL_FLOW_2 = 410,
        DESIGN_FINALIZE = 500,
        DESIGN_BETA = 600
    };

    enum artPhase_t : int
    {
        ART_UNSET = 0
    };

    // Show this map in the "Maps" section of the dev menu
    bool showInDevMenu; // Offset: 0x0

    // Simple map name this map contributes to (like "surface")
    idStr mapGroup; // Offset: 0x8

    // The current phase of development of this map in the design team production workflow.
    idWorkflowInfo::designPhase_t designPhase; // Offset: 0x38

    // The current phase of development of this map in the art team production workflow.
    idWorkflowInfo::artPhase_t artPhase; // Offset: 0x3C

    // Bump the major version each time a significant threshold is crossed, this will mark the build as new in the dev menu in game.
    int versionMajor; // Offset: 0x40

    // Reset the minor number to zero when bumping the major version number.
    int versionMinor; // Offset: 0x44

}; // Size: 0x48

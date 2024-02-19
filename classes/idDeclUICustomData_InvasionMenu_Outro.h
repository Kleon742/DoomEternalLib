struct idDeclUICustomData_InvasionMenu_Outro : idGameDeclTypeInfo
{
    struct backgroundInfo_t
    {
        // Background to use for victory
        idMaterial2* victory; // Offset: 0x0

        // Background to use for defeat
        idMaterial2* defeat; // Offset: 0x8

    }; // Size: 0x10

    struct stageDurationInfo_t
    {
        // Duration in which the stage is visible (i.e. until "hide" animation begins)
        idTypesafeTime < float , secondUnique_t , 1 > visibleDuration; // Offset: 0x0

        // Total duration for the stage (i.e. time until the next stage begins)
        idTypesafeTime < float , secondUnique_t , 1 > totalDuration; // Offset: 0x4

    }; // Size: 0x8

    struct stageDurations_t
    {
        // Duration for the "losers" stage
        idDeclUICustomData_InvasionMenu_Outro::stageDurationInfo_t losers; // Offset: 0x0

        // Duration for the "winners" stage
        idDeclUICustomData_InvasionMenu_Outro::stageDurationInfo_t winners; // Offset: 0x8

        // Duration for the season progress stage
        idDeclUICustomData_InvasionMenu_Outro::stageDurationInfo_t seasonProgress; // Offset: 0x10

        // Duration for the player (doom level) progress stage
        idDeclUICustomData_InvasionMenu_Outro::stageDurationInfo_t playerProgress; // Offset: 0x18

        // Duration for the triumphs progress stage
        idDeclUICustomData_InvasionMenu_Outro::stageDurationInfo_t triumphs; // Offset: 0x20

    }; // Size: 0x28

    struct podiumPositionInfo_t
    {
        // Entity offset, relative to camera
        idVec3 offset; // Offset: 0x0

        // Entity angles, relative to initial position (facing-the-camera)
        idAngles angles; // Offset: 0xC

        // Index of player badge widget associated with this podium position
        int playerBadgeIndex; // Offset: 0x18

    }; // Size: 0x1C

    struct podiumPositions_t
    {
        // Left podium position info
        idDeclUICustomData_InvasionMenu_Outro::podiumPositionInfo_t left; // Offset: 0x0

        // Right podium position info
        idDeclUICustomData_InvasionMenu_Outro::podiumPositionInfo_t right; // Offset: 0x1C

        // Center podium position info
        idDeclUICustomData_InvasionMenu_Outro::podiumPositionInfo_t center; // Offset: 0x38

    }; // Size: 0x54

    // Background materials
    idDeclUICustomData_InvasionMenu_Outro::backgroundInfo_t backgrounds; // Offset: 0x90

    // Animation stage durations
    idDeclUICustomData_InvasionMenu_Outro::stageDurations_t stageDurations; // Offset: 0xA0

    // Podium entity positions
    idDeclUICustomData_InvasionMenu_Outro::podiumPositions_t podiumPositions; // Offset: 0xC8

    // Number of triumphs visible on the screen
    int numVisibleTriumphs; // Offset: 0x11C

}; // Size: 0x120

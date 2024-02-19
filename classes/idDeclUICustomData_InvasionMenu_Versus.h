struct idDeclUICustomData_InvasionMenu_Versus : idGameDeclTypeInfo
{
    struct stageDurationInfo_t
    {
        // Duration in which the stage is visible (i.e. until "hide" animation begins)
        idTypesafeTime < float , secondUnique_t , 1 > visibleDuration; // Offset: 0x0

        // Total duration for the stage (i.e. time until the next stage begins)
        idTypesafeTime < float , secondUnique_t , 1 > totalDuration; // Offset: 0x4

    }; // Size: 0x8

    struct stageDurations_t
    {
        // Duration for the roll-on stage
        idDeclUICustomData_InvasionMenu_Versus::stageDurationInfo_t rollOn; // Offset: 0x0

        // Duration for the versus animation stage
        idDeclUICustomData_InvasionMenu_Versus::stageDurationInfo_t vsAnimation; // Offset: 0x8

        // Duration for the triumph progress stage
        idDeclUICustomData_InvasionMenu_Versus::stageDurationInfo_t triumphs; // Offset: 0x10

        // Duration for the roll-off stage
        idDeclUICustomData_InvasionMenu_Versus::stageDurationInfo_t rollOff; // Offset: 0x18

    }; // Size: 0x20

    struct soundEvents_t
    {
        // sound to play when showing the versus screen
        idSoundEvent* showScreen; // Offset: 0x0

        // sound to play when showing the "VS" animation stinger
        idSoundEvent* vsAnimation; // Offset: 0x8

        // sound to play when showing the triumphs widget
        idSoundEvent* showTriumphs; // Offset: 0x10

        // sound to play when hiding the versus screen
        idSoundEvent* hideScreen; // Offset: 0x18

    }; // Size: 0x20

    // Animation stage durations
    idDeclUICustomData_InvasionMenu_Versus::stageDurations_t stageDurations; // Offset: 0x90

    // sounds to play during various bits of animation
    idDeclUICustomData_InvasionMenu_Versus::soundEvents_t soundEvents; // Offset: 0xB0

    // Number of triumphs visible on the screen
    int numVisibleTriumphs; // Offset: 0xD0

}; // Size: 0xD8

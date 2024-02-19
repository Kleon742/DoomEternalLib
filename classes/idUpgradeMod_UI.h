struct idUpgradeMod_UI : idUpgradeMod
{
    enum UIModType_t : int
    {
        UI_MOD_INVALID = -1,
        UI_MOD_RADAR_ENABLE = 0,
        UI_MOD_RADAR_RADIUS = 1,
        UI_MOD_DIAGNOSTICS_ENABLE = 2
    };

    struct radarData_t
    {
        // radius of the radar
        float radius; // Offset: 0x0

        // Milliseconds between pulses
        int pulseRate; // Offset: 0x4

        // How fast the pulse moves ( Gu per second )
        float pulseSpeed; // Offset: 0x8

    }; // Size: 0xC

    struct diagnosticsData_t
    {
        // Number of health bars to display at once ( -1 is unlimited )
        int maxVisible; // Offset: 0x0

        // Max Distance Diagnostics run.
        float maxDistance; // Offset: 0x4

        // How opaque to be at maximum
        float maxOpacity; // Offset: 0x8

        // How long to fade from max Opacity
        int fadeOutTimeMS; // Offset: 0xC

        // How long to stay at max opacity before fade out begins
        int visibleTimeMS; // Offset: 0x10

        // Color to flash on armor hit
        idColor colorArmor; // Offset: 0x14

        // Color to flash on critical hit
        idColor colorCritical; // Offset: 0x24

    }; // Size: 0x34

    // radar upgrade info
    idUpgradeMod_UI::radarData_t radar; // Offset: 0x8

    // Diagnostics Upgrade Data.
    idUpgradeMod_UI::diagnosticsData_t diagnostics; // Offset: 0x14

    // upgrade type.
    idUpgradeMod_UI::UIModType_t type; // Offset: 0x48

}; // Size: 0x4C

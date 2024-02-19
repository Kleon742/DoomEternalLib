struct idDeclUICustomData_MainMenu_FeatureSelection : idGameDeclTypeInfo
{
    struct featureSelectionInfo_t
    {
        // Feature label
        idStrId label; // Offset: 0x0

        // Feature description
        idStrId description; // Offset: 0x4

        // Image to show in the selection dialog
        idMaterial2* image; // Offset: 0x8

        // Sound to play when selecting this feature
        swfSoundType_t selectionSound; // Offset: 0x10

        // Show sticker?
        bool showSticker; // Offset: 0x14

    }; // Size: 0x18

    struct featureSelection_t
    {
        // Info to show when feature is supported
        idDeclUICustomData_MainMenu_FeatureSelection::featureSelectionInfo_t supported; // Offset: 0x0

        // Info to show when feature is unsupported
        idDeclUICustomData_MainMenu_FeatureSelection::featureSelectionInfo_t unsupported; // Offset: 0x18

    }; // Size: 0x30

    // Feature selection dialog title
    idStrId dialogTitle; // Offset: 0x90

    // Default feature selection
    idDeclUICustomData_MainMenu_FeatureSelection::featureSelection_t default; // Offset: 0x98

    // Feature selection for Raytracing
    idDeclUICustomData_MainMenu_FeatureSelection::featureSelection_t raytracing; // Offset: 0xC8

    // Feature selection for 120 Hz mode
    idDeclUICustomData_MainMenu_FeatureSelection::featureSelection_t oneTwentyHz; // Offset: 0xF8

    // Feature selection for both raytracing and 120 Hz mode
    idDeclUICustomData_MainMenu_FeatureSelection::featureSelection_t raytracingOneTwentyHz; // Offset: 0x128

}; // Size: 0x158

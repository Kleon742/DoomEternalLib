struct dialogParmsData_t
{
    struct insufficientStorageParms_t
    {
        long long bytesRequired; // Offset: 0x0

        // null-terminated string, but not using idStrStatic because it's part of a union
        idArray < char , 64 > folder; // Offset: 0x8

        bool retrySave; // Offset: 0x48

        bool isTransitioning; // Offset: 0x49

        bool allowCancel; // Offset: 0x4A

        bool continueButtonOnly; // Offset: 0x4B

        bool useStorageSelector; // Offset: 0x4C

        bool quitOnAccept; // Offset: 0x4D

    }; // Size: 0x50

    struct saveGameParms_t
    {
        int saveIndex; // Offset: 0x0

        // null-terminated string, but not using idStrStatic because it's part of a union
        idArray < char , 64 > slotName; // Offset: 0x4

    }; // Size: 0x44

    struct newDeviceWarning_t
    {
        int userIndex; // Offset: 0x0

        unsigned long long minSizeInBytes; // Offset: 0x8

        bool manageDeviceEnabled; // Offset: 0x10

    }; // Size: 0x18

    struct videoNotPlayableWarning_t
    {
        // null-terminated string, but not using idStrStatic because it's part of a union
        idArray < char , 64 > requiredBinName; // Offset: 0x0

    }; // Size: 0x40

    struct networkingParams_t
    {
        // time in ms the user should wait before reattempting a call
        int timeRateLimitedMs; // Offset: 0x0

    }; // Size: 0x4

    struct socialParams_t
    {
        // This equates to an integer from its handle.
        int partyInviteId; // Offset: 0x0

        // When getting a connection request, this is the network info we use
        idArray < char , 64 > networkInfoStr; // Offset: 0x4

        // When getting a connection request, this is the connection info we use
        idArray < char , 64 > connectionInfoStr; // Offset: 0x44

    }; // Size: 0x84

    struct leaveVideoSettingsParms_t
    {
        int currentTabIndex; // Offset: 0x0

        int newTabIndex; // Offset: 0x4

        idSWFWidget_SocialBar* socialBar; // Offset: 0x8

    }; // Size: 0x10

    struct pvpTutorialParams_t
    {
        // This equates to a playableTutorialType_t of the type of tutorial to play
        int tutorialType; // Offset: 0x0

        // This equates to an resourceId_t of the character to play a tutorial for, 0 is general
        unsigned long long resourceId; // Offset: 0x8

    }; // Size: 0x10

    struct prohibitionParams_t
    {
        // This equates to an prohibition feature type that we are referencing
        unsigned int prohibitionFeatureType; // Offset: 0x0

    }; // Size: 0x4

    struct sceneNavigationParams_t
    {
        // This equates a element Id that is used to set the next screen
        int navigationScene; // Offset: 0x0

        // optional data that is needed for the screen transition
        void* navigationData; // Offset: 0x8

    }; // Size: 0x10

    struct launchActivityParams_t
    {
        int activityId; // Offset: 0x0

        unsigned short evId; // Offset: 0x4

    }; // Size: 0x8

    struct controllerSettingsParms_t
    {
        idSWFWidget* widgetPointer; // Offset: 0x0

    }; // Size: 0x8

    struct scaleDownSettingsWarningParms_t
    {
        idMainMenu_Popup_FeatureSelection* featureSelection; // Offset: 0x0

    }; // Size: 0x8

    struct launchDifficultyParams_t
    {
        int difficulty; // Offset: 0x0

    }; // Size: 0x4

    dialogParmsData_t::insufficientStorageParms_t insufficientStorage; // Offset: 0x0

    dialogParmsData_t::saveGameParms_t saveGame; // Offset: 0x0

    dialogParmsData_t::newDeviceWarning_t newDeviceWarning; // Offset: 0x0

    dialogParmsData_t::videoNotPlayableWarning_t videoNotPlayableWarning; // Offset: 0x0

    dialogParmsData_t::networkingParams_t networkingParams; // Offset: 0x0

    dialogParmsData_t::socialParams_t socialParams; // Offset: 0x0

    dialogParmsData_t::leaveVideoSettingsParms_t leaveVideoSettingsParms; // Offset: 0x0

    dialogParmsData_t::pvpTutorialParams_t pvpTutorialParams; // Offset: 0x0

    dialogParmsData_t::prohibitionParams_t prohibitionParams; // Offset: 0x0

    dialogParmsData_t::sceneNavigationParams_t sceneNavigationParams; // Offset: 0x0

    dialogParmsData_t::launchActivityParams_t launchActivityParams; // Offset: 0x0

    dialogParmsData_t::controllerSettingsParms_t controllerSettingsParms; // Offset: 0x0

    dialogParmsData_t::scaleDownSettingsWarningParms_t scaleDownSettingsWarningParms; // Offset: 0x0

    dialogParmsData_t::launchDifficultyParams_t launchDifficultyParams; // Offset: 0x0

}; // Size: 0x88

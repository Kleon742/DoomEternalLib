struct idSettingsDataSource_Startup : idSettingsDataSource
{
    enum accessibilitySettingFields_t : int
    {
        STARTUP_SETTING_PSE_FILTER = 0,
        STARTUP_SETTING_PSE_LUM_THRESHOLD = 1,
        STARTUP_SETTING_PSE_FULLSCREEN_THRESHOLD = 2,
        STARTUP_SETTING_WEAPON_BOB = 3,
        STARTUP_SETTING_SCREEN_SHAKE = 4,
        STARTUP_SETTING_MOTION_BLUR = 5,
        STARTUP_SETTING_FOV = 6,
        STARTUP_SETTING_UI_COLORBLIND_MODE = 7,
        STARTUP_SETTING_VIDEO_COLORBLIND_MODE = 8,
        STARTUP_SETTING_COLORBLIND_BRIGHTNESS = 9,
        STARTUP_SETTING_COLORBLIND_CONTRAST = 10,
        STARTUP_SETTING_COLORBLIND_INTENSITY = 11,
        STARTUP_SETTING_COLORBLIND_CORRECTIONSTRENGTH = 12,
        STARTUP_SETTING_CHAT_INCOMING_TEXT_TO_SPEECH_ENABLED = 13,
        STARTUP_SETTING_CHAT_OUTGOING_TEXT_TO_SPEECH_ENABLED = 14,
        STARTUP_SETTING_CHAT_SPEECH_TO_TEXT_ENABLED = 15,
        STARTUP_SETTING_CHAT_TRANSLATION_ENABLED = 16,
        STARTUP_SETTING_CHAT_SPEECH_PROFILE = 17,
        MAX_STARTUP_SETTINGS = 18
    };

    idSettingsDataSource_UI::idProfileToIndexMap masterProfileMap; // Offset: 0x38

    idList < idSettingsDataSource_UI::colorProfileData_t , TAG_IDLIST , false > colorBlindProfiles; // Offset: 0x50

    bool colorBlindProfileActive; // Offset: 0x68

    idSWFWidget* owner; // Offset: 0x70

}; // Size: 0x78
struct idSettingsDataSource_UI : idSettingsDataSource
{
    enum uiSettingFields_t : int
    {
        UI_SETTING_UI_COLOR_PROFILE = 0,
        UI_SETTING_CONFIRMATION_TIME = 1,
        UI_SETTING_HUD_MODE = 2,
        UI_SETTING_HUD_SCALE = 3,
        UI_SETTING_HUD_OPACITY = 4,
        UI_SETTING_HUD_CROSSHAIR_STYLE = 5,
        UI_SETTING_HUD_PRESETS = 6,
        UI_SETTING_HUD_COMPASS = 7,
        UI_SETTING_HUD_KEYCARD = 8,
        UI_SETTING_HUD_INTERACT_PROMPT = 9,
        UI_SETTING_HUD_BOSS_HEALTH = 10,
        UI_SETTING_HUD_OBJECTIVE_MARKERS = 11,
        UI_SETTING_HUD_COMBAT_RATING = 12,
        UI_SETTING_HUD_HORDE_SCORE = 13,
        UI_SETTING_HUD_BLOOD_PUNCH_INFO = 14,
        UI_SETTING_HUD_RUNE_INFO = 15,
        UI_SETTING_HUD_DASH_INFO = 16,
        UI_SETTING_HUD_WEAPON_INFO = 17,
        UI_SETTING_HUD_HEALTH_INFO = 18,
        UI_SETTING_HUD_EQUIPMENT_INFO = 19,
        UI_SETTING_HUD_POWERUP = 20,
        UI_SETTING_HUD_EXTRA_LIVES = 21,
        UI_SETTING_HUD_TEXT_CHAT = 22,
        UI_SETTING_HUD_ABILITY_INDICATOR_TYPE = 23,
        UI_SETTING_HUD_ABILITY_INDICATOR_BLOOD_PUNCH = 24,
        UI_SETTING_HUD_ABILITY_INDICATOR_HAMMER = 25,
        UI_SETTING_HUD_ABILITY_INDICATOR_CHAINSAW = 26,
        UI_SETTING_HUD_ABILITY_INDICATOR_FLAME_BELCH = 27,
        UI_SETTING_HUD_ABILITY_INDICATOR_GRENADE = 28,
        UI_SETTING_HUD_ABILITY_INDICATOR_ICE_GRENADE = 29,
        UI_SETTING_NOTIFICATIONS_MAJOR = 30,
        UI_SETTING_NOTIFICATIONS_MINOR = 31,
        UI_SETTING_NOTIFICATIONS_MENU = 32,
        UI_SETTING_NOTIFICATIONS_HUD_UPDATE = 33,
        UI_SETTING_NOTIFICATIONS_AMMO_PICKUP = 34,
        UI_SETTING_NOTIFICATIONS_HEALTH_PICKUP = 35,
        UI_SETTING_NOTIFICATIONS_LEVEL_UP = 36,
        UI_SETTING_NOTIFICATIONS_MISSION_CHALLENGES = 37,
        UI_SETTING_NOTIFICATIONS_SPEAKER = 38,
        UI_SETTING_COLORBLIND_MODE = 39,
        UI_SETTING_HUD_COLOR = 40,
        MAX_UI_SETTINGS = 41
    };

    enum hudPresets_t : int
    {
        HUD_PRESET_NONE = 0,
        HUD_PRESET_COMBAT = 1,
        HUD_PRESET_NOTIFICATIONS = 2,
        HUD_PRESET_EXPLORATION = 3,
        HUD_PRESET_ALL = 4,
        HUD_PRESET_CUSTOM = 5,
        HUD_PRESET_MAX = 6
    };

    struct colorProfileData_t
    {
        idStr name; // Offset: 0x0

        int value; // Offset: 0x30

    }; // Size: 0x38

    struct idProfileToIndexMap
    {
        idList < idPair < int , int > , TAG_IDLIST , false > map; // Offset: 0x0

    }; // Size: 0x18

    typedef idPair < int , int > idProfileToIndexPair;

    idSWFWidget* owner; // Offset: 0x38

    idList < idSettingsDataSource_UI::colorProfileData_t , TAG_IDLIST , false > colorProfiles; // Offset: 0x40

    idList < idSettingsDataSource_UI::colorProfileData_t , TAG_IDLIST , false > colorBlindProfiles; // Offset: 0x58

    idSettingsDataSource_UI::idProfileToIndexMap masterProfileMap; // Offset: 0x70

    bool colorBlindProfileActive; // Offset: 0x88

    bool presetChanged; // Offset: 0x89

}; // Size: 0x90

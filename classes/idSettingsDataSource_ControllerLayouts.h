struct idSettingsDataSource_ControllerLayouts : idSettingsDataSource
{
    enum controlsSettingFields_t : int
    {
        CONTROLLER_SETTING_SLAYER_LAYOUT = 0,
        CONTROLLER_SETTING_DEMON = 1,
        CONTROLLER_SETTING_DEMON_LAYOUT = 2,
        MAX_CONTROLLER_SETTINGS = 3
    };

    struct demonControllerLayoutInfo_t
    {
        int bindset; // Offset: 0x0

        int layout; // Offset: 0x4

    }; // Size: 0x8

    idMainMenu_Popup_ControllerLayouts* owner; // Offset: 0x38

    int numDemons; // Offset: 0x40

    idList < idSettingsDataSource_ControllerLayouts::demonControllerLayoutInfo_t , TAG_IDLIST , false > demonLayoutValues; // Offset: 0x48

    idList < idSettingsDataSource_ControllerLayouts::demonControllerLayoutInfo_t , TAG_IDLIST , false > previousDemonLayoutValues; // Offset: 0x60

}; // Size: 0x78

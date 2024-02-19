struct idSettingsDataSource
{
    struct idSettingData
    {
        struct idSettingListItemData
        {
            idSWFScriptVar value; // Offset: 0x0

            idStr presentedValue; // Offset: 0x10

            idMaterial2* icon; // Offset: 0x40

        }; // Size: 0x48

        // For lists, this is the index into 'listData'. For sliders, this is the int value.
        int currentValue; // Offset: 0x0

        int defaultValue; // Offset: 0x4

        int previousValue; // Offset: 0x8

        int adjustAmount; // Offset: 0xC

        // Clamp min/max value when adjusting
        bool clampValue; // Offset: 0x10

        int clampMin; // Offset: 0x14

        int clampMax; // Offset: 0x18

        bool isToggle; // Offset: 0x1C

        // We never use floats, instead multiply by 10^numDecimals and store as an int
        bool isFloat; // Offset: 0x1D

        // If isFloat is true this must be greater than 0
        int numDecimals; // Offset: 0x20

        // toggle whether setting can be restored to default or not
        bool canRestoreDefault; // Offset: 0x24

        // Used for drop down and horizontal lists. first is the value, second is what to present for the value, third is the icon for the item
        idList < idSettingsDataSource::idSettingData::idSettingListItemData , TAG_IDLIST , false > listData; // Offset: 0x28

        idList < idStr , TAG_IDLIST , false > togglePresentStrings; // Offset: 0x40

    }; // Size: 0x58

    struct settingChangedCallback_t
    {
        void (*callback)(void * const param , const int settingIndex); // Offset: 0x0

        void* user; // Offset: 0x8

    }; // Size: 0x10

    idList < idSettingsDataSource::idSettingData , TAG_IDLIST , false > settingsData; // Offset: 0x8

    idList < idSettingsDataSource::settingChangedCallback_t , TAG_IDLIST , false > settingChangedCallbacks; // Offset: 0x20

}; // Size: 0x38

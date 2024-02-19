struct idSWFWidget_SettingsList : idSWFWidget
{
    struct disableSettingsInfo_t
    {
        int settingToCheck; // Offset: 0x0

        idSWFScriptVar valueToCheck; // Offset: 0x8

        idList < idSWFWidget * , TAG_IDLIST , false > widgetsToDisable; // Offset: 0x18

        bool hide; // Offset: 0x30

        bool invertFunctionality; // Offset: 0x31

    }; // Size: 0x38

    struct focusChangedCallback_t
    {
        void (*callback)(void * const param , const int settingID); // Offset: 0x0

        void* user; // Offset: 0x8

    }; // Size: 0x10

    idSettingsDataSource* dataSource; // Offset: 0x180

    idSWFWidget_SectionList* settingsList; // Offset: 0x188

    idList < idSWFWidget_SettingsList::disableSettingsInfo_t , TAG_IDLIST , false > disableSettingsInfo; // Offset: 0x190

    idSWFWidget_DropDownList* dropDownList; // Offset: 0x1A8

    idSWFWidget_Text* descText; // Offset: 0x1B0

    // generic observers. ( call back style )
    idList < idSWFWidget_SettingsList::focusChangedCallback_t , TAG_MENU , false > focusChangedCallbacks; // Offset: 0x1B8

}; // Size: 0x1D0

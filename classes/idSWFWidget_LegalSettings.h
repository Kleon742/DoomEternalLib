struct idSWFWidget_LegalSettings : idSWFWidget
{
    enum legalSettingsCmdID_t : int
    {
        CMD_LEGAL_SETTINGS_NONE = -1,
        CMD_LEGAL_SETTINGS_VIEW_AGREEMENTS = 0,
        CMD_LEGAL_SETTINGS_ACCOUNT_HELP = 1,
        CMD_LEGAL_SETTINGS_RECONCILE_ENTITLEMENTS = 2
    };

    idMainMenu_Screen_Settings* mainMenu; // Offset: 0x180

    idSWFWidget_List* list; // Offset: 0x188

    swfPlatform_t swfPlatform; // Offset: 0x190

}; // Size: 0x198

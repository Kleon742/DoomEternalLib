struct idMainMenu_Popup_ControllerLayouts : idMenuElement
{
    idSettingsDataSource_ControllerLayouts dataSource; // Offset: 0x100

    idSWFWidget_SettingsList* settingsList; // Offset: 0x178

    idSWFWidget_Setting* slayerLayouts; // Offset: 0x180

    idSWFWidget_Setting* demon; // Offset: 0x188

    idSWFWidget_Setting* demonLayouts; // Offset: 0x190

    idSWFWidget_Button* editButton; // Offset: 0x198

    idSWFWidget_ControllerCustomLayout* customLayout; // Offset: 0x1A0

    idList < idSWFWidget_MarqueeText * , TAG_IDLIST , false > bindingTextList; // Offset: 0x1A8

    idList < idStr , TAG_IDLIST , false > slayerCustomBindingInfo; // Offset: 0x1C0

    idList < idList < idStr > , TAG_IDLIST , false > demonCustomBindingInfo; // Offset: 0x1D8

    // sigh...
    idList < bool , TAG_IDLIST , false > slayerCustomBindsToHideInBattleMode; // Offset: 0x1F0

    bool showDemonLayouts; // Offset: 0x208

    swfPlatform_t currentPlatform; // Offset: 0x20C

    swfPlatform_t gamepadPlatform; // Offset: 0x210

    bool customChanged; // Offset: 0x214

    bool queuedUpdate; // Offset: 0x215

    bool isVita; // Offset: 0x216

}; // Size: 0x218

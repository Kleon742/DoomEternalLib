struct idMainMenu_Screen_DemoSettings : idMenuElement
{
    idSettingsDataSource_Demo dataSource; // Offset: 0x100

    idSWFWidget_SettingsList* settingsList; // Offset: 0x138

    idSWFWidget_Setting* horizSensitivity; // Offset: 0x140

    idSWFWidget_Setting* vertSensitivity; // Offset: 0x148

    idSWFWidget_Setting* mouseSensitivity; // Offset: 0x150

    idSWFWidget_Setting* invertLookMouse; // Offset: 0x158

    idSWFWidget_Setting* invertLookController; // Offset: 0x160

    idSWFWidget_Setting* vibrate; // Offset: 0x168

    idSWFWidget_Setting* difficulty; // Offset: 0x170

    idSWFWidget_Setting* colorblindMode; // Offset: 0x178

}; // Size: 0x180

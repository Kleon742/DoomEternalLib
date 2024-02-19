struct idMainMenu_Popup_HDRCalibration : idMenuElement
{
    idSettingsDataSource_HDRCalibration dataSource; // Offset: 0x100

    idSWFWidget_SettingsList* settingsList; // Offset: 0x138

    idSWFWidget_Setting* maxNits; // Offset: 0x140

    idSWFWidget_Setting* brightness; // Offset: 0x148

    idSWFWidget_Setting* contrast; // Offset: 0x150

    idSWFWidget_Setting* saturation; // Offset: 0x158

    idSWFWidget_Setting* whitepoint_min; // Offset: 0x160

    idSWFWidget_Setting* whitepoint_mid; // Offset: 0x168

    idSWFWidget_Setting* whitepoint_max; // Offset: 0x170

    idSWFWidget_HeaderText* header; // Offset: 0x178

}; // Size: 0x180

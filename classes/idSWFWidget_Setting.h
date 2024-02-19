struct idSWFWidget_Setting : idSWFWidget
{
    idSettingsDataSource* dataSource; // Offset: 0x180

    widgetSettingType_t settingType; // Offset: 0x188

    int settingIndex; // Offset: 0x18C

    idStr label; // Offset: 0x190

    idStr desc; // Offset: 0x1C0

    idSWFWidget_Button* btnLess; // Offset: 0x1F0

    idSWFWidget_Button* btnMore; // Offset: 0x1F8

    idList < idSWFWidget_Button * , TAG_IDLIST , false > listPips; // Offset: 0x200

    idSWFWidget_MarqueeText* marqueeText; // Offset: 0x218

    idSWFWidget_DropDownList* dropDownList; // Offset: 0x220

    // Only applies to WIDGET_SETTING_TYPE_HORIZONTAL_LIST and WIDGET_SETTING_TYPE_DROP_DOWN_LIST
    bool allowListWrapping; // Offset: 0x228

    bool isDragging; // Offset: 0x229

    float dragButtonOffset; // Offset: 0x22C

    bool needsSliderUpdate; // Offset: 0x230

    bool needsUpdate; // Offset: 0x231

    bool playSounds; // Offset: 0x232

}; // Size: 0x238

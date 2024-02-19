struct photoModeSetting_t
{
    // Type of setting.
    photoModeSettingType_t type; // Offset: 0x0

    // What does this Setting Change.
    photomodeFields_t functionality; // Offset: 0x4

    // Name of the setting.
    idStr settingName; // Offset: 0x8

    // Description of the setting.
    idStr settingDescription; // Offset: 0x38

}; // Size: 0x68

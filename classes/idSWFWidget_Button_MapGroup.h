struct idSWFWidget_Button_MapGroup : idSWFWidget_Button
{
    automapMapGroupId_t mapGroupId; // Offset: 0x2A0

    int mapGroupIndex; // Offset: 0x2A4

    idSWFWidget_Button_CommandBar* activateButton; // Offset: 0x2A8

    bool isCurrentGroup; // Offset: 0x2B0

    idMaterial2* imageMaterial; // Offset: 0x2B8

    commandBarButtonInfo_t buttonInfo; // Offset: 0x2C0

}; // Size: 0x6D8

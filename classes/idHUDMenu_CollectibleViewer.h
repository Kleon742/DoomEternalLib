struct idHUDMenu_CollectibleViewer : idHUDElement
{
    idSWFWidget_CommandBar* commandBar; // Offset: 0xF8

    int collectibleState; // Offset: 0x100

    idHUDEvent_CollectibleInfo::collectibleGuiInfo_t data; // Offset: 0x104

    bool playing; // Offset: 0x120

    bool showModSwapPrompt; // Offset: 0x121

}; // Size: 0x128

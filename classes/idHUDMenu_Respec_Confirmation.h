struct idHUDMenu_Respec_Confirmation : idSWFWidget
{
    hudRespecActions_t type; // Offset: 0x180

    int available; // Offset: 0x184

    int slotted; // Offset: 0x188

    idSWFWidget_Button* acceptButton; // Offset: 0x190

    idSWFWidget_Button* canelButton; // Offset: 0x198

    idSWFWidget_List* buttonList; // Offset: 0x1A0

}; // Size: 0x1A8

struct idHUDMenu_Respec : idMenuElement
{
    idHUDEvent_RespecInfo::respecInfo_t respecInfo; // Offset: 0x100

    idSWFWidget_Button_Lockable* modButton; // Offset: 0x110

    idSWFWidget_Button_Lockable* praetorButton; // Offset: 0x118

    idSWFWidget_List* buttonList; // Offset: 0x120

    idHUDMenu_Respec_Confirmation* confirmation; // Offset: 0x128

    idHUDMenu_Respec_Confirmation* exchangeConfirmation; // Offset: 0x130

    bool confirmationShown; // Offset: 0x138

    bool exchangeConfirmationShown; // Offset: 0x139

    bool isShowingAnimation; // Offset: 0x13A

}; // Size: 0x140

struct idHUDMenu_CurrencyExchange : idMenuElement
{
    bool confirmationShown; // Offset: 0x100

    bool isShowingAnimation; // Offset: 0x101

    idSWFWidget_Button_Lockable* masteryButton; // Offset: 0x108

    idHUDMenu_Exchange_Confirmation* confirmation; // Offset: 0x110

    idSWFWidget_Button* mtxAcceptButton; // Offset: 0x118

    idHUDEvent_ExchangeInfo::exchangeInfo_t exchangeInfo; // Offset: 0x120

}; // Size: 0x138

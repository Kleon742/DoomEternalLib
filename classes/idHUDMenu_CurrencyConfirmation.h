struct idHUDMenu_CurrencyConfirmation : idHUDElement
{
    idSWFWidget* dialog; // Offset: 0xF8

    idSWFWidget_List* options; // Offset: 0x100

    idSWFWidget_Button* btnStart; // Offset: 0x108

    idSWFWidget_Button* btnExit; // Offset: 0x110

    idSWFWidget_CommandBar* commandBar; // Offset: 0x118

    idHUDEvent_ShowCurrencyPrompt::currencyData_t data; // Offset: 0x120

}; // Size: 0x148

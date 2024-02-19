struct idMainMenu_Popup_StartupSettings : idMenuElement
{
    idSWFWidget_HeaderText* header; // Offset: 0x100

    idSWFWidget_StartupSettings* settings; // Offset: 0x108

    bool waitingForAsyncStuff; // Offset: 0x110

    idStr focusedSpeechProfileId; // Offset: 0x118

    asyncio::idTaskPtr testSpeechProfileTask; // Offset: 0x148

}; // Size: 0x150

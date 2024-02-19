struct idMainMenu_Screen_Settings : idMenuElement
{
    idSWFWidget_GameSettings* gameSettings; // Offset: 0x100

    idSWFWidget_UISettings* uiSettings; // Offset: 0x108

    idSWFWidget_ControlsSettings* controlsSettings; // Offset: 0x110

    idSWFWidget_VideoSettings* videoSettings; // Offset: 0x118

    idSWFWidget_AudioSettings* audioSettings; // Offset: 0x120

    idSWFWidget_AccessibilitySettings* accessibilitySettings; // Offset: 0x128

    idSWFWidget_LegalSettings* legalSettings; // Offset: 0x130

    settingsScreenTabID_t currentTab; // Offset: 0x138

    bool videoSettingsChanged; // Offset: 0x13C

    bool waitingForAsyncStuff; // Offset: 0x13D

    idStr focusedSpeechProfileId; // Offset: 0x140

    asyncio::idTaskPtr testSpeechProfileTask; // Offset: 0x170

}; // Size: 0x178

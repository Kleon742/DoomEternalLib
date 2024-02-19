struct idSWFWidget_StartupSettings : idSWFWidget
{
    idSettingsDataSource_Startup dataSource; // Offset: 0x180

    idSWFWidget_SettingsList* settingsList; // Offset: 0x1F8

    idMainMenu_Popup_StartupSettings* settingsMenu; // Offset: 0x200

    // SENSORY
    idSWFWidget_Setting* pseFilter; // Offset: 0x208

    idSWFWidget_Setting* pseLumDeltaThreshold; // Offset: 0x210

    idSWFWidget_Setting* pseFullscreenLumDeltaThreshold; // Offset: 0x218

    idSWFWidget_Setting* weaponBob; // Offset: 0x220

    idSWFWidget_Setting* screenShake; // Offset: 0x228

    idSWFWidget_Setting* motionBlur; // Offset: 0x230

    idSWFWidget_Setting* motionBlurToggle; // Offset: 0x238

    idSWFWidget_Setting* fov; // Offset: 0x240

    idSWFWidget_Setting* uiColorBlindMode; // Offset: 0x248

    idSWFWidget_Setting* videoColorBlindMode; // Offset: 0x250

    idSWFWidget_Setting* colorblindBrightness; // Offset: 0x258

    idSWFWidget_Setting* colorblindContrast; // Offset: 0x260

    idSWFWidget_Setting* colorblindIntensity; // Offset: 0x268

    idSWFWidget_Setting* colorblindCorrectionStrength; // Offset: 0x270

    // CHAT
    idSWFWidget_Setting* chatIncomingTextToSpeechEnabled; // Offset: 0x278

    idSWFWidget_Setting* chatOutgoingTextToSpeechEnabled; // Offset: 0x280

    idSWFWidget_Setting* chatSpeechToTextEnabled; // Offset: 0x288

    idSWFWidget_Setting* chatTranslationEnabled; // Offset: 0x290

    idSWFWidget_Setting* chatSpeechProfile; // Offset: 0x298

}; // Size: 0x2A0

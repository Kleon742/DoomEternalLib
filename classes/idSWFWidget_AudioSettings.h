struct idSWFWidget_AudioSettings : idSWFWidget
{
    idSettingsDataSource_Audio dataSource; // Offset: 0x180

    idSWFWidget_SettingsList* settingsList; // Offset: 0x1C8

    idMainMenu_Screen_Settings* settingsMenu; // Offset: 0x1D0

    idSWFWidget_Setting* masterVolume; // Offset: 0x1D8

    idSWFWidget_Setting* musicVolume; // Offset: 0x1E0

    idSWFWidget_Setting* sfxVolume; // Offset: 0x1E8

    idSWFWidget_Setting* hordeSfxVolume; // Offset: 0x1F0

    idSWFWidget_Setting* voVolume; // Offset: 0x1F8

    idSWFWidget_Setting* auxVolumeEnable; // Offset: 0x200

    idSWFWidget_Setting* auxVolume; // Offset: 0x208

    idSWFWidget_Setting* auxSfxVolume; // Offset: 0x210

    idSWFWidget_Setting* auxUiVolume; // Offset: 0x218

    idSWFWidget_Setting* auxVoVolume; // Offset: 0x220

    idSWFWidget_Setting* speakerConfiguration; // Offset: 0x228

    idSWFWidget_Setting* subtitleDisplay; // Offset: 0x230

    idSWFWidget_Setting* subtitleSpeakerName; // Offset: 0x238

    idSWFWidget_Setting* subtitleBackground; // Offset: 0x240

    idSWFWidget_Setting* subtitleSize; // Offset: 0x248

    idSWFWidget_Setting* voiceChatEnabled; // Offset: 0x250

    idSWFWidget_Setting* voiceChatPushToTalk; // Offset: 0x258

    idSWFWidget_Setting* voiceChatVolume; // Offset: 0x260

    idSWFWidget_Setting* chatIncomingTextToSpeechEnabled; // Offset: 0x268

    idSWFWidget_Setting* chatOutgoingTextToSpeechEnabled; // Offset: 0x270

    idSWFWidget_Setting* chatSpeechToTextEnabled; // Offset: 0x278

    idSWFWidget_Setting* chatTranslationEnabled; // Offset: 0x280

    idSWFWidget_Setting* chatSpeechProfile; // Offset: 0x288

    idSWFWidget_Setting* nightMode; // Offset: 0x290

    idSWFWidget_Setting* presetMixes; // Offset: 0x298

    idSWFWidget_Setting* enableMenuSFX; // Offset: 0x2A0

    idSWFWidget_Setting* slayerPainGrunts; // Offset: 0x2A8

    idSWFWidget_Setting* playerHitSounds; // Offset: 0x2B0

    idSWFWidget_Setting* closedCaptioning; // Offset: 0x2B8

    idSWFWidget_Setting* mainMenuMusicSelection; // Offset: 0x2C0

    // TODO: make this a list.
    idSWFWidget_Setting* soundPackClassicDoomguySounds; // Offset: 0x2C8

}; // Size: 0x2D0

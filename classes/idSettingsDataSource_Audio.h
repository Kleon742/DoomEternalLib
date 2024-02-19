struct idSettingsDataSource_Audio : idSettingsDataSource
{
    enum audioSettingFields_t : int
    {
        AUDIO_SETTING_MASTER_VOLUME = 0,
        AUDIO_SETTING_MUSIC_VOLUME = 1,
        AUDIO_SETTING_SFX_VOLUME = 2,
        AUDIO_SETTING_HORDE_SFX_VOLUME = 3,
        AUDIO_SETTING_VO_VOLUME = 4,
        AUDIO_SETTING_AUX_ENABLED = 5,
        AUDIO_SETTING_AUX_VOLUME = 6,
        AUDIO_SETTING_AUX_SFX_VOLUME = 7,
        AUDIO_SETTING_AUX_UI_VOLUME = 8,
        AUDIO_SETTING_AUX_VO_VOLUME = 9,
        AUDIO_SETTING_SPEAKER_CONFIGURATION = 10,
        AUDIO_SETTING_PRESET_MIXES = 11,
        AUDIO_SETTING_NIGHT_MODE = 12,
        AUDIO_SETTING_ENABLE_MENU_SFX = 13,
        AUDIO_SETTING_ENABLE_SLAYER_PAIN_GRUNTS = 14,
        AUDIO_SETTING_HIT_CONFIRMATION_SFX = 15,
        AUDIO_SETTING_SUBTITLE_ENABLED = 16,
        AUDIO_SETTING_CLOSED_CAPTIONING = 17,
        AUDIO_SETTING_SUBTITLE_SIZE = 18,
        AUDIO_SETTING_SUBTITLE_SHOW_SPEAKER = 19,
        AUDIO_SETTING_SUBTITLE_SHOW_BACKING = 20,
        AUDIO_SETTING_VOICE_CHAT_ENABLED = 21,
        AUDIO_SETTING_VOICE_CHAT_PUSH_TO_TALK = 22,
        AUDIO_SETTING_VOICE_CHAT_VOLUME = 23,
        AUDIO_SETTING_MENU_MUSIC_VALUE = 24,
        AUDIO_SETTING_CHAT_INCOMING_TEXT_TO_SPEECH_ENABLED = 25,
        AUDIO_SETTING_CHAT_OUTGOING_TEXT_TO_SPEECH_ENABLED = 26,
        AUDIO_SETTING_CHAT_SPEECH_TO_TEXT_ENABLED = 27,
        AUDIO_SETTING_CHAT_TRANSLATION_ENABLED = 28,
        AUDIO_SETTING_CHAT_SPEECH_PROFILE = 29,
        AUDIO_SETTING_SOUND_PACK_CLASSIC_DOOMGUY_SOUNDS = 30,
        MAX_AUDIO_SETTINGS = 31
    };

    idProxyPtr < idSettingsDataSource_Audio > proxyPtr; // Offset: 0x38

    idSWFWidget* owner; // Offset: 0x40

}; // Size: 0x48

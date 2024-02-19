struct idVoiceEventManager
{
    // all simple viseme events
    idList < idViseme_Simple , TAG_VOICETRACK_EVENTS , false > eventsVisemeSimple; // Offset: 0x0

    // all game events
    idList < idVoiceGameEvent , TAG_VOICETRACK_EVENTS , false > eventsGame; // Offset: 0x18

    // all text events
    idList < idVoiceTextEvent , TAG_VOICETRACK_EVENTS , false > eventsText; // Offset: 0x30

    // all punctuation events
    idList < idVoicePunctuationEvent , TAG_VOICETRACK_EVENTS , false > eventsPunc; // Offset: 0x48

    // all anim events
    idList < idVoiceAnimEvent , TAG_VOICETRACK_EVENTS , false > eventsAnim; // Offset: 0x60

    // all mood events
    idList < idVoiceMoodEvent , TAG_VOICETRACK_EVENTS , false > eventsMood; // Offset: 0x78

}; // Size: 0x90

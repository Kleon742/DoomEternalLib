struct idDeclVoiceOver : idDeclTypeInfo
{
    char nextSampleToPlay; // Offset: 0x88

    // list of voice tracks
    idList < const idVoiceTrack * , TAG_VOICEOVER , false > tracks; // Offset: 0x90

}; // Size: 0xA8

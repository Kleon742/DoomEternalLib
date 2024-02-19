struct idVisemeEvent : idVoiceEvent
{
    // type of viseme... this is a byte because visemes can add up and there are no more than about 20 or so possible distinct visemes.
    unsigned char visemeType; // Offset: 0x10

}; // Size: 0x18

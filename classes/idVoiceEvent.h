struct idVoiceEvent
{
    // starting time of event
    int startMS; // Offset: 0x8

    // duration of event
    short durationMS; // Offset: 0xC

    // type of voice event
    unsigned char eventType; // Offset: 0xE

}; // Size: 0x10

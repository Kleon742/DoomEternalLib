struct idVoiceGameEvent : idVoiceEvent
{
    typedef idVarArgs < VISEME_MAX_ARGS > visemeArgs_t;

    // number of the game event
    short eventNum; // Offset: 0x10

    // arguments to the event
    idVarArgs < 2 > args; // Offset: 0x18

}; // Size: 0x30

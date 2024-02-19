struct idTarget_SoundDuck : idTarget
{
    // __editconst idSoundDuck *duck; duck to activate in seconds
    float fadeIn; // Offset: 0xB88

    // in seconds
    float sustain; // Offset: 0xB8C

    // in seconds
    float fadeOut; // Offset: 0xB90

    // toggles on / off on activation -
    bool toggle; // Offset: 0xB94

    // current state
    bool isOn; // Offset: 0xB95

}; // Size: 0xB98

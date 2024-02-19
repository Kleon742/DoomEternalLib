struct idHUD_DemonHealthInfo : idHUDElement
{
    // The number of frames in the flash animation which covers filling a single pip
    int fillFramesPerPip; // Offset: 0xF8

    // The number of pips that fit on a single bar (half of the total number of pips that can be shown).
    int maxPipsPerBar; // Offset: 0xFC

    // Max Health.
    float healthMax; // Offset: 0x100

    // Number of pips used to represent max health.
    int numHealthPips; // Offset: 0x104

    // Current Health
    float healthCurrent; // Offset: 0x108

    // The health at or below which is considered low health
    float lowHealthThreshold; // Offset: 0x10C

    // The health at or below which is considered really low health (presumed to be less than m_lowhealthThreshold);
    float reallyLowHealthThreshold; // Offset: 0x110

    // Whether this is currently playing the low health warning anim
    bool displayingLowHealth; // Offset: 0x114

}; // Size: 0x118

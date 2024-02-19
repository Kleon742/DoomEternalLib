struct weaponKick_t
{
    enum kickType_t : int
    {
        KICK_NORMAL = 0,
        KICK_ONLY_POSITIVE = 1,
        KICK_ONLY_NEGATIVE = 2,
        KICK_ONLY_MAX_POSITIVE = 3,
        KICK_ONLY_MAX_NEGATIVE = 4
    };

    // kick type
    weaponKick_t::kickType_t type; // Offset: 0x0

    // kick per shot
    float kick; // Offset: 0x4

    // max angle
    float maxKick; // Offset: 0x8

    // MS to delay before starting kick
    milliToGameTime_t delayMS; // Offset: 0x10

    // MS it takes to blend in this kick
    milliToGameTime_t recoilMS; // Offset: 0x20

    // MS it takes to blend out this kick
    milliToGameTime_t recoveryMS; // Offset: 0x30

    // recovery Delay
    milliToGameTime_t recoveryDelayMS; // Offset: 0x40

    // whether to dampen [experimental don't use]
    bool dampen; // Offset: 0x50

}; // Size: 0x58

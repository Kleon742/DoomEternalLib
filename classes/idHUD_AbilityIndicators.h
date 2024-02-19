struct idHUD_AbilityIndicators : idHUDElement
{
    enum elementState_t : int
    {
        ELEMENT_STATE_NONE = 0,
        ELEMENT_STATE_OFF = 1,
        ELEMENT_STATE_LARGE = 2,
        ELEMENT_STATE_SMALL = 3,
        ELEMENT_STATE_LOWER_LARGE = 4,
        ELEMENT_STATE_LOWER_SMALL = 5
    };

    enum updateFlags_t : int
    {
        UPDATE_FLAGS_BLOOD_PUNCH = 1,
        UPDATE_FLAGS_HAMMER = 2,
        UPDATE_FLAGS_CHAINSAW = 4,
        UPDATE_FLAGS_FLAME_BELCH = 8,
        UPDATE_FLAGS_GRENADE = 16,
        UPDATE_FLAGS_ICE_GRENADE = 32
    };

    idSWFWidget* bloodPunchWidget; // Offset: 0xF8

    idSWFWidget* bloodPunchPipWidget; // Offset: 0x100

    idSWFWidget* hammerWidget; // Offset: 0x108

    idSWFWidget* chainsawWidget; // Offset: 0x110

    idSWFWidget* chainsawHighPipWidget; // Offset: 0x118

    idSWFWidget* chainsawMidPipWidget; // Offset: 0x120

    idSWFWidget* chainsawLowPipWidget; // Offset: 0x128

    idSWFWidget* flameBelchWidget; // Offset: 0x130

    idSWFWidget* grenadeWidget; // Offset: 0x138

    idSWFWidget* grenadeHighPipWidget; // Offset: 0x140

    idSWFWidget* grenadeLowPipWidget; // Offset: 0x148

    idSWFWidget* grenadeHighHollowPipWidget; // Offset: 0x150

    idSWFWidget* grenadeLowHollowPipWidget; // Offset: 0x158

    idSWFWidget* iceGrenadeWidget; // Offset: 0x160

    idSWFWidget* iceGrenadePipWidget; // Offset: 0x168

    idSWFWidget* iceGrenadeHollowPipWidget; // Offset: 0x170

    idHUD_AbilityIndicators::elementState_t elementState; // Offset: 0x178

    int updateFlags; // Offset: 0x17C

    float bloodPunchCharge; // Offset: 0x180

    float chainsawCharge; // Offset: 0x184

    float flameBelchCharge; // Offset: 0x188

    bool hammerShown; // Offset: 0x18C

    float hammerRecharge; // Offset: 0x190

    float hammerSupercharge; // Offset: 0x194

    float grenadeCharge; // Offset: 0x198

    float iceGrenadeCharge; // Offset: 0x19C

    bool bloodPunchShowing; // Offset: 0x1A0

    bool bloodPunchPipShowing; // Offset: 0x1A1

    bool chainsawShowing; // Offset: 0x1A2

    bool chainsawHighPipShowing; // Offset: 0x1A3

    bool chainsawMidPipShowing; // Offset: 0x1A4

    bool hammerShowing; // Offset: 0x1A5

    bool flameBelchShowing; // Offset: 0x1A6

    bool grenadeShowing; // Offset: 0x1A7

    bool iceGrenadeShowing; // Offset: 0x1A8

    bool grenadeHighPipShowing; // Offset: 0x1A9

    bool grenadeHighHollowPipShowing; // Offset: 0x1AA

    bool grenadeLowPipShowing; // Offset: 0x1AB

    bool grenadeLowHollowPipShowing; // Offset: 0x1AC

    bool icegrenadePipShowing; // Offset: 0x1AD

    bool icegrenadeHollowPipShowing; // Offset: 0x1AE

    // Probably grenade pips right here
    bool swimming; // Offset: 0x1AF

    bool inCampaign; // Offset: 0x1B0

    bool fragEquipped; // Offset: 0x1B1

}; // Size: 0x1B8

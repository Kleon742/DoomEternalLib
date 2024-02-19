struct idHUD_DemonDash : idHUDElement
{
    bool setupComplete; // Offset: 0xF8

    int currentPips; // Offset: 0xFC

    int maxPips; // Offset: 0x100

    float chargePrevious; // Offset: 0x104

    float chargeCurrent; // Offset: 0x108

    int rechargeTimeMilliseconds; // Offset: 0x10C

    float rechargeTimePercentage; // Offset: 0x110

    bool useFailed; // Offset: 0x114

    cmdGenButton_t cmdButton; // Offset: 0x115

    bindSet_t bindset; // Offset: 0x118

    demonHudColor_t currentColor; // Offset: 0x11C

    swfPlatform_t swfPlatform; // Offset: 0x120

}; // Size: 0x128

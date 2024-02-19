struct idHUD_BloodPunch : idHUDElement
{
    float currentCharge; // Offset: 0xF8

    float maxCharge; // Offset: 0xFC

    float previousCharge; // Offset: 0x100

    float healthCurrent; // Offset: 0x104

    float healthMax; // Offset: 0x108

    float lowHealthThreshold; // Offset: 0x10C

    idSWFWidget* chargedAnim; // Offset: 0x110

    idSWFCachedSpriteInstance ctaSpr; // Offset: 0x118

    swfPlatform_t swfPlatform; // Offset: 0x148

    bool showCta; // Offset: 0x14C

    bool radShieldOrOxygenEquipped; // Offset: 0x14D

    bool dashEquipped; // Offset: 0x14E

}; // Size: 0x150

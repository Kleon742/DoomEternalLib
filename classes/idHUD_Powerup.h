struct idHUD_Powerup : idHUDElement
{
    idDeclStatusEffect* powerupDecl; // Offset: 0xF8

    bool radShieldOrOxygenEquipped; // Offset: 0x100

    float powerupPercentage; // Offset: 0x104

    int prevChargeFrame; // Offset: 0x108

    idSWFCachedSpriteInstance mainSpr; // Offset: 0x110

    idSWFCachedSpriteInstance powerupSpr; // Offset: 0x140

    idSWFCachedSpriteInstance powerupIconSpr; // Offset: 0x170

    idSWFCachedSpriteInstance powerupChargeSpr; // Offset: 0x1A0

    idSWFCachedSpriteInstance powerupFlourishSpr; // Offset: 0x1D0

    swfPlatform_t swfPlatform; // Offset: 0x200

}; // Size: 0x208

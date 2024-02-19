struct idHUD_Dash : idHUDElement
{
    int numPips; // Offset: 0xF8

    float dashPrevious; // Offset: 0xFC

    float dashCurrent; // Offset: 0x100

    float rechargeCurrent; // Offset: 0x104

    bool radShieldOrOxygenEquipped; // Offset: 0x108

    bool cursed; // Offset: 0x109

    idSWFWidget* chargedAnim; // Offset: 0x110

    swfPlatform_t swfPlatform; // Offset: 0x118

    bool showCta; // Offset: 0x11C

    idSWFCachedSpriteInstance mainSpr; // Offset: 0x120

    idSWFCachedSpriteInstance dashSpr; // Offset: 0x150

    idSWFCachedSpriteInstance rechargeSpr; // Offset: 0x180

    idSWFTextInstance* countTxt; // Offset: 0x1B0

    idSWFCachedSpriteInstance ctaSpr; // Offset: 0x1B8

}; // Size: 0x1E8

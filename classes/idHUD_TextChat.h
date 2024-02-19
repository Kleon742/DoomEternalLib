struct idHUD_TextChat : idHUDElement
{
    swfPlatform_t swfPlatform; // Offset: 0xF8

    bindSet_t bindset; // Offset: 0xFC

    bool showCta; // Offset: 0x100

    bool hasUnreadMessages; // Offset: 0x101

    idSWFCachedSpriteInstance mainSpr; // Offset: 0x108

    idSWFCachedSpriteInstance iconSpr; // Offset: 0x138

    idSWFCachedSpriteInstance newSpr; // Offset: 0x168

    idSWFCachedSpriteInstance ctaSpr; // Offset: 0x198

}; // Size: 0x1C8

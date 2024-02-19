struct idHUD_DemonButtonPrompts : idHUDElement
{
    bool isGhost; // Offset: 0xF8

    bool isDisguised; // Offset: 0xF9

    bool isDisguiseDestructible; // Offset: 0xFA

    swfPlatform_t currentPlatform; // Offset: 0xFC

    bool needsPositionUpdate; // Offset: 0x100

    bool isInDemonTutorial; // Offset: 0x101

}; // Size: 0x108

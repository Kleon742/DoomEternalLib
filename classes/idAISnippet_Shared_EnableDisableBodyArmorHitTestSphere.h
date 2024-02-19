struct idAISnippet_Shared_EnableDisableBodyArmorHitTestSphere : idAISnippet
{
    // if true enable damage group else disable
    bool enable; // Offset: 0x18

    // if true enable damage group for armor hittest collection else body hittest group
    bool isArmorGroup; // Offset: 0x19

}; // Size: 0x20

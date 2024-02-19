struct idAISnippet_Shared_DisableShield : idAISnippet
{
    // Name of the shield to disable
    idAtomicString shieldName; // Offset: 0x18

    // are we disabling the shield from damage
    bool fromDamage; // Offset: 0x20

}; // Size: 0x28

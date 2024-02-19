struct idAISnippet_Shared_EnableShield : idAISnippet
{
    // Name of the shield to enable
    idAtomicString shieldName; // Offset: 0x18

    // should we recharge the shield's health
    bool shouldRecharge; // Offset: 0x20

    // If true, will only enable the shield if the AI was spawned by a player
    bool onlyIfSpawnedByPlayer; // Offset: 0x21

}; // Size: 0x28

struct idAISnippet_Shared_SetAttackIntent : idAISnippet
{
    // Name of the threat management decl that will be set
    aiIntentType_t intent; // Offset: 0x18

    // bits for which monsters to include in automated position awareness intent checking
    aiMonsterType_t monsterFilter; // Offset: 0x20

}; // Size: 0x28

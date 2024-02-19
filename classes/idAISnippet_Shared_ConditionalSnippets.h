struct idAISnippet_Shared_ConditionalSnippets : idAISnippet
{
    // run these snippets when conditions are satisfied
    idList < idTypeInfoObjectPtr < idAISnippet > , TAG_AI_FSM , false > snippets; // Offset: 0x18

    // conditions
    idList < idTypeInfoObjectPtr < idAICondition > , TAG_AI_FSM , false > conditions; // Offset: 0x30

    // use logical OR instead of AND for condition validity
    bool OR_conditions; // Offset: 0x48

}; // Size: 0x50

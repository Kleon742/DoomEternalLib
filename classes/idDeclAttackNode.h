struct idDeclAttackNode : idTypeInfoGraphNode
{
    // specify when any actions in this subgraph are valid
    aiActionValidationCriteria_t validationCriteria; // Offset: 0x30

    // list of attacks in this node
    idList < idAIAttackInfo , TAG_AI_FSM , false > attackList; // Offset: 0x130

    // Sync interaction that this attack should do when it hits target
    idDeclSyncInteraction* syncHit; // Offset: 0x148

    // attack flags
    aiAttackFlags_t flags; // Offset: 0x150

    // raise priority to get query through system faster in a crowd
    animQueryPriority_t queryPriority; // Offset: 0x154

    // skip evaluating this node if target is outside this absolute range
    idRange < float > optimizationRange; // Offset: 0x158

    // whether any attack from this node is valid or not
    bool enabled; // Offset: 0x0

    // allow any attacks in this node to revalidate if requested
    bool allowRevalidation; // Offset: 0x0

}; // Size: 0x168

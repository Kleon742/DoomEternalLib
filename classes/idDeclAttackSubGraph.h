struct idDeclAttackSubGraph : idTypeInfoSubGraph
{
    // specify when any actions in this node are valid
    aiActionValidationCriteria_t validationCriteria; // Offset: 0x40

    // add all attacks from these subgraphs any time we consider attacks from this subgraph
    idList < idAtomicString , TAG_AI_FSM , false > proxySubgraphNames; // Offset: 0x140

    // attack flags
    aiAttackFlags_t flags; // Offset: 0x158

    // raise priority to get query through system faster in a crowd
    animQueryPriority_t queryPriority; // Offset: 0x15C

    // skip evaluating this node if target is outside this absolute range
    idRange < float > optimizationRange; // Offset: 0x160

    // whether any attack from this node is valid or not
    bool enabled; // Offset: 0x0

    // allow any attacks in this subgraph to revalidate if requested
    bool allowRevalidation; // Offset: 0x0

}; // Size: 0x170

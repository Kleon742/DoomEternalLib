struct aiAnimStateGraph_t
{
    idList < aiAnimStateSubgraph_t , TAG_AI_UNIT , false > subgraphs; // Offset: 0x0

    idList < aiAnimState_t , TAG_AI_UNIT , false > states; // Offset: 0x18

    idList < aiAnimStateTransition_t , TAG_AI_UNIT , false > transitions; // Offset: 0x30

    int currentState; // Offset: 0x48

    int currentSubgraph; // Offset: 0x4C

    idDeclAIAnimStateGraph* graph; // Offset: 0x50

}; // Size: 0x58

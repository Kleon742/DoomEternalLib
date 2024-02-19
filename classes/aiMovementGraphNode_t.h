struct aiMovementGraphNode_t
{
    idDeclAIMovementNode* node; // Offset: 0x0

    idDeclAIMovementSubGraph* subgraph; // Offset: 0x8

    idList < int , TAG_IDLIST , false > linkIndices; // Offset: 0x10

}; // Size: 0x28

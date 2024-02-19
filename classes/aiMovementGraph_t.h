struct aiMovementGraph_t
{
    idStaticList < aiMovementGraphNode_t , 64 , false , TAG_IDLIST > nodes; // Offset: 0x0

    idStaticList < aiMovementGraphLink_t , 64 , false , TAG_IDLIST > links; // Offset: 0xA18

    idDeclAIMovementGraph* graph; // Offset: 0xE30

}; // Size: 0xE38

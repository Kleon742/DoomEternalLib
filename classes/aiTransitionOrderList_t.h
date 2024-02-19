struct aiTransitionOrderList_t
{
    idStaticList < int , 32 , false , TAG_IDLIST > orderedTransitionIndices; // Offset: 0x0

    idAIState* sourceState; // Offset: 0x98

}; // Size: 0xA0

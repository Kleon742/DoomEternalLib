struct aiTransitionTree_t
{
    idStaticList < transitionTreeNode_t , 32 , false , TAG_IDLIST > transitionTreeNodes; // Offset: 0x0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastAtomicEvaluationTime; // Offset: 0x2E18

    idStaticList < const idAIStateTransition * , 32 , false , TAG_IDLIST > transitionsToClean; // Offset: 0x2E20

}; // Size: 0x2F38

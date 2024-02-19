struct idAIGroup
{
    typedef idStaticList < idEntityPtr_ThreadSafe < idEntity > , MAX_ACTIVE_AIS > memberList_t;

    // AIs in the group
    idStaticList < idEntityPtr_ThreadSafe < idEntity > , 32 , false , TAG_IDLIST > members; // Offset: 0x0

    // Temporary memory for rapid development iteration
    idAIBlackboard < 256 > blackboard; // Offset: 0x318

    // Name of the group
    idAtomicString name; // Offset: 0xF18

}; // Size: 0xF20

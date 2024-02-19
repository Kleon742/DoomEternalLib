struct idDeclAIAnimStateLink : idTypeInfoGraphLink
{
    // list of conditions that must be satisfied for this link to be taken
    idList < idTypeInfoObjectPtr < idAIAnimState_LinkCondition > , TAG_IDLIST , false > conditions; // Offset: 0x40

    // debug flags
    aiGraphDebugFlags_t debugFlags; // Offset: 0x58

    // true if this node can be used
    bool enabled; // Offset: 0x5C

}; // Size: 0x60

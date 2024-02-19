struct idDeclAIDamageStateLink : idTypeInfoGraphLink
{
    // list of conditions that must be satisfied for this link to be taken
    idList < idTypeInfoObjectPtr < idAIDamageState_LinkCondition > , TAG_IDLIST , false > conditions; // Offset: 0x40

    // debug flags
    aiGraphDebugFlags_t debugFlags; // Offset: 0x58

    // if nonzero, use this instead of what is on node
    idTypesafeTime < float , secondUnique_t , 1 > overrideMinReEnterSeconds; // Offset: 0x5C

    // if true, this transition can be taken even if node's minReEnterSeconds isn't elapsed
    bool ignoreNodeReEnterTime; // Offset: 0x60

    // true if this node can be used
    bool enabled; // Offset: 0x61

}; // Size: 0x68

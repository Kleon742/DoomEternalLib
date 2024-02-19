struct idAIDamageState_LinkCondition : idClass
{
    // if nonzero, use this instead of what is on node
    idTypesafeTime < float , secondUnique_t , 1 > overrideMinReEnterSeconds; // Offset: 0x10

    // debug flags
    aiGraphDebugFlags_t debugFlags; // Offset: 0x14

    // Invert the results of the condition
    bool invert; // Offset: 0x18

}; // Size: 0x20

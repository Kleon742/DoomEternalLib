struct idMidnightGraphPathNodeCondBoolProp : idMidnightGraphPathNodeProp
{
    // set the type on condition
    idMidnight::NodeCondType_t conditionType; // Offset: 0x18

    // EMNCT_STATIC Set the default pass of the node (True or False output)
    bool defaultPath; // Offset: 0x1C

    // EMNCT_LOGIC define the name of logic var to be tested
    idAtomicString varName; // Offset: 0x20

}; // Size: 0x28

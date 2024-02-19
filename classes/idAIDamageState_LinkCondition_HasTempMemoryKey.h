struct idAIDamageState_LinkCondition_HasTempMemoryKey : idAIDamageState_LinkCondition
{
    // Name of the temp memory key to find
    idAtomicString keyName; // Offset: 0x20

    // if true invert the return value
    bool inverted; // Offset: 0x28

}; // Size: 0x30

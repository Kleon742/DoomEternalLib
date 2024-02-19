struct idAIDamageState_LinkCondition_TempMemoryKeyValue : idAIDamageState_LinkCondition
{
    // Name of the temp memory key to find
    idAtomicString keyName; // Offset: 0x20

    // value
    int keyValue; // Offset: 0x28

    // if true, accept any value greater than value in addition to specified value
    bool acceptGreaterThan; // Offset: 0x2C

    // if true invert the return value
    bool inverted; // Offset: 0x2D

}; // Size: 0x30

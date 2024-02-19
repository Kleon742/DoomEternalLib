struct idAICondition_Shared_HasTempMemoryKey : idAICondition
{
    // Name of the temp memory key to find
    idAtomicString keyName; // Offset: 0x18

    // value
    int keyValue; // Offset: 0x20

    // value
    idAtomicString stringValue; // Offset: 0x28

    // if true, accept any value greater than value in addition to specified value
    bool acceptGreaterThan; // Offset: 0x30

    // if true, accept any value that resolves to a valid idSpawnId for an idEntity
    bool acceptEntities; // Offset: 0x31

}; // Size: 0x38

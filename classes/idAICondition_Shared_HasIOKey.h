struct idAICondition_Shared_HasIOKey : idAICondition
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

    // if true, look in the parent of the current fsm for this key
    bool checkParent; // Offset: 0x32

    // if true, just check to see if the key exists at all
    bool acceptAnything; // Offset: 0x33

}; // Size: 0x38

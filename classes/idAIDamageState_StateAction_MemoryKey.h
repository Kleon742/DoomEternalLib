struct idAIDamageState_StateAction_MemoryKey : idAIDamageState_StateAction
{
    // Name of the temp memory key to find
    idAtomicString keyName; // Offset: 0x18

    // Value for the key
    int value; // Offset: 0x20

    // Delete the memory key rather than set it
    bool deleteMemoryKey; // Offset: 0x24

}; // Size: 0x28

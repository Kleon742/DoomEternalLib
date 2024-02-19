struct idAISnippet_Shared_SetIOKey : idAISnippet
{
    // Name of the temp memory key to change
    idAtomicString keyName; // Offset: 0x18

    // If non-empty, copy value from existing temp memory key, using copyName for lookup
    idAtomicString copyName; // Offset: 0x20

    // If true, consider copyName as CVar name to look up in CVar system
    bool copyFromCVar; // Offset: 0x28

    // integer value to set, or add to if sumValues is true
    int keyValue; // Offset: 0x2C

    // if add to existing value rather than setting
    bool sumValues; // Offset: 0x30

    // If non-empty, specifies string value for temp memory key
    idAtomicString strKeyValue; // Offset: 0x38

    // if true, set this key on the parent fsm of our current fsm
    bool setOnParent; // Offset: 0x40

    // treat this key as part of a list, so 'set' becomes 'add'
    bool useList; // Offset: 0x41

}; // Size: 0x48

struct idAISnippet_Shared_SetTempFloatMemoryKey : idAISnippet
{
    // Name of the temp memory key to change
    idAtomicString keyName; // Offset: 0x18

    // integer value to set, or add to if sumValues is true
    float keyValue; // Offset: 0x20

    // use time since last update instead of keyValue
    bool keyValueTimeSinceLastUpdate; // Offset: 0x24

    // if add to existing value rather than setting
    bool sumValues; // Offset: 0x25

}; // Size: 0x28

struct idAISnippet_Shared_SetMemoryKeyForPOI : idAISnippet
{
    // Name of the temp memory key to change
    idAtomicString keyName; // Offset: 0x18

    // POI type to set the target for
    poiMemoryKeyType_t poiType; // Offset: 0x20

}; // Size: 0x28

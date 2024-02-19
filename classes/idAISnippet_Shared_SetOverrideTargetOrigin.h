struct idAISnippet_Shared_SetOverrideTargetOrigin : idAISnippet
{
    // tag to send queries from
    idAtomicString tagName; // Offset: 0x18

    // diameter of bounds {{ units = m }}
    float boundsDiameter; // Offset: 0x20

    // tests will cease after this many seconds
    idTypesafeTime < float , secondUnique_t , 1 > duration; // Offset: 0x24

}; // Size: 0x28

struct idAISnippet_ExtendedSense_StartBoundsQueries : idAISnippet
{
    // tag for muzzle
    idAtomicString tagName; // Offset: 0x18

    // how long to run queries
    idTypesafeTime < float , secondUnique_t , 1 > duration; // Offset: 0x20

    // diameter of queries {{ units = m }}
    float diameter; // Offset: 0x24

}; // Size: 0x28

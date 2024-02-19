struct resourceListNamePair_t
{
    idResourceList* list; // Offset: 0x0

    idStr resourceName; // Offset: 0x8

    idResourceVariation variation; // Offset: 0x38

    idStr resourceAlias; // Offset: 0x40

    resourceDepot_t depot; // Offset: 0x70

    bool includeEmbeddedDependencies; // Offset: 0x74

}; // Size: 0x78

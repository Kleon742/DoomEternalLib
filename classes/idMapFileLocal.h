struct idMapFileLocal : idMapFile
{
    idStr name; // Offset: 0x8

    int version; // Offset: 0x38

    int hierarchyVersion; // Offset: 0x3C

    unsigned int fileTime; // Offset: 0x40

    unsigned int geometryCRC; // Offset: 0x44

    bool hasPrimitiveData; // Offset: 0x48

    bool isEntitiesFile; // Offset: 0x49

    idUnorderedSet < idMapEntityLocal * > entities; // Offset: 0x50

    idList < idMapReference * , TAG_IDLIST , false > referenceMaps; // Offset: 0x88

    idMapEntityLocal* parentReference; // Offset: 0xA0

    idMapFileLocal* parentMap; // Offset: 0xA8

    idStr mapModelFolder; // Offset: 0xB0

    bool expandReferences; // Offset: 0xE0

    idMapInstance* mapInstance; // Offset: 0xE8

    bool entitiesAreReference; // Offset: 0xF0

    bool ignoreGroupInfo; // Offset: 0xF1

    // If true, refmaps that are parsed can be skipped based on map properties.
    bool isRefmapSkippingAllowed; // Offset: 0xF2

    idList < idPrefabInstance * , TAG_IDLIST , false > prefabInstances; // Offset: 0xF8

    // A list of identifier-value string pairs for storing properties in the map. Properties identifiers are NOT unique.
    idList < idPair < idStr , idStr > , TAG_IDLIST , false > properties; // Offset: 0x110

}; // Size: 0x128

struct idMapFile
{
    struct parseParm_t
    {
        char* filename; // Offset: 0x0

        bool osPath; // Offset: 0x8

        idMapEntity* parent; // Offset: 0x10

        bool addEntityDefsToResourceList; // Offset: 0x18

        bool mergePrefabs; // Offset: 0x19

        idList < idStr , TAG_IDLIST , false >* inheritedLayers; // Offset: 0x20

        idResourceStorageDepCollector* fileDeps; // Offset: 0x28

        bool isPrefab; // Offset: 0x30

        char* fileBuffer; // Offset: 0x38

        size_t fileBufferLength; // Offset: 0x40

    }; // Size: 0x48

}; // Size: 0x8

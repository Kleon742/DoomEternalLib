struct idGameSystem
{
    struct allocMapInstanceParm_t
    {
        idMapInstance_Interface* copyFromInstance; // Offset: 0x0

        idRenderWorld* renderWorld; // Offset: 0x8

        idGameSpawnInfo* mapSpawnInfo; // Offset: 0x10

        gameFrameParms_t* gameFrameParms; // Offset: 0x18

        idFile_SaveGame** saveGameFiles; // Offset: 0x20

        int numSaveGameFiles; // Offset: 0x28

        bool usePersistHeap; // Offset: 0x2C

    }; // Size: 0x30

    idSWFBatchRenderer* swfBatchRenderer; // Offset: 0x8

    // ===================================================================================================== Tools Data =====================================================================================================
    idList < idEditorGameInterface * , TAG_IDLIST , false > editorInterfaces; // Offset: 0x10

    // Highly unique identifier which stays persistent through process lifetime
    idUUID processInstanceUUID; // Offset: 0x28

    bool isInBuildGame; // Offset: 0x38

    // ===================================================================================================== Network DEBUG Data ===================================================================================================== This is used strictly for debugging data - used mostly by plug-ins and watch window. It is purposeful that there is no getter
    bool isServerCached; // Offset: 0x39

}; // Size: 0x40

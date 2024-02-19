struct idPrefabInstance
{
    enum enum_2901 : int
    {
        PREFAB_INVALID_INSTANCE_ID = 0
    };

    int mapFilenameHash; // Offset: 0x0

    unsigned int instanceId; // Offset: 0x4

    idStr mapFilename; // Offset: 0x8

    // {{ units = m }}
    idVec3 position; // Offset: 0x38

    idQuat rotation; // Offset: 0x44

    idVec3 scale; // Offset: 0x54

    idList < idStr , TAG_IDLIST , false > layers; // Offset: 0x60

    idList < idStr , TAG_IDLIST , false > groups; // Offset: 0x78

    idList < idPrefabInstanceEntity * , TAG_IDLIST , false > entities; // Offset: 0x90

    bool enableLocalScaleFix; // Offset: 0xA8

}; // Size: 0xB0

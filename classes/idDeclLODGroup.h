struct idDeclLODGroup : idDeclTypeInfo
{
    struct lodInfo_t
    {
        // reduction method
        lodReductionTarget_t reductionTarget; // Offset: 0x0

        // advanced settings
        lodSettings_t advanced; // Offset: 0x8

        // overrides
        lodOverrides_t overrides; // Offset: 0x48

        // streaming options
        lodStreamSettings_t stream; // Offset: 0x58

    }; // Size: 0x5C

    struct pathNode_t
    {
        idStr name; // Offset: 0x0

        int parentIdx; // Offset: 0x30

        idDeclLODGroup* group; // Offset: 0x38

    }; // Size: 0x40

    // LODs
    idList < idDeclLODGroup::lodInfo_t , TAG_IDLIST , false > lods; // Offset: 0x88

    // paths
    idList < idStr , TAG_IDLIST , false > paths; // Offset: 0xA0

    // Debug Color
    idColor debugColor; // Offset: 0xB8

}; // Size: 0xC8

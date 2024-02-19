struct idAnimSysTypeInfoCache
{
    struct offsetTuple_t
    {
        int dataOffset; // Offset: 0x0

        int nodeOffset; // Offset: 0x4

    }; // Size: 0x8

    struct nodeData_t
    {
        int nodeDataHash; // Offset: 0x0

        idTypeInfo* nodeDataClass; // Offset: 0x8

        idTypeInfo* nodeClass; // Offset: 0x10

        idList < idAnimSysTypeInfoCache::offsetTuple_t , TAG_IDLIST , false > nodeListsOffsets; // Offset: 0x18

        idList < idAnimSysTypeInfoCache::offsetTuple_t , TAG_IDLIST , false > nodesOffsets; // Offset: 0x30

    }; // Size: 0x48

    idList < idAnimSysTypeInfoCache::nodeData_t , TAG_ANIMSYS , false > nodeDatas; // Offset: 0x0

}; // Size: 0x18

struct idPackageMapSpec
{
    struct map_t
    {
        idStr name; // Offset: 0x0

    }; // Size: 0x30

    struct file_t
    {
        idStr name; // Offset: 0x0

    }; // Size: 0x30

    struct mapFileRef_t
    {
        int mapIndex; // Offset: 0x0

        int fileIndex; // Offset: 0x4

    }; // Size: 0x8

    typedef idList < idPackageMapSpec::map_t > mapList_t;

    typedef idList < idPackageMapSpec::file_t > fileList_t;

    typedef idList < idPackageMapSpec::mapFileRef_t > mapFileRefList_t;

    idList < idPackageMapSpec::map_t , TAG_IDLIST , false > mapList; // Offset: 0x0

    idList < idPackageMapSpec::file_t , TAG_IDLIST , false > fileList; // Offset: 0x18

    idList < idPackageMapSpec::mapFileRef_t , TAG_IDLIST , false > mapFileRefList; // Offset: 0x30

}; // Size: 0x48

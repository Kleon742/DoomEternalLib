struct idResourceStorageDepCollector
{
    struct dep_t
    {
        idResource* r; // Offset: 0x0

        idResourceSpecialHashType subType; // Offset: 0x8

    }; // Size: 0x10

    struct callbackDep_t
    {
        idResource* r; // Offset: 0x0

        unsigned int callbackIndex; // Offset: 0x8

        unsigned long long (**callbacks)(const idResource * const resource , const uint32 payloadLength , const byte * const payload); // Offset: 0x10

        unsigned int payloadLength; // Offset: 0x18

        unsigned char* payload; // Offset: 0x20

    }; // Size: 0x28

    struct filedep_t
    {
        idStrDynStatic < 260 > path; // Offset: 0x0

        unsigned int timestamp; // Offset: 0x138

    }; // Size: 0x140

    struct optionalDecl_t
    {
        idDeclInfo* resourceList; // Offset: 0x0

        idAtomicString name; // Offset: 0x8

    }; // Size: 0x10

    idList < idResourceStorageDepCollector::dep_t , TAG_IDLIST , false > sourceResourceList; // Offset: 0x0

    idList < idResourceStorageDepCollector::callbackDep_t , TAG_IDLIST , false > sourceResourceCallbackList; // Offset: 0x18

    idList < idResourceStorageDepCollector::filedep_t , TAG_IDLIST , false > sourceFileList; // Offset: 0x30

    idList < const idCVar * , TAG_IDLIST , false > sourceCvarList; // Offset: 0x48

    idList < const idDecl * , TAG_IDLIST , false > declSourcesList; // Offset: 0x60

    idList < idResourceStorageDepCollector::optionalDecl_t , TAG_IDLIST , false > optionalDeclList; // Offset: 0x78

    idList < const idResource * , TAG_IDLIST , false > dependencyResourceList; // Offset: 0x90

}; // Size: 0xA8

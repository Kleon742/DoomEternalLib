struct idSnapshotTemplateManager
{
    struct templateInfo_t
    {
        unsigned long long resourceID; // Offset: 0x0

        unsigned int md5Checksum; // Offset: 0x8

        idList < unsigned char , TAG_IDLIST , false > data; // Offset: 0x10

    }; // Size: 0x28

    idList < idSnapshotTemplateManager::templateInfo_t , TAG_IDLIST , false > templates; // Offset: 0x0

    idSnapShot snapshot; // Offset: 0x18

}; // Size: 0x3CA48

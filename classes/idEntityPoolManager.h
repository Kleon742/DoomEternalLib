struct idEntityPoolManager : idDeclManagerListener
{
    idList < idSharedEntityPool * , TAG_IDLIST , false > sharedPools; // Offset: 0x8

    idList < idEntityPool * , TAG_IDLIST , false > pools; // Offset: 0x20

    idMapInstanceLocal* mapLocalPtr; // Offset: 0x38

}; // Size: 0x40

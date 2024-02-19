struct idSpawnNodeGroup
{
    typedef idList < idSpawnNode * > SpawnNodeList;

    idList < idSpawnNode * , TAG_IDLIST , false > nodes; // Offset: 0x0

    int approximateLocationCount; // Offset: 0x18

    bool hasActiveInitialNodes; // Offset: 0x1C

}; // Size: 0x20

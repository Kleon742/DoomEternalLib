struct idDestructibleManager : idBloatedEntity
{
    enum destructibleInstanceOwnership_t : int
    {
        DESTRUCTIBLE_MANAGED = 0,
        DESTRUCTIBLE_UNMANAGED = 1
    };

    idList < idDestructibleInstance * , TAG_IDLIST , false > allInstances; // Offset: 0xB88

    idList < idPair < int , int > , TAG_IDLIST , false > bodyToInstanceMapping; // Offset: 0xBA0

    idListMap < int , int > instanceBodyHashMap; // Offset: 0xBB8

    idHashIndex destructiblePoolIndex; // Offset: 0xBE8

    idList < idList < idDestructibleInstance * > , TAG_IDLIST , false > destructiblePools; // Offset: 0xC18

    idList < idList < int > , TAG_IDLIST , false > destructibleFreeIndices; // Offset: 0xC30

    idList < idDestructibleInstance * , TAG_IDLIST , false > InUsePool; // Offset: 0xC48

    // Job related
    jobHandle_t jobHandle; // Offset: 0xC60

    uint16 broadcastSystemId; // Offset: 0xC68

}; // Size: 0xC70

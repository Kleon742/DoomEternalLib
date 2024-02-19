struct idMD6BlockAlloc : idMD6Allocator
{
    idBlockAlloc < idMD6LeafPlay , 32 , TAG_MD6_NODES > playLeaves; // Offset: 0x20

    idBlockAlloc < idMD6LeafPause , 4 , TAG_MD6_NODES > pauseLeaves; // Offset: 0x48

    idBlockAlloc < idMD6BestLeaf , 16 , TAG_MD6_NODES > bestLeaves; // Offset: 0x70

    idBlockAlloc < idMD6Branch , 16 , TAG_MD6_NODES > branches; // Offset: 0x98

    idBlockAlloc < idMD6BlendBranch , 16 , TAG_MD6_NODES > blendBranches; // Offset: 0xC0

    idBlockAlloc < idMD6BlendAdditiveBranch , 16 , TAG_MD6_NODES > blendAdditiveBranches; // Offset: 0xE8

    idBlockAlloc < idMD6TagFilter , 16 , TAG_MD6_NODES > tagFilters; // Offset: 0x110

    idList < idMD6Node * , TAG_MD6_NODES , false > nodesToDelete; // Offset: 0x138

}; // Size: 0x150

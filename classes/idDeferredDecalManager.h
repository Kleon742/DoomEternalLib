struct idDeferredDecalManager
{
    idStaticList < idDeferredDecalQuery , 64 , false , TAG_IDLIST > lineQueries; // Offset: 0x0

    idHavokCollision* havokCollision; // Offset: 0x2818

    idRenderModelDecal* decalModel; // Offset: 0x2820

    idList < idDecalGroup , TAG_IDLIST , false > decalGroups; // Offset: 0x2828

}; // Size: 0x2840

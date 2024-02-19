struct idDecalGroup
{
    idSphere decalBounds; // Offset: 0x0

    idList < idDecalHandle , TAG_IDLIST , false > decalHandles; // Offset: 0x10

    idRenderModelDecal* decalModel; // Offset: 0x28

}; // Size: 0x30

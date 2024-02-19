struct staticInstanceData_t
{
    idStaticModel* model; // Offset: 0x0

    float maxLodDeviation; // Offset: 0x8

    unsigned int groupVisibilityMask; // Offset: 0xC

    idRenderMatrix worldMatrix; // Offset: 0x10

    idGrowableList < materialRemap_t , 4 , TAG_IDLIST > materialRemapList; // Offset: 0x50

    unsigned long long fingerprint; // Offset: 0xA8

}; // Size: 0xB0

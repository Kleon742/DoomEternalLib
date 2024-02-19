struct idMaterialPass
{
    // render program of pass
    idDeclRenderProg* prog; // Offset: 0x0

    // common fields
    materialPassCommonFields_t common; // Offset: 0x8

    // cached sort bias, sum of the one coming from the renderProg and the one defined in the material
    short passSortBias; // Offset: 0x14

    // cached renderLayerIndex so we don't have to do searches.
    int renderLayerIndex; // Offset: 0x18

}; // Size: 0x20

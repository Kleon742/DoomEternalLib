struct idDeclRenderLayerDefinition : idDecl
{
    struct imageParms_t
    {
        idDeclRenderParm* image; // Offset: 0x0

        idDeclRenderParm* sampler; // Offset: 0x8

        idDeclRenderParm* scale; // Offset: 0x10

        idDeclRenderParm* bias; // Offset: 0x18

    }; // Size: 0x20

    idList < idDeclRenderLayerDefinition::imageParms_t , TAG_IDLIST , false > imageParms; // Offset: 0x78

    idList < const idDeclRenderParm * , TAG_IDLIST , false > scalarParms; // Offset: 0x90

    idList < const idDeclRenderParm * , TAG_IDLIST , false > vectorParms; // Offset: 0xA8

    int renderLayerDefinitionId; // Offset: 0xC0

}; // Size: 0xC8

struct renderModelInfoRuntimeTables_t
{
    idList < const idDeclLightRig * , TAG_RENDERER , false > rigs; // Offset: 0x0

    idList < const idMaterial2 * , TAG_RENDERER , false > materials; // Offset: 0x18

    idList < const idDeclRenderParm * , TAG_RENDERER , false > renderParms; // Offset: 0x30

    idList < idStr , TAG_RENDERER , false > renderParmValues; // Offset: 0x48

    idList < idStrRenderModel , TAG_RENDERER , false > renderModelNames; // Offset: 0x60

    idList < renderModelInfoMaterialRemap_t , TAG_RENDERER , false > materialRemapLists; // Offset: 0x78

    idList < renderModelInfoMaterialRemap_t , TAG_RENDERER , false > materialRemapListsRT; // Offset: 0x90

    idList < renderModelInfoRenderParm_t , TAG_RENDERER , false > renderParmLists; // Offset: 0xA8

}; // Size: 0xC0

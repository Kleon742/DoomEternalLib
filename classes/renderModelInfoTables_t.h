struct renderModelInfoTables_t
{
    idListMap < const idDeclLightRig * , int > lightRigTable; // Offset: 0x0

    idListMap < const idMaterial2 * , int > materialTable; // Offset: 0x30

    idListMap < const idDeclRenderParm * , int > renderParmTable; // Offset: 0x60

    idListMap < idStr , int > renderParmValueTable; // Offset: 0x90

    idListMap < idStrRenderModel , int > renderModelNameTable; // Offset: 0xC0

    idList < renderModelInfoMaterialRemap_t , TAG_IDLIST , false > materialRemapLists; // Offset: 0xF0

    idList < renderModelInfoMaterialRemap_t , TAG_IDLIST , false > materialRemapListsRT; // Offset: 0x108

    idList < renderModelInfoRenderParm_t , TAG_IDLIST , false > renderParmLists; // Offset: 0x120

}; // Size: 0x138

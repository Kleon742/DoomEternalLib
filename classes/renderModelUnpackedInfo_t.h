struct renderModelUnpackedInfo_t
{
    idRenderModelParms g; // Offset: 0x0

    idGrowableList < materialRemap_t , 32 , TAG_IDLIST > materialRemap; // Offset: 0xD8

    idGrowableList < materialRemap_t , 32 , TAG_IDLIST > materialRemapRT; // Offset: 0x2F0

    idGrowableParmBlock < 32 > gameParmBlock; // Offset: 0x510

    idMaterial2* geoDecalMaterial; // Offset: 0x760

}; // Size: 0x770

struct idMaterialRemapInfo
{
    idUniquePtr < const idTypeInfoTree > tree; // Offset: 0x0

    idList < idTypeInfoNode * , TAG_IDLIST , false > materialRemapList; // Offset: 0x8

}; // Size: 0x20

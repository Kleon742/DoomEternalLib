struct idMidnightInstParams
{
    idDeclMidnightScene* declMidnightScene; // Offset: 0x0

    int prefabInstanceId; // Offset: 0x8

    idList < idMidnightGroupEntityInfo , TAG_IDLIST , false > groupEntityInfos; // Offset: 0x10

}; // Size: 0x28

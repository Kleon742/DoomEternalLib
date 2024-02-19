struct idDeclListOfResources : idGameDeclTypeInfo
{
    // The list of resources to reference. These are not loaded by default by typeinfo.
    idList < idGameDeclTypeInfoRef , TAG_IDLIST , false > resourceList; // Offset: 0x90

}; // Size: 0xA8

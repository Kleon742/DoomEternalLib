struct idSWFConstantsAS3
{
    idGrowableList < int , 1 , TAG_SWF > ints; // Offset: 0x0

    idGrowableList < unsigned int , 1 , TAG_SWF > uints; // Offset: 0x20

    idGrowableList < double , 1 , TAG_SWF > doubles; // Offset: 0x40

    idGrowableList < idAtomicString , 16 , TAG_SWF > strings; // Offset: 0x60

    idList < idSWFScriptNamespace * , TAG_SWF , false > namespaces; // Offset: 0xF8

    idGrowableList < idList < uint32 > , 1 , TAG_SWF > namespaceSets; // Offset: 0x110

    idGrowableList < swfMultiname_t , 2 , TAG_SWF > multinames; // Offset: 0x140

}; // Size: 0x178

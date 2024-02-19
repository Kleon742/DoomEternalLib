struct idSWFScriptFunctionAS3 : idSWFScriptFunctionAS
{
    unsigned char* data; // Offset: 0xC0

    unsigned int dataLength; // Offset: 0xC8

    idSWFABCPool* abcPool; // Offset: 0xD0

    // FIXME: Why 19???
    idStaticList < idSWFScriptVar , 19 , false , TAG_IDLIST > scope; // Offset: 0xD8

    idGrowableList < idSWFScriptVar , 4 , TAG_SWF > registers; // Offset: 0x220

    int methodSignatureToRun; // Offset: 0x278

}; // Size: 0x280

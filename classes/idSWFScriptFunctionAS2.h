struct idSWFScriptFunctionAS2 : idSWFScriptFunctionAS
{
    struct parmInfo_t
    {
        char* name; // Offset: 0x0

        unsigned char reg; // Offset: 0x8

    }; // Size: 0x10

    unsigned short flags; // Offset: 0xC0

    unsigned char* data; // Offset: 0xC8

    unsigned int length; // Offset: 0xD0

    // some actions have an implicit sprite they work off of (e.g. Action_GotoFrame outside of object scope)
    idSWFSpriteInstance* defaultSprite; // Offset: 0xD8

    // FIXME: Why 19???
    idStaticList < idSWFScriptObject * , 19 , false , TAG_IDLIST > scope; // Offset: 0xE0

    idSWFConstantPoolAS2 constants; // Offset: 0x190

    idGrowableList < idSWFScriptVar , 4 , TAG_SWF > registers; // Offset: 0x228

    idGrowableList < idSWFScriptFunctionAS2::parmInfo_t , 4 , TAG_SWF > parameters; // Offset: 0x280

}; // Size: 0x2D8

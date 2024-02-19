struct idMD6Alias
{
    enum flags_t : int
    {
        ALIASFLAG_FORCE_LOAD = 1,
        ALIASFLAG_CREATED_ON_LOAD = 2
    };

    // name of the alias
    idAtomicString name; // Offset: 0x0

    // handle of the alias
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > aliasHandle; // Offset: 0x8

    // alias flags
    unsigned short flags; // Offset: 0xA

    // name of the md6 animation this alias maps to
    idMD6AnimRef animRef; // Offset: 0x10

}; // Size: 0x18

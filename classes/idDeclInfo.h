struct idDeclInfo : idResourceList
{
    typedef void (*pfnOnReload)(const idDecl *);

    void (*declInfoPostInitCallback)(idResourceList * const resourceList); // Offset: 0x30

    char* name; // Offset: 0x38

    char* fileExtension; // Offset: 0x40

    idAtomicString defaultFolder; // Offset: 0x48

    idDeclInfo* parent; // Offset: 0x50

    short typeNum; // Offset: 0x58

    short lastChild; // Offset: 0x5A

    void (*onReload)(const idDecl *); // Offset: 0x60

    // This holds the info needed to create every decl in the game For normal gameplay, the entire list is constant after init.
    idUnorderedMap < uint64 , idDeclSource * , TAG_DECL > declSources; // Offset: 0x68

    // index where dynamic decl sources started
    int declSourceDynamicStartIndex; // Offset: 0xA0

}; // Size: 0xA8

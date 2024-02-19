struct idDecl : idResource
{
    // the decl text should start with an open brace and end with a close brace the current text can be modified by tools, then optionally written back out to the source file. Decl text definition
    char* textSource; // Offset: 0x58

    // Length of textSource
    int textLength; // Offset: 0x60

    // calculated at SetText() time
    unsigned int md5Checksum; // Offset: 0x64

    // true if created with resourceList.New( ..,.., srcText )
    bool programaticallyDefined; // Offset: 0x68

    // the decl is an internal editor copy and should not contribute to any global states
    bool isEditorCopy; // Offset: 0x69

    idDeclSource* declSource; // Offset: 0x70

}; // Size: 0x78

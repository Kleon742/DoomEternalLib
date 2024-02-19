struct idDeclSource
{
    // no real need for this to be an idStr, since it is constant
    idAtomicString name; // Offset: 0x0

    // Source file in which the decl was defined
    idDeclFile* sourceFile; // Offset: 0x8

    int sourceLine; // Offset: 0x10

    // Next decl in the decl file
    idDeclSource* nextInFile; // Offset: 0x18

    bool isStatic; // Offset: 0x20

    // Offset in source file to start of decl brace ( past type name and decl name )
    int sourceTextOffset; // Offset: 0x24

    // Length of decl text in source file
    int sourceTextLength; // Offset: 0x28

    // the decl source checksum, should always reflect the source at sourceStartOffset etc
    unsigned int sourceChecksum; // Offset: 0x2C

}; // Size: 0x30

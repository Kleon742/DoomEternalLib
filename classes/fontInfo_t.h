struct fontInfo_t
{
    idMaterial2* material; // Offset: 0x0

    idMaterial2* snapLabelMaterial; // Offset: 0x8

    idMaterial2* worldSpaceMaterial; // Offset: 0x10

    short imageWidth; // Offset: 0x18

    short imageHeight; // Offset: 0x1A

    short pointSize; // Offset: 0x1C

    short ascender; // Offset: 0x1E

    short descender; // Offset: 0x20

    short edgeExpand; // Offset: 0x22

    // For some text input uses.
    short largestGlyphWidth; // Offset: 0x24

    short numGlyphs; // Offset: 0x26

    glyphInfo_t* glyphData; // Offset: 0x28

    // This is a sorted array of all characters in the font. This is a 1 to 1 mapping of glyphData
    unsigned int* charIndex; // Offset: 0x30

}; // Size: 0x38

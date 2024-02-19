struct swfGlyphDrawInfo_t
{
    idVec4 glyphTop; // Offset: 0x0

    idVec4 glyphBottom; // Offset: 0x10

    idVec2 s; // Offset: 0x20

    idVec2 t; // Offset: 0x28

    idMaterial2* glyphMat; // Offset: 0x30

    idColor fontColor; // Offset: 0x38

    float zDepth; // Offset: 0x48

}; // Size: 0x50

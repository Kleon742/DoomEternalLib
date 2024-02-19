struct idSWFDictionaryEntry
{
    swfDictType_t type; // Offset: 0x0

    idMaterial2* material; // Offset: 0x8

    idSWFShape* shape; // Offset: 0x10

    idSWFSprite* sprite; // Offset: 0x18

    idSWFFont* font; // Offset: 0x20

    idSWFText* text; // Offset: 0x28

    idSWFEditText* edittext; // Offset: 0x30

    idVec2i imageSize; // Offset: 0x38

    idVec2i imageAtlasOffset; // Offset: 0x40

    // the compressed images are normalize to reduce compression artifacts, color must be scaled down by this
    idVec4 channelScale; // Offset: 0x48

}; // Size: 0x58

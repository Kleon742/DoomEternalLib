struct idDeclTooltip : idDeclTypeInfo
{
    // material for icon
    idMaterial2* mat; // Offset: 0x88

    // string id for the lookup key
    idStrId key; // Offset: 0x90

    // width of the image
    int width; // Offset: 0x94

    // height of the image
    int height; // Offset: 0x98

    // is this image unique or platform specific
    bool unique; // Offset: 0x9C

}; // Size: 0xA0

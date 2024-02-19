struct idDeclTable : idDeclTypeInfo
{
    // These are only used by the editor Left edge of table
    float left; // Offset: 0x88

    // Right edge of table
    float right; // Offset: 0x8C

    // Table used for calculations
    idLookupTable table; // Offset: 0x90

}; // Size: 0x2B8

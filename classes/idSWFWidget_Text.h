struct idSWFWidget_Text : idSWFWidget
{
    idStr text; // Offset: 0x180

    idStrId textId; // Offset: 0x1B0

    swfFontEffects_t textEffect; // Offset: 0x1B4

    bool hasTooltip; // Offset: 0x1B8

    swfEditTextVertAlign_t verticalAlignment; // Offset: 0x1BC

    int bindset; // Offset: 0x1C0

    idColor color; // Offset: 0x1C4

    bool hasColor; // Offset: 0x1D4

    bool useTextHeightForPositioning; // Offset: 0x1D5

}; // Size: 0x1D8

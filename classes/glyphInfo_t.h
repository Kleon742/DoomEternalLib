struct glyphInfo_t
{
    // width of glyph in pixels
    unsigned char width; // Offset: 0x0

    // height of glyph in pixels
    unsigned char height; // Offset: 0x1

    // distance in pixels from the base line to the top of the glyph
    char top; // Offset: 0x2

    // distance in pixels from the pen to the left edge of the glyph
    char left; // Offset: 0x3

    // x adjustment after rendering this glyph
    unsigned char xSkip; // Offset: 0x4

    // x offset in image where glyph starts (in pixels)
    unsigned short s; // Offset: 0x6

    // y offset in image where glyph starts (in pixels)
    unsigned short t; // Offset: 0x8

}; // Size: 0xA

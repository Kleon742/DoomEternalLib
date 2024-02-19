struct debugBar_t
{
    // enables the debug bar
    bool enable; // Offset: 0x0

    // x coord
    float x; // Offset: 0x4

    // y coord
    float y; // Offset: 0x8

    // width
    float width; // Offset: 0xC

    // height
    float height; // Offset: 0x10

    // frame color
    idVec4 frameColor; // Offset: 0x14

    // frame color
    idVec4 barColor; // Offset: 0x24

    // bar text
    idAtomicString text; // Offset: 0x38

}; // Size: 0x40

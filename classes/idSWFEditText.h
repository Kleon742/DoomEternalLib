struct idSWFEditText
{
    swfRect_t bounds; // Offset: 0x0

    unsigned int flags; // Offset: 0x10

    unsigned short fontID; // Offset: 0x14

    unsigned short fontHeight; // Offset: 0x16

    swfColorRGBA_t color; // Offset: 0x18

    unsigned short maxLength; // Offset: 0x1C

    swfEditTextAlign_t align; // Offset: 0x20

    unsigned short leftMargin; // Offset: 0x24

    unsigned short rightMargin; // Offset: 0x26

    unsigned short indent; // Offset: 0x28

    short leading; // Offset: 0x2A

    idAtomicString variable; // Offset: 0x30

    idAtomicString initialText; // Offset: 0x38

}; // Size: 0x40

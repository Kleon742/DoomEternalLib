struct idGUIRect
{
    idStr title; // Offset: 0x0

    int borderWidth; // Offset: 0x30

    int borderHeight; // Offset: 0x34

    idColor bgColor; // Offset: 0x38

    idColor textColor; // Offset: 0x48

    idColor titleBarColor; // Offset: 0x58

    idColor titleTextColor; // Offset: 0x68

    float alpha; // Offset: 0x78

    float textAlpha; // Offset: 0x7C

    idList < idGUILine , TAG_IDLIST , false > lines; // Offset: 0x80

    // leftmost x as last rendered
    int left; // Offset: 0x98

    // uppermost y when last rendered
    int top; // Offset: 0x9C

    // width of the rect as last rendered
    int width; // Offset: 0xA0

    // height of the rect as last rendered
    int height; // Offset: 0xA4

}; // Size: 0xA8

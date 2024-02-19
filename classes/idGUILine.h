struct idGUILine
{
    enum guiLineFlags_t : int
    {
        GLF_Y = 1,
        GLF_COLOR = 2,
        GLF_HEADER = 4
    };

    int flags; // Offset: 0x0

    int x; // Offset: 0x4

    int y; // Offset: 0x8

    idColor headerColor; // Offset: 0xC

    idColor textColor; // Offset: 0x1C

    idStr heading; // Offset: 0x30

    idStr text; // Offset: 0x60

}; // Size: 0x90

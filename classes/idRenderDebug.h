struct idRenderDebug
{
    struct debugLine_t
    {
        idVec4 rgb; // Offset: 0x0

        // {{ units = m }}
        idVec3 start; // Offset: 0x10

        // {{ units = m }}
        idVec3 end; // Offset: 0x1C

        bool depthTest; // Offset: 0x28

        bool screenSpace; // Offset: 0x29

        int lifeTime; // Offset: 0x2C

    }; // Size: 0x30

    struct debugText_t
    {
        char text[128]; // Offset: 0x0

        // {{ units = m }}
        idVec3 origin; // Offset: 0x80

        float scale; // Offset: 0x8C

        // {{ units = m }}
        float scaleDistance; // Offset: 0x90

        idVec4 color; // Offset: 0x94

        idMat3 viewAxis; // Offset: 0xA4

        unsigned char align; // Offset: 0xC8

        unsigned char lineWidth; // Offset: 0xC9

        // If true, use the current renderView axis to align the text. Otherwise, it uses viewAxis
        bool orientToRenderViewAxis; // Offset: 0xCA

        bool depthTest; // Offset: 0xCB

        int lifeTime; // Offset: 0xCC

    }; // Size: 0xD0

    struct debugPolygon_t
    {
        idVec4 rgb; // Offset: 0x0

        idWinding winding; // Offset: 0x10

        bool depthTest; // Offset: 0x30

        int lifeTime; // Offset: 0x34

    }; // Size: 0x38

    struct debugBounds_t
    {
        idVec4 rgb; // Offset: 0x0

        idBounds bounds; // Offset: 0x10

        // {{ units = m }}
        idVec3 origin; // Offset: 0x28

        idMat3 axis; // Offset: 0x34

        bool depthTest; // Offset: 0x58

        bool screenSpace; // Offset: 0x59

        int lifeTime; // Offset: 0x5C

    }; // Size: 0x60

}; // Size: 0x8

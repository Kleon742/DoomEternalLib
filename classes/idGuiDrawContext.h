struct idGuiDrawContext
{
    enum alignment_t : int
    {
        ALIGN_LEFT = 0,
        ALIGN_RIGHT = 1,
        ALIGN_CENTER = 2
    };

    enum verticalAlignment_t : int
    {
        VERTICAL_ALIGN_BOTTOM = 0,
        VERTICAL_ALIGN_TOP = 1,
        VERTICAL_ALIGN_CENTER = 2
    };

    idRenderModelGui* gui; // Offset: 0x0

    idFont* activeFont; // Offset: 0x8

    idMaterial2* fontMaterialOverride; // Offset: 0x10

    idDrawVert stretchPicVerts[32]; // Offset: 0x20

    unsigned short stretchPicIndices[90]; // Offset: 0x620

    idVec2 uiScale; // Offset: 0x6D4

    idVec2 uiOffset; // Offset: 0x6DC

    idMat3 axis; // Offset: 0x6E4

    // {{ units = m }}
    idVec3 origin; // Offset: 0x708

    bool identityMatrix; // Offset: 0x714

}; // Size: 0x720

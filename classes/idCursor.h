struct idCursor
{
    bool active; // Offset: 0x0

    bool needTrace; // Offset: 0x1

    cursorHitState_t hitState; // Offset: 0x4

    int numHits; // Offset: 0x8

    bool showHitState; // Offset: 0xC

    int mouseX; // Offset: 0x10

    int mouseY; // Offset: 0x14

    int lastMouseX; // Offset: 0x18

    int lastMouseY; // Offset: 0x1C

    idMaterial2* guiCursor_arrow; // Offset: 0x20

    idMaterial2* guiCursor_hand; // Offset: 0x28

    idRenderModelGui* gui; // Offset: 0x30

    // {{ units = m }}
    idVec3 latestTracePoint; // Offset: 0x38

    // the geometric facet normal with no smoothing
    idVec3 latestTraceNormal; // Offset: 0x44

    // Will be NULL if nothing was hit.
    idRenderModel* latestTraceEntity; // Offset: 0x50

}; // Size: 0x58

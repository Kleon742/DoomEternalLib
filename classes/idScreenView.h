struct idScreenView
{
    // Coordinate of the final image where the rendered image will be blitted during upsample If zero, it won't be blitted
    idScreenRect screenRect; // Offset: 0x0

    // Size to actually render
    idScreenRect renderRect; // Offset: 0x10

    // determines which viewColor image will be rendered to, and which idRenderView from world will be used.
    int viewIndex; // Offset: 0x20

    // HACK:  Force a GL_Clear right before view guis are rendered.  Temporary solution to hide frozen world behind pause screen. Only for SP
    bool HACK_clearViewPreViewGuis; // Offset: 0x24

    // consoles can't render two views at 60Hz, so we toggle between them, only rendering a single new one each frame, and just using the saved-off copy of the other one
    bool usePreviousRendering; // Offset: 0x25

    // can be NULL if only guis need to be draw
    idRenderWorld* world; // Offset: 0x28

    // the parameters for the 3D rendering inside world
    renderView_t g; // Offset: 0x30

    // these guis will be drawn to viewColor, on top of the 3D rendering, and may wind up being resolution scaled
    idStaticList < idRenderModel * , 24 , false , TAG_IDLIST > viewGuis; // Offset: 0x9A0

    // for stereo 3D, the guis can be offset differently in each screenView {{ units = m }}
    float guiOriginOffset; // Offset: 0xA78

}; // Size: 0xA80

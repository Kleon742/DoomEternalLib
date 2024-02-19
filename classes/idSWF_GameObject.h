struct idSWF_GameObject
{
    // the swf file associated with this object.
    idSWF* swf; // Offset: 0x0

    // the cached render model used to render the swf if we're not using the global model.
    idRenderModelGui* customModel; // Offset: 0x8

    // the render model used to render the swf. Will be equal to m_customModel if we're using the custom model, or NULL if we're using the global model.
    idRenderModelGui* guiModel; // Offset: 0x10

    // the actual render model to render the GUI onto. If not set will render full screen.
    idRenderModel* renderModel; // Offset: 0x18

    // optional custom material we can apply to the render model
    idMaterial2* customMaterial; // Offset: 0x20

    // Sort type for the GUI
    guiModelSortType_t sortType; // Offset: 0x28

    // Render with depth testing
    bool depthTest; // Offset: 0x2C

    float emissiveScale; // Offset: 0x30

    // origin of the swf object. {{ units = m }}
    idVec3 origin; // Offset: 0x34

    // axis of the swf object.
    idMat3 axis; // Offset: 0x40

    // scale of the swf object.
    float scale; // Offset: 0x64

    // if true the swf is our responsibility to clean up
    bool manageSwf; // Offset: 0x68

    // force this swf to always render at this FOV.
    float forceFov; // Offset: 0x6C

    bool dormant; // Offset: 0x70

}; // Size: 0x78

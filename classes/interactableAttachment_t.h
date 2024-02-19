struct interactableAttachment_t
{
    // automatically instantiated idRenderModel
    idRenderModel* renderModel; // Offset: 0x0

    // scale for this model
    idVec3 renderModelScale; // Offset: 0x8

    // custom skin index for the model
    int renderModelCustomSkinIndex; // Offset: 0x14

    // for hiding meshes on spawn
    idMD6Util::meshShowHideInfo_t renderModelShowHideMeshInfo; // Offset: 0x18

    // name of joint tag to bind to
    idStr tagName; // Offset: 0x50

    // what fx decl to use for the attachment.
    idDeclFX* fxDecl; // Offset: 0x80

    // Starting state of the entity.
    idAnimWebPath animWebPath; // Offset: 0x88

    // the anim web decl this component
    idDeclAnimWeb* animWebDecl; // Offset: 0xB8

    // locally created animweb.
    idAnimator_AnimWeb localAnimWeb; // Offset: 0xC0

    // color per state.
    idList < attachmentStateColor_t , TAG_IDLIST , false > stateColors; // Offset: 0x930

    // the entity.
    idManagedClassPtr < idAnimatedEntity > attachedEntity; // Offset: 0x948

    // Does the outline get applied to this attachment.
    bool allowOutline; // Offset: 0x968

}; // Size: 0x970

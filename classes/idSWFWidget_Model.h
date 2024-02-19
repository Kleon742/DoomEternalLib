struct idSWFWidget_Model : idSWFWidget
{
    // Md6 Decl.
    idDeclMD6* modelMD6; // Offset: 0x180

    // Model that is used for the widget.
    idRenderModel* model; // Offset: 0x188

    // Entity to use for the model instead.
    idManagedClassPtr < idEntity > entity; // Offset: 0x190

    // animator used for playing customized animations on the entity
    idAnimator_Channel animator; // Offset: 0x1B0

    // Rig that represents lighting information
    idList < idRenderLight * , TAG_IDLIST , false > lightRig; // Offset: 0x2C0

    // scale of the model.
    idVec3 scale; // Offset: 0x2D8

    // offset of the model.
    idVec3 offset; // Offset: 0x2E4

    // roll of the model.
    float roll; // Offset: 0x2F0

    // how much to scale fov for custom view projection
    float fovScale; // Offset: 0x2F4

    // name of animation to show.
    char* animation; // Offset: 0x2F8

    // blend time for animation
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > animationBlendTime; // Offset: 0x300

    // use custom view projection
    bool useCustomViewProjection; // Offset: 0x308

    // should animation loop?
    bool animationLooping; // Offset: 0x309

    // ...well, does it?
    bool animationNeedsUpdate; // Offset: 0x30A

    // Modify model scale to 1 and scale distance from camera accordingly to keep silhouette the same. This prevents the model from being too small relative to shadowmap resolution and the lightrig lights, resulting in model having completely different lighting than in the editor. TODO: this behavior should always be enabled, but some existing idSWFWidget_Models already had lighting adjusted for the old behavior.
    bool applyModelScaleCorrection; // Offset: 0x30B

}; // Size: 0x310

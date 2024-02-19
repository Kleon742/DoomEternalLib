struct idRenderModel
{
    struct decalData_t
    {
        // used to look up the decal within the RenderWorld's decal model
        idDecalHandle handle; // Offset: 0x0

        // position of the decal relative to model/joint
        idVec3 relativePos; // Offset: 0x4

        // orientation of the decal relative to model/joint
        idMat3 relativeAxis; // Offset: 0x10

        // NULL_JOINT_INDEX if no joint used;
        idIndex < short , invalidJointIndex_t , - 1 > jointId; // Offset: 0x34

    }; // Size: 0x38

    typedef idList < idRenderModelSurface , TAG_RENDERMODEL_SURFACES > renderModelSurfacesList_t;

    typedef idList < idRenderModel::decalData_t , TAG_RENDERMODEL_DECAL > decalDataList_t;

    // used to update decal positional information
    idList < idRenderModel::decalData_t , TAG_RENDERMODEL_DECAL , false > decalData; // Offset: 0x10

    int lastAttachedDecal; // Offset: 0x28

    idDeclLODGroup* lodGroup; // Offset: 0x30

    idDeclModelAsset* modelAsset; // Offset: 0x38

    geometryLodResidencyTable_t* lodResidencyTable; // Offset: 0x40

    float maxLodDeviations[5]; // Offset: 0x48

    unsigned int streamModelId; // Offset: 0x5C

    idList < materialRemap_t , TAG_IDLIST , false > materialRemap; // Offset: 0x60

    idList < materialRemap_t , TAG_IDLIST , false > materialRemapRT; // Offset: 0x78

    bool isMaterialRemapDirty; // Offset: 0x0

    bool volatileGeometry; // Offset: 0x0

    idAtomicString name; // Offset: 0x98

    // This is used for tracking network bandwidth, and knowing which owner the rendermodel came from
    idAtomicString debugName; // Offset: 0xA0

    // Pointer to the data committed for exclusive use by the renderer.
    idRenderModelCommitted* committed; // Offset: 0xA8

    // Deferred unlink, set by game thread, read at sync time.
    bool unlinked; // Offset: 0x0

    // Deferred delete, set by game thread, read at sync time.
    bool deleteOnSync; // Offset: 0x0

    // true if the position of this render model trails behind one game frame
    bool useDeferredPosition; // Offset: 0x0

    // true if the deferred position has been updated at least once
    bool deferredPositionInitialized; // Offset: 0x0

    // true if the axis of this render model trails behind one game frame
    bool useDeferredAxis; // Offset: 0x0

    // Permits remapping of collision materials on the model
    bool allowCollisionRemap; // Offset: 0x0

    bool parmBlockDirty; // Offset: 0x0

    bool surfacesDirty; // Offset: 0x0

    idGrowableList < idRenderModel * , 4 , TAG_IDLIST > referencingModels; // Offset: 0xC0

    // {{ units = m }}
    idVec3 deferredOrigin; // Offset: 0xF8

    idMat3 deferredAxis; // Offset: 0x104

    idBounds referenceBounds; // Offset: 0x128

    // Pointer to the world this model is part of.
    idRenderWorldLocal* world; // Offset: 0x140

    // Accessed by the game.
    idRenderModelParms g; // Offset: 0x158

    // For render parm overrides.
    idGrowableParmBlock < 32 > gameParmBlock; // Offset: 0x230

    float coverage; // Offset: 0x480

    idList < idRenderModelSurface , TAG_RENDERMODEL_SURFACES , false > surfaces; // Offset: 0x488

    int surfacesCommittedFrameCount; // Offset: 0x4A0

    int surfaceSpawnFirstSlot; // Offset: 0x4A4

    int surfaceSpawnAmount; // Offset: 0x4A8

    int surfaceSpawnLastFrameUpdate; // Offset: 0x4AC

    idList < surfGeoDecalProjComputeData_t , TAG_RENDERER , false > geoDecalProjComputeData; // Offset: 0x4B0

}; // Size: 0x4D0

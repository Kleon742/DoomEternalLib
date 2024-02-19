struct idEntity : idEngineEntity
{
    struct entityPointerList_t
    {
        enum enum_1C301 : int
        {
            NUM_LIST_MUTEXES = 64
        };

        idList < idManagedClassPtr < idEntity > * , TAG_IDLIST , false > list; // Offset: 0x0

    }; // Size: 0x18

    struct baseEntityFlags_t
    {
        // if true the entity is selected for editing
        bool selected; // Offset: 0x0

        // if true, we have been sorted for batching already
        bool sortedForBatching; // Offset: 0x0

    }; // Size: 0x1

    int classHandlerIndex; // Offset: 0x38

    // DO NOT EXPOSE to Decls. This is a HACK for Objects that need to not be visible to update/animate.
    bool noVisibilityTest; // Offset: 0x3C

    // m_name of this entity
    idStr name; // Offset: 0x40

    // unique prefab instance identifier
    unsigned int prefabInstanceId; // Offset: 0x70

    // position this entity is spawned {{ units = m }}
    idVec3 spawnPosition; // Offset: 0x74

    // orientation of this entity at the spawn position
    idMat3 spawnOrientation; // Offset: 0x80

    // whether we are about to be deleted
    bool markedForDelete; // Offset: 0xA4

    // entity def used to initialize this spawnable
    idDeclEntityDef* entityDef; // Offset: 0xA8

    // default physics object
    idHavokPhysics_Dummy defaultPhysicsObjHavok; // Offset: 0xB0

    // physics used for this entity
    idPhysics* physics; // Offset: 0x1D0

    // tells which mapLocal entity lists this entity is in
    unsigned long long entityListFlags; // Offset: 0x1D8

    // The list of entity pointers that are pointing to this entity
    idEntity::entityPointerList_t entityPointerList; // Offset: 0x1E0

    // base flags
    idEntity::baseEntityFlags_t baseFlags; // Offset: 0x1F8

    // Reference bounds that will be used in the visibility box
    idVec3 visibilitySize; // Offset: 0x1FC

    // This will give the center of the render model
    idVec3 visibilityBoxCenter; // Offset: 0x208

    // Dimension of visibility box allocated
    idRenderMatrix* renderMatrixVisibilityBox; // Offset: 0x218

    // The index into the visibilityBoxResults
    int visibilityBoxIndex; // Offset: 0x220

    // Return the current up to date list of visible or invisible vis boxes.
    unsigned char* visibilityBoxResults; // Offset: 0x228

    // Current entity has visibility box
    bool entityHasVisibilityBox; // Offset: 0x230

    // Is visibility box in your FOV
    bool isBoxVisible; // Offset: 0x231

    idEntity* stuntDouble; // Offset: 0x238

}; // Size: 0x240

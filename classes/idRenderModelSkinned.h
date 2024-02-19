struct idRenderModelSkinned : idRenderModel
{
    struct meshHandle_t
    {
        idList < int , TAG_IDLIST , false > indices; // Offset: 0x0

        idStr name; // Offset: 0x18

    }; // Size: 0x48

    struct meshMaterialOverride_t
    {
        idMaterial2* material; // Offset: 0x0

        int meshIndex; // Offset: 0x8

    }; // Size: 0x10

    idDeclMD6* declMD6; // Offset: 0x4D0

    idMD6Model* md6Model; // Offset: 0x4D8

    idJointAnimator* jointAnimator; // Offset: 0x4E0

    // vertex stream data
    idStaticModelStream* modelStream; // Offset: 0x4E8

    unsigned int createFlags; // Offset: 0x4F0

    // override a material for a single mesh.
    idList < idRenderModelSkinned::meshMaterialOverride_t , TAG_IDLIST , false > meshMaterialOverrides; // Offset: 0x4F8

    idWoundedModelState* woundedModelState; // Offset: 0x510

    // Bitfield, one bit each sub-mesh to indicate hidden or not
    idBitset < 256 > meshVisibilityMask; // Offset: 0x518

    // Bitfield, one bit each sub-mesh to indicate streaming or not
    idBitset < 256 > meshStreamMask; // Offset: 0x538

    idBitset < 256 > meshCommittedMask; // Offset: 0x558

    // a flag to force the visibility mask next time we serialize
    int forceMeshVisMaskNextSerialization; // Offset: 0x578

    // when true will ignore all mesh visibility flags and hide all meshes
    bool meshVisibilityOverride; // Offset: 0x0

    // don't serialize tree animator properties if true
    bool skipSerialization; // Offset: 0x0

    // don't serialize out the mesh visibility mask
    bool skipMeshVisibilitySerialization; // Offset: 0x0

    bool lockedStreamGeo; // Offset: 0x0

    bool recreateSurfaces; // Offset: 0x0

    bool committedHasPosedOnce; // Offset: 0x0

    bool committedHasWoundsAllocated; // Offset: 0x0

    bool woundsUpdated; // Offset: 0x0

    int committedCustomSkin; // Offset: 0x580

    unsigned int geoDecalStreamId; // Offset: 0x588

    unsigned short geoDecalMaterialIndex; // Offset: 0x58C

    idMaterial2* geoDecalMaterial; // Offset: 0x590

}; // Size: 0x5A0

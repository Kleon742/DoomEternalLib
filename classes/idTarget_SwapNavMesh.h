struct idTarget_SwapNavMesh : idBloatedEntity
{
    struct navSizeNameMapping_t
    {
        // file name of mesh to use
        idStr navMeshFileName; // Offset: 0x0

        // size of mesh to use
        navSize_t navSize; // Offset: 0x30

        idAINavMesh* runtimeMesh; // Offset: 0x38

    }; // Size: 0x40

    // list of meshes that should be swapped
    idList < idTarget_SwapNavMesh::navSizeNameMapping_t , TAG_IDLIST , false > infos; // Offset: 0xB88

}; // Size: 0xBA0

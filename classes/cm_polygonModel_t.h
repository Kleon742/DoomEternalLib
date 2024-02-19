struct cm_polygonModel_t
{
    int numModelTreeNodes; // Offset: 0x0

    int numSubModels; // Offset: 0x4

    cm_modelTreeNode_t* modelTreeNodes; // Offset: 0x8

    cm_subModel_t* subModels; // Offset: 0x10

    // really subModelState_t but using bytes to reduce cache misses
    char* subModelState; // Offset: 0x18

}; // Size: 0x20

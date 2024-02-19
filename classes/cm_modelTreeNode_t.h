struct cm_modelTreeNode_t
{
    int planeType; // Offset: 0x0

    // {{ units = m }}
    float planeDist; // Offset: 0x4

    int children[2]; // Offset: 0x8

}; // Size: 0x10

struct aas2Node_t
{
    // plane number that splits the subspace at this node
    unsigned int planeNum; // Offset: 0x0

    // node flags
    unsigned int flags; // Offset: 0x4

    // child nodes, zero is solid, negative is -(area number)
    int children[2]; // Offset: 0x8

}; // Size: 0x10

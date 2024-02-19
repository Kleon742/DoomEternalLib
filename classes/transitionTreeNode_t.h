struct transitionTreeNode_t
{
    aiFSM_IO_snapshot_t* IOSnapshot; // Offset: 0x0

    idStateData::transResult_t result; // Offset: 0x8

    int transitionListIndex; // Offset: 0x168

}; // Size: 0x170

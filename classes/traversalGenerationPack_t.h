struct traversalGenerationPack_t
{
    // for display and matching
    idAtomicString name; // Offset: 0x0

    // web paths to traversal anims to use in generation
    idList < aiTraversalGenAnimInfo_t , TAG_IDLIST , false > traversalAnims_new; // Offset: 0x8

}; // Size: 0x20

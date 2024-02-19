struct idMD6Node
{
    enum nodeType_t : int
    {
        NODE_BRANCH = 0,
        NODE_LEAF_PAUSE = 1,
        NODE_LEAF_PLAY = 2,
        NODE_BLEND_BRANCH = 3,
        NODE_BLENDA_BRANCH = 4,
        NODE_BEST_LEAF = 5,
        NODE_TAG_FILTER = 6,
        NODE_LEAF_COPYPOSE = 7,
        NODE_NUM_TYPES = 8,
        NODE_NONE = 255
    };

    idMD6Node* parent; // Offset: 0x0

    int allocatorIndex; // Offset: 0x8

    // type_t
    unsigned char type; // Offset: 0xC

    idMD6AnimDebuggerHelper_t animDebuggerHelper; // Offset: 0xD

}; // Size: 0x10

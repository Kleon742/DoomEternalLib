struct convexDecomposition_t
{
    enum type_t : int
    {
        NONE = 0,
        SIMPLE = 1,
        DECOMPOSE = 2,
        AABB = 3,
        MAX_TYPE = 4
    };

    // Decomposition type
    convexDecomposition_t::type_t type; // Offset: 0x0

    // Higher value results in a simpler representation
    float maxError; // Offset: 0x4

}; // Size: 0x8

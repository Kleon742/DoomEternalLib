struct idLogicNodeProjectOntoPlane
{
    enum logicIds_t : int
    {
        INPUT_PLANE_POS = 0,
        INPUT_PLANE_NORMAL = 1,
        INPUT_VECTOR_POS = 2,
        INPUT_VECTOR_DIR = 3,
        OUTPUT_VECTOR_POS = 4,
        OUTPUT_VECTOR_DIR = 5
    };

    enum projectionType_t : int
    {
        LOCAL_SPACE = 0,
        WORLD_SPACE = 1
    };

    // the projection we need
    idLogicNodeProjectOntoPlane::projectionType_t projectionType; // Offset: 0x0

}; // Size: 0x4

struct idLogicNodeArcCosine
{
    enum logicIds_t : int
    {
        INPUT_COSINE = 0,
        OUTPUT_VALUE = 1
    };

    enum outputType_t : int
    {
        DEGREES_OUTPUT = 0,
        RADIANS_OUTPUT = 1
    };

    // the output type we need
    idLogicNodeArcCosine::outputType_t outputType; // Offset: 0x0

}; // Size: 0x4

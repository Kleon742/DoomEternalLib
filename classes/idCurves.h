struct idCurves
{
    enum tangentComputeMode_t : int
    {
        TGT_PLATEAU = 0,
        TGT_INTERPOLATED = 1,
        TGT_STRAIGHT = 2
    };

    enum loopMode_t : int
    {
        LOOP_ONCE = 0,
        LOOP_LOOP = 1,
        LOOP_LOOP_MIRORED = 2
    };

}; // Size: 0x0

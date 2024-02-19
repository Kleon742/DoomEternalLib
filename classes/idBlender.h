struct idBlender
{
    enum blendState_t : int
    {
        BS_BLENDED_OUT = 0,
        BS_BLENDING_IN = 1,
        BS_BLENDED_IN = 2,
        BS_BLENDING_OUT = 3
    };

    idBlender::blendState_t mBlendState; // Offset: 0x0

    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > mAlpha; // Offset: 0x8

    float mMinAlpha; // Offset: 0x38

    float mMaxAlpha; // Offset: 0x3C

}; // Size: 0x40

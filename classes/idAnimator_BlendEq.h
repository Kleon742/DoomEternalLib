struct idAnimator_BlendEq : idAnimator_Base
{
    struct idNamedAnim
    {
        // handle of the animation
        idMD6Anim* anim; // Offset: 0x0

        // wrap mode of the animation
        unsigned char wrapMode; // Offset: 0x8

        // weight group of the animation
        unsigned char weightGroup; // Offset: 0x9

        // playback rate of the animation
        float rate; // Offset: 0xC

    }; // Size: 0x10

    // the blend equation we construct the tree from
    idStr blendEq; // Offset: 0x40

    // maps blend variable names to blend variable storage
    idList < idAnimWebScalar , TAG_ANIMWEB , false > scalars; // Offset: 0x70

    // maps blend variables directly to node properties - this only points to variables referenced by the current blend equation
    idList < idAnimWebScalarPair , TAG_ANIMWEB , false > scalarPairs; // Offset: 0x88

    // memory for blend variables not declared before parsing the blend equation
    idScalarMemBlock* scalarMem; // Offset: 0xA0

    // list of animations that can be referenced from the blend equation as anim0 ... animN
    idList < idAnimator_BlendEq::idNamedAnim , TAG_ANIMWEB , false > namedAnims; // Offset: 0xA8

}; // Size: 0xC0

struct idAnimatorParms_BlendEq : idAnimatorParms_Base
{
    // the blend equation the animator will start with
    idStr blendEq; // Offset: 0x30

    // list of blend variables and their names
    idList < idAnimWebScalar , TAG_IDLIST , false > scalars; // Offset: 0x60

    // memory for blend variables not declared before parsing the blend equation
    idScalarMemBlock* scalarMem; // Offset: 0x78

    // list of animations that can be referenced from the blend equation as anim0 ... animN
    idList < idAnimator_BlendEq::idNamedAnim , TAG_IDLIST , false > anims; // Offset: 0x80

}; // Size: 0x98

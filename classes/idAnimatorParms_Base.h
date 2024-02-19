struct idAnimatorParms_Base : idClass
{
    // the anim stack this animator will be added to
    idAnimStack* animStack; // Offset: 0x10

    // the name of this animator
    int name; // Offset: 0x18

    // the blend op to use when concatenating the animator's tree to another tree
    idMD6Blend::blendOp_t blendOp; // Offset: 0x1C

    // the blend type to use for the origins of the two sources (affects origin deltas only)
    idMD6Blend::originBlend_t originBlend; // Offset: 0x20

    // the weight group to use when blending the animator's tree with another tree
    md6WeightGroup_t weightGroup; // Offset: 0x24

    // the filter (bone mask) to use then blending leaves together
    md6WeightGroup_t filterGroup; // Offset: 0x28

    // the blend alpha to use when blending the animator's tree with another tree
    float alpha; // Offset: 0x2C

}; // Size: 0x30

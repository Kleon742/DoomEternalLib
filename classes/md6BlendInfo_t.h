struct md6BlendInfo_t
{
    // the operation to perform, blendOp_t
    unsigned char op; // Offset: 0x0

    // parameter to idMD6SkelData::GetJointWeights and idMD6SkelData::GetUserWeights
    unsigned char filterGroup; // Offset: 0x1

    // type of origin blending to perform, originBlend_t
    unsigned char originBlend; // Offset: 0x2

    // padding
    unsigned char pad; // Offset: 0x3

    // a scalar alpha value which specifies how much of left and right to mix together. Typically, 0 == left, 1 == right
    float currentAlpha; // Offset: 0x4

    // User specified joint weights
    unsigned char* jointFilter; // Offset: 0x8

}; // Size: 0x10

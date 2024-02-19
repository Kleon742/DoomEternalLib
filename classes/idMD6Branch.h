struct idMD6Branch : idMD6Node
{
    enum blendType_t : int
    {
        BLEND_LINEAR = 0,
        BLEND_EASEIN = 1,
        BLEND_EASEOUT = 2,
        BLEND_EASEIN_EASEOUT = 3,
        BLEND_EQUATION = 4,
        BLEND_TYPE_COUNT = 5
    };

    enum animEventMode_t : unsigned char
    {
        ANIMEVENTMODE_HIGHEST_WEIGHT = 0,
        ANIMEVENTMODE_ALL = 1
    };

    // A pointer to the left child
    idMD6Node* left; // Offset: 0x10

    // A pointer to the right child
    idMD6Node* right; // Offset: 0x18

    // User specified joint weights
    unsigned char* jointFilter; // Offset: 0x20

    // If >= 0, represents an override time for this branch of the tree
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > leftTimeOverride; // Offset: 0x28

    // If >= 0, represents an override time for this branch of the tree
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > rightTimeOverride; // Offset: 0x30

    // index into idMD6Skel::jointWeightOffsets, idMD6Skel::userWeightOffsets
    unsigned char filterGroup; // Offset: 0x38

    // The operation to perform at this leaf, one of the BOP_* types
    unsigned char op; // Offset: 0x39

    // the type of origin blending to use
    unsigned char originBlend; // Offset: 0x3A

    idMD6Branch::animEventMode_t animEventMode; // Offset: 0x3B

    // A scalar alpha value which specifies how much of left and right to mix together. Typically, 0 == left, 1 == right
    float currentAlpha; // Offset: 0x3C

    // currentAlpha will be adjusted to match targetAlpha at a rate of alphaRate.
    float targetAlpha; // Offset: 0x40

    // The rate at which currentAlpha is adjusted to match targetAlpha. Per second.
    float alphaRate; // Offset: 0x44

    // the type of blend to use
    idMD6Branch::blendType_t blendType; // Offset: 0x48

}; // Size: 0x50

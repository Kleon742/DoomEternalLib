struct idAnimator_Channel : idAnimator_Base
{
    struct idStartLeafPlaySnapshot
    {
        // sequence number so clients know when it is time to execute what is in here.
        int seqNo; // Offset: 0x0

        // signal to serialization (write) that we have new data.
        bool isDirty; // Offset: 0x4

        // cached off animation for this snapshot (not directly serialized).
        idMD6Anim* anim; // Offset: 0x8

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > curTime; // Offset: 0x10

        float rateScale; // Offset: 0x18

        idMD6Blend::blendOp_t blendOp; // Offset: 0x1C

        idMD6Leaf::wrapMode_t wrap; // Offset: 0x20

        idBlendParms blendParms; // Offset: 0x28

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > blendOutDuration; // Offset: 0x50

        bool maintainAlive; // Offset: 0x58

    }; // Size: 0x60

    idMD6LeafPlay* leaves[3]; // Offset: 0x40

    idMD6Branch* branches[2]; // Offset: 0x58

    idMD6LeafPlay* freeLeaves[3]; // Offset: 0x68

    idMD6Branch* freeBranches[2]; // Offset: 0x80

    idRandom random; // Offset: 0x90

    priority_t stackPriority; // Offset: 0x94

    float maxMergeAlpha; // Offset: 0x98

    short numFreeLeaves; // Offset: 0x9C

    short numFreeBranches; // Offset: 0x9E

    // for non-cycling animations, this is the duration over which to blend them when they finish
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > blendOutDuration; // Offset: 0xA0

    // when there are no leaves left, force a leaf to be freed instead of failing to alloc a new leaf
    bool forceFree; // Offset: 0x0

    // don't output warning to console when AllocateLeaf() is attempted with no free leaves available
    bool omitFreeLeafWarning; // Offset: 0x0

    idAnimator_Channel::idStartLeafPlaySnapshot startLeafPlaySnapshot; // Offset: 0xB0

}; // Size: 0x110

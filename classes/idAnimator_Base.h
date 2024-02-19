struct idAnimator_Base
{
    enum priority_t : int
    {
        PRIORITY_WEB = 0,
        PRIORITY_AFTER_WEB = 1,
        PRIORITY_IK = 99,
        PRIORITY_PROXY = 100,
        PRIORITY_AFTER_PROXY = 101,
        PRIORITY_SCENE_DIRECTOR = 102,
        PRIORITY_AF = 103
    };

    struct serializeProps_t
    {
        idMD6Branch* serializedTrees[2]; // Offset: 0x0

        bool createdThroughSerialization; // Offset: 0x10

    }; // Size: 0x18

    // / FIXME: this should be passed in to every method that needs it. master gametimeManager used passed to init, used to get timing info
    idGameTimeManager* gametimeManager; // Offset: 0x8

    // the branch used to merge into the main tree
    idMD6Branch* mergeBranch; // Offset: 0x10

    // the filter group for the blend
    md6WeightGroup_t filterGroup; // Offset: 0x18

    // ID_SHOW_BLEND_STACK_NAMES the weight group for the blend
    md6WeightGroup_t weightGroup; // Offset: 0x1C

    // properties for serialization
    idAnimator_Base::serializeProps_t serializeProps; // Offset: 0x20

    bool initialized; // Offset: 0x38

}; // Size: 0x40

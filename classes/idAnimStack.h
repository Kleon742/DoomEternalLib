struct idAnimStack
{
    enum animatorFlag_t : int
    {
        ANIMATORFLAG_INITIALIZED = 1,
        ANIMATORFLAG_ENABLED = 2,
        ANIMATORFLAG_CONTRIBUTED_LAST_SERIALIZE = 4,
        ANIMATORFLAG_SERIALIZE = 8
    };

    enum animatorPlaybackType_t : int
    {
        PLAYBACK_TYPE_NONE = 0,
        PLAYBACK_TYPE_PARTIAL = 1,
        PLAYBACK_TYPE_FULL = 2
    };

    struct syncNode_t
    {
        idMD6LeafPlay* node; // Offset: 0x0

        float alpha; // Offset: 0x8

    }; // Size: 0x10

    struct syncGroup_t
    {
        idStaticList < idAnimStack::syncNode_t , 20 , false , TAG_IDLIST > nodes; // Offset: 0x0

        float fraction; // Offset: 0x158

        float syncRate; // Offset: 0x15C

        int groupNumber; // Offset: 0x160

    }; // Size: 0x168

    struct syncFrame_t
    {
        float phase; // Offset: 0x0

        float frame; // Offset: 0x4

    }; // Size: 0x8

    struct syncData_t
    {
        idList < idAnimStack::syncFrame_t , TAG_IDLIST , false > frames; // Offset: 0x0

        idMD6Anim* anim; // Offset: 0x18

    }; // Size: 0x20

    idRenderModel* renderModel; // Offset: 0x8

    // tree animator this stack modifies
    idJointAnimator* jointAnimator; // Offset: 0x10

    // allocator for most leaves and branches in the stack, though some animators like animWebs, may allocate their own
    idMD6BlockAlloc md6Allocator; // Offset: 0x18

    // spawn id of the owner (mostly for debug output filtering)
    idSpawnId ownerSpawnId; // Offset: 0x168

    // / FIXME: only mutable to avoid an initial change set that touches all idAnimator_Base derived classes. / This will be changed in another change set. issues anim events for all animations playing in the anim stack's blend tree.
    idAnimEventHandler animEventHandler; // Offset: 0x170

    // stack of all animators that blend animations and/or apply joint mods
    idList < idAnimator_Base * , TAG_MD6_BLENDSTACK , false > blendStack; // Offset: 0x640

    // flags for all animators... for cache locality
    idList < unsigned char , TAG_MD6_BLENDSTACK , false > flags; // Offset: 0x658

    // temp to get phase syncing working
    idList < idAnimStack::syncData_t , TAG_MD6_BLENDSTACK , false > syncData; // Offset: 0x670

    // root of the tree combining all animator trees
    idMD6Node* tree; // Offset: 0x688

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > pauseTime; // Offset: 0x690

    // if true this will not Serialize on client or server, use this if you wish the client and server to be authoritative of their own anim stacks.
    bool forceLocalAuthoritative; // Offset: 0x698

    // if true uses the client local time when animating.
    bool useClientLocalTime; // Offset: 0x699

    // Separate arrays for each type to maximize delta compression
    idArray < unsigned char , 13 > typesMemory; // Offset: 0x69A

    idArray < unsigned char , 144 > branchMemory; // Offset: 0x6A7

    idArray < unsigned char , 225 > leafMemory; // Offset: 0x737

    bool serializedNewTree; // Offset: 0x818

    bool isListeningToSerialize; // Offset: 0x819

    idStaticList < idMD6Node * , 128 , false , TAG_IDLIST > rememberedNodes; // Offset: 0x820

    // cache this so game code has access
    float lastSyncPhase; // Offset: 0xC38

}; // Size: 0xC40

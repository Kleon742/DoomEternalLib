struct idAnimator_AnimWeb : idAnimator_Base
{
    enum animWebError_t : int
    {
        ANIMWEB_ERROR_NONE = 0,
        ANIMWEB_ERROR_NOPATH = 1
    };

    enum stateChangeType_t : int
    {
        SC_INVALID = 0,
        SC_FORCE_AND_CHANGE_STATE = 1,
        SC_FORCE_STATE = 2,
        SC_CHANGE_STATE_VIA = 3,
        SC_CHANGE_STATE = 4,
        SC_CHANGE_STATE_OTHER_SUBWEB_INDEX = 5,
        SC_CHANGE_STATE_MULTI_STATES = 6,
        SC_MAX = 7
    };

    struct animInfo_t
    {
        float curFrame; // Offset: 0x0

        int numFrames; // Offset: 0x4

        int frameRate; // Offset: 0x8

    }; // Size: 0xC

    struct idModelAnimState
    {
        // current tree
        idMD6Node* tree; // Offset: 0x0

        // blend branches for the tree
        idMD6Branch* branches[2]; // Offset: 0x8

        // blend trees for each node that animates the model
        idStaticList < idAnimWebBlendTree * , 8 , false , TAG_IDLIST > blendTreeCache; // Offset: 0x18

        // circular buffer that tracks the last couple of nodes we've blended so they won't be deleted
        idIndex < short , idAnimWeb::invalidNodeIndex_t , - 1 > recentNodes[3]; // Offset: 0x70

        // start of the recent nodes
        short recentNodeStart; // Offset: 0x76

        // true if a blend between two anim-web nodes is in progress.
        bool blending; // Offset: 0x78

        // true if blending last frame
        bool blendInterrupted; // Offset: 0x79

    }; // Size: 0x80

    struct forcedEdge_t
    {
        idIndex < short , idAnimWeb::invalidNodeIndex_t , - 1 > destNodeIndex; // Offset: 0x0

        idIndex < short , idAnimWeb::invalidSubWebIndex_t , - 1 > destSubWebIndex; // Offset: 0x2

        idBlendParms blendParms; // Offset: 0x8

    }; // Size: 0x30

    struct animWebStateChange_t
    {
        int seqNo; // Offset: 0x0

        idAnimator_AnimWeb::stateChangeType_t stateChangeType; // Offset: 0x4

        idIndex < short , idAnimWeb::invalidSubWebIndex_t , - 1 > destNodeSubWebIndex; // Offset: 0x8

        idIndex < short , idAnimWeb::invalidSubWebIndex_t , - 1 > otherSubWebIndex; // Offset: 0xA

        idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > destNodeStateIndex; // Offset: 0xC

        idAnimator_AnimWeb::forcedEdge_t forcedEdge; // Offset: 0x10

        idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > viaStateIndex; // Offset: 0x40

        idIndex < short , idAnimWeb::invalidSubWebIndex_t , - 1 > viaSubWebIndex; // Offset: 0x42

        interruptPath_t interruptPath; // Offset: 0x44

        interruptBlend_t interruptBlend; // Offset: 0x48

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > serverTime; // Offset: 0x50

        int blendEventMask; // Offset: 0x58

    }; // Size: 0x60

    struct idAnimWebSnapshot
    {
        idAnimator_AnimWeb::animWebStateChange_t stateChanges[2]; // Offset: 0x0

        int iCurrentChange; // Offset: 0xC0

        idArray < idIndex < idAnimWeb::NodeIndexType , idAnimWeb::invalidNodeIndex_t > , 32 > path; // Offset: 0xC4

        int pathID; // Offset: 0x104

        bool active; // Offset: 0x108

    }; // Size: 0x110

    // Client snapshots to process.
    idStaticList < idAnimator_AnimWeb::animWebStateChange_t , 8 , false , TAG_IDLIST > clientSnaps; // Offset: 0x40

    // the anim web decl we're using
    idDeclAnimWeb* decl; // Offset: 0x358

    // spawn id of the entity that owns this anim web
    idSpawnId ownerSpawnId; // Offset: 0x360

    // allocates all leaves and branches used by the anim web
    idMD6Allocator* md6Allocator; // Offset: 0x368

    // if this belongs to an AI unit.
    bool isAI; // Offset: 0x370

    // Whether or not this animweb is listening to snapshots
    bool isListeningToSerialize; // Offset: 0x371

    // until this time, allow client auth on anims
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > suppressReconcileTimeout; // Offset: 0x378

    // the index of the base model
    int baseModelIndex; // Offset: 0x380

    // active layers this web was initialized with (necessary for re-initializing after a reload)
    idList < idIndex < idAnimWeb::SubWebIndexType , idAnimWeb::invalidSubWebIndex_t > , TAG_ANIMWEB , false > initialActiveSubWebs; // Offset: 0x388

    // blend trees for each model and for each node in the decl
    idList < idAnimator_AnimWeb::idModelAnimState , TAG_ANIMWEB , false > modelAnimStates; // Offset: 0x3A0

    // serialization snapshot
    idAnimator_AnimWeb::idAnimWebSnapshot serializeSnapshot; // Offset: 0x3B8

    // previous serialization snapshot sequence # for animation data.
    int serSeq; // Offset: 0x4C8

    // index of the current node
    idIndex < short , idAnimWeb::invalidNodeIndex_t , - 1 > curNodeIndex; // Offset: 0x4CC

    // index of the previous node
    idIndex < short , idAnimWeb::invalidNodeIndex_t , - 1 > prevNodeIndex; // Offset: 0x4CE

    // index of the previous previous node
    idIndex < short , idAnimWeb::invalidNodeIndex_t , - 1 > prevPrevNodeIndex; // Offset: 0x4D0

    // indices of currently playing nodes ... Top() is current node, First() is oldest node in a blend
    idStaticList < idIndex < idAnimWeb::NodeIndexType , idAnimWeb::invalidNodeIndex_t > , 8 , false , TAG_IDLIST > overflowedNodeIndices; // Offset: 0x4D8

    // id of the sub-web to transition to, if < 0, any sub-web will do
    idIndex < short , idAnimWeb::invalidSubWebIndex_t , - 1 > destSubWebIndex; // Offset: 0x500

    // indices of all the dest states (empty if not transitioning)
    idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > destStateIndex; // Offset: 0x502

    // sub-web to path through on way to destination
    idIndex < short , idAnimWeb::invalidSubWebIndex_t , - 1 > viaSubWebIndex; // Offset: 0x504

    // indices of all the via states (empty if not pathing via)
    idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > viaStateIndex; // Offset: 0x506

    // optional sub-web to path through on way to destination
    idIndex < short , idAnimWeb::invalidSubWebIndex_t , - 1 > otherSubWebIndex; // Offset: 0x508

    // index of the node the current edge is in
    idIndex < short , idAnimWeb::invalidNodeIndex_t , - 1 > curEdgeNodeIndex; // Offset: 0x50A

    // index of the current edge in the current edge node
    short curEdgeIndex; // Offset: 0x50C

    // list of nodes for each subweb
    idStaticList < const idList < idAnimWeb::NodeIndex_t , TAG_DECL_ANIMWEB > * , 16 , false , TAG_IDLIST > pathableSubWebNodeLists; // Offset: 0x510

    // index in the path array of the current node
    short pathIndex; // Offset: 0x5A8

    // valid if transitioning
    idAnimWebRoute curPath; // Offset: 0x5AC

    // true if the next path should interrupt the current path
    interruptPath_t interruptPath; // Offset: 0x5F4

    // true if a new path can interrupt while a blend is in progress
    interruptBlend_t interruptBlend; // Offset: 0x5F8

    // time when the current node's animation started playing
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nodeStartTime; // Offset: 0x600

    // time when the current node's animation started playing
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > prevNodeStartTime; // Offset: 0x608

    // what frame did the current animation start on?
    int nodeStartFrame; // Offset: 0x610

    // names and storage for variables used in blend equations
    idList < idAnimWebScalar , TAG_ANIMWEB , false > scalars; // Offset: 0x618

    // Translate decls scalar indices to our scalars
    idList < int , TAG_ANIMWEB , false > scalarsDeclTranslation; // Offset: 0x630

    // holds float variables for any blend variables that weren't before the web decl was instantiated
    idScalarMemBlock scalarMem; // Offset: 0x648

    // mask of types of destination nodes to watch for blend windows for and notify the web
    int blendEventMask; // Offset: 0x658

    // set to tell PreBlendTree on our currentNode to copy the FF_COPY_ON_WRAP scalars next frame
    bool copyWrapScalarsNextFrame; // Offset: 0x65C

    // compared to the decl's change each frame to see if the decl changed
    int declChangeId; // Offset: 0x660

    // name of current node (cached for re-initializing the web when the decl changes)
    idAtomicString curNodeStateName; // Offset: 0x668

    // sub-web of current node (cached for re-initializing the web when the decl changes)
    idAtomicString curNodeSubWebName; // Offset: 0x670

    // name of destination node (cached for re-initializing the web when the decl changes)
    idAtomicString destNodeStateName; // Offset: 0x678

    // sub-web of destination node (cached for re-initializing the web when the decl changes)
    idAtomicString destNodeSubWebName; // Offset: 0x680

    // debugging, for tracking where calls to changestate are made
    idStr currentUsername; // Offset: 0x688

    // unique identifier for this web
    idHandle < short , invalidAnimWebHandle_t , INVALID_ANIM_WEB > handle; // Offset: 0x6B8

    // event handler for Rage
    idAnimWebEventHandler eventHandler; // Offset: 0x6BC

    // specifies whether events are cleared when explicit state changes occur (default = true)
    bool clearEventsOnStateChanges; // Offset: 0x76C

    // nodes with any matching flags will not be considered in a path
    unsigned char skipFlags; // Offset: 0x76D

    // nodes must have all required flags to be considered in a path
    unsigned char requiredFlags; // Offset: 0x76E

    // edge used to force a link with ForceEdge()
    idAnimator_AnimWeb::forcedEdge_t forcedEdge; // Offset: 0x770

    // last time this web animator had Update() called
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastUpdateTime; // Offset: 0x7A0

    // anim web randomization random integers for selecting random animations in animweb blend equations
    float randomBlendVals[7]; // Offset: 0x7A8

    // / FIXME: remove this... there should never be an animator embedded within another animator. This confuses / the whole paradigm of animators being on the animstack. This animator should be added to the stack like / any other animator. Ideally this animator would then query the animweb animator to get its control leaf. channel weight animator for blending user channel weight driven animations
    idAnimator_ChannelWeight channelWeightAnimator; // Offset: 0x7C8

    // the actual modelDef of the animator this web instance is animating, which may not be the same as any of the modelDefs in the modelInfos
    idDeclMD6* declMD6; // Offset: 0x860

    idAnimator_AnimWeb::animWebError_t error; // Offset: 0x868

    // true if debug info should be shown
    bool debug; // Offset: 0x86C

    // this is a temp fix for a last-minute issue found before shipping Rage -- this is the lowest entropy fix possible -- do not use this for a general case!
    bool forceAnimDeltaModeOnBlendStart; // Offset: 0x86D

    // true if automatic path generation following a forced edge should be skipped
    bool skipForcedEdgeAutoPath; // Offset: 0x86E

}; // Size: 0x870

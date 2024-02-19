struct idAnimSysNode : idClass
{
    enum invalidNodeIndex_t : int
    {
        INVALID_NODE_INDEX = -1
    };

    enum updateFlags_t : int
    {
        FLAG_NONE = 0,
        FLAG_UPDATE = 1,
        FLAG_GENERATE = 2,
        FLAG_GENERATE_MODELSPACE = 4,
        FLAG_EVAL_EVENTS = 8
    };

    struct idAnimSysNode_Context
    {
        enum contextFlags_t : int
        {
            FLAG_NONE = 0,
            FLAG_SERIALIZING = 1
        };

        idAnimSys* animSys; // Offset: 0x0

        idAnimSysLayer* animLayer; // Offset: 0x8

        idRingList < idAnimSysNodeData::idAnimSysNodeEvent , 128 >* eventQueue; // Offset: 0x10

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > curTime; // Offset: 0x18

        idAnimSysNode::idAnimSysNode_Context::contextFlags_t flags; // Offset: 0x20

        float syncTrack; // Offset: 0x24

        float timeStep; // Offset: 0x28

        float parentBlend; // Offset: 0x2C

    }; // Size: 0x30

    struct blendInfo_t
    {
        idAnimSysNodeData::blendType_t blendType; // Offset: 0x0

        idMD6Blend::originBlend_t originBlendType; // Offset: 0x4

        // Current blend value for this node, <= 0.0 node is ignored for generation
        float currentBlend; // Offset: 0x8

        // Target blend value for this node
        float targetBlend; // Offset: 0xC

        // How fast to blend (alpha/sec)
        float blendRate; // Offset: 0x10

        // Current blend in the tree, takes parent blend into account
        float actualBlend; // Offset: 0x14

        // When this blend was entered (on blendin)
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > enterTime; // Offset: 0x18

    }; // Size: 0x20

    struct animInstance_t
    {
        idMD6Alias* alias; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > enterTime; // Offset: 0x8

        idAnimSysNodeData::animLoopMode_t loopMode; // Offset: 0x10

        int frameOffset; // Offset: 0x14

        // Current timescale
        float timeScale; // Offset: 0x18

        float curLoopCount; // Offset: 0x1C

        float loopCountPerSecond; // Offset: 0x20

        int padding[1]; // Offset: 0x24

    }; // Size: 0x28

    struct idAnimSysNode_GenerateContext
    {
        idAnimSysNode::idAnimSysNode_Context* animSysContext; // Offset: 0x0

        idAnimSysGenerateSupport* generateSupport; // Offset: 0x8

        idRenderModel* renderModel; // Offset: 0x10

        idJointAnimator* jointAnimator; // Offset: 0x18

        unsigned char* jointWeights; // Offset: 0x20

        md6AnimCommand_t* commands; // Offset: 0x28

        int maxCommands; // Offset: 0x30

        int numCommands; // Offset: 0x34

        bool clearOrigin; // Offset: 0x38

    }; // Size: 0x40

    struct transitionInfo_t
    {
        idAnimSysNode* targetNode; // Offset: 0x0

        idAnimSysLayer* targetLayer; // Offset: 0x8

        float* refValuePtr; // Offset: 0x10

    }; // Size: 0x18

    typedef int nodeIndexType;

    typedef idIndex < idAnimSysNode::nodeIndexType , idAnimSysNode::invalidNodeIndex_t > nodeIndex_t;

    // Link to nodedata, stuff all static data in here
    idAnimSysNodeData* data; // Offset: 0x10

    // If some other mechanism rather than layer provides generate support
    idAnimSysGenerateSupport* generateProvider; // Offset: 0x18

    // Save name has so it's easily accessible
    int nodeNameHash; // Offset: 0x20

    // Node index for this node
    idIndex < int , idAnimSysNode::invalidNodeIndex_t , - 1 > nodeIndex; // Offset: 0x24

    // Transitions targets from this node
    idList < idAnimSysNode::transitionInfo_t , TAG_ANIMSYS , false > transitions; // Offset: 0x28

    // Parent node (if any, state machine for example), where this node is contained, not linked
    idAnimSysNode* parent; // Offset: 0x40

    // When this node was (re)activated
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > enterTime; // Offset: 0x48

    // When this node was exited
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > exitTime; // Offset: 0x50

    // When this node was last updated
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastUpdateTime; // Offset: 0x58

    // Currently needed update flags
    idAnimSysNode::updateFlags_t updateFlags; // Offset: 0x60

    // Event eval info
    int numEventsPosted; // Offset: 0x64

    // Nodeflags, set to animlayer when entering it
    unsigned long long nodeFlags; // Offset: 0x68

    // Local condition variables names and storage for local variables that can be used in transitions
    idList < idAnimSysNodeData::idAnimSysScalarInfo , TAG_ANIMSYS , false > localScalars; // Offset: 0x70

    // State time
    float stateTime; // Offset: 0x88

    float* externalBlendTimeEnterPtr; // Offset: 0x90

    float* externalBlendTimeExitPtr; // Offset: 0x98

    // If currently blending out
    bool blendingOut; // Offset: 0xA0

}; // Size: 0xA8

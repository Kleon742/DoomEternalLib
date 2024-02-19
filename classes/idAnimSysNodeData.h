struct idAnimSysNodeData : idClass
{
    enum blendType_t : int
    {
        BLEND_LINEAR = 0,
        BLEND_EASEIN = 1,
        BLEND_EASEOUT = 2,
        BLEND_EASEIN_EASEOUT = 3,
        BLEND_TYPE_COUNT = 4
    };

    enum animLoopMode_t : int
    {
        LOOPMODE_CLAMP = 0,
        LOOPMODE_REPEAT = 1
    };

    enum transitionFlags_t : int
    {
        TRANSITION_FLAG_DEFAULT = 0,
        TRANSITION_FLAG_TRIGGER_INTERVAL = 1
    };

    struct idAnimSysScalarInfo
    {
        // Name
        idAtomicString scalarName; // Offset: 0x0

        int scalarNameHash; // Offset: 0x8

        // Value
        float scalarValue; // Offset: 0xC

        float* scalarPtr; // Offset: 0x10

    }; // Size: 0x18

    struct idAnimSysNodeEvent
    {
        enum defaultEventType_t : int
        {
            EVENTTYPE_NONE = -1
        };

        // Main eventtype, ex loopcount
        int eventType; // Offset: 0x0

        // subeventtype, ex how many loops
        int eventSubType; // Offset: 0x0

        // If it has been used
        int consumed; // Offset: 0x0

    }; // Size: 0x8

    struct idAnimSysNodeCondition
    {
        enum operator_t : int
        {
            LESSTHAN = 0,
            GREATERTHAN = 1,
            LESSTHANEQ = 2,
            GREATERTHANEQ = 3,
            EQUAL = 4,
            NOTEQUAL = 5
        };

        // Value to compare with
        float constant; // Offset: 0x0

        // Operator to use
        idAnimSysNodeData::idAnimSysNodeCondition::operator_t op; // Offset: 0x4

        // Name of scalar reference
        idAtomicString refValueName; // Offset: 0x8

    }; // Size: 0x10

    struct idAnimSysNodeTransition
    {
        // Which node to go to
        idAnimSysNodeLink targetNode; // Offset: 0x0

        // Which event to react to ( if any )
        idAnimSysNodeData::idAnimSysNodeEvent reactToEvent; // Offset: 0x10

        // Any condition to check ( if any )
        idAnimSysNodeData::idAnimSysNodeCondition condition; // Offset: 0x18

        // Any event to call when transition activates
        idAnimSysEvent eventCall; // Offset: 0x28

        // Any flags to use
        idAnimSysNodeData::transitionFlags_t flags; // Offset: 0xF8

        // Blendtype to next state
        idAnimSysNodeData::blendType_t blendType; // Offset: 0xFC

        // Origin blend type to next state
        idMD6Blend::originBlend_t originBlendType; // Offset: 0x100

        // Blendtime to next state
        float blendTime; // Offset: 0x104

    }; // Size: 0x108

    // Transitions from this state
    idList < idAnimSysNodeData::idAnimSysNodeTransition , TAG_ANIMSYS , false > transitions; // Offset: 0x10

    // "Our" transitions merged with transitions from transition lists
    idList < idAnimSysNodeData::idAnimSysNodeTransition , TAG_ANIMSYS , false > mergedTransitions; // Offset: 0x28

    // Pointer to final list used (might be transitions or merged depending on whether we had any from the lists)
    idList < idAnimSysNodeData::idAnimSysNodeTransition , TAG_ANIMSYS , false >* finalTransitions; // Offset: 0x40

    // Target names for transition lists
    idList < idAnimSysTargetTransitionList , TAG_ANIMSYS , false > transitionLists; // Offset: 0x48

    // Event timeline
    idList < idAnimSysEvent , TAG_ANIMSYS , false > eventTimeLine; // Offset: 0x60

    // Node name
    idAtomicString name; // Offset: 0x78

    // Nodeflags, set to layer when entering it
    idAnimSysNodeFlags nodeFlags; // Offset: 0x80

    // External blendtime controller for enter time
    idAtomicString externalBlendTimeEnterRef; // Offset: 0x88

    // External blendtime controller for exit time
    idAtomicString externalBlendTimeExitRef; // Offset: 0x90

    // Default how long to take to blend into this node
    float blendTimeEnter; // Offset: 0x98

    // Default how long to take to blend out of this node (if not changed, same as enter)
    float blendTimeExit; // Offset: 0x9C

    // Which blendtype to use
    idAnimSysNodeData::blendType_t blendType; // Offset: 0xA0

    // Short name
    char* shortName; // Offset: 0xA8

    // If we have condition transitions
    bool hasConditionTransition; // Offset: 0x0

}; // Size: 0xB8

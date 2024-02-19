struct idDeclAIAnimStateNode : idTypeInfoGraphNode
{
    enum animStateFlags_t : int
    {
        ASF_HALT_EVALUATION_HERE = 1,
        ASF_DECISION_ROOT = 2,
        ASF_HALT_AFTER_TRANSITIONS = 4
    };

    enum priority_t : int
    {
        PRIORITY_FROM_ACTIONS = 0,
        PRIORITY_1 = 1,
        PRIORITY_2 = 2,
        PRIORITY_MAX = 3
    };

    // list of conditions for all incoming links
    idList < idTypeInfoObjectPtr < idAIAnimState_LinkCondition > , TAG_IDLIST , false > conditions; // Offset: 0x30

    // list of properties applied while in this state (removed on exit)
    idList < idTypeInfoObjectPtr < idAIAnimState_StateProperty > , TAG_IDLIST , false > properties; // Offset: 0x48

    // list of actions applied when either entering or exiting this state
    idList < idTypeInfoObjectPtr < idAIAnimState_StateAction > , TAG_IDLIST , false > actions; // Offset: 0x60

    // list of selections this state will use to specify animations
    idList < idTypeInfoObjectPtr < idAIAnimState_Selection > , TAG_IDLIST , false > selections; // Offset: 0x78

    // name of this node's subweb in animweb
    idAtomicString subWebName; // Offset: 0x90

    // name of this node in animweb
    idAtomicString webStateName; // Offset: 0x98

    // flags for this node
    idDeclAIAnimStateNode::animStateFlags_t flags; // Offset: 0xA0

    // how should we assign priority of evalutation?
    idDeclAIAnimStateNode::priority_t priority; // Offset: 0xA4

    // in seconds, how much time must elapse before re-entering this state
    idTypesafeTime < float , secondUnique_t , 1 > minReEnterSeconds; // Offset: 0xA8

    // debug flags
    aiGraphDebugFlags_t debugFlags; // Offset: 0xAC

    // true if this node can be used
    bool enabled; // Offset: 0xB0

}; // Size: 0xB8

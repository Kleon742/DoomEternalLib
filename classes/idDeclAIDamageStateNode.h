struct idDeclAIDamageStateNode : idTypeInfoGraphNode
{
    enum damageStateFlags_t : int
    {
        DSF_HALT_EVALUATION_HERE = 1
    };

    enum priority_t : int
    {
        PRIORITY_FROM_ACTIONS = 0,
        PRIORITY_1 = 1,
        PRIORITY_2 = 2,
        PRIORITY_MAX = 3
    };

    // list of conditions for all incoming links
    idList < idTypeInfoObjectPtr < idAIDamageState_LinkCondition > , TAG_IDLIST , false > conditions; // Offset: 0x30

    // list of properties applied while in this state (removed on exit)
    idList < idTypeInfoObjectPtr < idAIDamageState_StateProperty > , TAG_IDLIST , false > properties; // Offset: 0x48

    // list of actions applied when either entering or exiting this state
    idList < idTypeInfoObjectPtr < idAIDamageState_StateAction > , TAG_IDLIST , false > actions; // Offset: 0x60

    // flags for this node
    idDeclAIDamageStateNode::damageStateFlags_t flags; // Offset: 0x78

    // how should we assign priority of evalutation?
    idDeclAIDamageStateNode::priority_t priority; // Offset: 0x7C

    // in seconds, how much time must elapse before re-entering this state
    idTypesafeTime < float , secondUnique_t , 1 > minReEnterSeconds; // Offset: 0x80

    // debug flags
    aiGraphDebugFlags_t debugFlags; // Offset: 0x84

    // true if this node can be used
    bool enabled; // Offset: 0x88

}; // Size: 0x90

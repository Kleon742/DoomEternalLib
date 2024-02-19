struct idDeclAnimWebNode
{
    enum animDelta_t : int
    {
        ANIMDELTA_DEFAULT = 0,
        ANIMDELTA_DEFAULT_NOCLIP = 1,
        ANIMDELTA_FULL = 2,
        ANIMDELTA_FULL_NOCLIP = 3,
        ANIMDELTA_FULL_GRAVITY = 4,
        ANIMDELTA_TURN = 5,
        ANIMDELTA_FULL_VELOCITY = 6,
        ANIMDELTA_FULL_DRIVE_AI = 7,
        ANIMDELTA_PHYSICS_ONLY = 8,
        ANIMDELTA_MAX = 9
    };

    enum nodeTransition_t : int
    {
        NODETRANSITION_NONE = 0,
        NODETRANSITION_START = 1,
        NODETRANSITION_STOP = 2,
        NODETRANSITION_STEP = 3,
        NODETRANSITION_TURN = 4,
        NODETRANSITION_GENERIC = 5,
        NODETRANSITION_FOCUS = 6,
        NODETRANSITION_MAX = 7
    };

    struct toolSettings_t
    {
        // position of the node in the tool graph
        idVec3 pos; // Offset: 0x0

    }; // Size: 0xC

    idStr exportHackPath; // Offset: 0x0

    // index of this node in the graph
    idIndex < short , idAnimWeb::invalidNodeIndex_t , - 1 > nodeIndex; // Offset: 0x30

    // name of the sub web this node is part of
    idIndex < short , idAnimWeb::invalidSubWebIndex_t , - 1 > subWebIndex; // Offset: 0x32

    // the state identifier for this node( name of the node )
    idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > stateIndex; // Offset: 0x34

    // type of animation delta movement to use for this node ( animDelta_t )
    unsigned char animDelta; // Offset: 0x36

    // type of transition
    idDeclAnimWebNode::nodeTransition_t transition; // Offset: 0x38

    // custom flags
    animWebNodeCustomFlag_t customFlags; // Offset: 0x40

    // debug flags
    animWebNodeDebugFlag_t debugFlags; // Offset: 0x48

    // custom attached meta data
    idMetaDataSetBase* metaData; // Offset: 0x50

    // all edges leading from this node to other nodes
    idList < idIndex < idAnimWeb::EdgeIndexType , idAnimWeb::invalidEdgeIndex_t > , TAG_DECL_ANIMWEB , false > edges; // Offset: 0x58

    // The modelInfo array ONLY stores an info for models that this node animates... some  models referenced by the decl may be skipped, so indices in this array != indices in the  decl's model array!
    idList < idAnimWebModelInfo , TAG_DECL_ANIMWEB , false > modelInfo; // Offset: 0x70

    idList < idDeclAnimWebBlendTree , TAG_DECL_ANIMWEB , false > blendTrees; // Offset: 0x88

    idDeclAnimWebNode::toolSettings_t settings; // Offset: 0xA0

}; // Size: 0xB0

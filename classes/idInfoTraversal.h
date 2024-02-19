struct idInfoTraversal : idInfo_TraversalBase
{
    // anim from traversal subweb to play at this node
    idAnimWebPath traversalAnim; // Offset: 0xB90

    // traversal monster type for this traversal chain
    traversalMonsterType_t monsterType; // Offset: 0xBC0

    // flags that dictate who can use this traversal
    traversalEnums_t::classFlags_t class; // Offset: 0xBC4

    // flags that dictate various traversal properties
    traversalEnums_t::traversalFlags_t traversalFlags; // Offset: 0xBC8

    // snap traversal start and end points to ground (default is ON -- editable FOR TESTING ONLY)
    bool snapToGround; // Offset: 0x0

    // rotate spawn position as endpoint is dragged
    bool dragRotate; // Offset: 0x0

    // scale the travel time of this traversal by this amount (1 means no change)
    float travelTimeScale; // Offset: 0xBD0

    // Defalut amount to offset the traversal and extrusion endpoints in the editor (exposed for AAS compiler) {{ units = m }}
    float defaultEndpointOffset; // Offset: 0xBD4

    // NOTE: defaultEndpointOffset must be defined before traversalEndpoint and extrusionEndpoint. Designates the endpoint for a traversal {{ units = m }}
    idVec3 traversalEndpoint; // Offset: 0xBD8

    // Extrude the traversal starting point from the center of the node to this end point {{ units = m }}
    idVec3 extrusionEndpoint; // Offset: 0xBE4

}; // Size: 0xBF0

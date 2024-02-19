struct idInfoTraversal_Bot : idInfo
{
    // Indicates which bot traversal type this is
    BotTraversalType traversalType; // Offset: 0xB90

    // Defalut amount to offset the traversal and extrusion endpoints in the editor (exposed for AAS compiler) {{ units = m }}
    float defaultEndpointOffset; // Offset: 0xB94

    // NOTE: defaultEndpointOffset must be defined before traversalEndpoint and extrusionEndpoint. Designates the endpoint for a traversal {{ units = m }}
    idVec3 traversalEndpoint; // Offset: 0xB98

    // Extrude the traversal starting point from the center of the node to this end point {{ units = m }}
    idVec3 extrusionEndpoint; // Offset: 0xBA4

    // snap traversal start and end points to ground (default is ON -- editable FOR TESTING ONLY)
    bool snapToGround; // Offset: 0xBB0

    // rotate spawn position as endpoint is dragged
    bool dragRotate; // Offset: 0xBB1

}; // Size: 0xBB8

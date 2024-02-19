struct idInfo_UniversalTraversal : idInfo
{
    struct animInfo_t
    {
        // index in list
        int index; // Offset: 0x0

    }; // Size: 0x4

    // current list of (traversal subweb) animations for Animation Preview
    idList < idInfo_UniversalTraversal::animInfo_t , TAG_IDLIST , false > traversalAnimList; // Offset: 0xB90

    // currently selected traversal animation to play (exposed for Animation Preview)
    idAnimWebPath traversalAnim; // Offset: 0xBA8

    // current list of traversal start positions (exposed for meta prop and AAS compiler) {{ units = m }}
    idList < idVec3 , TAG_IDLIST , false > snappedStartList; // Offset: 0xBD8

    // current list of traversal end positions (exposed for meta prop and AAS compiler) {{ units = m }}
    idList < idVec3 , TAG_IDLIST , false > snappedEndList; // Offset: 0xBF0

    // current list of delta-corrected traversal end positions (exposed for meta prop)
    idList < idVec3 , TAG_IDLIST , false > deltaCorrectedEndList; // Offset: 0xC08

    // master table of MONSTERS x TRAVERSALS animation information
    idDeclUniversalTraversalTable* traversalAnimTable; // Offset: 0xC20

    // type of traversal
    idDeclUniversalTraversalTable::traversalType_t traversalType; // Offset: 0xC28

    // which monsters can use this traversal
    idDeclUniversalTraversalTable::monsterTypes_t monsterTypes; // Offset: 0xC2C

    // flags that dictate who can use this traversal
    traversalEnums_t::classFlags_t class; // Offset: 0xC30

    // flags that dictate various traversal properties
    traversalEnums_t::traversalFlags_t traversalFlags; // Offset: 0xC34

    // snap traversal start and end points to ground (default is ON -- editable FOR TESTING ONLY)
    bool snapToGround; // Offset: 0xC38

    // show first frame of animation only
    bool showFirstFrameOnly; // Offset: 0xC39

    // /__deffloatdefaultEndpointOffset; default amount to offset the traversal and extrusion endpoints in the editor (exposed for AAS compiler) / NOTE: defaultEndpointOffset must be defined before traversalEndpoint and extrusionEndpoint /__defidVec3traversalEndpoint; designates the endpoint for a traversal __editidVec3extrusionEndpoint; extrude the traversal starting point from the center of the node to this end point; allows the traversal to be played at any point along a line from the traversal node origin to this point used to "define" the meta prop's 'animEndpoint' var
    idVec3 propAnimEndpoint; // Offset: 0xC3C

}; // Size: 0xC48

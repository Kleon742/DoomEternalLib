struct idInfo_TraversalChain : idInfo_TraversalPoint
{
    struct idLink
    {
        // target node this link goes to
        idManagedClassPtr < idInfo_TraversalPoint > target; // Offset: 0x0

        // the animation node in the animweb that must play to traverse this link
        idAnimWebPath anim; // Offset: 0x20

        // factor scale this traversal's travel time (1 is no change)
        float travelTimeScale; // Offset: 0x50

    }; // Size: 0x58

    // traversal monster type for this traversal chain
    traversalMonsterType_t monsterType; // Offset: 0xB90

    // flags that dictate who can use this traversal
    traversalEnums_t::classFlags_t class; // Offset: 0xB94

    // flags that dictate various traversal properties
    traversalEnums_t::traversalFlags_t traversalFlags; // Offset: 0xB98

    // orient animation using direction of link, not direction of entity
    bool alignWithLink; // Offset: 0xB9C

    // the animweb that animations for this node come from
    idDeclAnimWeb* animWeb; // Offset: 0xBA0

    // links to other traversals
    idList < idInfo_TraversalChain::idLink , TAG_IDLIST , false > links; // Offset: 0xBA8

    // optional idle anim to use at this node -- entails a "hangout point"
    idAnimWebPath idleAnim; // Offset: 0xBC0

    // set at runtime, to avoid recursively adding duplicates
    bool hasParent; // Offset: 0xBF0

}; // Size: 0xBF8

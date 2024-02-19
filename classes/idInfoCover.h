struct idInfoCover : idInfo
{
    // optional idle anim to use at this node -- invalidates posture, actions, and transitions
    idAnimWebPath idleAnim; // Offset: 0xB90

    // nav mesh this cover node belongs to.
    navSize_t navSize; // Offset: 0xBC0

    // if true, then the AI can use this node if he is smaller than or equal to navSize
    bool navSizeSmallerThanOrEqual; // Offset: 0xBC4

    // types of AI that can use this cover
    aiMonsterType_t aiTypes; // Offset: 0xBC8

    // if true, spacial analysis will force this cover to be included in the AAS, even if it is otherwise considered invalid.
    bool force; // Offset: 0xBD0

    // set to true if you want to script AI using this node
    bool keepAfterSpawn; // Offset: 0xBD1

    // AI are allowed to move around up to this distance from cover origin {{ units = m }}
    float radius; // Offset: 0xBD4

    // determines how this is placed alongside auto cover
    aiCoverPlacementType_t placementType; // Offset: 0xBD8

    // detemrines how this is selected alongside auto cover
    aiCoverSelectionPriority_t selectionPriority; // Offset: 0xBDC

    // cover info index for AI
    int coverIndex; // Offset: 0xBE0

}; // Size: 0xBE8

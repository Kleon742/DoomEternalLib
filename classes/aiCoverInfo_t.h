struct aiCoverInfo_t
{
    idVec3 facing; // Offset: 0x0

    // {{ units = m }}
    idVec3 origin; // Offset: 0xC

    // {{ units = m }}
    idVec3 eyeOrigin; // Offset: 0x18

    // optional idle anim to use at this node -- invalidates posture, actions, and transitions
    idAnimWebPath idleAnim; // Offset: 0x28

    // nav mesh this cover node belongs to.
    navSize_t navSize; // Offset: 0x58

    // if true, then the AI can use this node if he is smaller than or equal to navSize
    bool navSizeSmallerThanOrEqual; // Offset: 0x5C

    // types of AI that can use this cover
    aiMonsterType_t aiTypes; // Offset: 0x60

    // AI are allowed to move around up to this distance from cover origin {{ units = m }}
    float radius; // Offset: 0x68

    // optional, if entity is kept around for scripting purposes
    idSpawnId spawnID; // Offset: 0x6C

    // determines how this is placed alongside auto cover
    aiCoverPlacementType_t placementType; // Offset: 0x70

    // detemrines how this is selected alongside auto cover
    aiCoverSelectionPriority_t selectionPriority; // Offset: 0x74

}; // Size: 0x78

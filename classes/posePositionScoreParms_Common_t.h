struct posePositionScoreParms_Common_t
{
    // used to inform selection algorithm, mostly regarding muzzle and eye visibility
    lowLevelStrategy_t lowLevelStrategy; // Offset: 0x0

    // if true, scale selection towards single anim movements ( as opposed to locomotion movements )
    bool preferActions; // Offset: 0x4

    // apply staleLocationBias if we've been standing near a recorded position for this long
    idTypesafeTime < float , secondUnique_t , 1 > staleLocationThreshold; // Offset: 0x8

    // if true, don't move to where we would hit others, or be hit by others
    bool avoidFriendlyFiringSolutions; // Offset: 0xC

    // ideal min distance from current position {{ units = m }}
    float idealMinDistanceFromSource; // Offset: 0x10

    // reject any actions that include flags outside of this
    actionAnimType_t allowedAnimTypes; // Offset: 0x14

    // reject any actions that don't have all these flags
    actionAnimType_t requiredAnimTypes; // Offset: 0x18

    // relative to our target, the direction we would prefer to move in
    posePositionDirection_t idealDirection; // Offset: 0x1C

    // override positioning parms to use for this specific query
    idDeclAIPositioningParms* positioningParms; // Offset: 0x20

    // criteria you want the AI to consider when deciding if an anim is valid
    animSelectionCriteria_t validityCriteria; // Offset: 0x28

}; // Size: 0x30

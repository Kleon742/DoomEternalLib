struct Shared_SocialRelationAvailable : idAIStateTransition
{
    // look in ai memory for this value
    idAtomicString rangeString; // Offset: 0xF8

    // max distance to search for relations
    float maxRange; // Offset: 0x100

    // for maxRange, use 2D distance check
    bool use2DChecks; // Offset: 0x104

    // filter results by this
    socialRespect_t minRespect; // Offset: 0x108

    // filter results by this
    socialRespect_t maxRespect; // Offset: 0x10C

    // filter results by this
    socialEmotion_t minEmotion; // Offset: 0x110

    // filter results by this
    socialEmotion_t maxEmotion; // Offset: 0x114

    // filter results by this
    aiAwareness_t awareness_min; // Offset: 0x118

    // filter results by this
    aiAwareness_t awareness_max; // Offset: 0x11C

    // if true, AI will find the closest relation and set pending action target, if transition is taken
    bool setActionTarget; // Offset: 0x120

    // if true, AI will push all entities from this transition into potential target list for downstream evaluation
    bool setPotentialTargets; // Offset: 0x121

    // if true, AI must have the aiEditable::behaviors::useAmbientSocialBehavior flag set
    bool ambientOnly; // Offset: 0x122

    // if true, only player entities will pass the filter
    bool playersOnly; // Offset: 0x123

    // if true, only non-player entities will pass the filter
    bool noPlayers; // Offset: 0x124

    // if true, off limits entities will be filtered out
    bool filterOutOffLimits; // Offset: 0x125

    // if true, transition will evaluate to TRANSCODE_NO if current action target is not within list
    bool checkActionTargetObsolete; // Offset: 0x126

}; // Size: 0x128

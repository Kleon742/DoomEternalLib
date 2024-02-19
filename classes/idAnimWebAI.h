struct idAnimWebAI : idAnimator_GameAnimWeb
{
    struct blendVariables_t
    {
        // index into the run web node for the injured run animation
        animBlendVarPair_t forwardRunIndex; // Offset: 0x0

        // previous forward run index to blend from
        animBlendVarPair_t previousRunIndex; // Offset: 0x8

        // blend value between two forward runs (ease in, ease out)
        animBlendVarPair_t forwardRunBlend; // Offset: 0x10

        // linear blend value between two forward runs
        animBlendVarPair_t forwardRunBlendLinear; // Offset: 0x18

        // linear blend value between current and previous tag sets
        animBlendVarPair_t tagBlend; // Offset: 0x20

        // animation index for death anims
        animBlendVarPair_t deathIndex; // Offset: 0x28

        // how much the torso aim animator is blended in
        animBlendVarPair_t aimAlpha; // Offset: 0x30

        // angle, relative to model forward, of additive focus
        animBlendVarPair_t additiveFocusAngle; // Offset: 0x38

        // blend in and out of additive focus
        animBlendVarPair_t additiveFocusScale; // Offset: 0x40

        // run state variables queued run index in case we are trying to change it too quickly
        animBlendVarPair_t nextRunIndex; // Offset: 0x48

        // idle index for animweb node indexing
        animBlendVarPair_t idleIndex; // Offset: 0x50

        // queued injured idle index in case we are trying to change it too quickly
        animBlendVarPair_t nextIdleIndex; // Offset: 0x58

        // previous idle index to blend
        animBlendVarPair_t previousIdleIndex; // Offset: 0x60

        // amount to blend left / right animations into forward / back ( 0 to 1 )
        animBlendVarPair_t blendAngle; // Offset: 0x68

        // walk animation rate scale
        animBlendVarPair_t walkRate; // Offset: 0x70

        // run animation rate scale
        animBlendVarPair_t runRate; // Offset: 0x78

        // rate scale for death animations (for testing only)
        animBlendVarPair_t deathScale; // Offset: 0x80

        // walk animation rate scale
        animBlendVarPair_t summonRate; // Offset: 0x88

        // randomly 0 or 1
        animBlendVarPair_t select01; // Offset: 0x90

        // used to differentiate which forward dive to use
        animBlendVarPair_t diveIndex; // Offset: 0x98

        // used to select proper melee anim to match injured state
        animBlendVarPair_t meleeIndex; // Offset: 0xA0

        // used to select proper melee anim to match injured state
        animBlendVarPair_t painIndex; // Offset: 0xA8

        // temp
        animBlendVarPair_t walkIndex; // Offset: 0xB0

        // hangout
        animBlendVarPair_t hangoutIndex; // Offset: 0xB8

        // hangout
        animBlendVarPair_t prevHangoutIndex; // Offset: 0xC0

        // yaw to look focus, relative to entity axis forward
        animBlendVarPair_t lookFocusYaw; // Offset: 0xC8

        // yaw to look focus, relative to entity axis forward, but normalized to 0-360
        animBlendVarPair_t lookFocusYaw360; // Offset: 0xD0

        // pitch to look focus, relative to entity axis forward
        animBlendVarPair_t lookFocusPitch; // Offset: 0xD8

        // blended between -1.0f and 1.0f, depending on slope under anim
        animBlendVarPair_t slopeDelta; // Offset: 0xE0

        // stagger animation rate scale
        animBlendVarPair_t staggerRate; // Offset: 0xE8

        // rate of falter animations
        animBlendVarPair_t falterRate; // Offset: 0xF0

        // attack animation rate scale
        animBlendVarPair_t attackRate; // Offset: 0xF8

        // used for various behaviors
        animBlendVarPair_t genericLerp1; // Offset: 0x100

        // ratescale for staggers, applies *in addition to* staggerRate
        animBlendVarPair_t staggerTimescale; // Offset: 0x108

        // special random selection index
        animBlendVarPair_t ai_random; // Offset: 0x110

    }; // Size: 0x118

    struct webNodePlayPosition_t
    {
        idDeclAnimWebNode* node; // Offset: 0x0

        float normalizedAnimTime; // Offset: 0x8

    }; // Size: 0x10

    struct featureSuppressionAnim_t
    {
        idMD6Anim* anim; // Offset: 0x0

        aiFeatureCategory_t feature; // Offset: 0x8

    }; // Size: 0x10

    struct focusTagChangeRequest_t
    {
        idAtomicString name; // Offset: 0x0

        aiFoci_t focusType; // Offset: 0x8

        // if true, this is focus, otherwise, orientation
        bool focusEffector; // Offset: 0xC

    }; // Size: 0x10

    idAI2* ai; // Offset: 0x888

    // dot product of current and ideal body yaw directions
    float bodyTurnDot; // Offset: 0x890

    // direction the body should turn to reach ideal (left or right)
    turnDirection_t bodyTurnDir; // Offset: 0x894

    // dot product of current and ideal movement yaw directions
    float movementTurnDot; // Offset: 0x898

    // direction the velocity vector should turn to reach ideal (left or right)
    turnDirection_t movementTurnDir; // Offset: 0x89C

    // ------------------------ blend scalars ------------------------ current type of run index
    runIndexType_t runIndexType; // Offset: 0x8A0

    // current type of run index
    runIndexType_t nextRunIndexType; // Offset: 0x8A4

    // used to prevent destination animation events firing in same frame
    int runIndexChangeFrame; // Offset: 0x8A8

    // scalars
    idAnimWebAI::blendVariables_t blendVariables; // Offset: 0x8AC

    // used for replication.
    awCheckPathResult_t serializeCheckPathResult; // Offset: 0x9C4

    idList < idAtomicString , TAG_ANIMWEB , false > runTags; // Offset: 0x9C8

    idList < idAtomicString , TAG_ANIMWEB , false > previousTags; // Offset: 0x9E0

    idList < idAtomicString , TAG_ANIMWEB , false > nextRunTags; // Offset: 0x9F8

    idList < idAtomicString , TAG_ANIMWEB , false > injuryTags; // Offset: 0xA10

    idList < idAtomicString , TAG_ANIMWEB , false > pendingTags; // Offset: 0xA28

    idList < idAtomicString , TAG_ANIMWEB , false > currentTags; // Offset: 0xA40

    idList < idAtomicString , TAG_ANIMWEB , false > extraMoveTags; // Offset: 0xA58

    idList < idAtomicString , TAG_ANIMWEB , false > extraTags; // Offset: 0xA70

    idList < const idMD6Anim * , TAG_ANIMWEB , false > focusTrackingSuppressionAnims; // Offset: 0xA88

    idList < const idMD6Anim * , TAG_ANIMWEB , false > ikSuppressionAnims; // Offset: 0xAA0

    idSysMutex featureSuppressionMutex; // Offset: 0xAB8

    idList < idAnimWebAI::featureSuppressionAnim_t , TAG_ANIMWEB , false > featureSuppressionAnims; // Offset: 0xAE0

    idBlendParms overrideBlendParms; // Offset: 0xAF8

    idIndex < short , idAnimWeb::invalidNodeIndex_t , - 1 > overrideDestNode; // Offset: 0xB20

    idList < idAnimWebAI::webNodePlayPosition_t , TAG_ANIMWEB , false > trackedNodePlayPositions; // Offset: 0xB28

    idList < idAnimWebAI::focusTagChangeRequest_t , TAG_ANIMWEB , false > focusChangeRequests; // Offset: 0xB40

}; // Size: 0xB58

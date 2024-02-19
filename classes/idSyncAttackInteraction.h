struct idSyncAttackInteraction : idClass
{
    enum syncFailReason_t : int
    {
        SYNC_FAIL_NONE = 0,
        SYNC_FAIL_HEIGHT_FAILED = -1,
        SYNC_FAIL_DISTANCE_FAILED = -2
    };

    struct syncAttackInteractionDebug_t
    {
        // syncSlideMoveValid = CalcSyncSlideMoveVelocity
        bool submitTraceQueries_syncSlideMoveCheck; // Offset: 0x0

        // validSyncInteraction = PassesInitialChecks
        bool submitTraceQueries_isValidCheck; // Offset: 0x1

        // syncInteractionDecl->healthRatio < healthRatio
        bool isValid_healthRatioCheck; // Offset: 0x2

        // node = syncAnimWeb->GetNodeForName
        bool isValid_syncAnimNodeFound; // Offset: 0x3

        // CheckSyncInteractionTargetFilters
        bool isValid_targetFiltersCheck; // Offset: 0x4

        // CheckSyncInteractionInstigatorFilters
        bool isValid_instigatorFiltersCheck; // Offset: 0x5

        // !rootDeltaValid || !syncDeltaValid
        bool isValid_deltaChecks; // Offset: 0x6

        // jointRangeAndAngleValid = HasValidJointRangeAndAngle
        bool isValid_validJointRangeAndAngle; // Offset: 0x7

        // syncInteractionDecl->syncFilter & SYNCFILTER_DEATH_FROM_ABOVE
        bool jointRangeAngle_heightCheck; // Offset: 0x8

        // distXYSqr < minRadiusXYSqr || distXYSqr > maxRadiusXYSqr
        bool jointRangeAngle_XYradiusCheck; // Offset: 0x9

        // distZ < syncInteractionDecl->syncMinRadiusZ || distZ > syncInteractionDecl->syncMaxRadiusZ
        bool jointRangeAngle_ZradiusCheck; // Offset: 0xA

        // maxPitchRad > pitchDot || maxYawRad > yawDot
        bool jointRangeAngle_angleCheck; // Offset: 0xB

        // !jointToAISlideMoveValid || !localSlideMoveValid
        bool resolveTraceQueries_slideQueries; // Offset: 0xC

        // validSlideMove = ProcessInteraction
        bool resolveTraceQueries_processInteractionCheck; // Offset: 0xD

        // node = syncAnimWeb->GetNodeForName
        bool processInteraction_NodeCheck; // Offset: 0xE

        // !rootDeltaValid || !syncDeltaValid
        bool processInteraction_DeltaCheck; // Offset: 0xF

        // !jointToCenterSlideMoveResult.c.normal.Compare
        bool processInteraction_jtcSlideMoveNormal; // Offset: 0x10

        // !jointToCenterSlideMoveResult.c.endpos.Compare
        bool processInteraction_jtcSlideMoveEndPos; // Offset: 0x11

        // slideMoveResult.c.normal.Compare
        bool processInteraction_slideMoveNormal; // Offset: 0x12

        // slideMoveResult.endpos.Compare
        bool processInteraction_slideMoveEndPos; // Offset: 0x13

        // slideError = ( adjustedParticipantPosition
        bool processInteraction_slideError; // Offset: 0x14

    }; // Size: 0x15

    idSyncAttackInteraction::syncAttackInteractionDebug_t syncDebugInfo; // Offset: 0x10

    idList < idStr , TAG_IDLIST , false > syncDebugAdditionalComments; // Offset: 0x28

    // The interaction decl I'm associated with.
    idDeclSyncInteraction* syncInteractionDecl; // Offset: 0x40

    // was the syncInteraction valid last frame?
    bool syncValid; // Offset: 0x48

    // how important i am to do, relative to the rest.
    float syncPriority; // Offset: 0x4C

    // the distance multiplier for the distance {{ units = m }}
    float syncMaxDistModifier; // Offset: 0x50

    // The SyncEntity is positioned at one of the participants (typically the victim) location. The other (adjustable) participant is moved into place (the adjusted position) via delta correction. The point at which we do the sync. {{ units = m }}
    idVec3 syncPos; // Offset: 0x54

    // the rotation at which we do the sync.
    idMat3 syncAxis; // Offset: 0x60

    // The joint position of the adjustable participant {{ units = m }}
    idVec3 adjustedParticipantPosition; // Offset: 0x84

    // Velocity of the adjustable participant to joint slide move test {{ units = m }}
    idVec3 syncSlideMoveVel; // Offset: 0x90

    // Velocity of the slide move to test the adjusted participant joint position to the centered participant {{ units = m }}
    idVec3 jointToCenterSlideMoveVel; // Offset: 0x9C

    // groups that i'm listed in.
    idList < idStr , TAG_IDLIST , false > listedGroups; // Offset: 0xA8

    // groups that i'm listed in. This list is atomic.
    idList < idAtomicString , TAG_IDLIST , false > listedGroupsAtomic; // Offset: 0xC0

    // What we got back from the trace validator.
    int traceValidationIndex; // Offset: 0xD8

    // what we got back from the contentsCheckValidation.
    int contentsCheckIndex; // Offset: 0xDC

    // animation info chosen for this interaction.
    syncAnimationInfo_t animationInfo; // Offset: 0xE0

    // Have submitted a trace but haven't yet resolved it.
    bool waitingOnSubmittedTrace; // Offset: 0x110

    // Focal Point Tag Data.
    tagData_t focalTagData; // Offset: 0x114

    // the possible target entity for this interaction
    idManagedClassPtr < idAnimatedEntity > targetEntity; // Offset: 0x138

    // Will this sync take us out of the world?
    bool syncWillClipGeometry; // Offset: 0x158

    // true if this interaction should display debug info
    bool debug; // Offset: 0x159

}; // Size: 0x160

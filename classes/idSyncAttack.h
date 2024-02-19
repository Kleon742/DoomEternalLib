struct idSyncAttack
{
    enum unitTestForceSituationFlags_t : int
    {
        SYNCUNITTEST_FORCENOTHING = 0,
        SYNCUNITTEST_FORCEVICTIMONGROUND = 1,
        SYNCUNITTEST_FORCEVICTIMINAIR = 2,
        SYNCUNITTEST_FORCEVICTIMLEDGEGRAB = 4,
        SYNCUNITTEST_ALLFORCEVICTIMFLAGS = 7,
        SYNCUNITTEST_FORCEINSTIGATORONGROUND = 65536,
        SYNCUNITTEST_FORCEINSTIGATORINAIR = 131072,
        SYNCUNITTEST_ALLFORCEINSTIGATORFLAGS = 196608,
        SYNCUNITTEST_ALLFORCEONGROUNDFLAGS = 65537,
        SYNCUNITTEST_ALLFORCEINAIRFLAGS = 131074,
        SYNCUNITTEST_ALLFORCELEDGEGRABFLAGS = 4
    };

    struct syncInteractionDeclGroupPair_t
    {
        idDeclSyncInteraction* syncInteractionDecl; // Offset: 0x0

        idStr groupName; // Offset: 0x8

    }; // Size: 0x38

    struct idCachedInteraction
    {
        idSyncAttackInteraction* syncInteraction; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > syncInteractionTime; // Offset: 0x8

    }; // Size: 0x10

    struct chainsawMinigame_t
    {
        // MS when the randomly chosen input window will start
        int startInputWindowMS; // Offset: 0x0

        // MS when the randomly chosen input window will end
        int endInputWindowMS; // Offset: 0x4

        // MS of the last update
        int lastUpdateMS; // Offset: 0x8

    }; // Size: 0xC

    struct lightingParms_t
    {
        // Light that spawns when doing a sync Interaction.
        idDeclEntityDef* lightDef; // Offset: 0x0

        // offset from the origin/Tag Joint. {{ units = m }}
        idVec3 offset; // Offset: 0x8

        // Name of the Tag Joint.
        idStr tagJointName; // Offset: 0x18

        // Fade in time ( seconds )
        float fadeInSec; // Offset: 0x48

        // Fade out time ( seconds )
        float fadeOutSec; // Offset: 0x4C

        // Tag Data for the light.
        tagData_t lightTagInfo; // Offset: 0x50

    }; // Size: 0x70

    struct soundParms_t
    {
        // sound shader to play on start
        idSoundEvent* startSound; // Offset: 0x0

        // sound shader to play on end
        idSoundEvent* endSound; // Offset: 0x8

        // sound shader to play on start for a berserk sync
        idSoundEvent* startSoundBerserk; // Offset: 0x10

        // sound shader to play on end for a berserk sync
        idSoundEvent* endSoundBerserk; // Offset: 0x18

        // sound shader to play on start for a crucible sync
        idSoundEvent* startSoundCrucible; // Offset: 0x20

        // sound shader to play on end for a cucible sync
        idSoundEvent* endSoundCrucible; // Offset: 0x28

        // seconds to fade duck in
        float fadeInSec; // Offset: 0x30

        // seconds to fade duck out
        float fadeOutSec; // Offset: 0x34

    }; // Size: 0x38

    struct unitTestParms_t
    {
        // Where the instigator starts for the unit test {{ units = m }}
        idVec3 instigatorPos; // Offset: 0x0

        // {{ units = m }}
        idVec3 targetPos; // Offset: 0xC

        // In degrees, the yaw where the instigator starts the unit test
        float instigatorYaw; // Offset: 0x18

        // In degrees, the yaw where the target starts the unit test
        float targetYaw; // Offset: 0x1C

        idManagedClassPtr < idAnimatedEntity > instigatorEntity; // Offset: 0x20

        idManagedClassPtr < idAnimatedEntity > targetEntity; // Offset: 0x40

        // How many frames elapsed before the test completed (either found a success or all failed)
        int framesBeforeTestComplete; // Offset: 0x60

        // Is the test done
        bool completed; // Offset: 0x64

        // Did it find a valid interaction
        bool succeeded; // Offset: 0x65

        // Are we running a test right now?
        bool active; // Offset: 0x66

        bool hasBeenPrepared; // Offset: 0x67

        int unitTestForceSituationFlags; // Offset: 0x68

        // Target could be dead, in a sync, whatever is preventing him from being viable.
        bool waitingToQueue; // Offset: 0x6C

        // For targets who died or were otherwise unavailable, wait this long AFTER being available before running test (so it looks ok in network/demos)
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > forcedQueueDelayEndTime; // Offset: 0x70

    }; // Size: 0x78

    struct unitTestQueueData_t
    {
        // {{ units = m }}
        idVec3 instigatorPos; // Offset: 0x0

        // {{ units = m }}
        idVec3 targetPos; // Offset: 0xC

        float instigatorYaw; // Offset: 0x18

        float targetYaw; // Offset: 0x1C

        int unitTestForceSituationFlags; // Offset: 0x20

    }; // Size: 0x24

    // ------------------------------------------------  ------------------------------------------------
    bool working; // Offset: 0x0

    interlockedInt_t possibleSyncInteractionAllocIndex; // Offset: 0x4

    idManagedClassPtr < idAnimatedEntity > lastInstigator; // Offset: 0x8

    idManagedClassPtr < idAnimatedEntity > lastTarget; // Offset: 0x28

    idManagedClassPtr < const idSyncEntity > lastSyncEntity; // Offset: 0x48

    // last X valid Glory Kills.
    idCircularBuffer < idSyncAttack::idCachedInteraction , 16 > cachedInteractions; // Offset: 0x68

    // Which interaction we will execute ( computed by Think () )
    idSyncAttackInteraction* interactionToExecute; // Offset: 0x170

    // a list of valid Syncs this frame.
    idList < idSyncAttackInteraction * , TAG_IDLIST , false > possibleSyncInteractions; // Offset: 0x178

    idSysMutex syncMeleeMutex; // Offset: 0x190

    // if this is not null, ONLY evaluate it -- allows easier breakpoints workign in sync gui
    idDeclSyncInteraction* debugInteraction; // Offset: 0x1B8

    // do we want to fully disable SyncMelee ?
    bool disableSyncAttack; // Offset: 0x1C0

    // Will always perform this sync interaction if one is valid.
    idDeclSyncInteraction* alwaysDoSync; // Offset: 0x1C8

    // entity defs for player synch attack versus this ai type. Note, this will probably change to being referenced a different way possibly on world spawn.
    idList < const idDeclEntityDef * , TAG_IDLIST , false > syncMeleeEntityDefs; // Offset: 0x1D0

    // Failure parameters for sync attacks.
    idSyncFailureParms syncFailure; // Offset: 0x1E8

    // sync interaction decls used on this AI
    idList < idSyncGroup , TAG_IDLIST , false > syncGroups; // Offset: 0x208

    // Which Sync Group we Query by default. Can be Compound ( "stage1;stage2;stage4;" )
    idAtomicString defaultGroup; // Offset: 0x220

    // When submitting multiple slide move queries (that all passed initial tests), should we randomize the order we submit them?
    bool randomizeSlideMoveOrder; // Offset: 0x228

    // Decl to use for aim assist calculations determining sync melees (especially distance)
    idDeclAimAssist* aimAssistDef; // Offset: 0x230

    // if true then always allow chainsaw glory kills without needing stagger states or other such things
    bool alwaysAllowChainsawGloryKill; // Offset: 0x238

    // if true then always allow chainsaw glory kills when sync_enableAlwaysAllowChainsawGloryKillWithCVar is true
    bool alwaysAllowChainsawGloryKillWithCVar; // Offset: 0x239

    // how long after a regular attack before a sync attack can be performed
    int msAfterAttackBeforeCanSync; // Offset: 0x23C

    // Store the instigator so that we can retrieve it later for the purposes of dealing damage.
    idManagedClassPtr < idAnimatedEntity > savedInstigator; // Offset: 0x240

    // always set this with saved instigator, for failsafe usage
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > savedInstigatorTimestamp; // Offset: 0x260

    // Store the target so that we can retrieve it later
    idManagedClassPtr < idAnimatedEntity > savedTarget; // Offset: 0x268

    // Store the valid state so that clients can use it when then get the ack from the server.
    validSyncState_t savedValidState; // Offset: 0x288

    // Store the interaction being performed so we can query information about it
    idDeclSyncInteraction* savedInteraction; // Offset: 0x360

    // all the current groups we check.
    idList < idStr , TAG_IDLIST , false > queriedGroups; // Offset: 0x368

    // damage to use for mp sync kills.
    idDeclDamage* mpDamageDecl; // Offset: 0x380

    // whether we ignore the outline distance checks as the killer
    bool ignoreOutlineDistanceCheck; // Offset: 0x388

    // distance at which we show our outline to killers. Negative means don't check the distance. Let the interactions decide. {{ units = m }}
    float showOutlineDistance; // Offset: 0x38C

    // whether we will always see the Glory Kill color on victims
    bool neverSeeDefaultColor; // Offset: 0x390

    // status effect to apply to the instigating entity for the duration if it is third person and remotely controlled
    idDeclStatusEffect* thirdPersonRemoteInstigatorStatusEffect; // Offset: 0x398

    idManagedClassPtr < idSyncEntity > currentSyncEntity; // Offset: 0x3A0

    idManagedClassPtr < idLight > currentSyncLight; // Offset: 0x3C0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > currentSyncLightUnlinkTime; // Offset: 0x3E0

    // the time at which the current post sync invulnerability ends
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > postSyncInvulnerabilityEndTime; // Offset: 0x3E8

    // the global fx manager handle
    idHandle < unsigned long long , unsigned long long , UINT64_MAX > fxHandle; // Offset: 0x3F0

    bool fxHandleInit; // Offset: 0x3F8

    // The FX Decl to use for the visuals of this sync Attack component.
    idDeclFX* fxDecl; // Offset: 0x400

    idSyncAttack_TraceValidation traceProcessor; // Offset: 0x408

    idSyncAttack_History attackHistory; // Offset: 0x498

    int lastRequestId; // Offset: 0x4E0

    // Use Lighting.
    bool useLights; // Offset: 0x4E4

    // ------------------------------------------------ chainsaw minigame ------------------------------------------------
    idSyncAttack::chainsawMinigame_t chainsawMinigame; // Offset: 0x4E8

    // ------------------------------------------------ lightingParms_t ------------------------------------------------ Lighting parms.
    idSyncAttack::lightingParms_t defaultLightParms; // Offset: 0x4F8

    // ------------------------------------------------ soundParms_t ------------------------------------------------ sound parameters
    idSyncAttack::soundParms_t soundParms; // Offset: 0x568

    // ------------------------------------------------ unitTestParms_t ------------------------------------------------
    idSyncAttack::unitTestParms_t unitTestParms; // Offset: 0x5A0

    idList < idSyncAttack::unitTestQueueData_t , TAG_IDLIST , false > queuedUnitTestData; // Offset: 0x618

    // NOTE: This is only for DEV purposes right now - these don't track which group they're from etc, but if you just want a list of all possible sync interactions, this might be a way. We're probably removing this when we implement the DEV tools for it a better way.
    idList < const idDeclSyncInteraction * , TAG_IDLIST , false > syncInteractionData; // Offset: 0x630

    bool hasAnyMeshKitGroups; // Offset: 0x648

}; // Size: 0x650

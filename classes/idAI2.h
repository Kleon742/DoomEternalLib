struct idAI2 : idActor
{
    enum aiErrorFlags_t : int
    {
        AIERRORFLAG_NONE = 0,
        AIERRORFLAG_NO_AAS = 1,
        AIERRORFLAG_OUT_OF_AAS = 2,
        AIERRORFLAG_MOVE_FAILED = 4,
        AIERRORFLAG_STUCK = 8,
        AIERRORFLAG_OBSTRUCTED = 16,
        AIERRORFLAG_NO_ANIMWEB_PATH = 32,
        AIERRORFLAG_MAX = 6
    };

    enum modifyTraversalClassAction_t : int
    {
        ACTION_SET_CLASSES = 0,
        ACTION_ADD_CLASSES = 1,
        ACTION_REMOVE_CLASSES = 2
    };

    struct idAIConstant
    {
        struct componentDecl_type_tuple_t
        {
            // DON'T CHANGE THIS, JUST DON'T OK
            aiComponentId_t componentType; // Offset: 0x0

            // decl for this component
            idDeclAIComponent* componentDecl; // Offset: 0x8

        }; // Size: 0x10

        // component decl and type enum array of component decls
        idArray < idAI2::idAIConstant::componentDecl_type_tuple_t , 33 > components; // Offset: 0x0

        // component list decl, if this is populated then "components" isn't used
        idDeclAIComponentList* componentList; // Offset: 0x210

        // what stat to increase on death of this ai./move this
        gameStat_t aiDeathStat; // Offset: 0x218

        // what codex to give the player when this ai dies./move this
        idDeclCodexEntry* aiDeathCodex; // Offset: 0x220

        // Sync melee entity setup
        idSyncAttack syncMelee; // Offset: 0x228

        // parms used to control major positioning in behavior fsm/move this
        idList < const idDeclAIPositioningParms * , TAG_AI_UNIT , false > positioningParms; // Offset: 0x878

        // in milliseconds/move this
        milliToGameTime_t deadThinkDelay; // Offset: 0x890

        // default hit joint/move this
        idAtomicString defaultHitJoint; // Offset: 0x8A0

    }; // Size: 0x8A8

    struct idAISerialize
    {
        struct attachmentInfo_t
        {
            // if true this attachment is on
            bool enabled; // Offset: 0x0

            // name of a clip model to attach to our actor.
            idStr name; // Offset: 0x8

            // joint to move us to.
            idIndex < short , invalidJointIndex_t , - 1 > jointId; // Offset: 0x38

            // the content of the model
            int content; // Offset: 0x3C

            // set of fx to play on this attachment
            idDeclFX* fxDecl; // Offset: 0x40

        }; // Size: 0x48

        struct painAnimationEventInfo_t
        {
            // game time that the event occurred
            idTypesafeTime < long long , gameTimeUnique_t , 999960 > eventTime; // Offset: 0x0

            // the time of the last handled event
            idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastHandledEventTime; // Offset: 0x8

            // player index responsible for the event ( 0 is the server )
            int playerIndex; // Offset: 0x10

            // direction to project pain
            idVec3 projDir; // Offset: 0x14

            // join to issue pain on
            idIndex < short , invalidJointIndex_t , - 1 > joint; // Offset: 0x20

            // type of twitch pain
            idDeclTwitchPain::twitchPain_t twitchType; // Offset: 0x24

            // decl mapping twitch pains to alias handles
            idDeclTwitchPain* declTwitchPain; // Offset: 0x28

        }; // Size: 0x30

        struct soundHookEvent_t
        {
            idNetEvent < 15 > eventNeedsToFire; // Offset: 0x0

            bool isStartEvent; // Offset: 0x18

            unsigned char hookIndex; // Offset: 0x19

        }; // Size: 0x20

        // attachments
        idAI2::idAISerialize::attachmentInfo_t attachment; // Offset: 0x0

        // Pain Animation
        idAI2::idAISerialize::painAnimationEventInfo_t painAnimationEventInfo; // Offset: 0x48

        aiForcedDeathInfo_t forcedDeathInfo; // Offset: 0x78

        idAnimator_Pain* painAnimator; // Offset: 0xB40

        // does this ai have loot? Set on death
        bool hasLoot; // Offset: 0xB48

        // are we predicting a loot body event
        bool predictedLootBody; // Offset: 0xB49

        bool dead; // Offset: 0xB4A

        bool hidden; // Offset: 0xB4B

        bool hasFinishedEntranceAnim; // Offset: 0xB4C

        // server tells clients to explode
        idNetEvent < 15 > serverAuthExplode; // Offset: 0xB50

        idArray < idAI2::idAISerialize::soundHookEvent_t , 3 > soundHooks; // Offset: 0xB68

        unsigned char currentSoundHook; // Offset: 0xBC8

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > healthSuppressTimer; // Offset: 0xBD0

    }; // Size: 0xBD8

    struct goreOverride_t
    {
        idEntity* inflictor; // Offset: 0x0

        // contains the damage params to be used in the gore in case we override it
        idDamageParms* goreDamageParams; // Offset: 0x8

    }; // Size: 0x10

    // constant settings
    idAI2::idAIConstant aiConstants; // Offset: 0x4BD8

    // ------------------------ all editable properties (changeable by designers) are collected in idAIEditable ------------------------ all designer-modifiable settings
    idAIEditable aiEditable; // Offset: 0x5480

    // volatile variables for idAI2
    idAIVolatile* aiVolatile; // Offset: 0x5960

    idHandle < unsigned long long , unsigned long long , UINT64_MAX > fxActionGroupStagger; // Offset: 0x5968

    idAI2::idAISerialize aiSerialize; // Offset: 0x5970

    // Damage Mitigation names list
    idList < idAtomicString , TAG_IDLIST , false > damageMitigationNames; // Offset: 0x6548

    // health component for AI
    idAIHealth aiHealth; // Offset: 0x6560

    // action script component
    idComponentActionScript actionScript; // Offset: 0x6740

    // gore component
    idGoreComponent goreComponent; // Offset: 0x67C0

    // damage over time component
    idDOTComponent dotComponent; // Offset: 0x7708

    // scale applied to damage
    idDamageScaleTableComponent damageScaleTableComponent; // Offset: 0x165A0

    // all ai components, addressable by enumeration
    idArray < idAI2Component * , 33 > aiComponents; // Offset: 0x165B8

    // hacky pointer to our own part of the pre-think parms
    aiPreThinkJobParms_t* myPreThinkParms; // Offset: 0x166C0

    // List of damage groups that can't/won't take damage
    idStaticList < const idDamageGroup * , 4 , false , TAG_IDLIST > invulnerableDamageGroups; // Offset: 0x166C8

    // List of damage groups that have been activated as weak spots
    idStaticList < const idDamageGroup * , 8 , false , TAG_IDLIST > activeWeakSpots; // Offset: 0x16700

    // list of enviromental damage that is not allowed to damage the ai
    idList < environmentalDamageType_t , TAG_AI_UNIT , false > invulnerableEnviromentDamage; // Offset: 0x16758

    // start death smoke fx
    idNetEvent < 15 > startDeathSmokeFx; // Offset: 0x16770

    // This marked by the encounter system on spawn
    bool contributesToLevelScoring; // Offset: 0x16788

    bool tentacleExposed; // Offset: 0x16789

    // equipment pull
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > equipmentPullStartTime; // Offset: 0x16790

    aiEntityProxy_t* actionTarget; // Offset: 0x16798

    // if throwing consecutive emp's within a window,
    int empDiminishingReturnLevel; // Offset: 0x167A0

    // each emp changes the value similar to a bucket  that gives diminishing return the more emp's you throw. amount of time an AI_TYPE is frozen by an EMP (Ice Bomb)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > empTimeFrozen; // Offset: 0x167A8

    // The AI_TYPE can support touch components
    idTouchComponent* touchAI2Component; // Offset: 0x167B0

    // FIXME -- hacks in here so we can at least see which AI crashes in crash log callstacks XXX: This can't be #if'd out or typeinfo breaks!
    int hack_prevent_optimize; // Offset: 0x167B8

    // keep track of the gore override params
    idAI2::goreOverride_t goreOverride; // Offset: 0x167C0

    idEntityPtr_ThreadSafe < idAnimatedEntity > botSlaveEntity; // Offset: 0x167D0

    idUserCmd* botUserCmd; // Offset: 0x167E8

    idList < fxStartInfo_t , TAG_IDLIST , false > fxStartReliableMessageQueue; // Offset: 0x167F0

    idList < fxStopInfo_t , TAG_IDLIST , false > fxStopReliableMessageQueue; // Offset: 0x16808

    bool idleFXAllowed; // Offset: 0x16820

    // misc
    int poolIndex; // Offset: 0x16824

    bool isDebugEnt; // Offset: 0x16828

    bool meatHookEnabled; // Offset: 0x16829

    perAIJobs_t myJobs; // Offset: 0x16830

    // if dev networking is enabled, this is actually present on identity instead
    int snapshotIndex; // Offset: 0x16850

    // ID_ENABLE_DEV_NETWORKING
    int snapshotIndex_prev; // Offset: 0x16854

    // FIXMEHACK -- when client detects bad info from server, it suppresses future serialization until entity is respawned
    bool suppressSerialization; // Offset: 0x16858

}; // Size: 0x16860

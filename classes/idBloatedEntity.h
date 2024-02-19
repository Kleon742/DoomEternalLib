struct idBloatedEntity : idEntity
{
    struct entityFlags_t
    {
        // if true then entity is not visible
        bool hide; // Offset: 0x0

        // if true will skip impact effects
        bool skipImpactEffect; // Offset: 0x0

        // if true, this is the initial hide when spawning
        bool hideOnSpawn; // Offset: 0x0

        // if true then the model is hidden but the entity can still think and animate.
        bool hideModel; // Offset: 0x0

        // if true the entity can go dormant
        bool canBecomeDormant; // Offset: 0x0

        // if true always update from the physics whether the object moved or not
        bool forcePhysicsUpdate; // Offset: 0x0

        // if true then don't use entity when flooding portals
        bool noFlood; // Offset: 0x0

        // if false, don't call OnActivate() or script 'onTrigger' for this entity
        bool isActivatable; // Offset: 0x0

        // if true no knockback from hits
        bool noknockback; // Offset: 0x0

        // if true this entity can be damaged
        bool takedamage; // Offset: 0x0

        // if true the entity is dormant
        unsigned char isDormant; // Offset: 0x0

        // if true, never adds a sight sense stimulus
        bool noSightStimulus; // Offset: 0x0

        // true if an entity touches triggers or volumes
        bool touchesTriggers; // Offset: 0x0

        // true if this entities articulated figure should touch triggers (entity must still call TouchTriggers() explicitly for this to work)
        bool afTouchesTriggers; // Offset: 0x0

        // if true, this entity will be used as a potential aim assist target. By default OFF. Only special AI and special rare entities should turn this on.
        bool isAimAssistTarget; // Offset: 0x0

        // if true, the model can come through portal effects instead of being clipped off at the portal plane
        bool crossingModel; // Offset: 0x0

        // if true, this entity should not send their render model info across the network to clients.
        bool skipRenderModelReplication; // Offset: 0x0

        // if true, this entity will not have contents replicated from the server
        bool skipContentsReplication; // Offset: 0x0

        // if true, this entity has a static render model and should never change so we don't need to send it over the network.
        bool staticRenderModel; // Offset: 0x0

        // if true, when physics is turned off on the client due to serialization, snaps to the interpolation destination (which should be where it was when physics turned off)
        bool finishInterpolationOnDeactivate; // Offset: 0x0

        // entity was spawned using the console spawn command
        bool spawnedFromConsole; // Offset: 0x0

        // if true then Spawn will call BecomeActive( TH_FX ) and FX will get think updates
        bool forceFXThink; // Offset: 0x0

        // if true, entity caused damage to a weak point on an AI - this is test by damage receivers to see if damageParms.weakPoint damage modifiers apply
        bool hitWeakPoint; // Offset: 0x0

        // if true, entity caused damage to a mouth damage group - this can cause the hit AI to gulp down a projectile
        bool hitMouth; // Offset: 0x0

        // if true, entity got a headshot
        bool hitHead; // Offset: 0x0

        // if true we are in the middle of the execution loop
        bool processing; // Offset: 0x0

        // if true we are in the middle of the execution loop
        bool snapShotEntity; // Offset: 0x0

        // if true allows variable frame rate on entity
        bool allowVariableFrameRate; // Offset: 0x0

        // if true allows fx to be updated on this entity
        bool fxEnabled; // Offset: 0x0

        // if true the interactable render model will draw in its deferred position
        bool drawOnDeferredPos; // Offset: 0x0

        // if true do not spawn on master levels
        bool removeFromMasterLevel; // Offset: 0x0

        // When set, unlink when hidden
        bool unlinkWhenHidden; // Offset: 0x0

    }; // Size: 0x4

    struct debugEntityFlags_t
    {
        // show information for this particular entity
        bool showEntityInfo; // Offset: 0x0

    }; // Size: 0x1

    struct idBindInfo
    {
        enum enum_1C401 : int
        {
            NUM_LIST_MUTEXES = 64
        };

        // m_name of parent entity to bind to
        idManagedClassPtr < idBloatedEntity > bindParent; // Offset: 0x0

        // m_name of joint on parent entity to bind to (instead of bindToTag below)
        idStr bindToJoint; // Offset: 0x20

        // m_name of tag on parent to bind entity to (instead of bindToJoint above)
        idStr bindToTag; // Offset: 0x50

        // m_name of animation used when binding other entities to this entity
        idStr bindAnim; // Offset: 0x80

        // the bind object should be oriented with the bind parent
        bool bindOriented; // Offset: 0x0

        // if true this entity also shares lighting and shadow properties with the parent entity
        bool bindLighting; // Offset: 0x0

        // if true this entity is considered solid when a physics team mate pushes entities
        bool solidForTeam; // Offset: 0x0

        // if true, the bound entity will snap is origin to the origin of the bindJoint.
        bool snapToJointOrigin; // Offset: 0x0

        // don't allow local offset, lock directly to the bone/master/etc
        bool lockLocalOffset; // Offset: 0x0

        // Use the reference pose to calculate the local offset.
        bool bindToReferencePose; // Offset: 0x0

        // snap to, but for players
        bool snapToForPlayer; // Offset: 0x0

        // true if the entity was using deferred origin
        bool useDeferredOrigin; // Offset: 0x0

        // entity bound to if unequal NULL
        idManagedClassPtr < idBloatedEntity > bindMaster; // Offset: 0xB8

        // master of the physics team
        idManagedClassPtr < idBloatedEntity > teamMaster; // Offset: 0xD8

        // next entity in physics team
        idManagedClassPtr < idBloatedEntity > teamChain; // Offset: 0xF8

        // joint bound to if unequal INVALID_JOINT_INDEX
        idIndex < short , invalidJointIndex_t , - 1 > bindJoint; // Offset: 0x118

        // tag bound to
        tagData_t bindTag; // Offset: 0x11C

    }; // Size: 0x140

    struct idDormancy
    {
        // how long before an entity goes dormant in seconds
        float delay; // Offset: 0x0

        // an entity must be at least this far away to ever go dormant {{ units = m }} soft value entity might go dormant after delay
        float distance; // Offset: 0x4

        // the distance (meters) away from the slayer where this entity goes dormant, this is a hard value entity will go dormant once this is reached
        int playerDistance; // Offset: 0x8

        // the distance (meters) away from the slayer where this entity goes dormant when the entity is behind the player, will be overridden when playerDistance < playerRearwardDistance
        int playerRearwardDistance; // Offset: 0xC

        // if true and allowDormancy == true, allows dormancy based on distance to be enabled for this entity type
        bool allowDistanceDormancy; // Offset: 0x0

        // if true allows dormancy system to be active
        bool allowDormancy; // Offset: 0x0

        // if true allows pvs dormancy on this entity to be active
        bool allowPvsDormancy; // Offset: 0x0

        // When were we last in player Range.
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastTimeInPlayerRange; // Offset: 0x18

        // last time the entity was visible in a player's pvs
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastTimeInPlayerPVS; // Offset: 0x20

        // time when entity last became dormant
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > becomeDormantTime; // Offset: 0x28

        // time when suppression of normal dormancy tests ends
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > endForceTime; // Offset: 0x30

        // if we're forcing dormancy which way to force.
        bool forceDormant; // Offset: 0x38

    }; // Size: 0x40

    struct snapshotPriorityState_t
    {
        // the priority of this entity should rise and fall as it aproaches this soft limit, once it is send it will fall back down in priority
        int softSendRateLimit; // Offset: 0x0

        // if this entity hasnt send by this time in MS we HAVE to send it on the next snap
        int hardSendRateLimit; // Offset: 0x4

    }; // Size: 0x8

    struct idFXEntityActionGroupOwner : idFXActionGroupOwner
    {
        idManagedClassPtr < idEntity > owner; // Offset: 0x8

    }; // Size: 0x28

    int numTimesUsed; // Offset: 0x240

    bool poolInitDefaultPhysicsDone; // Offset: 0x244

    // the fx decl
    idDeclFX* internalFXDecl; // Offset: 0x248

    // offset for sound object position in model space
    idVec3 soundOffset; // Offset: 0x250

    // the highlightDecl
    idDeclHighlight* highlightDecl; // Offset: 0x260

    int highlightHandle; // Offset: 0x268

    // If TRUE, the local machine will not apply an interpolated position. At that point, the local machine can move that entity as it wishes.
    bool interpolatedPositionIgnored; // Offset: 0x26C

    // saving for map entities SGT_NO_SAVE == never saves SGT_NORMAL == saves whenever possible, including checkpoints, deaths, etc... SGT_CHECKPOINT == saves on checkpoint ONLY SGT_MAX == do not use this!!
    saveGameSerType_t whenToSave; // Offset: 0x270

    // type of save SGS_LEVEL_DATA, data belongs to current map/level only SGS_GAME_DATA, data belongs to the current game replay SGS_PROFILE_DATA, data belongs to the player forever, this is a special case for the profile data SGS_MAP_START, saves ONLY at the beginning of the level/map
    saveGameSerSpan_t saveType; // Offset: 0x274

    // std tags for save data description
    saveGameSerTags_t saveGameSerTags; // Offset: 0x278

    // if the save for this entity is gated it will not save any data until the gate is removed
    bool saveIsGated; // Offset: 0x280

    // bypass the entity save system and allow a custom implementation of save for entities
    bool saveIsCustom; // Offset: 0x281

    // flag to indicate behavior on what to do with this entity after being removed from the world RMV_NEVER == never permanently remove entity RMV_CHECKPOINT == permanently removes entity on checkpoint RMV_IMMEDIATE == permanently removes entity immediately RMV_CHECKPOINT_ALLOW_MS == permanently removes entity on checkpoint, allows reuse on mission select RMV_IMMEDIATE_ALLOW_MS == permanently removes entity immediately, allows reuse on mission select
    progressFlags_t removeFlag; // Offset: 0x284

    // automap properties decl
    idDeclAutomapProperties* automapPropertiesDecl; // Offset: 0x288

    // Have I been registered with the automap? Happens in idBloatedEntity::Spawn
    bool registeredOnAutomap; // Offset: 0x290

    // how light targeting affects this entity
    entityLightTargetingFlags_t lightTargetingFlags; // Offset: 0x294

    // time this entity was spawned
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > spawnTime; // Offset: 0x298

    // used to deduct the spawn stats if this is removed and not used
    bool removeAsUnused; // Offset: 0x2A0

    // If this is entity is tied to an objective, show or hide it from the compass
    bool showOnCompass; // Offset: 0x2A1

    // this structure is memset, so the default-constructor value will be false various flags
    idBloatedEntity::entityFlags_t flags; // Offset: 0x2A2

    idBloatedEntity::debugEntityFlags_t debugFlags; // Offset: 0x2A6

    // when this entity is activated these entities are activated
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > targets; // Offset: 0x2A8

    // model rendered for this entity
    idRenderModelInfo renderModelInfo; // Offset: 0x2C0

    entityLightRig_t lightRig; // Offset: 0x3F8

    // Don't load the light rig on this entity.
    bool suppressLightRig; // Offset: 0x410

    highlightColor_t highlightColor; // Offset: 0x414

    // The previous highlight color before the server told us what the new value is.
    highlightColor_t preSerializedHighlightColor; // Offset: 0x418

    // collision model used by this entity
    idClipModelInfo clipModelInfo; // Offset: 0x420

    idAnimSys* animSysPtr; // Offset: 0x478

    idPerfectPlacementComponent* perfectPlacementPtr; // Offset: 0x480

    // entity bind information
    idBloatedEntity::idBindInfo bindInfo; // Offset: 0x488

    // settings for dormancy
    idBloatedEntity::idDormancy dormancy; // Offset: 0x5C8

    // Static Pointer if we need it
    idHavokPhysics_DefaultStatic* staticPhysicsObjHavok; // Offset: 0x608

    // Should transform changes network Serialize? If they have no Gameplay Impact, the answer is typically no. A good example is bobbing props/rotating props
    bool networkSerializeTransforms; // Offset: 0x610

    // Increase these stats on spawn.
    idList < statManipulation_t , TAG_IDLIST , false > spawn_statIncreases; // Offset: 0x618

    // keep track of whether we increased the stats
    bool spawnStatsIncreased; // Offset: 0x630

    // __saveobj idPresentable*presentable; Presentable for this entity. Container that has all the midnights
    idDeclMidnightLogicContainer* currentMidnightSceneContainer; // Offset: 0x638

    // TH_? flags
    int thinkFlags; // Offset: 0x640

    idNetValue < int > netThinkFlags; // Offset: 0x648

    // If false, changing hidden/shown state will not propagate from server->clients.
    bool propagateHiddenStateChanges; // Offset: 0x658

    // if true, call CommitThisFrame on render model once
    bool forceCommitThisFrame; // Offset: 0x659

    // Need to hide/show only at the right time (especially to sync up with teleports etc)
    idNetEvent < 15 > becomeHidden; // Offset: 0x660

    idNetEvent < 15 > becomeShown; // Offset: 0x678

    // If true and becomeHidden and becomeShown were set on the same frame, those netBools are not enough to determine
    idNetValue < int > lastEdgeIsShow; // Offset: 0x690

    // which one was last and thus if this entity should become hidden or shown on the client. This is not a netBoolEvent_t because we need to be able to set/clear this value multiple times in a frame if multiple Show/Hide() calls are made. Uses int instead of bool for serialization purposes.
    idEntityPhysicsCallbacks physicsCallbacks; // Offset: 0x6A0

    idHavokGatherQueryId touchTriggersQuery; // Offset: 0x6B0

    idManagedClassPtr < idEntity > serializationBindMaster; // Offset: 0x6B8

    bindFlags_t serializationBindFlags; // Offset: 0x6D8

    idBloatedEntity::idBindInfo serializationBindInfo; // Offset: 0x6E0

    bool serializationShouldHaveJointBinding; // Offset: 0x820

    unsigned short serializationBindJointIndex; // Offset: 0x822

    bool serializationShouldHaveBinding; // Offset: 0x824

    bool serializationHasModel; // Offset: 0x825

    renderModelType_t serializationRenderModelType; // Offset: 0x828

    unsigned long long serializationRenderModelResourceID; // Offset: 0x830

    char serializationModelName[256]; // Offset: 0x838

    // Clip contents right before serialization
    int preSerializationClipContents; // Offset: 0x938

    // Clip contents right after serialization
    int postSerializationClipContents; // Offset: 0x93C

    // number of renderer areas the entity covers
    int numPVSAreas; // Offset: 0x940

    // numbers of the renderer areas the entity covers
    int PVSAreas[8]; // Offset: 0x944

    // bounds used for last PVS check
    idBounds lastPVSBounds; // Offset: 0x964

    // used to track how many kills this has, useful for stat tracking on user deployed bots
    int entitiesKilled; // Offset: 0x97C

    // Pointer to a player that is controlling us
    idManagedClassPtr < idPlayer > controller; // Offset: 0x980

    bool isSpawnProxy; // Offset: 0x9A0

    // Is true if this entity is currently being controlled by Scene Director
    bool isControlledBySceneDirector; // Offset: 0x9A1

    // ------------------------ Useability data ------------------------ the mask of all the players that can use this entity
    unsigned char usablePlayerMask; // Offset: 0x9A2

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastUsedTime; // Offset: 0x9A8

    // ------------------------ Networking vars ------------------------ Network Object ID for this Entity
    int networkObjectID; // Offset: 0x9B0

    // the current state of this item for networking serialization
    entitySerializationState_t serializedState; // Offset: 0x9B4

    // Bucket size the entity should fit into when serializing.
    entitySerializationSize_t serializedSizeEstimate; // Offset: 0x9B8

    // if TRUE the server wants to stop sending this entity BUT maintain control of it, isSerialized will stay true and we will
    bool shouldGoSerializedDormancy; // Offset: 0x9BC

    // try to removed this entity from the snapshot every WriteToSnapshot;
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > snapRate; // Offset: 0x9C0

    // the lastSnapTime we are interpolating from
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastSnapShotLocalTime; // Offset: 0x9C8

    // the nextSnapTime we are interpolating to
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextSnapShotLocalTime; // Offset: 0x9D0

    // the server time of the snapshot we are interpolating from
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastSnapShotServerTime; // Offset: 0x9D8

    // the server time of the snapshot we are interpolating to
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextSnapShotServerTime; // Offset: 0x9E0

    // This object is really a "global" object (gameChallenge, various managers), and should be full priority, not location-dependent.
    bool globalFullPriorityObject; // Offset: 0x9E8

    // SPAWN_ID_NONE if we're not predicted or have not yet been synced up.
    idSpawnId prePredictionSpawnId; // Offset: 0x9EC

    // the prodiction key for this entity, it is a way to sync up a client predicted entity with the server serialized entity.
    unsigned int predictedKey; // Offset: 0x9F0

    // Used to determine if this is the first time PostSerializeRead was called
    bool firstPostSerializeRead; // Offset: 0x9F4

    // the serialized count we stopped sending on
    int stopSerializeCount; // Offset: 0x9F8

    // Index into the serialized entity list
    int serializedIndex; // Offset: 0x9FC

    // If we're a client, the server entity number. -1 if we don't have one.
    int remoteEntityNumber; // Offset: 0xA00

    // number of times we've been serialized
    int serializeCount; // Offset: 0xA04

    // number of times we've done a serialize Read since having PostSerializeRead called on us(potentially counting the one we're inside)
    int repeatedSerializeReadCount; // Offset: 0xA08

    // Used to determine if we have serialized the newest state from the snapshot
    int changedCount; // Offset: 0xA0C

    // the delta interpolation for this entity, will grow and shrink as needed
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > currentSnapShotDelta; // Offset: 0xA10

    // the team associated with this entity during teamplay
    gameTeam_t team; // Offset: 0xA18

    // team data to see if it has changed after serialization
    gameTeam_t preSerializationTeam; // Offset: 0xA1C

    bool becameReplicated; // Offset: 0xA20

    // If true, plan to not update network position on the next serialize (unless it went back to false).
    bool expectToIgnoreNextNetworkPosition; // Offset: 0xA21

    // Used for times when clients are going to do predicted movement (ledgegrab) For network serialization. 0 = previous frame, 1 = next frame {{ units = m }}
    idVec3 snapshotOrigins[2]; // Offset: 0xA24

    // For network serialization. 0 = previous frame, 1 = next frame
    idMat3 snapshotAxis[2]; // Offset: 0xA3C

    // Delta values that are set when the server or client disagree on where the render model should be. If this happens, they resolve it through DecayOriginAndAxisDelta() {{ units = m }}
    idVec3 originDelta; // Offset: 0xA84

    idMat3 axisDelta; // Offset: 0xA90

    idBloatedEntity::snapshotPriorityState_t snapshotPriorityState; // Offset: 0xAB4

    // true if a kill by this entity should be credited to a player (should be true for idPlayer, idDemonPlayer, turrets, etc)
    bool validPlayerKillRecipient; // Offset: 0xABC

    // Any valid interact mesh kits groups. These will highlight rather than the base render model
    idList < idStr , TAG_IDLIST , false > validInteractMeshKitGroups; // Offset: 0xAC0

    entityPoolState_t poolState; // Offset: 0xAD8

    idBloatedEntity::idFXEntityActionGroupOwner fxActionGroupOwner; // Offset: 0xAE0

    // set a flag to exclude this entity from sound occlusion
    bool soundOcclusionBypass; // Offset: 0xB08

    // set a flag to exclude this entity from sound occlusion
    bool soundVirtualizationBypass; // Offset: 0xB09

    idSoundObject soundObject; // Offset: 0xB10

    // Networking relevancy flags for this entity
    idNetRelevance::netRelevanceFlags_t netRelevancyFlags; // Offset: 0xB20

    // Entity Peer mask
    uint16 peerMask; // Offset: 0xB24

    // Amount of times Entity has been sent over the network
    unsigned int networkSerializationCount; // Offset: 0xB28

    idHandle < unsigned long long , unsigned long long , UINT64_MAX > fxActionGroup; // Offset: 0xB30

    miscEntityFlags_t miscFlags; // Offset: 0xB38

    idMidnight::instanceHandle midnightHandle; // Offset: 0xB3C

    // bindMaster at start of Midnight (for handling temporary Midnight unbinds)
    idManagedClassPtr < idEntity > preMidnightBindMaster; // Offset: 0xB40

    // entity's nav mesh, if needed
    idAINavMesh* navMesh; // Offset: 0xB60

    // the name string of said entity to display
    idList < idStrId , TAG_IDLIST , false > killerNames; // Offset: 0xB68

    bool fxActionGroupInit; // Offset: 0xB80

}; // Size: 0xB88

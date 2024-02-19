struct idInventoryItem;
struct dropItemType_t;
struct idVec3;
template<typname T, typname T, typname T>
struct idTypesafeTime;
struct gameTimeUnique_t;
struct idDeclDamage;

struct idActor : idAnimatedEntity
{
    struct dropItemInfo_t
    {
        idInventoryItem* item; // Offset: 0x0

        dropItemType_t dropType; // Offset: 0x8

        bool deleteOnDrop; // Offset: 0xC

        int count; // Offset: 0x10

        // {{ units = m }}
        idVec3 offset; // Offset: 0x14

        // {{ units = m / s }}
        idVec3 velocity; // Offset: 0x20

    }; // Size: 0x30

    struct damageCapTracker_t
    {
        // add up all damage this frame so we can potentially cap
        float damageThisFrame; // Offset: 0x0

        // when this changes, reset cumulative damage
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > damageTime; // Offset: 0x8

        // entity number of attacker
        int attackerEntNum; // Offset: 0x10

        // damage decl being used
        idDeclDamage* damageDecl; // Offset: 0x18

    }; // Size: 0x20

    struct idActorConstant
    {
        struct idActorModel
        {
            // bone name sound emits from - TODO: determine from bone group on MD6 decl
            idAtomicString soundJoint; // Offset: 0x0

            // offset of visual model relative to the physics origin {{ units = m }}
            idVec3 modelOffset; // Offset: 0x8

        }; // Size: 0x18

        struct idActorPerception
        {
            // offset of eye relative to physics origin {{ units = m }}
            idVec3 eyeOffset; // Offset: 0x0

            // eye offset when crouched {{ units = m }}
            idVec3 crouchedEyeOffset; // Offset: 0xC

        }; // Size: 0x18

        struct weaponFolyForImpact_t
        {
            // impact table to use for specified weapon
            idDeclImpactEffect* weaponFolyTable; // Offset: 0x0

            // weapon to apply this foly to
            idDeclWeapon* weaponForFoly; // Offset: 0x8

        }; // Size: 0x10

        struct waterInteraction_t
        {
            // prt to play when actor is moving slowly or standing in water
            idDeclParticle* waterPrtSlow; // Offset: 0x0

            // prt to play when actor is moving quickly in water
            idDeclParticle* waterPrtFast; // Offset: 0x8

            // prt to play when actor falls over into water (ie, on death)
            idDeclParticle* waterPrtSplash; // Offset: 0x10

            // play the slow water interaction particles when the actor is moving at or below this speed {{ units = m / s }}
            float moveSpeedSlow; // Offset: 0x18

            // smoke system emission rate for prts
            float emissionRate; // Offset: 0x1C

        }; // Size: 0x20

        struct aimAssistActorData_t
        {
            // this allows for uniformely scaling of the aim assist radii on a per actor type basis. Only special characters that are much larger or smaller than a humanoud should adjust this value
            float radiusOverrideScale; // Offset: 0x0

            // if true, then melee attacks will only target the head, which is useful for shorter characters
            bool meleeTargetHeadOnly; // Offset: 0x4

        }; // Size: 0x8

        struct painInfo_t
        {
            // the max value for the leaky bucket
            float bucketMaxValue; // Offset: 0x0

            // the decay rate for the bucket
            float decayRate; // Offset: 0x4

            // delay for the decay, in game ticks.
            idTypesafeTime < int , millisecondUnique_t , 1000 > decayDelay; // Offset: 0x8

        }; // Size: 0xC

        struct aimPointJoint_t
        {
            // the type of aimpoint
            aimPoint_t type; // Offset: 0x0

            // the joint to be associated with the aimpoint
            idAtomicString name; // Offset: 0x8

        }; // Size: 0x10

        // information specific to this actor's model
        idActor::idActorConstant::idActorModel modelInfo; // Offset: 0x0

        // non-editable settings related to senses
        idActor::idActorConstant::idActorPerception perception; // Offset: 0x18

        // sounds this actor makes
        idActorSounds actorSounds; // Offset: 0x30

        // table for proper impact effect of footsteps (running)
        idDeclImpactEffect* footstepEffectTable; // Offset: 0x68

        // same as footstepEffectTable but for rear legs if NULL will use footstepEffectTable
        idDeclImpactEffect* rearFootstepEffectTable; // Offset: 0x70

        // table for proper impact effect of sprinting if NULL will use foostepEffectTable
        idDeclImpactEffect* footstepEffectTable_Sprint; // Offset: 0x78

        // same as footstepEffectTable_Sprint but for rear legs if NULL will use footstepEffectTable_Sprint
        idDeclImpactEffect* rearFootstepEffectTable_Sprint; // Offset: 0x80

        // table for impact effects of slow walking if NULL will use footstepEffectTable
        idDeclImpactEffect* footstepEffectTable_SlowWalk; // Offset: 0x88

        // same as footstepEffectTable_SlowWalk but for rear legs if NULL will use footstepEffectTable_SlowWalk
        idDeclImpactEffect* rearFootstepEffectTable_SlowWalk; // Offset: 0x90

        // table for impact effects of crouch walking if NULL will use footstepEffectTable_SlowWalk
        idDeclImpactEffect* footstepEffectTable_CrouchWalk; // Offset: 0x98

        // table for proper impact effect of footsteps when landing from a jump
        idDeclImpactEffect* footstepEffectTable_Landing; // Offset: 0xA0

        // table for proper impact effect of footsteps when landing from a high fall. if NULL will use footstepEffectTable_Landing
        idDeclImpactEffect* footstepEffectTable_HeavyLanding; // Offset: 0xA8

        // whether to ever look at the Friendly footsteps. if TRUE, Friendly listeners will only ever hear the _Friendly effects
        bool useFriendlyFootsteps; // Offset: 0xB0

        // table for proper impact effect of footsteps for a friendly listener. if NULL will use foostepEffectTable
        idDeclImpactEffect* footstepEffectTable_Friendly; // Offset: 0xB8

        // table for proper impact effect of sprinting for a friendly listener. if NULL will use footstepEffectTable_Friendly
        idDeclImpactEffect* footstepEffectTable_FriendlySprint; // Offset: 0xC0

        // table for impact effects of slow walking or a friendly listener. if NULL will use footstepEffectTable_Friendly
        idDeclImpactEffect* footstepEffectTable_FriendlySlowWalk; // Offset: 0xC8

        // table for impact effects of crouch walking or a friendly listener. if NULL will use footstepEffectTable_FriendlySlowWalk
        idDeclImpactEffect* footstepEffectTable_FriendlyCrouchWalk; // Offset: 0xD0

        // table for proper impact effect of footsteps when landing from a jump for a friendly listener. if NULL will use footstepEffectTable_Friendly
        idDeclImpactEffect* footstepEffectTable_FriendlyLanding; // Offset: 0xD8

        // table for proper impact effect of footsteps when landing from a high fall for a friendly listener. if NULL will use footstepEffectTable_FriendlyLanding
        idDeclImpactEffect* footstepEffectTable_FriendlyHeavyLanding; // Offset: 0xE0

        // table for proper impact effect of hands when ledge grabbing
        idDeclImpactEffect* ledgeGrabEffectTable; // Offset: 0xE8

        // table for proper impact effect of hands when ledge grabbing from a high fall
        idDeclImpactEffect* ledgeGrabEffectTable_Heavy; // Offset: 0xF0

        // table for proper impact effect of hands when ledge grabbing for a friendly listener
        idDeclImpactEffect* ledgeGrabEffectTable_Friendly; // Offset: 0xF8

        // table for proper impact effect of hands when ledge grabbing from a high fall for a friendly listener
        idDeclImpactEffect* ledgeGrabEffectTable_FriendlyHeavy; // Offset: 0x100

        // table for proper impact effect when player is on wall
        idDeclImpactEffect* wallClimbEffectTable_AttachToWall_Left; // Offset: 0x108

        // table for proper impact effect when player is on wall
        idDeclImpactEffect* wallClimbEffectTable_AttachToWall_Right; // Offset: 0x110

        // table for proper impact effect when player is on wall
        idDeclImpactEffect* wallClimbEffectTable_JumpOffWall; // Offset: 0x118

        // table for proper impact effect when player is on wall
        idDeclImpactEffect* wallClimbEffectTable_ClimbMoving_Left; // Offset: 0x120

        // table for proper impact effect when player is on wall
        idDeclImpactEffect* wallClimbEffectTable_ClimbMoving_Right; // Offset: 0x128

        // table for proper impact effect when player is on wall
        idDeclImpactEffect* wallClimbEffectTable_ClimbStopped; // Offset: 0x130

        // table for proper impact effect when player is on wall
        idDeclImpactEffect* wallClimbEffectTable_AttachHand; // Offset: 0x138

        // table for proper impact effect when player is on wall
        idDeclImpactEffect* wallClimbEffectTable_RemoveHand; // Offset: 0x140

        // table for proper impact effect when player is using monkey bar
        idDeclImpactEffect* monkeyBarEffectTable_Start; // Offset: 0x148

        // table for proper impact effect when player is using monkey bar
        idDeclImpactEffect* monkeyBarEffectTable_Stop; // Offset: 0x150

        // List for weapon foly impact events
        idList < idActor::idActorConstant::weaponFolyForImpact_t , TAG_IDLIST , false > weaponFolyForImpactList; // Offset: 0x158

        // table for AI events to send for each kind of footsteps
        idDeclFootstepEvents* footstepEvents; // Offset: 0x170

        // water interaction parms
        idActor::idActorConstant::waterInteraction_t waterInteraction; // Offset: 0x178

        // type of actor
        actorClass_t actorClass; // Offset: 0x198

        // aim assist data
        idActor::idActorConstant::aimAssistActorData_t aimAssistData; // Offset: 0x19C

        // the constant pain data for this actor
        idActor::idActorConstant::painInfo_t painInfo; // Offset: 0x1A4

        // size of bounding box that collides with the player {{ units = m }}
        idVec3 playerCollisionSize; // Offset: 0x1B0

        // bullet penetration data
        idDamageParms::actorPenetrationData_t bulletPenetrationData; // Offset: 0x1BC

        // by default the meat hook go to position is the center of their bounds this overrides that to the aim point
        bool meatHookTargetIsViewPosition; // Offset: 0x1C4

    }; // Size: 0x1C8

    struct clientPredictionHistory_t
    {
        idVec3 pos; // Offset: 0x0

        idTypesafeTime < int , millisecondUnique_t , 1000 > time; // Offset: 0xC

    }; // Size: 0x10

    struct afImpulse_t
    {
        idVec3 impulseDirOrInflictorOrigin; // Offset: 0x0

        idDeclDamage* damageDecl; // Offset: 0x10

        idIndex < short , invalidJointIndex_t , - 1 > jointIndexImpulsed; // Offset: 0x18

        float radiusScale; // Offset: 0x1C

        int impulseCount; // Offset: 0x20

        int impulseFrame; // Offset: 0x24

    }; // Size: 0x28

    struct idActorEditable
    {
        // current body state
        posture_t bodyState; // Offset: 0x0

        // names of joint groups, their associated damage scale, and armor level
        idEntityDamageComponent entityDamageComponent; // Offset: 0x8

        // defines parameters of each injured state
        idList < idInjuredState , TAG_IDLIST , false > injuredStates; // Offset: 0x130

        // injured state that the actor spawns in
        int initialInjuredState; // Offset: 0x148

        // names of joints to trace to for radius damage tests
        idList < idStr , TAG_IDLIST , false > radiusDamageJoints; // Offset: 0x150

        // names of hitTestGroups to trace to when calculating radius damage, USE WITH DISCRETION!! each hitTestGroup can contain multiple spheres and will cause a trace to each one
        idList < idStr , TAG_IDLIST , false > radiusDamageHitTestGroups; // Offset: 0x168

        // names of joint groups to use for aim assist and targeting
        idList < idStr , TAG_IDLIST , false > targetingGroups; // Offset: 0x180

    }; // Size: 0x198

    struct idActorVolatile
    {
        struct idActorModelCache
        {
            // axis of the actor render model
            idMat3 modelAxis; // Offset: 0x0

            // axis of the actor's eye
            idMat3 eyeAxis; // Offset: 0x24

            // position of the actor's eye bone after last frame {{ units = m }}
            idVec3 eyePos; // Offset: 0x48

            // joint handle for the joint that emits sounds
            idIndex < short , invalidJointIndex_t , - 1 > soundJoint; // Offset: 0x54

            // joint handle for the eye
            idIndex < short , invalidJointIndex_t , - 1 > eyeJoint; // Offset: 0x56

        }; // Size: 0x58

        // cached info derived from constant model info
        idActor::idActorVolatile::idActorModelCache modelInfo; // Offset: 0x0

        // calculated once per frame {{ units = m }}
        cachedVec3_t cachedEyeOrigin_modelSpace; // Offset: 0x58

        // whether weapon is raised, lowered or holstered.
        weaponReadyState_t weaponReadyState; // Offset: 0x70

        // true if the actor is standing on stairs
        bool onStairs; // Offset: 0x74

        // list of damage decls that should be ignored on the current frame
        idList < const idDeclDamage * , TAG_IDLIST , false > frameDamageExclusions; // Offset: 0x78

        // list of damages recently done, to enforce minRetriggerTime
        idCircularBuffer < trackedDamageDone_t , 64 > trackedDamage; // Offset: 0x90

        // if true, this actor is technically off-limits from other actors initiating new attacks against it
        bool offLimits; // Offset: 0x898

        // last time offLimits was set to true
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > offLimitsTime; // Offset: 0x8A0

        // is currently touching a visual impairment volume (e.g. smoke)
        bool isTouchingVisualImpairmentVolume; // Offset: 0x8A8

    }; // Size: 0x8B0

    // items we dropped on death. Used to remove when body removes
    idManagedClassPtr < idEntity > droppedItem1; // Offset: 0x1B48

    // items we dropped on death. Used to remove when body removes
    idManagedClassPtr < idEntity > droppedItem2; // Offset: 0x1B68

    // used to track which other actors are engaging this actor. Useful for spawning evaluation
    idEngagementTracker engagementTracker; // Offset: 0x1B88

    // used to track if this actor is in a spawn pending state (spawning is deferred for a couple of frames. TODO: Make this a query on spawnmanager?
    bool spawnPending; // Offset: 0x1C50

    float damageFromGloryKill; // Offset: 0x1C54

    // these get added to, processed, then removed
    idList < idActor::damageCapTracker_t , TAG_IDLIST , false > damageTrackers; // Offset: 0x1C58

    // constants for idActor
    idActor::idActorConstant actorConstants; // Offset: 0x1C70

    // needed for correction code used for server authoritative movement
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > teleportPredicted; // Offset: 0x1E38

    // for client predicted movement, we store a history of positions/times
    idList < idActor::clientPredictionHistory_t , TAG_IDLIST , false > clientHistory; // Offset: 0x1E40

    // time of the last snapshot we corrected our client predicted position with
    idTypesafeTime < int , millisecondUnique_t , 1000 > lastSnapshotTimeProcessed; // Offset: 0x1E58

    // corrections to client prediction accumulate here
    idVec3 clientPredictionError; // Offset: 0x1E5C

    // articulated figure properties
    idAnimator_AF afProperties; // Offset: 0x1E68

    // parameters to use when transitioning to ragdoll upon death
    idRagdollInfo ragdollInfo; // Offset: 0x2330

    // whether we should ragdoll or not
    bool shouldRagdoll; // Offset: 0x2358

    idStaticList < idActor::afImpulse_t , 8 , false , TAG_IDLIST > serializeImpulseBuffer; // Offset: 0x2360

    int serverImpulseBufferIndex; // Offset: 0x24B8

    int localImpulseBufferIndex; // Offset: 0x24BC

    // Scalar applied to the impulse from the final shot
    float deathImpulseScalar; // Offset: 0x24C0

    // ------------------------ team super ability ------------------------ holds this actor's team super ability info
    teamSuperAbility_t teamSuperAbility; // Offset: 0x24C8

    // prevent spamming the server with super ability messages by recording the last time we requested
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > clientRequestedTeamSuper; // Offset: 0x24D8

    // ------------------------ editable actor settings ------------------------ editable settings for idActor;
    idActor::idActorEditable actorEditable; // Offset: 0x24E0

    // ------------------------ TODO: move __edit into an actorEditable struct??? ------------------------ new way of handling faction in SP ai
    idAtomicString factionName; // Offset: 0x2678

    // cached indices of our node in faction graph, and parentage tree
    idStaticList < const idDeclFactionNode * , 8 , false , TAG_IDLIST > factionTree; // Offset: 0x2680

    // weapon proficiency
    float weaponProficiency; // Offset: 0x26D8

    // armor proficiency
    float armorProficiency; // Offset: 0x26DC

    // % damage that is still taken while shield is up
    float shieldBleedThrough; // Offset: 0x26E0

    // apply this damage scale when this actor is summoned by a demon card (1.0 = no effect, 2.0 = double, etc)
    float damageScaleWhenSummoned; // Offset: 0x26E4

    // mass of the actor {{ units = kg }}
    float mass; // Offset: 0x26E8

    // is this actor lootable when dead
    bool lootable; // Offset: 0x26EC

    // Loot Dropping have we dropped already?
    bool hasDropped; // Offset: 0x26ED

    // loot component
    idLootDropComponent lootDropComponent; // Offset: 0x26F0

    // PvP loot component
    idLootDropComponent pvpLootDropComponent; // Offset: 0x2788

    // shared demon / player states
    bool pinged; // Offset: 0x2820

    // inventory this actor will spawn with
    idList < idInventoryAttachmentDef , TAG_IDLIST , false > startingInventory; // Offset: 0x2828

    // attached entities this actor will spawn with
    idList < idEntityAttachmentDef , TAG_IDLIST , false > entityAttachments; // Offset: 0x2840

    // list of all the possible weapons attainable
    idList < const idDeclInventory * , TAG_IDLIST , false > masterWeaponList; // Offset: 0x2858

    // ------------------------ volatile variables ------------------------ volatile variables for idActor
    idActor::idActorVolatile actorVolatile; // Offset: 0x2870

    // walk IK actor uses
    idAnimator_WalkIK walkIK; // Offset: 0x3120

    // walk IK decl
    idDeclWalkIK* walkIKDecl; // Offset: 0x3450

    // inventory that's equipped
    idManagedClassPtr < idInventoryItem > equipped[11]; // Offset: 0x3458

    // currently attached items
    idAttachmentCollection attachments; // Offset: 0x35B8

    // everything the actor is holding
    idInventoryCollection inventory; // Offset: 0x35D8

    idPerkComponent perkComponent; // Offset: 0x3B40

    idStatusEffectComponent statusEffectComponent; // Offset: 0x3BC0

    // information saved about the last time damage was done to this actor
    idDamageInstanceInfo cachedDamageInfo; // Offset: 0x3C48

    // callbacks for AF specific (actor/turret)
    idActorPhysicsCallbacks actorPhysicsCallbacks; // Offset: 0x3C90

    idActorModifierComponent actorModifierComponent; // Offset: 0x3CC0

    idActorAggregate < float > overdrivePointAggregate; // Offset: 0x4B38

    // This count persists across lives
    idActorAggregate < int > killCountAggregate; // Offset: 0x4B40

    // This count is reset after each respawn
    idActorAggregate < int > killCountPerLifeAggregate; // Offset: 0x4B48

    float overdrivePoints; // Offset: 0x4B50

    float killCount; // Offset: 0x4B54

    idTouchComponent touchComponent; // Offset: 0x4B58

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastTeleportTime; // Offset: 0x4BD0

}; // Size: 0x4BD8

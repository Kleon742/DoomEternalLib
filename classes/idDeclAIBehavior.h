struct idDeclAIBehavior : idGameDeclTypeInfo
{
    struct idTraversalBehaviors
    {
        // which type of traversals to use (if any)
        traversalMonsterType_t traversalMonsterType; // Offset: 0x0

        // if set, we can remap other monster's traversals to our own anims
        traversalMonsterType_t alternateTraversalMonsterType; // Offset: 0x4

        // used to help remap, if empty implies remapping is not allowed
        idAtomicString traversalSubwebName; // Offset: 0x8

        // if true, allow AI to be a valid meathook target during traversals
        bool allowMeathookDuringTraversal; // Offset: 0x10

        // if true, allow AI to enter traversals using any facing supported by anims in node
        bool allowArbitraryFacing; // Offset: 0x11

        // the radius that this AI will use when reserving a spot to prevent other AI from landing on him
        float traversalReservationRadius; // Offset: 0x14

    }; // Size: 0x18

    struct idDamageMititgationInfo_t
    {
        // Damage Mitigation name
        idAtomicString name; // Offset: 0x0

        // Damage Decl collection
        idDeclAIDamageDeclCollection* damageCollection; // Offset: 0x8

        // Scale of damage mitigated
        float damageScale; // Offset: 0x10

    }; // Size: 0x18

    struct idDamageBehaviors
    {
        struct equipSlotHideParms_t
        {
            // equipSlot to hide attachment for
            equipSlot_t equipSlot; // Offset: 0x0

            // if true, drop attachment instead of just hiding it
            bool drop; // Offset: 0x4

            // MS delay for hide
            idTypesafeTime < int , millisecondUnique_t , 1000 > hideDelayMS; // Offset: 0x8

        }; // Size: 0xC

        struct hideMeshParms_t
        {
            // name of mesh to hide (used for lookup in md6 decl)
            idAtomicString meshName; // Offset: 0x0

            // MS delay for hide
            idTypesafeTime < int , millisecondUnique_t , 1000 > hideDelayMS; // Offset: 0x8

        }; // Size: 0x10

        struct afBreakConstraintsParms_t
        {
            // name of constraint to break
            idAtomicString constraintName; // Offset: 0x0

            // impulse to apply
            idVec3 impulse; // Offset: 0x8

            // MS delay for break
            idTypesafeTime < int , millisecondUnique_t , 1000 > breakDelayMS; // Offset: 0x14

        }; // Size: 0x18

        // ai's pain graph
        idDeclAIPainGraph* painGraph; // Offset: 0x0

        // ai's damage state graph
        idDeclAIDamageStateGraph* damageStateGraph; // Offset: 0x8

        // Start node on damage state graph
        idAtomicString damageStateGraphStartNode; // Offset: 0x10

        // ai's damage mitigation info
        idList < idDeclAIBehavior::idDamageMititgationInfo_t , TAG_IDLIST , false > damageMitigationInfo; // Offset: 0x18

        // when we can't find damage decls in stuff, try to also get them here
        idList < aiStringDamageMapping_t , TAG_IDLIST , false > stringDamageMappings; // Offset: 0x30

        // 0..1 percentage of recent damage above which medium deaths will be triggered
        float mediumDeathThreshold; // Offset: 0x48

        // 0..1 percentage of recent damage above which heavy deaths will be triggered
        float heavyDeathThreshold; // Offset: 0x4C

        // speed above which to use moving pain anims {{ units = m / s }}
        float movingPainSpeed; // Offset: 0x50

        // speed above which to use moving death anims {{ units = m / s }}
        float movingDeathSpeed; // Offset: 0x54

        // speed above which to use slow moving death anims {{ units = m / s }}
        float slowMovingDeathSpeed; // Offset: 0x58

        // damage decl for bleed out
        idDeclDamage* bleedOutDamageDecl; // Offset: 0x60

        // damage decl for suicide
        idDeclDamage* suicideDamageDecl; // Offset: 0x68

        // damage decl to use for full body gib
        idDeclDamage* fullBodyGibDamageDecl; // Offset: 0x70

        // used to force pain code through proper path
        idDeclDamage* teensyDamageDecl; // Offset: 0x78

        // decl for explosion this AI can cause when on fire
        idDeclExplosion* alternateExplosionDecl; // Offset: 0x80

        // decl for explosion this AI can cause when on fire on Single Player
        idDeclExplosion* alternateSPExplosionDecl; // Offset: 0x88

        // Getup joints
        idList < idGetUpJoint , TAG_IDLIST , false > getUpJoints; // Offset: 0x90

        // true if the AI can be damaged.
        bool canTakeDamage; // Offset: 0x0

        // true to ignore damage decl shouldRagdollOnDeath flag
        bool ignoreDeathRagdoll; // Offset: 0x0

        // entity to spawn for explosions
        idDeclEntityDef* explosionEntity; // Offset: 0xB0

        // how long this AI should be in the stagger state ( time in MS )
        milliToGameTime_t staggerLength; // Offset: 0xB8

        // how long this AI should be in the stagger vulnerable state ( time in MS )
        milliToGameTime_t staggerLength_Vulnerable; // Offset: 0xC8

        // Each time the AI recover health fraction from stagger recovery, multiply the next health fraction by this much
        float staggerRecoveryHealthMitigation; // Offset: 0xD8

        // fx condition that must be started for this AI to charge when burning ( archvile can override )
        fxCondition_t burnConditionToChargeOn; // Offset: 0xDC

        // if we are flammable
        bool flammable; // Offset: 0x0

        // if we allow the simplified joints in mp
        bool allowSimplifiedDamageJoints; // Offset: 0x0

        // if damaged after death, activate ragdoll if this much time has elapsed
        idTypesafeTime < float , secondUnique_t , 1 > damageAfterDeathRagdollDelay; // Offset: 0xE4

        // hide the idInventoryItem's for these equip slots on AI death
        idList < idDeclAIBehavior::idDamageBehaviors::equipSlotHideParms_t , TAG_IDLIST , false > hideEquipSlotItemsOnDeath; // Offset: 0xE8

        // hide these meshes on AI death
        idList < idDeclAIBehavior::idDamageBehaviors::hideMeshParms_t , TAG_IDLIST , false > hideMeshesOnDeath; // Offset: 0x100

        // break these constraints on articulated figure on death
        idList < idDeclAIBehavior::idDamageBehaviors::afBreakConstraintsParms_t , TAG_IDLIST , false > breakConstraintsOnDeath; // Offset: 0x118

        // Minimum number of traces needed to deal damage
        idList < aiMintraceDamageMapping_t , TAG_IDLIST , false > requiredMinTraceCount; // Offset: 0x130

        // Point blank distance for this AI
        float pointBlankDistance; // Offset: 0x148

        // special damages that we need to sidestep some pain restrictions for
        idDeclAIDamageDeclCollection* guaranteedFalterDamages; // Offset: 0x150

    }; // Size: 0x158

    struct idMovementBehaviors
    {
        // turn rate configurations for specific anim web nodes
        idList < aiTurnRateConfig_animWeb_t , TAG_IDLIST , false > animWebTurnRateConfigs; // Offset: 0x0

        // turn rate configurations for specific walk states
        idList < aiTurnRateConfig_walkState_t , TAG_IDLIST , false > walkStateTurnRateConfigs; // Offset: 0x18

        // turn rate configurations for specific walk states, when blocked by obstacles and walls
        idList < aiTurnRateConfig_walkState_t , TAG_IDLIST , false > nearObstacleTurnRateConfigs; // Offset: 0x30

        // turn rate configurations for when near obstacles but not necessarily blocked
        idList < aiTurnRateConfig_walkState_t , TAG_IDLIST , false > strictPathFollowTurnRateConfigs; // Offset: 0x48

        // consider this the approach dist within which we use the near obstacle turn rate configs
        idList < aiFloat_walkState_t , TAG_IDLIST , false > approachDistWalkstatePairs; // Offset: 0x60

        // movement distance over which AI will run instead of walk {{ units = m }}
        float runMoveMin; // Offset: 0x78

        // movement distance over which AI will sprint instead of run {{ units = m }}
        float sprintMoveMin; // Offset: 0x7C

        // corner circle radius this AI will use by default {{ units = m }}
        float cornerCircleRadius; // Offset: 0x80

        // if > 0, AI will start aligning to a point within this distance {{ units = m }}
        float alignToPointDistance; // Offset: 0x84

        // distance AI will begin aligning to traversal start points {{ units = m }}
        float alignToTraversalDistance; // Offset: 0x88

        // blend duration for forcing into arrival animations
        int arrivalAnimBlendFrames; // Offset: 0x8C

        // blend duration for forcing into traversal animations
        int traversalAnimBlendFrames; // Offset: 0x90

        // will run instead of walk if recently fired at
        bool runsIfShotAt; // Offset: 0x0

        // true if the AI can use start transitions even if the first corner is too close
        bool allowTransitionOvershoot; // Offset: 0x0

        // whether we can use torso tracking outside of straf movement
        bool useTorsoTrackingOutsideStraf; // Offset: 0x0

        // whether we can use torso tracking outside of straf movement
        bool fireWhileMoving; // Offset: 0x0

        // true by default. if false, will ignore fireWhileMoving completely, meaning that the movement system won't set the fire mode at all. It will be up to some other system to handle it.
        bool useFireWhileMoving; // Offset: 0x0

        // absolute maximum distance from aas edge enemy can be for us to ever want to move to them {{ units = m }}
        float maxEnemyNavTolerance; // Offset: 0x98

        // if engaged by enemy, straf for at least this portion of a longer path {{ units = m }}
        float mandatoryStrafDist_Engaged; // Offset: 0x9C

        // if distance to cover is less than this, force strafing in the move to cover
        float mandatoryStrafCoverDist; // Offset: 0xA0

        // xy radius of bounds we check along path to see if we are clear for anim-based movement {{ units = m }}
        float pathBoundsRadius; // Offset: 0xA4

        // trace this far along path with bounds to check if clear {{ units = m }}
        float pathBoundsDistance; // Offset: 0xA8

        // distance to look ahead when determining path curvature for slow corners {{ units = m }}
        float curvature_lookAheadDist; // Offset: 0xAC

        // path curvature under which we can't sprint
        idTypesafeNumber < float , DegreesUnique_t > curvature_maxSprint; // Offset: 0xB0

        // path curvature under which we can't run
        idTypesafeNumber < float , DegreesUnique_t > curvature_maxRun; // Offset: 0xB4

        // if target is further than this, run {{ units = m }}
        float maintain_runDistance; // Offset: 0xB8

        // if target is further than this, sprint {{ units = m }}
        float maintain_sprintDistance; // Offset: 0xBC

        // slow to walk if pack members are within this distance in front {{ units = m }}
        float pack_forwardDist; // Offset: 0xC0

        // slow to walk if pack members are within this distance to side {{ units = m }}
        float pack_sideDist; // Offset: 0xC4

        // look ahead this far {{ units = m }}
        float lookAheadDist_walk; // Offset: 0xC8

        // look ahead this far {{ units = m }}
        float lookAheadDist_run; // Offset: 0xCC

        // look ahead this far {{ units = m }}
        float lookAheadDist_sprint; // Offset: 0xD0

        // reserve traversals we plan on using for this many seconds when we get close
        idTypesafeTime < float , secondUnique_t , 1 > traversalReservationTime; // Offset: 0xD4

        // reserve traversals on our path when we get this close to them {{ units = m }}
        float traversalReservationDist; // Offset: 0xD8

        // ai's movement graph
        idDeclAIMovementGraph* movementGraph; // Offset: 0xE0

        // bias path trees within this distance from AI, set to 0 to turn off system {{ units = m }}
        float inertia_speedApplicationDist; // Offset: 0xE8

        // inertia value fed into bias system {{ units = m }}
        float inertia_inertia; // Offset: 0xEC

        // normalize velocity for inertia based on this ideal speed {{ units = m / s }}
        float inertia_normalizationSpeed; // Offset: 0xF0

        // distance from edge of nav mesh we want to scoot the character's model {{ units = m }}
        float visualOffset_dist; // Offset: 0xF4

        // rate at which we want to move the character away from mesh edge {{ units = m / s }}
        float visualOffset_rate; // Offset: 0xF8

        // model joint that is the root of the visual offset ( hips, normally )
        idAtomicString visualOffset_joint; // Offset: 0x100

        // character can't get any closer than this to nav mesh edge -- can lead to blocked paths {{ units = m }}
        float navMeshPushDist; // Offset: 0x108

        // this AI should not get any closer than this to AIs of the same type
        float sameTypeAvoidDistance; // Offset: 0x10C

    }; // Size: 0x110

    struct focusTrackBehavior_t
    {
        // true if the AI should use its own "muzzleReference" tag instead of tag from equipped weapon
        bool useMuzzleReferenceTag; // Offset: 0x0

        // if true, don't auto-disable all tracking during all traversals
        bool allowTrackingInTraversals; // Offset: 0x1

    }; // Size: 0x2

    struct idRageBehaviors
    {
        // angry rage after being hurt
        int angryRageAfterHurtChance; // Offset: 0x0

        // angry rage after missing target
        int angryRageAfterMissingChance; // Offset: 0x4

        // angry rage after spawning due to a mutant attractor
        int angryRageAfterAttractChance; // Offset: 0x8

        // for dynamite mutant to rage explode when close {{ units = m }}
        float angryRageWhenCloseDistance; // Offset: 0xC

        // taunt after hitting the enemy
        int tauntRageAfterHitEnemyChance; // Offset: 0x10

        // taunt if enemy not facing
        int tauntRageBehindEnemyChance; // Offset: 0x14

        // taunt if enemy is backing away
        int tauntRageFleeingEnemyChance; // Offset: 0x18

        // taunt if just killed enemy
        int tauntRageAfterKillingEnemyChance; // Offset: 0x1C

        // min time between types of rage
        milliToGameTime_t minRageInterval; // Offset: 0x20

        // max interval time between types of rage
        milliToGameTime_t maxRageInterval; // Offset: 0x30

        // time for angry rage to timeout
        milliToGameTime_t staleAngryRageThreshold; // Offset: 0x40

        // time for taunt rage to timeout
        milliToGameTime_t staleTauntRageThreshold; // Offset: 0x50

        // limit rage behavior based on living group member count
        bool useGroupRageLimit; // Offset: 0x60

        // min dot product facing enemy for raging
        float minRageFacingDot; // Offset: 0x64

    }; // Size: 0x68

    struct weaponUseBehaviors_t
    {
        // when firing a shot, ai won't let go of trigger even when not aiming at target until this time elapsed
        idRange < float > minTriggerHoldDurationClose; // Offset: 0x0

        // when firing a shot, ai won't let go of trigger even when not aiming at target until this time elapsed
        idRange < float > minTriggerHoldDurationFar; // Offset: 0x8

        // trigger hold duration is lerped between a close and far value {{ units = m }}
        idRange < float > triggerHoldDistanceRange; // Offset: 0x10

        // alias for additive anim to use as weapon recoil FIXME
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > recoilAnimAlias; // Offset: 0x18

        // ms it takes to get recoil to blend in ( per shot )
        milliToGameTime_t recoilBlendInMs; // Offset: 0x20

        // ms it takes recoil to blend out ( per shot )
        milliToGameTime_t recoilBlendOutMs; // Offset: 0x30

        // anim's target alpha is this ( >= 0 overrides parent info )
        float recoilmaxAlpha; // Offset: 0x40

        // only this many of anim will play at once ( >= 0 overrides parent info )
        int recoilmaxPlaying; // Offset: 0x44

        // if total target alphas for this pain anim are over this threshold, back off
        float recoilbackoffAlphaThreshold; // Offset: 0x48

        // backoff to this alpha when over threshold
        float recoilbackoffAlpha; // Offset: 0x4C

        // if the sum of all anims current alpha is over this, don't start a new one
        float recoilmaxCurrentAlpha; // Offset: 0x50

        // close and far range for where recoil mitigation should start and then max out {{ units = m }}
        idRange < float > recoilAlphaRanges; // Offset: 0x54

        // alpha values for recoil, matched to mitigation ranges
        idRange < float > recoilAnimAlphas; // Offset: 0x5C

        // the number of consecutive blocked shots for ai to release trigger prematurely in a burst
        int numBlockedShotsConsecutiveToReleaseTrigger; // Offset: 0x64

        // the fraction of blocked shots required for AI to prematurely release trigger in a burst
        float percentBlockedShotsToReleaseTrigger; // Offset: 0x68

        // the percent blocked shots release functionality only applies after at least this many blocked shots
        int minShotsForPercentReleaseToBeValid; // Offset: 0x6C

        // if we lose sight of enemy, keep shooting for this long
        idTypesafeTime < float , secondUnique_t , 1 > keepShootingNoSightSeconds; // Offset: 0x70

    }; // Size: 0x78

    struct predictionBehaviors_t
    {
        // how many seconds it takes to lerp from one prediction offset to the next
        idRange < float > lerpRateInSeconds; // Offset: 0x0

        // if true, don't lerp to another value until explicit call
        bool manualReset; // Offset: 0x0

    }; // Size: 0xC

    struct stringWeaponUseTuple_t
    {
        // name of this entry
        idAtomicString name; // Offset: 0x0

        // weapon use behaviors to associate with name
        idDeclAIBehavior::weaponUseBehaviors_t data; // Offset: 0x8

    }; // Size: 0x80

    struct equipSlotRequiredConditions_t
    {
        // the equip slot that requires the given conditions
        equipSlot_t equipSlot; // Offset: 0x0

        // the conditions to check for using a weapon in this equip slot
        idList < idTypeInfoObjectPtr < idAICondition > , TAG_AI_FSM , false > requiredConditions; // Offset: 0x8

        // if true, allow weapon fire from this equip slot if any condition evaluates to true
        bool orConditions; // Offset: 0x20

    }; // Size: 0x28

    struct nodeSphereModelTracePair_t
    {
        // animweb node to match with
        idAnimWebPath webNode; // Offset: 0x0

        // sphere trace to start
        idAtomicString traceGroup; // Offset: 0x30

        // damage decl to use for trace
        idDeclDamage* damageDecl; // Offset: 0x38

    }; // Size: 0x40

    struct nameAndBounds_t
    {
        // match this bounds
        idVec3 bounds; // Offset: 0x0

        // extra z offset to help match this with shields ... darklord only right now
        float z_offset; // Offset: 0xC

        // with this name
        idAtomicString name; // Offset: 0x10

    }; // Size: 0x18

    struct weaponTypeBoundsExpansion_t
    {
        // if player is using this weapon
        playerWeaponType_t weaponTypes; // Offset: 0x0

        // expand bounds by this much
        idVec3 expansion; // Offset: 0x8

        // expansion is ramped down or up based on this distance, never going below zero and never above 1 {{ units = m }}
        float idealDist; // Offset: 0x14

    }; // Size: 0x18

    struct idAIDodgingBehaviors
    {
        // matching for behavior fsms
        idList < idDeclAIBehavior::nameAndBounds_t , TAG_IDLIST , false > namedBounds; // Offset: 0x0

        // expand certain testing bounds by this much to account for player weapon spread
        idList < idDeclAIBehavior::weaponTypeBoundsExpansion_t , TAG_IDLIST , false > weaponBoundsExpansions; // Offset: 0x18

        // distance within which AI dive/dodge/flinch logic switches to close range {{ units = m }}
        float closeRangeDist; // Offset: 0x30

        // distance at which AI dive/dodge/flinch logic switches between medium/far range {{ units = m }}
        float mediumRangeDist; // Offset: 0x34

        // minimum time between aim dodges (in milliseconds)
        milliToGameTime_t minAimDodgeInterval; // Offset: 0x38

        // maximum time between aim dodges (in milliseconds)
        milliToGameTime_t maxAimDodgeInterval; // Offset: 0x48

        // AI must be the most aimed at target to consider dodging
        bool mustBeDirectTarget; // Offset: 0x58

        // angle to consider fired at by light weapons
        float lightFiredAtAngle; // Offset: 0x5C

        // angle to consider fired at by medium weapons
        float mediumFiredAtAngle; // Offset: 0x60

        // angle to consider fired at by heavy weapons
        float heavyFiredAtAngle; // Offset: 0x64

        // whether or not to reduce score of cover point when shot at
        bool penalizeCoverPointUnderFire; // Offset: 0x68

    }; // Size: 0x70

    struct aiDamageDeclImpactDecl_t
    {
        // if AI hits with this damage
        idDeclDamage* damageDecl; // Offset: 0x0

        // play this impact effect
        idDeclImpactEffect* impactEffect; // Offset: 0x8

    }; // Size: 0x10

    struct projectileDeclRemapEntry_t
    {
        // source Decl --> target decl
        idDeclProjectile* sourceDecl; // Offset: 0x0

        // source Decl --> target decl
        idDeclProjectile* targetDecl; // Offset: 0x8

        // AI Conditions that must be valid for this remap
        idList < idTypeInfoObjectPtr < idAICondition > , TAG_AI_FSM , false > conditions; // Offset: 0x10

    }; // Size: 0x28

    struct inventoryDeclRemapEntry_t
    {
        // source Decl --> target decl
        idDeclInventory* sourceDecl; // Offset: 0x0

        // source Decl --> target decl
        idDeclInventory* targetDecl; // Offset: 0x8

    }; // Size: 0x10

    struct damageDeclRemapEntry_t
    {
        // source Decl --> target decl
        idDeclDamage* sourceDecl; // Offset: 0x0

        // source Decl --> target decl
        idDeclDamage* targetDecl; // Offset: 0x8

        // AI Conditions that must be valid for this remap
        idList < idTypeInfoObjectPtr < idAICondition > , TAG_AI_FSM , false > conditions; // Offset: 0x10

    }; // Size: 0x28

    struct declRemapData_t
    {
        // projectile decl remappings
        idList < idDeclAIBehavior::projectileDeclRemapEntry_t , TAG_IDLIST , false > projectileRemaps; // Offset: 0x0

        // inventory decl remappings
        idList < idDeclAIBehavior::inventoryDeclRemapEntry_t , TAG_IDLIST , false > inventoryRemaps; // Offset: 0x18

        // inventory decl remappings
        idList < idDeclAIBehavior::damageDeclRemapEntry_t , TAG_IDLIST , false > damageRemaps; // Offset: 0x30

    }; // Size: 0x48

    struct positioningData_t
    {
        // parms used to control major positioning in behavior fsm for hangout points
        idList < const idDeclAIPositioningParms * , TAG_IDLIST , false > positioningParms_hangout; // Offset: 0x0

        // how often to update paths to cover points
        idTypesafeTime < float , secondUnique_t , 1 > coverUpdateInterval_path; // Offset: 0x18

    }; // Size: 0x20

    struct vsAICollisionInfo_t
    {
        // monster types to use this info against
        aiMonsterType_t monsterTypes; // Offset: 0x0

        // impart this fraction of our speed to target
        float collisionSpeedTransfer; // Offset: 0x8

        // how much impact dir comes from owner velocity direction
        float collisionWeight_ownerLinearVelocityDir; // Offset: 0xC

        // how much impact dir comes from owner to victim dir
        float collisionWeight_ownerToVictim; // Offset: 0x10

        // how much impact dir comes from perpendicular of linear velocity
        float collisionWeight_tangential; // Offset: 0x14

        // how much to roll body orientation, to simulate friction
        float collisionRoll; // Offset: 0x18

        // never transfer less than this, since we need to push stuff even if we are slow
        float minVelocityTransfer; // Offset: 0x1C

    }; // Size: 0x20

    struct physics_t
    {
        // /from ai constants contents flags to use
        idContents contents; // Offset: 0x0

        // clip mask flags to use
        idContents clipMask; // Offset: 0x4

        // clip mask flags to use for collision vs. player
        idContents playerClipMask; // Offset: 0x8

        // default radius for vs. player repulsion {{ units = m }}
        float playerRepulsorRadius; // Offset: 0xC

        // default radius for vs. AI repulsion, not current enemy {{ units = m }}
        float aiRepulsorRadius; // Offset: 0x10

        // default radius for vs. AI enemy repulsion {{ units = m }}
        float enemyRepulsorRadius; // Offset: 0x14

        // list of data describing how we should collide with other AI
        idList < idDeclAIBehavior::vsAICollisionInfo_t , TAG_IDLIST , false > vsAICollisionInfos; // Offset: 0x18

        // if true, add obstacle to OA for this AI using aiRepulsorRadius as bounds XY radius; otherwise, get bounds from physics
        bool useAIRepulsorForObstacle; // Offset: 0x30

    }; // Size: 0x38

    struct movement_t
    {
        // /from ai constants max walking and max running movement speeds {{ units = m / s }}
        idRange < float > moveSpeed; // Offset: 0x0

        // min and max turn rates for model axis
        idRange < float > bodyTurnRate; // Offset: 0x8

        // min and max turn rates for velocity
        idRange < float > moveTurnRate; // Offset: 0x10

        // acceleration of move turn rate
        float moveTurnAccel; // Offset: 0x18

        // acceleration of body turn rate
        float bodyTurnAccel; // Offset: 0x1C

        // rate of acceleration {{ units = m / ( s * s ) }}
        float accelRate; // Offset: 0x20

        // rate of deceleration {{ units = m / ( s * s ) }}
        float decelRate; // Offset: 0x24

        // rotational alignment tolerance in degrees
        idTypesafeNumber < float , DegreesUnique_t > alignmentTolerance; // Offset: 0x28

        // movement mode the AI uses by default ( normally AIMOVEMODE_GROUND for walking AI )
        aiMovementMode_t defaultMovementMode; // Offset: 0x2C

        // allow strafing while moving
        bool allowStrafing; // Offset: 0x30

        // forces strafing when moving
        bool forceStrafing; // Offset: 0x31

        // allow AI to aim while running in another direction
        bool allowRunAiming; // Offset: 0x32

        // __edit boolstrafingWalkOnly; any strafing is restricted to walking if true, it means the loco anims for this AI have no movement delta (movement is purely code driven)
        bool locoAnimsHaveNoDelta; // Offset: 0x33

        // use anim delta to drive path movement rather than procedurally generated delta
        bool useAnimDeltaOnPath; // Offset: 0x34

        // use tags in animweb to determine run index numbers
        bool useTagRunIndices; // Offset: 0x35

        // if true, we will decelerate to walk as soon as we are inside align to point dist
        bool decelToWalk; // Offset: 0x36

        // if true, AI can use move speeds rather than exact animation movement speed
        bool useMoveSpeeds; // Offset: 0x37

        // the maximum speed the character can move, used for lean anim blending
        float maxMoveSpeed; // Offset: 0x38

        // phase range 1
        idRange < float > badZonePhaseRange_1; // Offset: 0x3C

        // phase range 2
        idRange < float > badZonePhaseRange_2; // Offset: 0x44

        // list of angle ranges we want to avoid at all costs, to prevent foot mangling during strafs
        idList < bodyMoveAngleBadZoneInfo_t , TAG_AI_UNIT , false > bodyMoveAngleBadZoneInfos; // Offset: 0x50

        // list of override bad zone sets for specific web nodes
        idList < webPathBadZoneInfoMapping_t , TAG_AI_UNIT , false > webNodeBadZoneInfoMappings; // Offset: 0x68

        // max body move angle that we can apply moving aim during
        float movingAimMaxAngle; // Offset: 0x80

        // whether this AI should reserve traversals it uses
        bool reserveTraversals; // Offset: 0x84

        // if path length is less than this, don't even attempt a departure anim {{ units = m }}
        float minDepartureDistance; // Offset: 0x88

        // if path length *was* less than this, don't even attempt an arrival anim {{ units = m }}
        float minArrivalDistance; // Offset: 0x8C

        // m/s how fast this guy typically moves across nav mesh {{ units = m / s }}
        float approximateNavSpeed; // Offset: 0x90

        // if > 0, use this explicit move speed along a fake path when using fake path move logic
        float fakePathMoveSpeed; // Offset: 0x94

        // if fakePathMoveSpeed <= 0, then use this time value (along with calculated path distance) to derive necessary speed for move
        idTypesafeTime < float , secondUnique_t , 1 > fakePathMoveTime; // Offset: 0x98

        // how high priority my locomotion pathfinds should be, compared to other AI
        pathfindPriority_t locomotionPathfindPriority; // Offset: 0x9C

        // if true, update path to enemy in background rather than letting fsm direct queries
        bool useAutoPathToEnemy; // Offset: 0xA0

        // if not empty, set AI's tracking parms to this when doing non-straf movement
        idAtomicString overrideTrackingParmsName_move; // Offset: 0xA8

        // if not empty, set ai's tracking parms to this when doing straf movement
        idAtomicString overrideTrackingParmsName_move_straf; // Offset: 0xB0

        // if true, update animfsm immediately after a state change ( such as idle->move )
        bool immediateAnimFSMUpdate; // Offset: 0xB8

        // batched data to use by name with ae_applyDeltaCorrectionInfo anim events
        idList < aiDeltaCorrectionInfo_t , TAG_IDLIST , false > deltaCorrectionInfos; // Offset: 0xC0

    }; // Size: 0xD8

    struct animAliasWebNodeRemapping_t
    {
        // map this alias
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > sourceAlias; // Offset: 0x0

        // when in any of these animweb nodes
        idList < idAnimWebPath_Atomic , TAG_IDLIST , false > webNodes; // Offset: 0x8

        // to this alias
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > replacementAlias; // Offset: 0x20

    }; // Size: 0x28

    struct animWebNodeMapping_t
    {
        // string key for animation
        idAtomicString key; // Offset: 0x0

        // web node to go through on way to viaNode (may be NULL)
        idAnimWebPath_Atomic viaNode; // Offset: 0x8

        // web node to path to
        idAnimWebPath_Atomic destinationNode; // Offset: 0x48

    }; // Size: 0x88

    struct animation_t
    {
        // /from ai constants animation web for AI body animation
        idDeclAnimWeb* animWebs[1]; // Offset: 0x0

        // default states for each anim web
        idAnimWebDefaults animWebDefaults[1]; // Offset: 0x8

        // forward kinematics graph, used for focus tracking
        idDeclFKGraph* fkGraph; // Offset: 0x58

        // name of the eye info to use for this character
        idAtomicString eyeInfoName; // Offset: 0x60

        // name of head joint
        idAtomicString headJointName; // Offset: 0x68

        // name of anim state graph for this character
        idDeclAIAnimStateGraph* animStateGraph; // Offset: 0x70

        // allows remapping of one alias to another when animweb nodes are playing
        idList < idDeclAIBehavior::animAliasWebNodeRemapping_t , TAG_IDLIST , false > aliasRemappings; // Offset: 0x78

        // allows mapping of a web node to a string key
        idList < idDeclAIBehavior::animWebNodeMapping_t , TAG_IDLIST , false > webNodeMappings; // Offset: 0x90

        // these just play when the right web nodes are started
        idList < aiAdditiveAnimData_t , TAG_IDLIST , false > automaticAdditiveAnimations; // Offset: 0xA8

        // true if the AI can use mood animations
        bool useMoods; // Offset: 0x0

        // true if AI can lip-sync
        bool useLipsync; // Offset: 0x0

        // true if AI can play gesture anims during VOs
        bool useGestures; // Offset: 0x0

        // true if the AI can eye track
        bool useEyeTracking; // Offset: 0x0

        // true if the AI can play blink anims
        bool useBlinking; // Offset: 0x0

        // true if the AI can use glancing
        bool useGlancing; // Offset: 0x0

        // true if the AI can use fidgets
        bool useFidgets; // Offset: 0x0

        // true if the AI can use lid deformation
        bool useLidDeformation; // Offset: 0x0

    }; // Size: 0xC8

    struct animAndValidAngles_t
    {
        // while playing this anim
        idMD6Anim* anim; // Offset: 0x0

        // thing is valid in this yaw range, model space
        idRange < float > range_yaw; // Offset: 0x8

        // thing is valid in this pitch range, model space
        idRange < float > range_pitch; // Offset: 0x10

        // if invalid, use this yaw
        float fallback_yaw; // Offset: 0x18

        // if invalid, use this pitch
        float fallback_pitch; // Offset: 0x1C

    }; // Size: 0x20

    struct combat_t
    {
        // max amount of throw error
        float maxThrowError; // Offset: 0x0

        // used to determine walkstate in move to cover
        float effectiveRange; // Offset: 0x4

        // min/max angles variou anims can tolerate
        idList < idDeclAIBehavior::animAndValidAngles_t , TAG_IDLIST , false > validAnimRanges; // Offset: 0x8

        // extra stuff for sphere model traces
        idList < aiSphereTraceKnobs_t , TAG_IDLIST , false > sphereModelTraceKnobs; // Offset: 0x20

    }; // Size: 0x38

    struct onlineScoring_t
    {
        // considered special heavy/boss AI that awards more points in online coop games
        bool heavy; // Offset: 0x0

    }; // Size: 0x1

    struct meleePositioning_t
    {
        // /from ai constants angle this AI will occupy in a positioning circle
        idTypesafeNumber < float , DegreesUnique_t > wedgeAngle; // Offset: 0x0

        // the AI will begin waiting for its turn if it's within the inner radius, and leave the state if it leave the outer radius {{ units = m }}
        idRange < float > turnWaitRanges; // Offset: 0x4

    }; // Size: 0xC

    struct voiceOverBehavior_t
    {
        // decl
        idDeclAIVoiceOver* voiceOverDecl; // Offset: 0x0

        // add as many as you want, one is picked at spawn time
        idList < const idDeclAIVoiceOver * , TAG_IDLIST , false > otherVoiceOverDecls; // Offset: 0x8

    }; // Size: 0x20

    struct validityChecks_t
    {
        // kill AI if blocking encounter and ai hasn't been seen in this long
        idTypesafeTime < float , secondUnique_t , 1 > noSightSeconds; // Offset: 0x0

        // only consider blocking if total AI count in encounter is less than this
        int testAICount; // Offset: 0x4

        // kill AI if they are more than this far from nav mesh, laterally
        float navDistXY; // Offset: 0x8

        // kill AI if they are more than this far above or below nav mesh
        float navDistZ; // Offset: 0xC

        // expand nav search this far
        float navSearchDistXY; // Offset: 0x10

        // expand nav search this far
        float navSearchDistZ; // Offset: 0x14

        // kill AI if they are more than this far outside of flight volumes
        float navDistFlight; // Offset: 0x18

        // allowed number of strikes before AI suicides
        int numStrikes; // Offset: 0x1C

    }; // Size: 0x20

    struct customInfo_t
    {
        // some AI can spawn friendlies
        idDeclEntityDef* friendlyToSpawn; // Offset: 0x0

        // where to spawn the friendly
        idVec3 friendlySpawnOffset_modelSpace; // Offset: 0x8

    }; // Size: 0x18

    struct aiSystemUpdateInterval_t
    {
        // use this update interval beyond specified distance {{ units = m }}
        idTypesafeTime < float , secondUnique_t , 1 > minUpdateInterval; // Offset: 0x0

        // use this update interval beyond specified distance {{ units = m }}
        float minDistance; // Offset: 0x4

    }; // Size: 0x8

    struct optimizationSettings_t
    {
        // controls how often focus tracking can update
        idList < idDeclAIBehavior::aiSystemUpdateInterval_t , TAG_IDLIST , false > focusTrackingUpdateIntervals; // Offset: 0x0

        // controls how often obstacle avoidance path smoothing can happen
        idList < idDeclAIBehavior::aiSystemUpdateInterval_t , TAG_IDLIST , false > obstaclePathUpdateIntervals; // Offset: 0x18

        // update interval for non frame-critical movefsm stuff
        idTypesafeTime < float , secondUnique_t , 1 > moveFSMUpdateInterval; // Offset: 0x30

        // if true, skip advanced target prediction
        bool simpleTargeting; // Offset: 0x34

        // skip advanced cover selection stuff like pathfinds
        bool simplePositioning; // Offset: 0x35

        // if true, allow fsms to go into 'priority update' mode for optimization
        bool allowFSMPriorityUpdates; // Offset: 0x36

    }; // Size: 0x38

    struct gameplayPriorityInfo_t
    {
        // ai within this distance to player in critical FOV will have critical importance
        float criticalDistance; // Offset: 0x0

        // half fov for critical importance
        idTypesafeNumber < float , DegreesUnique_t > criticalAngle; // Offset: 0x4

        // opimization settings when fighting player
        idDeclAIBehavior::optimizationSettings_t vsPlayer; // Offset: 0x8

        // optimization settings when fighting AI
        idDeclAIBehavior::optimizationSettings_t vsAI; // Offset: 0x40

    }; // Size: 0x78

    struct soundStringPair_t
    {
        // name of sound hook
        idAtomicString name; // Offset: 0x0

        // sound to use
        idSoundEvent* soundEvent; // Offset: 0x8

    }; // Size: 0x10

    struct soundRTPCInitialValue_t
    {
        // rtpc decl to set on spawn
        idSoundRTPC* declRTPC; // Offset: 0x0

        // initial value to set on spawn
        float initialValue; // Offset: 0x8

    }; // Size: 0x10

    struct soundInfo_t
    {
        // rtpc decl for importance bucket
        idSoundRTPC* importanceBucketRTPC; // Offset: 0x0

        // rtpc decl for move speed parameter
        idSoundRTPC* moveSpeedRTPC; // Offset: 0x8

        // miscellaneous sounds that are driven by game code
        idList < idDeclAIBehavior::soundStringPair_t , TAG_IDLIST , false > soundHooks; // Offset: 0x10

        // sound to play when a weakpoint damage group on this AI is hit while it is possessed by a Spirit AI
        idSoundEvent* impactSound_possessedWeakpoint; // Offset: 0x28

        // list of RTPCs that need to have an initial value set on spawn
        idList < idDeclAIBehavior::soundRTPCInitialValue_t , TAG_IDLIST , false > initRTPCValues; // Offset: 0x30

    }; // Size: 0x48

    struct bossVODataEntry_t
    {
        enum bossVOEvent_t : int
        {
            BOSS_VO_EVENT_NONE = 0,
            BOSS_VO_EVENT_PLAYER_DEATH = 1,
            BOSS_VO_EVENT_PLAYER_DAMAGE = 2,
            BOSS_VO_EVENT_SLED_DETACHED = 3,
            BOSS_VO_EVENT_SPAWNED = 4
        };

        // boss VO event
        idDeclAIBehavior::bossVODataEntry_t::bossVOEvent_t event; // Offset: 0x0

        // boss VO sound
        idSoundEvent* voSound; // Offset: 0x8

        // required amount of damage needed for BOSS_VO_EVENT_PLAYER_DAMAGE
        float requiredDamage; // Offset: 0x10

        // required time to do m_requiredDamage
        idTypesafeTime < int , millisecondUnique_t , 1000 > requiredDamageTime; // Offset: 0x14

    }; // Size: 0x18

    struct bossVOInfo_t
    {
        // events
        idList < idDeclAIBehavior::bossVODataEntry_t , TAG_IDLIST , false > voEntries; // Offset: 0x0

        // cooldown
        idTypesafeTime < int , millisecondUnique_t , 1000 > cooldownForDamageVOLines; // Offset: 0x18

    }; // Size: 0x20

    struct additiveAnimInfo_t
    {
        // unique key
        idAtomicString key; // Offset: 0x0

        // additive anim to play
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > anim; // Offset: 0x8

        // blend in duration
        idTypesafeTime < float , secondUnique_t , 1 > blendIn; // Offset: 0xC

        // blend out duration
        idTypesafeTime < float , secondUnique_t , 1 > blendOut; // Offset: 0x10

        // how fast the anim should play
        float rateScale; // Offset: 0x14

        // what percentage the anim should be blended
        float blendScale; // Offset: 0x18

        // should the anim loop or clamp?
        idMD6Leaf::wrapMode_t wrapMode; // Offset: 0x1C

        // if true, treat blendOUt as a legit blend-out
        bool loopForever; // Offset: 0x20

    }; // Size: 0x28

    struct buffInfo_t
    {
        // apply these to other AI
        idList < idTypeInfoObjectPtr < idEntityModifier > , TAG_IDLIST , false > buffModifiers; // Offset: 0x0

    }; // Size: 0x18

    struct woundFXConditionMapping_t
    {
        enum mappingType_t : int
        {
            NONE = 0,
            FX_ENABLED_WHEN_WOUND_ACTIVE = 1,
            FX_ENABLED_WHEN_WOUND_INACTIVE = 2
        };

        // is the fx enabled when the wound is active or inactive?
        idDeclAIBehavior::woundFXConditionMapping_t::mappingType_t mappingType; // Offset: 0x0

        // the fx condition
        fxCondition_t fxCondition; // Offset: 0x4

        // wound hit group name
        idDeclGoreWound* wound; // Offset: 0x8

        // does this mapping prevent the start FX event?
        bool blocksStartEvent; // Offset: 0x10

        // does this mapping prevent the stop FX event?
        bool blocksStopEvent; // Offset: 0x11

    }; // Size: 0x18

    typedef idList < idDeclAIBehavior::woundFXConditionMapping_t > woundFXConditionMappings_t;

    // ------------------------ pathing capabilities ------------------------
    idDeclAIBehavior::idTraversalBehaviors traversalBehaviors; // Offset: 0x90

    // ------------------------ pain/death ------------------------
    idDeclAIBehavior::idDamageBehaviors damageBehaviors; // Offset: 0xA8

    // ------------------------ combat capabilities ------------------------ Enumeration of type of monster this is -- this is used to quickly identify the type of ai without having to infer the type via other means;
    aiMonsterType_t monsterType; // Offset: 0x200

    // AI sub type that we're going to react to.
    idAtomicString monsterSubType; // Offset: 0x208

    // Enumeration of monster size class
    aiSizeClass_t monsterClass; // Offset: 0x210

    // Spectre variant of the AI
    bool isSpectre; // Offset: 0x0

    // true if the AI's VO will display subtitle while in combat (even with combat subtitling disabled)
    bool subtitlesInCombat; // Offset: 0x0

    // slot where the weapon is equipped (normally for animation purposes)
    equipSlot_t weaponSlot; // Offset: 0x218

    // min facing dot product to throw a projectile
    float minThrowDot; // Offset: 0x21C

    // aim offset to compensate for difference between weapon and eye position {{ units = m }}
    float aimOffset; // Offset: 0x220

    // aim offset against AI targets {{ units = m }}
    float aimOffset_ai; // Offset: 0x224

    // walkstate movement distances and move to cover times
    idDeclAIBehavior::idMovementBehaviors movementBehaviors; // Offset: 0x228

    // order in which this unit type likes to fill encounter group roles
    idList < encounterGroupRole_t , TAG_IDLIST , false > rolePreferenceOrder; // Offset: 0x338

    // use delayed orders so VO chains can work
    bool usesDelayedOrders; // Offset: 0x350

    // ------------------------ animation capabilities ------------------------ chance AI will blink twice in quick succession (0 - 100)
    unsigned char doubleBlinkChance; // Offset: 0x351

    // time between the first and second blinks of a double blink (in milliseconds)
    milliToGameTime_t doubleBlinkInterval; // Offset: 0x358

    // minimum time between blinks (in milliseconds)
    milliToGameTime_t minBlinkInterval; // Offset: 0x368

    // maximum time between blinks (in milliseconds)
    milliToGameTime_t maxBlinkInterval; // Offset: 0x378

    // minimum time between eye jitters (in milliseconds)
    milliToGameTime_t jitterMinInterval; // Offset: 0x388

    // maximum time between eye jitters (in milliseconds)
    milliToGameTime_t jitterMaxInterval; // Offset: 0x398

    // rate that a walk animation is played
    idRange < float > walkRate; // Offset: 0x3A8

    // stuff for determinig how focus tracker should behave
    idDeclAIBehavior::focusTrackBehavior_t focusTrackBehavior; // Offset: 0x3B0

    // prefix for guys to use if their GetEquippedWeapon() function returns NULL
    idAtomicString defaultWeaponPrefix; // Offset: 0x3B8

    // ------------------------ combat ------------------------ if an AI is not already active, they will only receive stimnulus from AI events within this range. {{ units = m }}
    float maxStimulusEventRange; // Offset: 0x3C0

    // enemy will not go to cover within this distance of enemy, and will check for direct path to expose cover {{ units = m }}
    float exposeCoverMinDistance; // Offset: 0x3C4

    // desired cover distance {{ units = m }}
    float optimalCoverDistance; // Offset: 0x3C8

    // when an AI's enemy is closer than this, firing their weapon doesn't use up any ammo {{ units = m }}
    float freeAmmoDistance; // Offset: 0x3CC

    // angry/taunt rage behaviors
    idDeclAIBehavior::idRageBehaviors rageBehaviors; // Offset: 0x3D0

    // ------------------------ melee ------------------------ will melee rc cars (is stupid, or has no other choice)
    bool canRetaliateFromStagger; // Offset: 0x438

    // behaviors for how ai uses their weapon
    idDeclAIBehavior::weaponUseBehaviors_t weaponUseBehaviors; // Offset: 0x440

    // __edit idTypeInfoObjectPtr< weaponUseBehaviors_t >testWeaponBehaviors; a testknobs for target prediction system
    idDeclAIBehavior::predictionBehaviors_t predictionBehaviors; // Offset: 0x4B8

    // containerlist so we can have multiple entries
    idList < idDeclAIBehavior::stringWeaponUseTuple_t , TAG_IDLIST , false > weaponUseBehaviorList; // Offset: 0x4C8

    // container list of conditions that are required to fire any weapon equipped in the given slot
    idList < idDeclAIBehavior::equipSlotRequiredConditions_t , TAG_IDLIST , false > equipSlotConditionsList; // Offset: 0x4E0

    // list of projectile entities that should be pre-spawned for pool system when ai are pre-spawned
    idList < const idDeclEntityDef * , TAG_IDLIST , false > pooledProjectileEnts; // Offset: 0x4F8

    // AI bounds is multiplied by this to determine distnace where pitch correction is suppressed
    float aimTrackingSuppressDistanceFactor; // Offset: 0x510

    // list of automatic sphere model traces to start when anim nodes are entered/exited
    idList < idDeclAIBehavior::nodeSphereModelTracePair_t , TAG_IDLIST , false > autoSphereModelTraces; // Offset: 0x518

    // when this entity performs a sphere model trace, what will the traces hit?
    contentsFlags_t sphereModelTraceContentFlags; // Offset: 0x530

    // what are this entity's spheres made of?
    contentsFlags_t sphereModelContentFlags; // Offset: 0x534

    // Exclude this AI from highlighting at encounter finish
    bool excludeAIFromEncounterHighlight; // Offset: 0x538

    // ------------------------ dodging ------------------------ dive/dodge/flinch logic
    idDeclAIBehavior::idAIDodgingBehaviors dodging; // Offset: 0x540

    // distance within which AI will stop when path is blocked by obstacle {{ units = m }}
    float obstacleStopDistance; // Offset: 0x5B0

    // ------------------------ BFG ------------------------ death particle for the AI when hit with the BFG
    idDeclParticle* bfgDeathParticle; // Offset: 0x5B8

    // explicit impacts to play with sphere model traces
    idList < idDeclAIBehavior::aiDamageDeclImpactDecl_t , TAG_IDLIST , false > damageImpactMappings; // Offset: 0x5C0

    // Active layers configuration name to load from AI FSM manager decl
    idAtomicString aiFSMManagerDeclLayersConfig; // Offset: 0x5D8

    // lists of decls to remap to other decls, for variants, etc.
    idDeclAIBehavior::declRemapData_t declRemaps; // Offset: 0x5E0

    // positioning behavior info
    idDeclAIBehavior::positioningData_t positioning; // Offset: 0x628

    // non-editable settings related to physics and collision
    idDeclAIBehavior::physics_t physics; // Offset: 0x648

    // non-editable settings related to movement
    idDeclAIBehavior::movement_t movement; // Offset: 0x680

    // non-editable settings related to animation
    idDeclAIBehavior::animation_t animation; // Offset: 0x758

    // combat settings
    idDeclAIBehavior::combat_t combat; // Offset: 0x820

    // non-editable settings related to online coop scoring
    idDeclAIBehavior::onlineScoring_t onlineScoring; // Offset: 0x858

    // melee positioning configuration /move this
    idDeclAIBehavior::meleePositioning_t meleePositioning; // Offset: 0x85C

    // voice over behavior
    idDeclAIBehavior::voiceOverBehavior_t voiceOver; // Offset: 0x868

    // extra options for how to use projectiles
    idList < aiProjectileExtraInfo_t , TAG_IDLIST , false > extraProjectileInfos; // Offset: 0x888

    // __def gameStat_taiDeathStat; what stat to increase on death of this ai./move this __def idDeclCodexEntry*aiDeathCodex; what codex to give the player when this ai dies./move this  __edit idList< const idDeclAIPositioningParms *, TAG_AI_UNIT >positioningParms; parms used to control major positioning in behavior fsm/move this  __edit intdeadThinkDelay; in milliseconds/move this  __edit idAtomicStringdefaultHitJoint; default hit joint/move thisnumbers to use in the suicide invalid check
    idDeclAIBehavior::validityChecks_t validity; // Offset: 0x8A0

    // custom stuff
    idDeclAIBehavior::customInfo_t customInfo; // Offset: 0x8C0

    // tweak the importance system here
    idDeclAIBehavior::gameplayPriorityInfo_t gameplayPriorityInfo; // Offset: 0x8D8

    // sound stuff
    idDeclAIBehavior::soundInfo_t soundInfo; // Offset: 0x950

    // boss voice over data
    idDeclAIBehavior::bossVOInfo_t bossVOInfo; // Offset: 0x998

    // additive anims for this AI
    idList < idDeclAIBehavior::additiveAnimInfo_t , TAG_IDLIST , false > additiveAnimInfos; // Offset: 0x9B8

    // If true, will use the current and deferred transforms from havok to calculate the deltas. Otherwise, sphere trace manager will maintain it's own cache of prior frame transforms.
    bool useDeferredTransformsForSphereTraceDeltas; // Offset: 0x9D0

    // buff info
    idDeclAIBehavior::buffInfo_t buffInfo; // Offset: 0x9D8

    // mappings to only play FX when a particular wound is active or inactive
    idList < idDeclAIBehavior::woundFXConditionMapping_t , TAG_IDLIST , false > woundFXMappings; // Offset: 0x9F0

    // FIXME TEMP list of havok ragdoll bodies to set "noSyncCollide" flag. Need to do this at runtime because direct editing of havok ragdoll data is currently infeasible.
    idList < idAtomicString , TAG_IDLIST , false > afNoSyncCollideBodies; // Offset: 0xA08

    // if false, AI will suicide when off nav mesh. If true, AI will teleport to nearest nav position.
    bool offNavMeshSuicideNotAllowed; // Offset: 0xA20

    // named behavior sets
    idList < aiBehaviorSet_t , TAG_IDLIST , false > behaviorSets; // Offset: 0xA28

    // named condition sets
    idList < aiConditionSet_t , TAG_IDLIST , false > conditionSets; // Offset: 0xA40

}; // Size: 0xA58

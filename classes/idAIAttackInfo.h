struct idAIAttackInfo
{
    enum attackValidator_t : int
    {
        ATTACK_VALIDATOR_DEFAULT = 0,
        ATTACK_VALIDATOR_ANIM_DELTA = 1,
        ATTACK_VALIDATOR_DEFERRED = 2,
        ATTACK_VALIDATOR_ANIM_DELTA_AND_EVENTS = 2,
        ATTACK_VALIDATOR_MAX = 3
    };

    struct attackValidatorInfo_t
    {
        // if true, this validator requires deferred collision queries
        bool deferred; // Offset: 0x0

    }; // Size: 0x1

    struct timerNameValue_t
    {
        // name of timer to check
        idAtomicString name; // Offset: 0x0

        // seconds that must have elapsed since above timer
        idTypesafeTime < float , secondUnique_t , 1 > value; // Offset: 0x8

    }; // Size: 0x10

    // name of this attack type for explicitly playing the attack
    idAtomicString attackName; // Offset: 0x0

    // ignore all other attacks, only allow this one to validate
    bool testThisAttackOnly; // Offset: 0x8

    // if true, never use this attack
    bool disabled; // Offset: 0x9

    // stuff controlling when this action is valid
    aiActionValidationCriteria_t validationCriteria; // Offset: 0x10

    // FIXME -- get rid of leadTarget since we can infer this from a nonzero prediction time true if the AI should predict the target's position when deciding to attack
    bool leadTarget; // Offset: 0x110

    // time to use to predict the target's position in the future
    idTypesafeTime < float , secondUnique_t , 1 > predictionTime; // Offset: 0x114

    // attack flags
    aiAttackFlags_t flags; // Offset: 0x118

    // web node to go through on way to viaNode (may be NULL)
    idAnimWebPath_Atomic viaNode; // Offset: 0x120

    // web node to path to
    idAnimWebPath_Atomic destNode; // Offset: 0x160

    // optional -- if specified, use via node for validation purposes but direct web through into node during attack
    idAnimWebPath_Atomic intoNode; // Offset: 0x1A0

    // anim index of anim in node, for nodes with multiple attacks
    int animIndex; // Offset: 0x1E0

    // optionally, scale the play rate of this attack animation
    float animRateScale; // Offset: 0x1E4

    // weight to use when selecting from multiple attack
    float weight; // Offset: 0x1E8

    // FIXME -- get rid of this, its already in validation criteria half length of the attack arc, in degrees
    idTypesafeNumber < float , DegreesUnique_t > arcHalfLength; // Offset: 0x1EC

    // FIXME -- get rid of this, its already in validation criteria force distance checks to be done in 2D
    bool use2DDistanceChecks; // Offset: 0x1F0

    // FIXME -- get rid of this, its already in validation criteria attack timer that gates this attack
    idAITimers::timer_t attackTimer; // Offset: 0x1F4

    // FIXME -- get rid of this, its already in validation criteria min / max time (in seconds) between performing this attack and any other attack using the same attack timer
    idRange < idTypesafeTime < float , secondUnique_t , 1 > > timeBetweenAttacks; // Offset: 0x1F8

    // timer that must also elapse, if above is set, shared by all attacks
    idAITimers::timer_t sharedTimer; // Offset: 0x200

    // shared timer is bumped this much after this attack
    idRange < idTypesafeTime < float , secondUnique_t , 1 > > sharedTimerInterval; // Offset: 0x204

    // when selecting from a set of expansion traces, use this time
    idTypesafeTime < float , secondUnique_t , 1 > predictionTime_final; // Offset: 0x20C

    // Sync Attack that this attack would do.
    idDeclSyncInteraction* syncAttack; // Offset: 0x210

    // true if this attack results in a sync attack on the player
    bool syncAttackPlayer; // Offset: 0x0

    // Sync interaction that this attack should do when it hits target
    idDeclSyncInteraction* syncHit; // Offset: 0x220

    // true if no pain is allowed during this attack (it looks odd for some attacks)
    bool disallowPain; // Offset: 0x0

    // true if the AI cannot die during this attack (it looks odd for some attacks)
    bool disallowDeath; // Offset: 0x0

    // true if the AI cannot perform classic deaths during this attack (it looks odd for some attacks)
    bool disallowDeath_Classic; // Offset: 0x0

    // lag time in seconds of this attack (if leadTarget = true). Only for projectile attacks.
    idTypesafeTime < float , secondUnique_t , 1 > leadLagTime; // Offset: 0x22C

    // required if this is a projectile attack that leads the target
    idDeclProjectile* projDecl; // Offset: 0x230

    // projectile seek parameters
    seekParms_t seekParms; // Offset: 0x238

    // __editidStrprecondition; name of attack that must immediately preceed this one, if any if true, use attack component to expand this attack to multiple possible instances
    bool expand; // Offset: 0x0

    // FIXME -- get rid of this, its already in validation criteria if true, direction and distance is relative to animation itself, not model space
    bool animRelative; // Offset: 0x0

    // name of expansion set to look up in attack component decl
    idAtomicString expansionSetName; // Offset: 0x348

    // timers will be set when attack is finished
    idList < idAIAttackInfo::timerNameValue_t , TAG_AI_FSM , false > timers_setOnAttackFinish; // Offset: 0x350

    // FIXME -- get rid of this, its already in validation criteria list of tokens that must be available, AI will reserve them during attack
    idList < aiTokenType_t , TAG_AI_FSM , false > requiredTokens; // Offset: 0x368

    // raise priority to get query through system faster in a crowd
    animQueryPriority_t queryPriority; // Offset: 0x380

    // extra options for how this attack is validated in animquery system
    animQueryTestOptions_t extraAnimQueryTestOptions; // Offset: 0x384

    // don't play attack if this anim has been played recently by anyone
    idTypesafeTime < float , secondUnique_t , 1 > minSecondsSinceAnim; // Offset: 0x388

    // if any re-validate calls are made, use the data in these conditions
    idList < idTypeInfoObjectPtr < idAICondition > , TAG_AI_FSM , false > reValidationConditions; // Offset: 0x390

    // allow any attacks in this node to revalidate if requested
    bool allowRevalidation; // Offset: 0x0

    // if true, configure delta correction endpoints according to attack instance
    bool setDeltaCorrectionData; // Offset: 0x3A9

}; // Size: 0x3B0

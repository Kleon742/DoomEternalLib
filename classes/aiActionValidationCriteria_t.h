struct aiActionValidationCriteria_t
{
    // all types of validation that should be applied to this action, use to toggle stuff on/off
    aiActionValidatorCategoryFlags validatorTypes; // Offset: 0x0

    // bits for which walkstates / behavior states are valid for this action
    aiActionValidityFlags_walkstate validWalkStates; // Offset: 0x4

    // bits for more advanced validity behavior
    aiActionValidityFlags_advanced advancedFlags; // Offset: 0x8

    // direction of the center of the attack arc, in degrees from forward( 0 = forward, 90 = left, -90 = right)
    idTypesafeNumber < float , DegreesUnique_t > arcDirection; // Offset: 0xC

    // half length of the attack arc, in degrees
    idTypesafeNumber < float , DegreesUnique_t > arcHalfLength; // Offset: 0x10

    // half length of the attack arc (vertically), in degrees
    idTypesafeNumber < float , DegreesUnique_t > arcVerticalHalfLength; // Offset: 0x14

    // distance to enemy origin must be within this range to use this attack {{ units = m }}
    idRange < float > distanceRange; // Offset: 0x18

    // distance to enemy origin must be within this range to use this attack {{ units = m }}
    idRange < float > distanceRange_Vertical; // Offset: 0x20

    // distance to enemy origin must be within this range to use this attack, non-predicted {{ units = m }}
    idRange < float > distanceRange_absolute; // Offset: 0x28

    // if currently in a move, direction of attack anim translation delta must align with current path direction within this tolerance
    float minPathDirAlignDot; // Offset: 0x30

    // hacky magic number-ish ... to bump up vertical distance for validation
    float hack_distToTarget_z_add; // Offset: 0x34

    // name of attack that must immediately precede this one, if any
    idList < idAtomicString , TAG_IDLIST , false > preconditions; // Offset: 0x38

    // valid web nodes the AI must be in for this attack to be considered
    idList < idAnimWebPath_Atomic , TAG_AI_FSM , false > sourceNodes; // Offset: 0x50

    // list of tokens that must be available, AI will reserve them during attack
    idList < aiTokenType_t , TAG_AI_FSM , false > requiredTokens; // Offset: 0x68

    // Temp memory keys that must exist to enable the attack.
    idList < idAtomicString , TAG_AI_FSM , false > requiredMemoryKeys; // Offset: 0x80

    // timers that must have elapsed before attack is valid
    idList < nameRangePair_t , TAG_AI_FSM , false > timers_required; // Offset: 0x98

    // optional attack timer that gates this attack
    idAITimers::timer_t attackTimer; // Offset: 0xB0

    // min / max time (in seconds) between performing this attack and any other attack using the same attack timer
    idRange < idTypesafeTime < float , secondUnique_t , 1 > > timeBetweenAttacks; // Offset: 0xB4

    // AI Conditions that must meet for the attack to be valid
    idList < idTypeInfoObjectPtr < idAICondition > , TAG_AI_FSM , false > conditions; // Offset: 0xC0

    // this attack is only valid if these behavior keys are set
    idList < idAtomicString , TAG_AI_FSM , false > behaviorKeys; // Offset: 0xD8

    // time to use to predict the target's position in the future
    idTypesafeTime < float , secondUnique_t , 1 > predictionTime; // Offset: 0xF0

    // if AI is in an animation with phase events, only validate this attack accordingly
    idRange < float > animPhaseRange; // Offset: 0xF4

}; // Size: 0x100

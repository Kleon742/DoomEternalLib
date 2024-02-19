struct idAIAnimState_LinkCondition_MovementKeys : idAIAnimState_LinkCondition
{
    // condition is only valid if all of these keys are present, if non-empty
    idList < idAtomicString , TAG_IDLIST , false > requiredMovementKeys; // Offset: 0x18

    // condition is invalid if any keys exist outside of this set, if non-empty
    idList < idAtomicString , TAG_IDLIST , false > allowedMovementKeys; // Offset: 0x30

    // condition is invalid if any of these keys are present
    idList < idAtomicString , TAG_IDLIST , false > excludeMovementKeys; // Offset: 0x48

}; // Size: 0x60

struct moveCriteriaAndSelection_t
{
    // required temp memory keys
    idList < stringIntegerTuple_t , TAG_IDLIST , false > requiredMemoryKeys; // Offset: 0x0

    // requires this walkstate
    walkState_t walkState; // Offset: 0x18

    // condition is only valid if all of these keys are present, if non-empty
    idList < idAtomicString , TAG_IDLIST , false > requiredMovementKeys; // Offset: 0x20

    // condition is invalid if any keys exist outside of this set, if non-empty
    idList < idAtomicString , TAG_IDLIST , false > allowedMovementKeys; // Offset: 0x38

    // condition is invalid if any of these keys are present
    idList < idAtomicString , TAG_IDLIST , false > excludeMovementKeys; // Offset: 0x50

    // must be this close to move target
    idRange < float > remainingPathDistance; // Offset: 0x68

    // must be this close to combat target
    idRange < float > targetDistance; // Offset: 0x70

    // entry to select
    stringAnimEntry_t selection; // Offset: 0x78

}; // Size: 0xC0

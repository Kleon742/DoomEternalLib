struct Code_SetupMove : idAIStateTransition
{
    // entity
    idAtomicString entityKey; // Offset: 0xF8

    // origin
    idAtomicString originKey; // Offset: 0x100

    // axis
    idAtomicString axisKey; // Offset: 0x108

    // arrival tolerance
    idAtomicString arrivalToleranceKey; // Offset: 0x110

    // entity align to rotation
    idAtomicString entityAlignToRotationKey; // Offset: 0x118

    // entity align to rotation
    idAtomicString tetherRadiusKey; // Offset: 0x120

    // if true, get move goal/axis from temp memory, and pipe to fsm IO
    bool sourceFromTempMemory; // Offset: 0x128

    // use this tether radius for move to cover
    float overrideTetherRadius; // Offset: 0x12C

}; // Size: 0x130

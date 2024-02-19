struct Shared_EnemyInRangeAndAngle : idAIStateTransition
{
    // distance ranges {{ units = m }}
    idRange < float > range; // Offset: 0xF8

    // if not empty then use ai memory key value to overwrite range.Min
    idAtomicString rangeMinOverwriteMemoryKey; // Offset: 0x100

    // if not empty then use ai memory key value to overwrite range.Max
    idAtomicString rangeMaxOverwriteMemoryKey; // Offset: 0x108

    // vertical distance ranges {{ units = m }}
    idRange < float > verticalRange; // Offset: 0x110

    // maximum allowed angle difference
    idTypesafeNumber < float , DegreesUnique_t > maxAngle; // Offset: 0x118

    // whether to use 2d checks
    bool use2Dchecks; // Offset: 0x11C

}; // Size: 0x120

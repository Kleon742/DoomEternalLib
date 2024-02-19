struct Shared_TargetDistanceFilter : idAIStateTransition
{
    // look in ai memory for this value
    idAtomicString cardinalDistanceRangeMinString; // Offset: 0xF8

    // look in ai memory for this value
    idAtomicString cardinalDistanceRangeMaxString; // Offset: 0x100

    // acceptable ranges for cardinal distance, -1 means inapplicable {{ units = m }}
    idRange < float > cardinalDistanceRange; // Offset: 0x108

    // vertical distance ranges {{ units = m }}
    idRange < float > verticalRange; // Offset: 0x110

    // acceptable ranges for path distance, -1 means inapplicable {{ units = m }}
    idRange < float > pathLengthRange; // Offset: 0x118

    // max vertical difference between goal origin and target
    float maxVerticalDiffBetweenGoalOriginAndTarget; // Offset: 0x120

    // nav tolerance ( how far off nav mesh target can be ) {{ units = m }}
    float navTolerance; // Offset: 0x124

    // don't include targets with a path distance over this ratio to cardinal distance
    float distanceRatioCutoff; // Offset: 0x128

    // if we want to keep pathfind results, preserve for this long
    float preservePathSeconds; // Offset: 0x12C

    // put pathfind key in this temp memory key
    idAtomicString pathKeyMemoryString; // Offset: 0x130

    // if false, don't allow traversals on the path
    bool allowTraversals; // Offset: 0x138

    // force pathfind to exclude traversals in the first place
    bool forceNoTraversals; // Offset: 0x139

    // apply filter to current target instead of pending list
    bool checkCurrentTarget; // Offset: 0x13A

    // reduce filter list down to closest entity ( pathable only )
    bool useClosestOnly; // Offset: 0x13B

    // if true, queue pathfind with high priority
    bool highPriorityPathfind; // Offset: 0x13C

}; // Size: 0x140

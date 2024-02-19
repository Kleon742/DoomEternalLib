struct idAICondition_Shared_PathDistance : idAICondition
{
    // condition passes if remaining path distance is within this range {{ units = m }}
    idRange < float > distanceRange; // Offset: 0x18

    // if true, use distance to next traversal instead of goal ( return false if no traversal )
    bool toTraversal; // Offset: 0x20

}; // Size: 0x28

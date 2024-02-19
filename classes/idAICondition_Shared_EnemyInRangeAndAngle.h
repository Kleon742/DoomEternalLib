struct idAICondition_Shared_EnemyInRangeAndAngle : idAICondition
{
    // distance ranges {{ units = m }}
    idRange < float > range; // Offset: 0x18

    // vertical distance ranges {{ units = m }}
    idRange < float > verticalRange; // Offset: 0x20

    // maximum allowed angle difference
    idTypesafeNumber < float , DegreesUnique_t > maxAngle; // Offset: 0x28

    // whether to use 2d checks
    bool use2Dchecks; // Offset: 0x2C

    // if true, only consider vertical
    bool useZCheckOnly; // Offset: 0x2D

    // if true, consider target as source
    bool targetRelative; // Offset: 0x2E

    // if true, use my view position instead of origin
    bool useMyViewPos; // Offset: 0x2F

    // if true, use target view pos
    bool useTargetViewPos; // Offset: 0x30

}; // Size: 0x38

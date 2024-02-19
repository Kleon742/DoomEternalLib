struct idAIDamageState_LinkCondition_Shared_AttackerInRangeAndAngle : idAIDamageState_LinkCondition
{
    // distance ranges {{ units = m }}
    idRange < float > range; // Offset: 0x20

    // vertical distance ranges {{ units = m }}
    idRange < float > verticalRange; // Offset: 0x28

    // maximum allowed angle difference
    idTypesafeNumber < float , DegreesUnique_t > maxAngle; // Offset: 0x30

    // whether to use 2d checks
    bool use2Dchecks; // Offset: 0x34

    // if true, only consider vertical
    bool useZCheckOnly; // Offset: 0x35

    // if true, consider attacker as source
    bool attackerRelative; // Offset: 0x36

    // if true, use my view position instead of origin
    bool useMyViewPos; // Offset: 0x37

    // if true, use attacker view pos instead of origin
    bool useAttackerViewPos; // Offset: 0x38

}; // Size: 0x40

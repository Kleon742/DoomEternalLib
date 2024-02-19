struct idAICondition_Filter_Positions_Direction : idAICondition
{
    // blah
    idAngles arcDirection; // Offset: 0x18

    // blah
    idTypesafeNumber < float , DegreesUnique_t > arcHalfAngle; // Offset: 0x24

    // if true, angles and dir are from target's vantage point
    bool targetRelative; // Offset: 0x28

    // if true, "forward" is the direction from me to target ( or vice versa )
    bool alignToTarget; // Offset: 0x29

    // 2d only
    bool ignoreVertical; // Offset: 0x2A

    // if true, accept the wedge in both forward and negative directions
    bool mirror; // Offset: 0x2B

    // if true, use distance as the sorting value rather than angle
    bool sortByDistance; // Offset: 0x2C

    // if true, sort results from closest to farthest
    bool sortResults_ascending; // Offset: 0x2D

    // if true, sort results from farthest to closest
    bool sortResults_descending; // Offset: 0x2E

    // blah
    idColor debugColor_input; // Offset: 0x30

    // blah
    idColor debugColor_output; // Offset: 0x40

}; // Size: 0x50

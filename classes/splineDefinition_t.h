struct splineDefinition_t
{
    // name of this definition
    idAtomicString name; // Offset: 0x0

    // amount of roll in this definition
    idTypesafeNumber < float , DegreesUnique_t > roll; // Offset: 0x8

    // table defining the normalized control point shape
    idDeclTable* controlPointTable; // Offset: 0x10

    // This is an index offset for the control point used to converge on the target, counting back from final point
    int convergePoint; // Offset: 0x18

    // vertical value of spline can't exceed this amount
    float maxHeight; // Offset: 0x1C

}; // Size: 0x20

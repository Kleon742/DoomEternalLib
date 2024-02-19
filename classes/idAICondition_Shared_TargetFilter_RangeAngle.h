struct idAICondition_Shared_TargetFilter_RangeAngle : idAICondition
{
    // distance ranges {{ units = m }}
    idRange < float > range; // Offset: 0x18

    // vertical distance ranges {{ units = m }}
    idRange < float > verticalRange; // Offset: 0x20

    // maximum allowed angle difference
    idTypesafeNumber < float , DegreesUnique_t > maxAngle; // Offset: 0x28

    // minimum allowed angle difference
    idTypesafeNumber < float , DegreesUnique_t > minAngle; // Offset: 0x2C

    // name of positioning parms to use, if desired
    idAtomicString positioningParmsName; // Offset: 0x30

    // positioning parms decl to use, if desired
    idDeclAIPositioningParms* positioningParmsDecl; // Offset: 0x38

    // if true, use ideal values from positioning parms
    bool useIdeal; // Offset: 0x40

    // whether to use 2d checks
    bool use2Dchecks; // Offset: 0x41

}; // Size: 0x48

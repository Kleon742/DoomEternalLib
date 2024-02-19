struct idTarget_GroupExpression : idTarget
{
    // expressions that must be true for this target to fire its targets
    idList < idEncounterGroupExpr , TAG_IDLIST , false > expressions; // Offset: 0xB88

    // name of the group that the expression evaluates for
    idStr groupName; // Offset: 0xBA0

}; // Size: 0xBD0

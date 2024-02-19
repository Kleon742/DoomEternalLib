struct idTarget_Objective_Complete : idTarget
{
    // This cannot be NULL. If no steps are given we are completing this objective else we are completing a sub step.
    idDeclObjective* objective; // Offset: 0xB88

    // If any steps are given then we are completing any of the steps in this list and not the main objective.
    idList < const idDeclObjective * , TAG_IDLIST , false > steps; // Offset: 0xB90

    // Any steps that we are adding to the specified main objective.
    idList < idTargetObjectiveEntry , TAG_IDLIST , false > addSteps; // Offset: 0xBA8

    // POI information on this Objective.
    idDeclPOI* poiDecl; // Offset: 0xBC0

    // POI information on this Objective's steps.
    idDeclPOI* stepPoiDecl; // Offset: 0xBC8

    // Location entities for the objective.
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > entities; // Offset: 0xBD0

    // Removes the objective after completion, default to true.
    bool removeOnCompletion; // Offset: 0xBE8

    // Keep objective on screen.
    bool keepCompletedObjectiveOnScreen; // Offset: 0xBE9

    // Total number of steps for a given objective.
    int totalNumberOfObjectiveSteps; // Offset: 0xBEC

}; // Size: 0xBF0

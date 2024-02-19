struct idTarget_Objective_Give : idTarget
{
    // The objective that we are creating or adding step to.
    idTargetObjectiveEntry objective; // Offset: 0xB88

    // Any steps that we are adding to the specified main objective
    idList < idTargetObjectiveEntry , TAG_IDLIST , false > steps; // Offset: 0xBC0

    // POI information on this Objective.
    idDeclPOI* poiDecl; // Offset: 0xBD8

    // POI information on this Objective's steps.
    idDeclPOI* stepPoiDecl; // Offset: 0xBE0

    // Will this target make the objective be consided updated.
    bool updatedObjective; // Offset: 0xBE8

    // Show the Updated Map Hud Notification.
    bool showMapUpdate; // Offset: 0xBE9

    // keep objective displayed on screen until complete.
    bool KeepObjectiveOnScreen; // Offset: 0xBEA

    // We already added the following Objective.
    bool ObjectiveAlreadyGiven; // Offset: 0xBEB

}; // Size: 0xBF0

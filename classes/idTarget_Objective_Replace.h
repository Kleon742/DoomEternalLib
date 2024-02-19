struct idTarget_Objective_Replace : idTarget
{
    // objective decl
    idDeclObjective* objective; // Offset: 0xB88

    // objective step decl to replace
    idDeclObjective* oldStep; // Offset: 0xB90

    // objective step entry to replace with, if NULL just remove old
    idTargetObjectiveEntry newStep; // Offset: 0xB98

    // Keep objective on screen.
    bool keepCompletedObjectiveOnScreen; // Offset: 0xBD0

}; // Size: 0xBD8

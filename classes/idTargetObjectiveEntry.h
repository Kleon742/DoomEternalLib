struct idTargetObjectiveEntry
{
    // decl for objective
    idDeclObjective* decl; // Offset: 0x0

    // location entities for the objective
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > entities; // Offset: 0x8

    // names of rooms to reveal when objective is given.
    idList < idStr , TAG_IDLIST , false > roomsToReveal; // Offset: 0x20

}; // Size: 0x38

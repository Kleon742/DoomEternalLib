struct idObjective : idClass
{
    idDeclObjective* decl; // Offset: 0x10

    idDeclPOI* declPOI; // Offset: 0x18

    objectiveStatus_t status; // Offset: 0x20

    // list of sub objectives in this objective.
    idList < idObjective * , TAG_IDLIST , false > steps; // Offset: 0x28

    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > entities; // Offset: 0x40

    int triggeredTimes; // Offset: 0x58

    // identifier for the pois that links to this objective
    idList < int , TAG_IDLIST , false > poiUids; // Offset: 0x60

}; // Size: 0x78

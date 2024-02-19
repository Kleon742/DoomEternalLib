struct idTarget_DynamicChallenge_PointTrigger : idTarget
{
    // Entity that was passed through the activate call
    idManagedClassPtr < idEntity > activatingEnt; // Offset: 0xB88

    // trigger this entity
    idManagedClassPtr < idEntity > triggerTarget; // Offset: 0xBA8

    // trigger when reach this number of points
    int points; // Offset: 0xBC8

    // include points from an ongoing combo
    bool includeComboPoints; // Offset: 0xBCC

}; // Size: 0xBD0

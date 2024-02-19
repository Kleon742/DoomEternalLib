struct idPlayerMechanicBloodPunch : idPlayerMechanic
{
    idSpawnId entityList[10]; // Offset: 0x28

    idHavokGatherQueryId gatherQuery; // Offset: 0x50

    bool hasValidTarget; // Offset: 0x58

    idSpawnId validTarget; // Offset: 0x5C

}; // Size: 0x60

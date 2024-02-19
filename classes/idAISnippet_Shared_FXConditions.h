struct idAISnippet_Shared_FXConditions : idAISnippet
{
    // type of replication to use for the FX
    fxEventReplicationType_t replicationType; // Offset: 0x18

    // conditions to start when state is entered
    idList < fxCondition_t , TAG_IDLIST , false > startConditions; // Offset: 0x20

    // conditions to stop when state is entered
    idList < fxCondition_t , TAG_IDLIST , false > stopConditions; // Offset: 0x38

    // the reliable is useless if the entity hasn't been created on the client yet
    idTypesafeTime < int , millisecondUnique_t , 1000 > serverDelay; // Offset: 0x50

}; // Size: 0x58

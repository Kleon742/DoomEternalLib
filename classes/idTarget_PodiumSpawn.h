struct idTarget_PodiumSpawn : idTarget
{
    struct podiumTagData_t
    {
        // name of tag
        idStr name; // Offset: 0x0

        // position of tag
        idVec3 pos; // Offset: 0x30

        // orientation of tag
        idMat3 axis; // Offset: 0x3C

    }; // Size: 0x60

    // whether we are active or not
    bool active; // Offset: 0xB88

    // the entities we have spawned
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > spawnedEntities; // Offset: 0xB90

    idManagedClassPtr < idEntityFx > fxEntity; // Offset: 0xBA8

    // the podium decl to activate
    idDeclPodium* podiumDecl; // Offset: 0xBC8

    // if true activate entities on spawn, if false activate entities when this entity is activated
    bool activateOnSpawn; // Offset: 0xBD0

    // tags for positioning data
    idList < idTarget_PodiumSpawn::podiumTagData_t , TAG_IDLIST , false > tags; // Offset: 0xBD8

}; // Size: 0xBF0

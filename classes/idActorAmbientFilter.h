struct idActorAmbientFilter : idBloatedEntity
{
    // list of entities you want to include in actor's ambient behaviors
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > entityList; // Offset: 0xB88

}; // Size: 0xBA0

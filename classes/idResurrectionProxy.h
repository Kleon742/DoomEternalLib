struct idResurrectionProxy : idBloatedEntity
{
    // all entitydefs this thing can spawn
    idList < rezData_t , TAG_IDLIST , false > availableSummons; // Offset: 0xB88

    // spawns are valid within this radius {{ units = m }}
    float radius; // Offset: 0xBA0

    // use this as a template for spawn fx, specific fx decls in availableSummons will fill it out
    idDeclEntityDef* fxBaseEntity; // Offset: 0xBA8

    // where arcvhile can stand when building a rift based on this proxy
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > buildPositions; // Offset: 0xBB0

}; // Size: 0xBC8

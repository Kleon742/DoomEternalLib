struct idBotRouteComponent
{
    // entity this component belongs to.
    idManagedClassPtr < idEntity > owner; // Offset: 0x0

    // route nodes to this entity.
    idList < idManagedClassPtr < idBotPathNodeEntity > , TAG_IDLIST , false > routeNodeEntityList; // Offset: 0x20

    // the games version of the above data.
    idList < gameRouteInfo_t , TAG_IDLIST , false > gameRouteList; // Offset: 0x38

}; // Size: 0x50

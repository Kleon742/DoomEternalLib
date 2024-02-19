struct idPortalWorld : idBloatedEntity
{
    // anything that is going to be inside the portal, even partially
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > portalWorldEntities; // Offset: 0xB88

}; // Size: 0xBA0

struct idBreakablePlatform : idProp2
{
    struct touchingEntityInfo_t
    {
        idManagedClassPtr < idEntity > entity; // Offset: 0x0

        idTypesafeTime < float , secondUnique_t , 1 > timestamp; // Offset: 0x20

    }; // Size: 0x28

    typedef idList < idBreakablePlatform::touchingEntityInfo_t > touchList_t;

    idList < idBreakablePlatform::touchingEntityInfo_t , TAG_IDLIST , false > touching; // Offset: 0x1F58

}; // Size: 0x1F70

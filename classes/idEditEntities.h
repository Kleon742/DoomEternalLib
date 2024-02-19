struct idEditEntities
{
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextSelectTime; // Offset: 0x0

    bool lastSelectResult; // Offset: 0x8

    idList < idSelectedTypeInfo , TAG_IDLIST , false > selectableEntityClasses; // Offset: 0x10

    idList < idEntity * , TAG_IDLIST , false > selectedEntities; // Offset: 0x28

    idList < int , TAG_IDLIST , false > editedEntities; // Offset: 0x40

    bool dragging; // Offset: 0x58

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > dragTime; // Offset: 0x60

    int dragAxis; // Offset: 0x68

    idVec3 lastViewDir; // Offset: 0x6C

    // {{ units = m }}
    idVec3 lastDragPos; // Offset: 0x78

    idList < idEditEntitiesListener * , TAG_IDLIST , false > listeners; // Offset: 0x88

}; // Size: 0xA0

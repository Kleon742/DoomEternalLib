struct idLootDropComponent
{
    // All the data the component runs on.
    idDeclLootDropComponent* lootDropDataDecl; // Offset: 0x8

    idManagedClassPtr < idEntity > owner; // Offset: 0x10

    // Which entity to drop from, ( usually the owner )
    idManagedClassPtr < idEntity > dropFromEntity; // Offset: 0x30

    int numDroppedItems; // Offset: 0x50

    // maximum number of dropped items for this component
    int maxDroppedItems; // Offset: 0x54

    // list of loot drop decls
    idList < const idDeclLootDrop * , TAG_IDLIST , false > droppableItems; // Offset: 0x58

    bool enabled; // Offset: 0x70

    bool hasDroppedLoot; // Offset: 0x71

    // Does this lootdrop component belong to a demon empowered by the bounty system
    bool lootEmpowered; // Offset: 0x72

    // used to cool down the loot drops if the entity survives
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextDropMs; // Offset: 0x78

    // used to track who ordered the drop denial
    idEventReceiver* dropDenier; // Offset: 0x80

    // used to force the spawn position isntead of using the owning entity's origin
    idVec3 overrideSpawnPos; // Offset: 0x88

}; // Size: 0x98

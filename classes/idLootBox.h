struct idLootBox
{
    struct RandomLootItem
    {
        // drop item
        idDeclInventory* item; // Offset: 0x0

        // drop percent( 0 to 100 )
        float dropPercent; // Offset: 0x8

        // minimum number to drop
        int minCount; // Offset: 0xC

        // maximum number to drop
        int maxCount; // Offset: 0x10

    }; // Size: 0x18

    // inventory this loot box contains
    idList < idLootBox::RandomLootItem , TAG_IDLIST , false > loot; // Offset: 0x0

}; // Size: 0x18

struct idTarget_InventoryCheck : idTarget
{
    struct requiredInventoryItem_t
    {
        // Item that is required to fire the targets
        idDeclInventory* requiredItem; // Offset: 0x0

        // Number of that item that is required (normally 1)
        int requiredCount; // Offset: 0x8

        // (Optional) Message to print when the player has the item
        idStr haveItemMessage; // Offset: 0x10

        // (Optional) Message to print when the player doesn't have the item
        idStr dontHaveItemMessage; // Offset: 0x40

        // Item is deleted when used ( defaults to true )
        bool deleteOnUse; // Offset: 0x70

    }; // Size: 0x78

    // List of required inventory items
    idList < idTarget_InventoryCheck::requiredInventoryItem_t , TAG_IDLIST , false > requiredItemList; // Offset: 0xB88

    // If true, having any item fires the target, false means all are required ( defaults to false )
    bool anyItemActivates; // Offset: 0xBA0

    // If false, the check can be done multiple times, otherwise only once ( defaults to true )
    bool useOnce; // Offset: 0xBA1

    // if the activator is null assume local player
    bool nullActivatorIsLocalPlayer; // Offset: 0xBA2

    // (Optional) Message to print when the player has all (or one of) the items - supersedes item msg
    idStrId haveItemsMessage; // Offset: 0xBA4

    // (Optional) Message to print when the player doesn't have all (or any) of the items - supersedes item msg
    idStrId dontHaveItemsMessage; // Offset: 0xBA8

    // Set to true once the check passes
    bool used; // Offset: 0xBAC

}; // Size: 0xBB0

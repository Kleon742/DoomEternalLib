struct idInventoryCondition_t
{
    enum eCheckType : int
    {
        CHECK_INVENTORY = 0,
        CHECK_HEALTH = 1,
        CHECK_ARMOR = 2,
        CHECK_BLOODPUNCH_CHARGES = 3
    };

    enum eConditional : int
    {
        CONDITION_MORE_THAN = 0,
        CONDITION_LESS_THAN = 1,
        CONDITION_EXACTLY = 2
    };

    // what should we check
    idInventoryCondition_t::eCheckType checkType; // Offset: 0x0

    // CHECK_INVENTORY: Inventory item to check
    idDeclInventory* invItem; // Offset: 0x8

    // CHECK_INVENTORY: upgrade current checked when invItem is empty
    playerUpgradeCurrency_t upgradeCurrency; // Offset: 0x10

    // ALL CHECKS: condition to be met
    idInventoryCondition_t::eConditional condition; // Offset: 0x14

    // ALL CHECKS: count for condition
    int count; // Offset: 0x18

}; // Size: 0x20

struct idSingleRequirement_t
{
    // the type of requirement to be met
    idRequirementType_t requirementType; // Offset: 0x0

    // pointer to the inventory item we require
    idDeclInventory* inventoryItem; // Offset: 0x8

    // the entity we require in the world for this to be active
    idManagedClassPtr < idEntity > entity; // Offset: 0x10

    // currency needed for the requirement
    playerUpgradeCurrency_t currencyType; // Offset: 0x30

    // Amount of the currency needed.
    int currencyAmount; // Offset: 0x34

    // Float value for Health
    float floatValue; // Offset: 0x38

}; // Size: 0x40

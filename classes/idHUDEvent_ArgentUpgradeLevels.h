struct idHUDEvent_ArgentUpgradeLevels
{
    struct idHUDEvent_ArgentUpgradeLevels_Info
    {
        struct argentCategoryInfo_t
        {
            int count; // Offset: 0x0

            idDeclInventory* decl; // Offset: 0x8

        }; // Size: 0x10

        idHUDEvent_ArgentUpgradeLevels::idHUDEvent_ArgentUpgradeLevels_Info::argentCategoryInfo_t categories[3]; // Offset: 0x0

        idDeclInventoryConvTable* table; // Offset: 0x30

    }; // Size: 0x38

    idHUDEvent_ArgentUpgradeLevels::idHUDEvent_ArgentUpgradeLevels_Info info; // Offset: 0x0

}; // Size: 0x38

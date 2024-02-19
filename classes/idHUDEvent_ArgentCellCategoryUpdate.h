struct idHUDEvent_ArgentCellCategoryUpdate
{
    struct categoryInfo_t
    {
        idMaterial2* icon; // Offset: 0x0

        int title; // Offset: 0x8

        int acquired; // Offset: 0xC

        int index; // Offset: 0x10

    }; // Size: 0x18

    idHUDEvent_ArgentCellCategoryUpdate::categoryInfo_t info; // Offset: 0x0

}; // Size: 0x18

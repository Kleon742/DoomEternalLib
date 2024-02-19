struct idHUDEvent_EquipmentUpdate
{
    struct equipmentUpdateData_t
    {
        idDeclInventory* equipmentItem; // Offset: 0x0

        int numUses; // Offset: 0x8

        int maxUses; // Offset: 0xC

        long long cooldownStartTime; // Offset: 0x10

        long long cooldownEndTime; // Offset: 0x18

        bool upgraded; // Offset: 0x20

        long long endTimeReduction; // Offset: 0x28

        bool equipped; // Offset: 0x30

    }; // Size: 0x38

    idHUDEvent_EquipmentUpdate::equipmentUpdateData_t info; // Offset: 0x0

}; // Size: 0x38

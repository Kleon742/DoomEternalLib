struct idHUDEvent_PlayerHealthChange
{
    struct playerHealthData_t
    {
        // How much the max has changed.
        float maxHealthDeltaChange; // Offset: 0x0

        // How much the max has changed.
        float maxArmorDeltaChange; // Offset: 0x4

        // How much damage we actually took.
        float healthDeltaChange; // Offset: 0x8

        // How much damage we actually took.
        float armorDeltaChange; // Offset: 0xC

    }; // Size: 0x10

    idHUDEvent_PlayerHealthChange::playerHealthData_t info; // Offset: 0x0

}; // Size: 0x10

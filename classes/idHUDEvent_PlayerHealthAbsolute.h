struct idHUDEvent_PlayerHealthAbsolute
{
    struct playerHealthData_t
    {
        float maxHealth; // Offset: 0x0

        float maxArmor; // Offset: 0x4

        float curHealth; // Offset: 0x8

        float curArmor; // Offset: 0xC

        // Value at or below where the player is low health
        float lowHealthThreshold; // Offset: 0x10

        // Value at or below where the player is really low health
        float reallyLowHealthThreshold; // Offset: 0x14

        bool isDemon; // Offset: 0x18

        bool force; // Offset: 0x19

    }; // Size: 0x1C

    idHUDEvent_PlayerHealthAbsolute::playerHealthData_t info; // Offset: 0x0

}; // Size: 0x1C

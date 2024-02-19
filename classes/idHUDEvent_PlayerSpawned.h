struct idHUDEvent_PlayerSpawned
{
    struct playerSpawnedData_t
    {
        // Max Health the player has.
        float maxHealth; // Offset: 0x0

        // Max Armor the player has.
        float maxArmor; // Offset: 0x4

        // Current Health the player has.
        float curHealth; // Offset: 0x8

        // Current Armor the player has.
        float curArmor; // Offset: 0xC

        // Value at or below where the player is low health
        float lowHealthThreshold; // Offset: 0x10

        // Value at or below where the player is really low health
        float reallyLowHealthThreshold; // Offset: 0x14

    }; // Size: 0x18

    idHUDEvent_PlayerSpawned::playerSpawnedData_t info; // Offset: 0x0

}; // Size: 0x18

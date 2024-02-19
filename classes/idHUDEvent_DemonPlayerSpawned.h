struct idHUDEvent_DemonPlayerSpawned
{
    struct demonPlayerSpawnedData_t
    {
        // Max Health the demon player has.
        float maxHealth; // Offset: 0x0

        // Current demon player health
        float currentHealth; // Offset: 0x4

        // Demon Player State
        int currentState; // Offset: 0x8

        // Value at or below where the player is low health
        float lowHealthThreshold; // Offset: 0xC

        // Value at or below where the player is really low health
        float reallyLowHealthThreshold; // Offset: 0x10

        // the demon player tutorial is active
        bool isInDemonTutorial; // Offset: 0x14

    }; // Size: 0x18

    idHUDEvent_DemonPlayerSpawned::demonPlayerSpawnedData_t info; // Offset: 0x0

}; // Size: 0x18

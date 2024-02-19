struct idDeclSlayerInvasion_Data : idGameDeclTypeInfo
{
    // Scale Speed during spectator(Ghost) mode.
    float spectatorSpeedScale; // Offset: 0x90

    // Max Speed during spectator(Ghost) mode.
    float spectatorSpectatorMaxSpeed; // Offset: 0x94

    // Enable the ability to monkey bar during spectator(Ghost) mode.
    bool enableMonkeyBar; // Offset: 0x98

    // Enable the ability to ledge grab during spectator(Ghost) mode.
    bool enableLedgeGrab; // Offset: 0x99

    // How many seconds to be in spectator(Ghost) mode.
    idTypesafeTime < float , secondUnique_t , 1 > secondsBeforeSpawningIntoGhostMode; // Offset: 0x9C

    // How many seconds to be in spectator(Ghost) mode.
    idTypesafeTime < float , secondUnique_t , 1 > secondsInGhostMode; // Offset: 0xA0

    // How many seconds the slayer is invulnerable.
    idTypesafeTime < float , secondUnique_t , 1 > secondsInvulnerability; // Offset: 0xA4

    // Status effect to apply to the player when the spectacle camera is active
    idDeclStatusEffect* spectacleCameraStatusEffect; // Offset: 0xA8

    // Status effect to apply to the player when respawning and invulnerability is enabled
    idDeclStatusEffect* invulnerabilityStatusEffect; // Offset: 0xB0

}; // Size: 0xB8

struct idPlayerDiagnosticsOnline
{
    idManagedClassPtr < idPlayer > playerOwner; // Offset: 0x0

    idUpgradeSystem < idPlayerDiagnostics > upgradeSystem; // Offset: 0x20

    // The latest gathered view results.
    idList < gameViewEntInfo_t , TAG_IDLIST , false > currentResults; // Offset: 0x50

    // Max Distance of the Diagnostics.
    float maxDistance; // Offset: 0x68

}; // Size: 0x70

struct idPlayerDiagnostics
{
    idManagedClassPtr < idPlayer > playerOwner; // Offset: 0x0

    idUpgradeSystem < idPlayerDiagnostics > upgradeSystem; // Offset: 0x20

    // The lastest gathered view results.
    idList < gameViewEntInfo_t , TAG_IDLIST , false > currentResults; // Offset: 0x50

    // Max visible diagnostic rune health bars
    int maxVisible; // Offset: 0x68

    // Max Distance of the Diagnostics.
    float maxDistance; // Offset: 0x6C

    // How long does it take to fade diagnostics to 0 opacity
    int fadeOutTimeMS; // Offset: 0x70

    // How long to remain at maxOpacity
    int visibleTimeMS; // Offset: 0x74

    // maximum opacity
    float maxOpacity; // Offset: 0x78

    // color to flash on armor hit
    idColor colorArmor; // Offset: 0x7C

    // color to flash on critical hit
    idColor colorCritical; // Offset: 0x8C

}; // Size: 0xA0

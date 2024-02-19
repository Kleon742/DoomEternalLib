struct idHUD
{
    struct playerInhibitInfo_t
    {
        idUCmdTracker::inhibitFlags_t inhibitFlags; // Offset: 0x0

        idManagedClassPtr < idPlayer > inhibitPlayer; // Offset: 0x8

        bool takesDamage; // Offset: 0x28

        bool controlTakesDamage; // Offset: 0x29

        bool disableMovementDuringCustomAnim; // Offset: 0x2A

    }; // Size: 0x30

    // decl that defines the hud.
    idDeclHUD* declHUD; // Offset: 0x0

    // The player index this HUD responds to
    int playerIndex; // Offset: 0x8

    // system id for 'HUD' in the event system
    uint16 broadcastSystemId; // Offset: 0xC

    // All hud elements known by idHUD
    idGrowableList < idHUDElement * , 20 , TAG_IDLIST > elements; // Offset: 0x10

    // All hud notifications known by idHUD
    idGrowableList < idHUDElement * , 20 , TAG_IDLIST > notifications; // Offset: 0xC8

    // The hud elements and notifications lists, combined, sorted in render order.
    idGrowableList < idHUDElement * , 20 , TAG_IDLIST > hudElementRenderOrder; // Offset: 0x180

    // OLD - All of the HUD menus (that are elements)
    idStaticList < idHUDElement * , 41 , false , TAG_IDLIST > menuElements; // Offset: 0x238

    // NEW - All of the HUD menus (that are menus)
    idList < idMenu * , TAG_IDLIST , false > menus; // Offset: 0x398

    // Into into 'm_menus' where the pause menu resides. Cache this since it's needed specially in update and render calls.
    int pauseMenuIndex; // Offset: 0x3B0

    // State if the POI hidden
    bool isPOIVisible; // Offset: 0x3B4

    // Ready to show map start UI when HUD becomes visible
    bool readyForMapStart; // Offset: 0x3B5

    idHUD::playerInhibitInfo_t savedInhibit; // Offset: 0x3B8

    // Hud Modes Mode that we are currently in.
    int currentHudMode; // Offset: 0x3E8

    // was the game paused last frame according to mapLocal
    bool gameWasPaused; // Offset: 0x3EC

    bool inScope; // Offset: 0x3ED

    bool prevShowMenuVisibilityMask; // Offset: 0x3EE

    bool requestAntialiasingFlush; // Offset: 0x3EF

}; // Size: 0x3F0

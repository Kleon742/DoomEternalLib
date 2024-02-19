struct idDeclHUD : idGameDeclTypeInfo
{
    struct photoModeData_t
    {
        // Categories for Photomode.
        idList < photoModeCategory_t , TAG_IDLIST , false > categories; // Offset: 0x0

        // Model for the standin player.
        idDeclEntityDef* standinPlayer; // Offset: 0x18

        // Camera Controls Info for the controls panel.
        idDeclControlsPanelInfo* cameraControls; // Offset: 0x20

        // Rarity Icons for warehouse items.
        idList < const idMaterial2 * , TAG_IDLIST , false > rarityIcons; // Offset: 0x28

        // Light rig for player in photomode.
        idDeclLightRig* photomodeRig; // Offset: 0x40

    }; // Size: 0x48

    // In-game menus the HUD manages
    idList < const idDeclMenu * , TAG_IDLIST , false > menus; // Offset: 0x90

    // The Tutorial menu information.
    idDeclHUDElement* tutorialMenu; // Offset: 0xA8

    // The Tutorial menu information for use in cinematics.
    idDeclHUDElement* tutorialInCinematicMenu; // Offset: 0xB0

    // HUD element used for a ui tutorial walkthrough
    idDeclHUDElement* uiWalkthroughMenu; // Offset: 0xB8

    // The weapon wheel
    idDeclHUDElement* weaponWheel; // Offset: 0xC0

    // photomode hud Element.
    idDeclHUDElement* photomode; // Offset: 0xC8

    // collectible toys viewer menu.
    idDeclHUDElement* collectibleViewer; // Offset: 0xD0

    // collectible album viewer menu.
    idDeclHUDElement* collectibleAlbumViewer; // Offset: 0xD8

    // juke box menu.
    idDeclHUDElement* jukebox; // Offset: 0xE0

    // respec menu.
    idDeclHUDElement* respec; // Offset: 0xE8

    // Currency Exchange menu.
    idDeclHUDElement* currencyExchange; // Offset: 0xF0

    // The end of match menu demons will see after an invasion (victory or defeat).
    idDeclHUDElement* demonEndOfInvasionMenu; // Offset: 0xF8

    // Confirmation prompt on currency (sentinel battery, etc) use.
    idDeclHUDElement* currencyConfirmationMenu; // Offset: 0x100

    // element decls.
    idList < const idDeclHUDElement * , TAG_IDLIST , false > elements; // Offset: 0x108

    // notification element decls.
    idList < const idDeclHUDElement * , TAG_IDLIST , false > notifications; // Offset: 0x120

    // photomode data baby!
    idDeclHUD::photoModeData_t photoModeData; // Offset: 0x138

    // Env settings to use for models rendered in menus.
    idDeclEnv* menuModelsEnv; // Offset: 0x180

}; // Size: 0x188

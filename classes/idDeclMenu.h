struct idDeclMenu : idGameDeclTypeInfo
{
    struct menuGameInfo_t
    {
        // If true, activating the menu will pause the game.
        bool pauseGame; // Offset: 0x0

        // If true, will inhibit player input.
        bool inhibitPlayerControl; // Offset: 0x1

        // If true, will prevent damage while inhibited. Tied to the above, for backwards-compat.
        bool preventDamageWhileInhibited; // Offset: 0x2

        // If true, the HUD will not render while this menu is active.
        bool shouldHideHUD; // Offset: 0x3

        // If true, will hide the player hands when activated and show the player hands when deactivated.
        bool hidePlayerHands; // Offset: 0x4

        // If true, don't un-fade when deactivating
        bool skipFadeOnDeactivate; // Offset: 0x5

        // If true, the menu will also check if it's screens ask to skip the fade. Useful for special case transitions.
        bool askScreensIfSkipFade; // Offset: 0x6

        // If true, don't un-fade when deactivating
        bool clearButtonsOnDeactivate; // Offset: 0x7

        // if true allow a client authoritative pause ( experimental )
        bool clientCanPauseGame; // Offset: 0x8

        // HUD flag to set while this menu is active
        hudElementFlags_t activeHudFlag; // Offset: 0xC

    }; // Size: 0x10

    struct hudMenuInfo_t
    {
        // The menu ID.
        hudMenuID_t menuID; // Offset: 0x0

        // If any of these menus are currently active, this menu cannot be activated.
        idList < hudMenuID_t , TAG_IDLIST , false > menusThatBlockActivate; // Offset: 0x8

    }; // Size: 0x20

    struct playerUpgradeCurrencyInfo_t
    {
        // ID of the currency type
        playerUpgradeCurrency_t currencyID; // Offset: 0x0

        // Icon for the currency
        idMaterial2* currencyIcon; // Offset: 0x8

    }; // Size: 0x10

    struct eolEncounterInfo
    {
        // Icon for standard combat encounters
        idMaterial2* combatEncounterIcon; // Offset: 0x0

        // Display name for standard combat encounters
        idStrId combatEncounterDisplayName; // Offset: 0x8

        // Icon for slayer gate encounters
        idMaterial2* slayerGateEncounterIcon; // Offset: 0x10

        // Display name for slayer gate encounters
        idStrId slayerGateEncounterDisplayName; // Offset: 0x18

        // Icon for secret combat encounters
        idMaterial2* secretEncounterIcon; // Offset: 0x20

        // Display name for secret combat encounters
        idStrId secretEncounterDisplayName; // Offset: 0x28

        // Icon for boss encounters
        idMaterial2* bossEncounterIcon; // Offset: 0x30

        // Display name for boss encounters
        idStrId bossEncounterDisplayName; // Offset: 0x38

    }; // Size: 0x40

    // What menu functionality class to use.
    idTypeInfoPtr < idMenu > class; // Offset: 0x90

    // Overlay element
    idDeclMenuElement* overlay; // Offset: 0x98

    // Backdrop element, this is rendered first behind all other elements.
    idDeclMenuElement* backdrop; // Offset: 0xA0

    // List of screen elements, only 1 screen is active at a time.
    idList < const idDeclMenuElement * , TAG_IDLIST , false > screens; // Offset: 0xA8

    // List of popup dialogs. These consume all input when open.
    idList < const idDeclMenuElement * , TAG_IDLIST , false > popups; // Offset: 0xC0

    // Menu version of the HUD UI walkthrough. Each menu needs one to provide walkthrough functionality on it, but if that isn't needed this can be left empty.
    idDeclMenuElement* walkthrough; // Offset: 0xD8

    // Menu version of the HUD Tutorial (for playing binks and such). This can be left empty if your menu does not need tutorial functionality.
    idDeclMenuElement* tutorial; // Offset: 0xE0

    // Event to start the music system
    idSoundEvent* backgroundMusic; // Offset: 0xE8

    // Sound state for the original music sound
    idSoundState* backgroundMusicStateOriginal; // Offset: 0xF0

    // Sound state for the DLC music sound
    idSoundState* backgroundMusicStateDLC; // Offset: 0xF8

    // Music switch for the game
    idSoundSwitch* backgroundMusicSwitch; // Offset: 0x100

    // Music to play while returning to menu
    idStr backgroundMusicSwitchItem; // Offset: 0x108

    // sound state that will be activated when this menu is activate
    idSoundState* activateSoundState; // Offset: 0x138

    // sound state that will be activated when this menu is activate
    idSoundState* deactivateSoundState; // Offset: 0x140

    // Bool to determine if this menu is a fullscreen GUI
    bool isFullscreen; // Offset: 0x148

    // After normal input flow (popup, screens, overlay) if this is true it will consume input and not pass it through to other menus or systems.
    bool consumeInputWhileActive; // Offset: 0x149

    // Use the broadcast system (i.e. create a menu-specific ID). This is false by default to avoid allocating broadcasters for menus that don't need one.
    bool useBroadcastSystem; // Offset: 0x14A

    // Activate every menu element when activating the menu. If false will activate only when used the first time.
    bool activateAllAtOnce; // Offset: 0x14B

    // Does this menu have screens that require a network update
    bool isNetworkMenu; // Offset: 0x14C

    // The list of playable characters
    idList < const idDeclPlayableCharacter * , TAG_IDLIST , false > playableCharacters; // Offset: 0x150

    // The list of weapons (for customization )
    idList < const idDeclUIWeapon * , TAG_IDLIST , false > weaponList; // Offset: 0x168

    // The list of weapons (for weapon wheel )
    idList < const idDeclUIWeapon * , TAG_IDLIST , false > weaponWheelOrder; // Offset: 0x180

    // The list of weapons (for weapon wheel in MP)
    idList < const idDeclUIWeapon * , TAG_IDLIST , false > weaponWheelOrderMP; // Offset: 0x198

    // The main actor modifier list used in the game to change the playable character
    idDeclActorModifierListRef actorModifierList; // Offset: 0x1B0

    // The main actor modifier list for UI info
    idDeclActorModiferList_UI* actorModifierList_UI; // Offset: 0x1B8

    // All the Podium assets / tags / fx the podium menu could possibly need.
    menuPodiumData_t podiumData; // Offset: 0x1C0

    // If true, the menu will update header text and screen path when changing screens
    bool updateHeaderOnScreenChange; // Offset: 0x220

    // If >= 0, limit the number of items in the screen path to this value.
    int screenPathLimit; // Offset: 0x224

    // The rewards list used in the game for the extra life exchange station
    idDeclExtraLifeExchangeRewards* extraLifeExchangeRewards; // Offset: 0x228

    // Data specific to in-game menus.
    idDeclMenu::menuGameInfo_t gameInfo; // Offset: 0x230

    // Data specific to HUD (in-game) menus.
    idDeclMenu::hudMenuInfo_t hudMenuInfo; // Offset: 0x240

    // The icons associated with each player currency
    idList < idDeclMenu::playerUpgradeCurrencyInfo_t , TAG_IDLIST , false > playerCurrencyInfo; // Offset: 0x260

    // Icon info for combat encounters
    idDeclMenu::eolEncounterInfo eolEncounterInfo; // Offset: 0x278

}; // Size: 0x2B8

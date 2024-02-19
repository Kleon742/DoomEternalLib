struct idInteractable_VegaTraining : idInteractable
{
    enum vsMenuStates_t : int
    {
        VEGASIM_STATE_INVALID = 0,
        VEGASIM_STATE_IDLE = 1,
        VEGASIM_STATE_USING = 2,
        NUM_VEGASIM_STATES = 3
    };

    // loot component
    idDeclDynamicChallenge* declChallenge; // Offset: 0x2B50

    idInteractable_VegaTraining::vsMenuStates_t menuState; // Offset: 0x2B58

    idManagedClassPtr < idPlayer > playerActivator; // Offset: 0x2B60

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > resetTime; // Offset: 0x2B80

    // current highlighted item in menu
    int curIndex; // Offset: 0x2B88

    // item at top of menu
    int topIndex; // Offset: 0x2B8C

    int furthestTerminalIndex; // Offset: 0x2B90

    bool waitingToQuit; // Offset: 0x2B94

    bool waitingForMapStart; // Offset: 0x2B95

    bool hasBeenDeactivated; // Offset: 0x2B96

    // special menu item activated by moving past the end of the menu item list string to display for this menu item
    idStr nightmareWallString; // Offset: 0x2B98

    // level name of nightmare wall
    idStr nightmareWallLevelName; // Offset: 0x2BC8

    // checkpoint name of nightmare wall
    idStr nightmareWallCheckpointName; // Offset: 0x2BF8

    // ** TEMPORARY - automatically gives you the mod just by using the terminal. set this to FALSE when it's properly connected to a challenge level
    bool justGiveMeTheModAlready; // Offset: 0x2C28

    // Where do we place the camera while doing this minigame.
    idAtomicString guiCameraTag; // Offset: 0x2C30

    // Order that the challenges should appear in the mission screen.
    int dossierOrder; // Offset: 0x2C38

    idStr mapnameStr; // Offset: 0x2C40

    idStr checkpointName; // Offset: 0x2C70

}; // Size: 0x2CA0

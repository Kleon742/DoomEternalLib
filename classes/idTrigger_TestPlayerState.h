struct idTrigger_TestPlayerState : idTrigger
{
    struct playerState_Inventory_t
    {
        // Item that is required to fire the targets
        idDeclInventory* requiredItem; // Offset: 0x0

        // Number of that item that is required (normally 1)
        int requiredCount; // Offset: 0x8

    }; // Size: 0x10

    struct playerState_GameState_t
    {
        // the game state int that is tested;
        idDeclGameStateInt* gameStateInt; // Offset: 0x0

        // type of comparison
        idGameStateInt::gameStateIntCompare_t comparison; // Offset: 0x8

        // value to compare against;
        int comparisonValue; // Offset: 0xC

    }; // Size: 0x10

    // List of required inventory items
    idList < idTrigger_TestPlayerState::playerState_Inventory_t , TAG_IDLIST , false > requiredItemList; // Offset: 0xC90

    // If true, having any item passes the inventory test if false all are needed to pass test
    bool anyItemActivates; // Offset: 0xCA8

    // if true, failing the inventory test fires the target. ( both the inventory test and the job test need to agree to fire )
    bool fireOnInventoryFail; // Offset: 0xCA9

    // List of required game state ints
    idList < idTrigger_TestPlayerState::playerState_GameState_t , TAG_IDLIST , false > requiredGameStateIntList; // Offset: 0xCB0

    // If true, passing any of the game state int test passes the test.
    bool anyGameStateIntActivate; // Offset: 0xCC8

    // if true, failing the game test fires the target.
    bool fireOnGameStateFail; // Offset: 0xCC9

    // if the player passes the tests, set this to 1
    idDeclGameStateInt* givenGameStateInt; // Offset: 0xCD0

    // List of required dlc states
    idList < gameDLCState_t , TAG_IDLIST , false > requiredDLCStateList; // Offset: 0xCD8

    // if true, failing the dlc test fires the target.
    bool fireOnDLCStateFail; // Offset: 0xCF0

}; // Size: 0xCF8

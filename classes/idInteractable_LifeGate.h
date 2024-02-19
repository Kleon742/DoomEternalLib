struct idInteractable_LifeGate : idInteractable_Obstacle
{
    // The player who activated the socket
    idPlayer* playerActivator; // Offset: 0x2D60

    // The extra life cost to enter the gate.
    unsigned int extraLifeCost; // Offset: 0x2D68

    // Where do we place the camera while doing this minigame.
    idAtomicString guiCameraTag; // Offset: 0x2D70

    // codex to give on use.
    idDeclCodexEntry* useCodex; // Offset: 0x2D78

    // Icon to display on the message box.
    idMaterial2* icon; // Offset: 0x2D80

    // header string
    idStrId header; // Offset: 0x2D88

    // use prompt string
    idStrId usePrompt; // Offset: 0x2D8C

    // description of what will happen when you use the currency (optional)
    idStrId description; // Offset: 0x2D90

    // string to use for the "currency available" message
    idStrId availableString; // Offset: 0x2D94

    // stat to set when unlocked
    gameStat_t unlockStat; // Offset: 0x2D98

    // Touching the interactable volume
    bool alreadyIsTouching; // Offset: 0x2D9C

    // Touching the interactable volume
    bool extraLivesTraded; // Offset: 0x2D9D

    // is currently being used
    bool inUse; // Offset: 0x2D9E

}; // Size: 0x2DA0

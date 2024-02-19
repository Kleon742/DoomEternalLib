struct idInteractable_BatterySocket : idInteractable
{
    // The player who activated the socket
    idPlayer* playerActivator; // Offset: 0x2B50

    // Where do we place the camera while doing this minigame.
    idAtomicString guiCameraTag; // Offset: 0x2B58

    // codex to give on use.
    idDeclCodexEntry* useCodex; // Offset: 0x2B60

    // currency to consume.
    playerUpgradeCurrency_t currency; // Offset: 0x2B68

    // header string
    idStrId header; // Offset: 0x2B6C

    // use prompt string
    idStrId usePrompt; // Offset: 0x2B70

    // description of what will happen when you use the currency (optional)
    idStrId description; // Offset: 0x2B74

    // string to use for the "currency available" message
    idStrId availableString; // Offset: 0x2B78

    // stat to set when unlocked
    gameStat_t unlockStat; // Offset: 0x2B7C

    // TODO: decl to grant on accept? is currently being used
    bool inUse; // Offset: 0x2B80

}; // Size: 0x2B88

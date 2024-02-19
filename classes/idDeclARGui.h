struct idDeclARGui : idGameDeclTypeInfo
{
    // which ar screen needs to be used for this
    arGuiScreen_t arScreenType; // Offset: 0x90

    // does this gui entity billboard
    bool billboard; // Offset: 0x94

    // does this gui show up when hitting the scan button
    bool showOnARScan; // Offset: 0x95

    // distance used for distance check for displaying AR gui
    int showDistance; // Offset: 0x98

    // allow this gui to stay visible while in combat
    bool allowVisibleInCombat; // Offset: 0x9C

    // amount of time gui shows after echo is displayed. -1 means the gui will not close
    int echoShowTime; // Offset: 0xA0

    // do we only show the echo indicator once
    bool showEchoOnce; // Offset: 0xA4

    // whether or not the gui stays active once it has been shown to the player
    bool leaveUpOnceShown; // Offset: 0xA5

    // does the gui fully activate when echoed or just show the ping indicator
    bool activeUponEcho; // Offset: 0xA6

}; // Size: 0xA8

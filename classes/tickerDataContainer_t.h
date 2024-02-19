struct tickerDataContainer_t
{
    char headerText[100]; // Offset: 0x0

    char subHeaderText[100]; // Offset: 0x64

    char actorText[100]; // Offset: 0xC8

    bool isDemonPlayer; // Offset: 0x12C

    int demonHudColor; // Offset: 0x130

}; // Size: 0x134

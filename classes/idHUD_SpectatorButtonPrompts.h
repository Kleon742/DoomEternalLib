struct idHUD_SpectatorButtonPrompts : idHUDElement
{
    // Is the UI dirty and needs updating?
    bool isDirty; // Offset: 0xF8

    // Is the player allowed to switch to free camera mode
    bool allowFreeCamera; // Offset: 0xF9

    // Otherwise in free camera mode
    bool isFirstPerson; // Offset: 0xFA

    // Number of teammates that are avalable to spectate
    int numTeammates; // Offset: 0xFC

    // Is their cycle of views restricted to teammates
    bool restrictedToTeammates; // Offset: 0x100

    // Total number of players in the match
    int numPlayers; // Offset: 0x104

    swfPlatform_t currentPlatform; // Offset: 0x108

    bool needsPositionUpdate; // Offset: 0x10C

}; // Size: 0x110

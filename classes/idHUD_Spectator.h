struct idHUD_Spectator : idHUDElement
{
    // Is the player allowed to switch to free camera mode
    bool allowFreeCamera; // Offset: 0xF8

    // Otherwise in free camera mode
    bool isFirstPerson; // Offset: 0xF9

    // Is their cycle of views restricted to teammates
    bool restrictedToTeammates; // Offset: 0xFA

    // current player number we are spectating
    int currentPlayer; // Offset: 0xFC

    // current team the player we are spectating is on
    gameTeam_t currentPlayerTeam; // Offset: 0x100

    // time when local player will respawn
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > respawnEndTime; // Offset: 0x108

    swfPlatform_t currentPlatform; // Offset: 0x110

    idSWFWidget_PlayerBadge* playerBadge; // Offset: 0x118

}; // Size: 0x120

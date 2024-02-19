struct idTrigger_Multiplayer : idTrigger
{
    // this trigger *only* activates when all players are touching it, overrides all other settings
    bool requireAllPlayers; // Offset: 0xC90

    // if you pick something other than TEAM_ANY, this trigger will only react to players on that team (requireAllPlayers becomes restricted to just the team selected)
    gameTeam_t teamThatTriggers; // Offset: 0xC94

    // wont activate on incapacitated players
    bool ignoreIncapacitatedPlayers; // Offset: 0xC98

}; // Size: 0xCA0

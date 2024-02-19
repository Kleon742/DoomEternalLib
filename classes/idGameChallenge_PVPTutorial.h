struct idGameChallenge_PVPTutorial : idGameChallenge_PVP
{
    // the decl of the actor that the player should spawn as
    idDeclActorModifierRef forcedSpawnActor; // Offset: 0x44D0

    // forced demon card deck
    idDeclDemonCardDeck* forcedDemonCardDeck; // Offset: 0x44D8

    // don't inhibit controls for start/end jockeying
    bool allowGameChallengeToInhibitControls; // Offset: 0x44E0

    // <= 0 will use standard logic, > 0 will use the forced number. -1 by default
    int forcedNumberOfRounds; // Offset: 0x44E4

    bool forcedRoundEndTimeChange; // Offset: 0x44E8

    bool forceEndGame; // Offset: 0x44E9

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > kickToLobbyTime; // Offset: 0x44F0

}; // Size: 0x44F8

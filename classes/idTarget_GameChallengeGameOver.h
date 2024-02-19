struct idTarget_GameChallengeGameOver : idTarget
{
    // set to true to cause failure for this game over
    bool failure; // Offset: 0xB88

    // localized text to show when the failed game is over
    idStrId failureText; // Offset: 0xB8C

}; // Size: 0xB90

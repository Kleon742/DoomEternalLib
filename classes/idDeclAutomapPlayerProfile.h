struct idDeclAutomapPlayerProfile : idGameDeclTypeInfo
{
    // The object reveal radius for the Player (Ex: secrets, codex, praetor suit etc...). Note - This gets cached off on map load, so the map must be reloaded to test data changes
    float objectRevealRadius; // Offset: 0x90

    // The object discover radius for the Player (Ex: secrets, codex, praetor suit etc...). Note - This gets cached off on map load, so the map must be reloaded to test data changes
    float objectDiscoverRadius; // Offset: 0x94

    // Radius that we reveal the map and flag Fog of War tiles as revealed and not traversed (Only used if we do not reveal the entire geometry of the Automap). Note - This gets cached off on map load, so the map must be reloaded to test data changes
    float fogOfWarRevealedAndNotTraversedRevealRadius; // Offset: 0x98

    // Radius that we mark Fog of War tiles as revealed and traversed. Note - This gets cached off on map load, so the map must be reloaded to test data changes
    float fogOfWarRevealedAndTraversedRevealRadius; // Offset: 0x9C

    // Half-height for the cylinder used to reveal fog-of-war around the player.
    float fogOfWarRevealedHalfHeight; // Offset: 0xA0

    // INVASION :: Should the demon player be able to always see the player's icon?
    bool showPlayerIconForInvaders; // Offset: 0xA4

    // INVASION :: Should the player be able to see the other invader's player icons?
    bool showDemonPlayerIconsForPlayers; // Offset: 0xA5

    // INVASION :: Should we show the entire map as revealed and traversed for the demon player
    bool revealMapForInvader; // Offset: 0xA6

    // INVASION :: Since the player icon has no light, it can be appear dimly grey on the Automap, set this to something > 1.0f to help the Invader see the player icon. Do NOT set this to a number < 0.0f
    float slayerIconBrightnessCoefficient; // Offset: 0xA8

}; // Size: 0xB0

struct idDeclInvasionSettings : idGameDeclTypeInfo
{
    // Allows invasions to be completely turned off for this map.
    bool invasionsEnabled; // Offset: 0x90

    // If true, invaders share a pool of lives.
    bool invaderLifePooling; // Offset: 0x91

    // How are demon invader spawn points chosen?
    invasionSpawnMethod_t invaderSpawnPointMethod; // Offset: 0x94

    // Time (in milliseconds) before invader can spawn. Also time before respawn for slayer and invader if they have multiple lives.
    idTypesafeTime < int , millisecondUnique_t , 1000 > spawnTimeLimit; // Offset: 0x98

    // Time (in milliseconds) before respawn UI appears after dying.
    idTypesafeTime < int , millisecondUnique_t , 1000 > respawnMenuDelay; // Offset: 0x9C

    // Time (in milliseconds) before invasion summary UI appears.
    idTypesafeTime < int , millisecondUnique_t , 1000 > summaryDelay; // Offset: 0xA0

    // Total time (in seconds) that the invasion will last. Starts when the invader first spawns.
    idTypesafeTime < float , secondUnique_t , 1 > invasionTimeLimit; // Offset: 0xA4

    // Total time (in seconds) to show post-invasion summary
    idTypesafeTime < float , secondUnique_t , 1 > invasionSummaryTime; // Offset: 0xA8

    // Total time (in seconds) to wait after an invasion has ended without a victor before disconnecting
    idTypesafeTime < float , secondUnique_t , 1 > invasionNoWinnerEndTime; // Offset: 0xAC

    // Buffer time (in seconds) from start of map before invasion can occur.
    idTypesafeTime < float , secondUnique_t , 1 > initialDelay; // Offset: 0xB0

    // Number of lives for invaders (shared pool).
    int invaderLives; // Offset: 0xB4

    // Number of lives for slayer.
    int slayerLives; // Offset: 0xB8

    // decl to use to score
    idDeclPvpProgressionScoring* invasionScoringDecl; // Offset: 0xC0

    // highlight to use on possession targets
    idDeclHighlight* possessionTargetHighlight; // Offset: 0xC8

    // color of potential possession target
    idColor possessionTargetPossibleColor; // Offset: 0xD0

    // color of target that will be possessed
    idColor possessionTargetConfirmColor; // Offset: 0xE0

    // names of layers that will turn on when invasion starts (and turn off afterward)
    idList < idStr , TAG_IDLIST , false > mapLayersToActivate; // Offset: 0xF0

    // names of layers that will turn on when invasion starts (and turn off afterward) for slayer only
    idList < idStr , TAG_IDLIST , false > mapLayersToActivateSlayerOnly; // Offset: 0x108

    // names of layers that will turn on when invasion starts (and turn off afterward) for demon players only
    idList < idStr , TAG_IDLIST , false > mapLayersToActivateDemonOnly; // Offset: 0x120

    // Damage scale to player based on invader count. First entry for 1 invader, second for 2, etc.
    idList < float , TAG_IDLIST , false > damageToPlayerScales; // Offset: 0x138

    // do demons use global cooldown for actions?
    bool usesGlobalCooldown; // Offset: 0x150

    // how long cooldown takes when demon player is in combat form (milliseconds)
    idTypesafeTime < int , millisecondUnique_t , 1000 > invasionGlobalCooldownCombatTimeMS; // Offset: 0x154

    // how long cooldown takes when demon player is disguised or possessing (milliseconds)
    idTypesafeTime < int , millisecondUnique_t , 1000 > invasionGlobalCooldownHiddenTimeMS; // Offset: 0x158

    // it true, taking damage restarts global cooldown timer
    bool damageResetsGlobalCooldown; // Offset: 0x15C

}; // Size: 0x160

struct idGameChallenge_CampaignSinglePlayer : idGameChallenge
{
    struct invasionGameEventCallouts_t
    {
        // Shown when a demon in disguise is revealed (via being damaged or touched)
        idDeclGameEventCallout* demonDisguiseRevealed; // Offset: 0x0

        // Shown when the the first invader spawns (ghost mode) and invasion has begun
        idDeclGameEventCallout* slayerInvasionStart; // Offset: 0x8

        // Shown when the the first invader spawns (ghost mode) in a party because we show a different notification
        idDeclGameEventCallout* slayerInvasionPartyStart; // Offset: 0x10

        // Shown when the slayer wins the invasion
        idDeclGameEventCallout* slayerVictory; // Offset: 0x18

        // Shown when the demon team wins the invasion
        idDeclGameEventCallout* demonVictory; // Offset: 0x20

        // Shown when neither team wins the invasion (i.e. is forced to end for some reason).
        idDeclGameEventCallout* noWinnerEnd; // Offset: 0x28

        // Shown when neither team interacted with the other team through damage
        idDeclGameEventCallout* noInteractionEnd; // Offset: 0x30

        // 3 demon lives remaining
        idDeclGameEventCallout* threeDemonLivesRemaining; // Offset: 0x38

        // 2 demon lives remaining
        idDeclGameEventCallout* twoDemonLivesRemaining; // Offset: 0x40

        // last demon life
        idDeclGameEventCallout* oneDemonLifeRemaining; // Offset: 0x48

        // 3 slayer lives remaining
        idDeclGameEventCallout* threeSlayerLivesRemaining; // Offset: 0x50

        // 2 slayer lives remaining
        idDeclGameEventCallout* twoSlayerLivesRemaining; // Offset: 0x58

        // last slayer life
        idDeclGameEventCallout* oneSlayerLifeRemaining; // Offset: 0x60

        // slayer with critical health kills demon invader
        idDeclGameEventCallout* slayerCloseCall; // Offset: 0x68

        // slayer player killed
        idDeclGameEventCallout* slayerKilled; // Offset: 0x70

        // demon player killed
        idDeclGameEventCallout* demonKilled; // Offset: 0x78

        // Demon Killed callout starts at this time after a demon dies
        idTypesafeTime < int , millisecondUnique_t , 1000 > demonKilledCalloutDelay; // Offset: 0x80

        // invasion end target hit, invasion will end soon
        idDeclGameEventCallout* invasionEndingSoon; // Offset: 0x88

    }; // Size: 0x90

    // The invasion mode specific game event callouts
    idGameChallenge_CampaignSinglePlayer::invasionGameEventCallouts_t invasionCallouts; // Offset: 0x3A78

    // settings for invasion manager
    idDeclInvasionSettings* invasionSettings; // Offset: 0x3B08

    idInvasionManager invasionManager; // Offset: 0x3B10

    // player entity num of player that owns this campaign
    int campaignOwner; // Offset: 0x3E78

    // The decl that defines the sentinel armor effect
    idDeclSentinelArmor* sentinelArmorDecl; // Offset: 0x3E80

    // The decl that defines the extra life effect
    idDeclExtraLife* extraLifeDecl; // Offset: 0x3E88

    // Single player cheat code related decls The decl associated with the Cheat Code for power up infinite onslaught
    idDeclStatusEffect* OnslaughtInfiniteCheat; // Offset: 0x3E90

    // The decl associated with the Cheat Code for power up infinite overdrive
    idDeclStatusEffect* OverdriveInfiniteCheat; // Offset: 0x3E98

    // The decl associated with the Cheat Code for power up infinite Berserk
    idDeclStatusEffect* BerserkInfiniteCheat; // Offset: 0x3EA0

    // The decl associated with the Cheat Code for Give Mastered All Weapons And Equipment
    idDeclWeapon* flameBelchEquipmentDecl; // Offset: 0x3EA8

    // The decl associated with the Cheat Code for Give Mastered All Weapons And Equipment
    idDeclThrowable* throwableIceEquipmentDecl; // Offset: 0x3EB0

    // The decl associated with the Cheat Code for Give Mastered All Weapons And Equipment
    idDeclThrowable* throwableFragEquipmentDecl; // Offset: 0x3EB8

    // The decl associated with the Cheat Code for Give Mastered All Weapons And Equipment
    idDeclEquipmentLauncher* equipmentLauncherDecl; // Offset: 0x3EC0

    // The decl associated with the Cheat Code for QuakeCon mode
    idDeclQuakeConModeSettings* quakeConModeSettings; // Offset: 0x3EC8

    // The decl associated with general cheat code settings
    idDeclCheatSettings* cheatSettings; // Offset: 0x3ED0

    // Layer for when extra lives are disabled
    idDeclLayer* extraLifeLayerName_None; // Offset: 0x3ED8

    // Layer for when we want "some" extra lives
    idDeclLayer* extraLifeLayerName_Some; // Offset: 0x3EE0

    // Layer for when we want "many" extra lives
    idDeclLayer* extraLifeLayerName_Many; // Offset: 0x3EE8

    // the loadout to give the player if they cheat in ultranightmare
    idDeclDevInvLoadout* nightmareLoadoutCheating; // Offset: 0x3EF0

    // per-level customizations for demonic corruption bar
    idDeclDemonicCorruption* demonicCorruptionDecl; // Offset: 0x3EF8

    // list of all possible inventory items the player can pick up
    idList < const idDeclInventory * , TAG_IDLIST , false > playerInventoryItems; // Offset: 0x3F00

    // list of all possible Perks the player can pick up
    idList < const idDeclPerk * , TAG_IDLIST , false > playerPerks; // Offset: 0x3F18

    // list of entities to create to create pooling for at map start
    idList < const idDeclEntityDef * , TAG_IDLIST , false > poolEntityInit; // Offset: 0x3F30

    // the time to delay the very first save of the mission by this ammount, will be overriden if checkpoint is manually triggered by design
    idTypesafeTime < int , millisecondUnique_t , 1000 > delayFirstSave; // Offset: 0x3F48

    // outline color for the demon team
    idColor demonOutlineColor; // Offset: 0x3F4C

    // outline color for demon allys
    idColor demonAllyOutlineColor; // Offset: 0x3F5C

    // outline color for the slayer team
    idColor slayerOutlineColor; // Offset: 0x3F6C

    // demons see this fill color (on everything - it's global)
    idColor fillColorDemonSees; // Offset: 0x3F7C

    // hit color flash all players see (on everything - it's global)
    idColor fillColorHitFlash; // Offset: 0x3F8C

    // who is highlighted from a demon player's perspective
    actorHighlightOptions_t demonHighlightOptions; // Offset: 0x3F9C

}; // Size: 0x3FB8

struct idDeclTimedDemonBounty : idDeclInventory
{
    // Bounty Data The bitflags for the AI types this bounty can apply to (can be AI_MONSTER_GENERIC if you want it to apply to all types). Think of this as a filter for the entire bounty.
    aiMonsterType_t aiMonsterTypes; // Offset: 0x3F8

    // The upgrades and highlights for AI. Can be generic or type-specific. If both are listed, the type-specific case will be used for an AI of that type. Can specify different upgrades for different AI in the same bounty.
    idList < timedBountyUpgrade_t , TAG_IDLIST , false > demonBountyUpgrades; // Offset: 0x400

    // What timer behavior should this bounty have? ( total bounty duration is also stored here )
    idDeclStagedTimer* timerBehavior; // Offset: 0x418

    // The POI to show for each demon.
    idDeclPOI* poiDecl; // Offset: 0x420

    // The Entity to spawn if the bounty is completed during the gold stage (e.g. a powerup)
    idDeclEntityDef* goldRewardDef; // Offset: 0x428

    // The Entity to spawn if the bounty is completed during the silver stage (e.g. a powerup)
    idDeclEntityDef* silverRewardDef; // Offset: 0x430

    // The Entity to spawn if the bounty is completed (e.g. a powerup)
    idDeclEntityDef* bronzeRewardDef; // Offset: 0x438

    // Gold particle emitter entity def for reward
    idDeclEntityDef* goldRewardEmitterDef; // Offset: 0x440

    // Silver particle emitter entity def for reward
    idDeclEntityDef* silverRewardEmitterDef; // Offset: 0x448

    // Bronze particle emitter entity def for reward
    idDeclEntityDef* bronzeRewardEmitterDef; // Offset: 0x450

    // Notification to fire if the player successfully completes the bounty
    idDeclNotification* bountyCompletedNotification; // Offset: 0x458

    // Notification to fire if the player fails to complete the bounty
    idDeclNotification* bountyFailedNotification; // Offset: 0x460

}; // Size: 0x468

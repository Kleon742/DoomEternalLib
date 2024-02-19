struct idTarget_DynamicChallenge_End : idTarget
{
    // Challenge end delays the pause menu.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > gameTimeForPause; // Offset: 0xB88

    // Entity that was passed through the activate call
    idManagedClassPtr < idEntity > activatingEnt; // Offset: 0xB90

    // challenge decl
    idDeclDynamicChallenge* challengeDecl; // Offset: 0xBB0

    // Target to activate every time the challenge is completed
    idManagedClassPtr < idEntity > successTargetActivate; // Offset: 0xBB8

    // Target to activate if succeeds with bronze
    idManagedClassPtr < idEntity > bronzeTargetActivate; // Offset: 0xBD8

    // Target to activate if succeeds with silver
    idManagedClassPtr < idEntity > silverTargetActivate; // Offset: 0xBF8

    // Target to activate if succeeds with gold
    idManagedClassPtr < idEntity > goldTargetActivate; // Offset: 0xC18

    // If true, the system will activate all reward targets the player has achieved in this run (i.e. silver reward will also trigger the bronze reward, but not the gold reward).
    bool triggerAllRewardTargets; // Offset: 0xC38

    // Amount of delay between triggering success and activating the menu
    float completionDelaySec; // Offset: 0xC3C

    // Amount of delay between continuing the game and starting the reward activation
    float initialRewardDelaySec; // Offset: 0xC40

    // Amount of delay between successive reward activates
    float rewardPresentationDelaySec; // Offset: 0xC44

}; // Size: 0xC48

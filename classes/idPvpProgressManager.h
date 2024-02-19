struct idPvpProgressManager
{
    // rules and progress
    idPvpProgressManagerUnlocks unlocks; // Offset: 0x0

    idDeclPvpProgressionScoring* scoringRules; // Offset: 0x18

    // match scores
    idList < slayerScoreMatch_t , TAG_IDLIST , false > slayerScores; // Offset: 0x20

    idList < demonScoreMatch_t , TAG_IDLIST , false > demonScores; // Offset: 0x38

    idList < pvpBonusMatch_t , TAG_IDLIST , false > bonusScores; // Offset: 0x50

    // listeners
    idPvpProgMgrDamCompListener damageCompilerListener; // Offset: 0x68

    idPvpProgMgrPlyrHlthListener playerHealthListener; // Offset: 0x100

    // handle oddball actions
    slayerScoringActions_t* slyrAmmoRecover; // Offset: 0x138

    slayerScoringActions_t* slyrRevealDemon; // Offset: 0x140

    demonScoringActions_t* demonSpawnScore; // Offset: 0x148

    demonScoringActions_t* demonHealTeamScore; // Offset: 0x150

    demonScoringActions_t* demonNoTeamDeathRound; // Offset: 0x158

    demonScoringActions_t* demonVanished; // Offset: 0x160

    // queue up score change events to be sent periodically
    idList < pvpScoreChangeData_t , TAG_IDLIST , false > pendingScoreChanges; // Offset: 0x168

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextScoreChangePump; // Offset: 0x180

}; // Size: 0x188

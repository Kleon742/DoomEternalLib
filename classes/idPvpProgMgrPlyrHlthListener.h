struct idPvpProgMgrPlyrHlthListener : idHealthListener < playerHealthComponent_t >
{
    idPvpProgressManager* owner; // Offset: 0x8

    slayerScoringActions_t* slyrHealthRecover; // Offset: 0x10

    slayerScoringActions_t* slyrNoHealthLossWin; // Offset: 0x18

    idList < idSpawnId , TAG_IDLIST , false > healthLossPlayers; // Offset: 0x20

}; // Size: 0x38

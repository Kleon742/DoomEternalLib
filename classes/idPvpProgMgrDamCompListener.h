struct idPvpProgMgrDamCompListener : idDamageCompiler_Listener
{
    idPvpProgressManager* owner; // Offset: 0x8

    // slayer damage actions
    slayerScoringActions_t* slyrDamageScore; // Offset: 0x10

    slayerScoringActions_t* slyrKillScore; // Offset: 0x18

    slayerScoringActions_t* slyrGkScore; // Offset: 0x20

    slayerScoringActions_t* slyrSpecWeapKillScore; // Offset: 0x28

    slayerScoringActions_t* slyrDemPlyrKillScore; // Offset: 0x30

    slayerScoringActions_t* slyrSpecWeapDirHit; // Offset: 0x38

    slayerScoringActions_t* slyrKillNoArmorDepletion; // Offset: 0x40

    // Demon damage actions
    demonScoringActions_t* demonSlyrDamageScore; // Offset: 0x48

    demonScoringActions_t* demonSlyrKillScore; // Offset: 0x50

    demonScoringActions_t* demonHazardScore; // Offset: 0x58

    demonScoringActions_t* demonSummonedDamageScore; // Offset: 0x60

    demonScoringActions_t* demonDamageFromDisguiseScore; // Offset: 0x68

    demonScoringActions_t* demonFirstBloodFromDisguiseScore; // Offset: 0x70

    idList < idSpawnId , TAG_IDLIST , false > demonRoundDeaths; // Offset: 0x78

    bool drewFirstBlood; // Offset: 0x90

    bool demonFirstBloodFromDisguise; // Offset: 0x91

    bool isActive; // Offset: 0x92

}; // Size: 0x98

struct idDeclMasterLevelMissionInfo
{
    // The difficulty for this mission
    gameDifficulty_t difficulty; // Offset: 0x0

    // The mutator required for this mission
    eGameMutatorType mutator; // Offset: 0x4

    // Title of the mission.
    idStrId title; // Offset: 0x8

    // Description of the mission.
    idStrId description; // Offset: 0xC

}; // Size: 0x10

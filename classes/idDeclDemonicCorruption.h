struct idDeclDemonicCorruption : idGameDeclTypeInfo
{
    struct corruptionData_t
    {
        // The base pip color
        swfNamedColors_t color; // Offset: 0x0

        // The color of the surrounding glow
        swfNamedColors_t glowColor; // Offset: 0x4

        // The backing color used for weapon point notifications when clearing this type of corruption.
        swfNamedColors_t notificationColor; // Offset: 0x8

        // sound to play when partially filling a pip (will be stopped when pip/section is completed)
        idSoundEvent* partialFillSound; // Offset: 0x10

        // sound to play when completing a pip (will not play if entire section is completed)
        idSoundEvent* pipCompleteSound; // Offset: 0x18

        // sound to play when completing the whole section
        idSoundEvent* sectionCompleteSound; // Offset: 0x20

    }; // Size: 0x28

    struct escalationData_t
    {
        // perk to give for beating the first time
        idDeclPerk* hammerPerk; // Offset: 0x0

        // milestone for the 2nd time beating
        idDeclMilestone* milestone1; // Offset: 0x8

    }; // Size: 0x10

    // number of combat points to show on the demonic corruption meter
    int numCombatPoints; // Offset: 0x90

    // number of secret points to show on the demonic corruption meter
    int numSecretPoints; // Offset: 0x94

    // number of slayer gate points to show on the demonic corruption meter
    int numSlayerPoints; // Offset: 0x98

    // number of escalation encounter points to show on the demonic corruption meter
    int numEscalationPoints; // Offset: 0x9C

    // number of boss points to show on the demonic corruption meter
    int numBossPoints; // Offset: 0xA0

    // ordering of corruption types on the demonic corruption meter
    idList < corruptionType_t , TAG_IDLIST , false > corruptionTypeOrdering; // Offset: 0xA8

    // properties for combat demonic corruption meter
    idDeclDemonicCorruption::corruptionData_t combatProperties; // Offset: 0xC0

    // properties for secret demonic corruption meter
    idDeclDemonicCorruption::corruptionData_t secretProperties; // Offset: 0xE8

    // properties for slayer gate demonic corruption meter
    idDeclDemonicCorruption::corruptionData_t slayerProperties; // Offset: 0x110

    // properties for escalation encounter demonic corruption meter
    idDeclDemonicCorruption::corruptionData_t escalationProperties; // Offset: 0x138

    // properties for boss demonic corruption meter
    idDeclDemonicCorruption::corruptionData_t bossProperties; // Offset: 0x160

    // data for dlc2 escalation encounters
    idDeclDemonicCorruption::escalationData_t escalationData; // Offset: 0x188

    // sound to play when all demonic corruption is cleansed
    idSoundEvent* allCompleteSound; // Offset: 0x198

    // milestone associated with secret encounter completion, for display purposes
    idDeclMilestone* secretMilestone; // Offset: 0x1A0

}; // Size: 0x1A8

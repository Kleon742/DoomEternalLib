struct idTutorialCheckpointData_t
{
    // The number of times a player must die to trigger this tutorial event
    int numRequiredDeaths; // Offset: 0x0

    // The player must be killed by these monster types to trigger this tutorial event
    aiMonsterType_t monsterTypes; // Offset: 0x8

    // The codex entry to award if the player dies the given number of times
    idDeclCodexEntry* codexEntry; // Offset: 0x10

    // The tutorial event to trigger if the given codex entry is not NULL
    idDeclTutorialEvent* tutorialEvent; // Offset: 0x18

    // If true, the codex tutorial or the tutorialEvent will be shown even if it has been seen before
    bool allowMultiple; // Offset: 0x20

}; // Size: 0x28

struct idSWFWidget_Button_Mastery : idSWFWidget_Button_Upgrade
{
    idDeclUnlockable* challenge; // Offset: 0x2D8

    int challengeProgress; // Offset: 0x2E0

    int unlockMax; // Offset: 0x2E4

    int unlockCount; // Offset: 0x2E8

    bool canProgress; // Offset: 0x2EC

}; // Size: 0x2F0

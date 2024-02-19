struct idSWFWidget_Button_Mod : idSWFWidget_Button_Lockable
{
    idDeclWeapon* weapon; // Offset: 0x2B0

    idPerkFamily* mod; // Offset: 0x2B8

    bool isUnlocked; // Offset: 0x2C0

    bool isActive; // Offset: 0x2C1

    short isUpgradeActive[3]; // Offset: 0x2C2

    int masteryChallengeProgress; // Offset: 0x2C8

    bool isMasteryUnlocked; // Offset: 0x2CC

    bool expanded; // Offset: 0x2CD

}; // Size: 0x2D0

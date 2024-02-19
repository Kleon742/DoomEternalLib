struct idHUDMenu_ExtraLifeExchange : idMenuElement
{
    bool successfullyActivated; // Offset: 0x100

    bool refreshLifeInfo; // Offset: 0x101

    bool newUnlockMet; // Offset: 0x102

    bool firstUpdate; // Offset: 0x103

    int rewardIndex; // Offset: 0x104

    idExtraLifeRewardHandler RewardHandler; // Offset: 0x108

}; // Size: 0x130

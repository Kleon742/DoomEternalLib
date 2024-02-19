struct idDeclExtraLifeExchangeRewards : idGameDeclTypeInfo
{
    // The list of rewards and their attributed life count needed to unlock. REQUIRED to be populated in order by lowest life requirement first.
    idList < rewardData_t , TAG_IDLIST , false > rewardProgression; // Offset: 0x90

}; // Size: 0xA8

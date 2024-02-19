struct idHUDEvent_DemonBounty
{
    struct demonBountyInfo_t
    {
        int bountyLevel; // Offset: 0x0

        aiMonsterType_t bountyDemonType; // Offset: 0x8

        char userName[32]; // Offset: 0x10

    }; // Size: 0x30

    idHUDEvent_DemonBounty::demonBountyInfo_t info; // Offset: 0x0

}; // Size: 0x30

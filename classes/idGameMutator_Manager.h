struct idGameMutator_Manager : idDamageCompiler_Listener
{
    struct gameMutators_t
    {
        bool isActive; // Offset: 0x0

        idDeclGameMutator* mutatorDecl; // Offset: 0x8

    }; // Size: 0x10

    idGameMutator_Manager::gameMutators_t gameMutators[7]; // Offset: 0x8

    bool initialized; // Offset: 0x78

    idGameChallenge_CampaignSinglePlayer* ownerChallenge; // Offset: 0x80

    idManagedClassPtr < idPlayer > player; // Offset: 0x88

    // Time attack
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > currentTime; // Offset: 0xA8

    int secondsRemainingLastFrame; // Offset: 0xB0

    int msRemainingLastFrame; // Offset: 0xB4

    bool timeAttackActive; // Offset: 0xB8

    int numActiveMutators; // Offset: 0xBC

    // Use or lose
    idList < idWeapon * , TAG_IDLIST , false > brokenWeapons; // Offset: 0xC0

}; // Size: 0xD8

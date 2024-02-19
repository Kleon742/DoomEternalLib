struct idAITestCaseNotifier : idEventReceiver
{
    struct AIState_t
    {
        idStr name; // Offset: 0x0

        int entityNumber; // Offset: 0x30

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > curTime; // Offset: 0x38

        idTypesafeTime < int , millisecondUnique_t , 1000 > timeMs; // Offset: 0x40

    }; // Size: 0x48

    struct PlayerDamage_t
    {
        idStr name; // Offset: 0x0

        int playerEntityNumber; // Offset: 0x30

        int attackerEntityNumber; // Offset: 0x34

        int damageTaken; // Offset: 0x38

        idTypesafeTime < int , millisecondUnique_t , 1000 > timeMs; // Offset: 0x3C

    }; // Size: 0x40

    bool hasPlayerDied; // Offset: 0x38

    idList < idAITestCaseNotifier::AIState_t , TAG_IDLIST , false > aiStates; // Offset: 0x40

    idList < idAITestCaseNotifier::PlayerDamage_t , TAG_IDLIST , false > playerDamage; // Offset: 0x58

}; // Size: 0x70

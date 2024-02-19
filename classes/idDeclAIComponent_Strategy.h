struct idDeclAIComponent_Strategy : idDeclAIComponent
{
    // ideal frequency of attacks, per sec
    float minAttackFrequency; // Offset: 0x98

    // max frequency of attacks, per sec -- disengage triggered when this threshold is reached
    float maxAttackFrequency; // Offset: 0x9C

    // how long in the past to keep track of interactions
    idTypesafeTime < float , secondUnique_t , 1 > interactionTrackingWindow; // Offset: 0xA0

    // regardless of whether we hit enemy, don't engage for longer than this
    float maxSecondsEngaged; // Offset: 0xA4

    // regardless of our other tasks, don't remain disengaged for longer than this
    float maxSecondsDisengaged; // Offset: 0xA8

    // below this number, we change behavior -- teammates anywhere ( active AI )
    int desiredNumTeammates; // Offset: 0xAC

    // below this number, we change behavior -- teammates with same enemy as us
    int desiredNumTeammatesWithEnemy; // Offset: 0xB0

    // above this number, we change behavior
    int maxNumTeammates; // Offset: 0xB4

}; // Size: 0xB8

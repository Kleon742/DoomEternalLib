struct idHUDEvent_ScoreUpdate
{
    struct scoreData_t
    {
        int scoreChange; // Offset: 0x0

        char scoreChangeMessage[128]; // Offset: 0x4

        int totalScore; // Offset: 0x84

    }; // Size: 0x88

    idHUDEvent_ScoreUpdate::scoreData_t info; // Offset: 0x0

}; // Size: 0x88

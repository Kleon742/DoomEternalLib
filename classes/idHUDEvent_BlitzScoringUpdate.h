struct idHUDEvent_BlitzScoringUpdate
{
    struct blitzScoringUpdateData_t
    {
        int score; // Offset: 0x0

        int newScore; // Offset: 0x4

        idMaterial2* icon; // Offset: 0x8

    }; // Size: 0x10

    idHUDEvent_BlitzScoringUpdate::blitzScoringUpdateData_t info; // Offset: 0x0

}; // Size: 0x10

struct idHUDEvent_HordeScoringUpdate
{
    struct hordeScoringUpdateData_t
    {
        int score; // Offset: 0x0

        int newScore; // Offset: 0x4

        float multiplier; // Offset: 0x8

        idMaterial2* icon; // Offset: 0x10

        idDeclScoringItem* multiplierDecl; // Offset: 0x18

        idSoundEvent* sound; // Offset: 0x20

        bool isAI; // Offset: 0x28

    }; // Size: 0x30

    idHUDEvent_HordeScoringUpdate::hordeScoringUpdateData_t info; // Offset: 0x0

}; // Size: 0x30

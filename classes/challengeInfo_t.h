struct challengeInfo_t
{
    int id; // Offset: 0x0

    char displayName[64]; // Offset: 0x4

    char description[256]; // Offset: 0x44

    char challengeType[64]; // Offset: 0x144

    idMaterial2* challengeImage; // Offset: 0x188

    idMaterial2* icon; // Offset: 0x190

    int progress; // Offset: 0x198

    int goal; // Offset: 0x19C

    // if the server has unlocked the challenge. should be true if progress > goal within a few seconds of it happening
    bool completed; // Offset: 0x1A0

    int rewardXP; // Offset: 0x1A4

    idDeclWarehouseItem* rewardItem; // Offset: 0x1A8

}; // Size: 0x1B0

struct idFloatingNumberOverlay
{
    struct floatingNumber_t
    {
        idVec3 position; // Offset: 0x0

        int number; // Offset: 0xC

        float createTime; // Offset: 0x10

        float destroyTime; // Offset: 0x14

        int id; // Offset: 0x18

        bool active; // Offset: 0x1C

        unsigned char type; // Offset: 0x1D

        idVec2 dir; // Offset: 0x20

        idVec2 coordOffset; // Offset: 0x28

        float arcGravity; // Offset: 0x30

        float arcUpVelocity; // Offset: 0x34

        idVec3 arcTravelVector; // Offset: 0x38

        bool isHealth; // Offset: 0x44

    }; // Size: 0x48

    idFloatingNumberOverlay::floatingNumber_t numbers[64]; // Offset: 0x0

    // Loops around from end to beginning of number array.
    int nextNumberIndex; // Offset: 0x1200

    int activeCount; // Offset: 0x1204

    float fontSize; // Offset: 0x1208

    float critFontSize; // Offset: 0x120C

    float maxFloatingNumberLifetime; // Offset: 0x1210

    bool stairstepOffset; // Offset: 0x1214

    idColor healthGainColor; // Offset: 0x1218

    idColor armorGainColor; // Offset: 0x1228

    idColor healthColor; // Offset: 0x1238

    idColor armorColor; // Offset: 0x1248

    idColor headshotColor; // Offset: 0x1258

    idColor equipmentColor; // Offset: 0x1268

    idColor splashColor; // Offset: 0x1278

    idColor demonColor; // Offset: 0x1288

    idColor slayerColor; // Offset: 0x1298

    idColor splashShieldColor; // Offset: 0x12A8

    idColor demonShieldColor; // Offset: 0x12B8

    idColor slayerShieldColor; // Offset: 0x12C8

    idColor slayerInvulnerableColor; // Offset: 0x12D8

    idColor slayerToughenedColor; // Offset: 0x12E8

    idColor slayerAIColor; // Offset: 0x12F8

    idColor slayerAIShieldColor; // Offset: 0x1308

    idColor demonToughenedColor; // Offset: 0x1318

}; // Size: 0x1328

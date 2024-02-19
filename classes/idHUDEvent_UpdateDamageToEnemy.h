struct idHUDEvent_UpdateDamageToEnemy
{
    struct damageToEnemy_t
    {
        int spawnId; // Offset: 0x0

        int damage; // Offset: 0x4

        float x; // Offset: 0x8

        float y; // Offset: 0xC

        float z; // Offset: 0x10

        float destroyTime; // Offset: 0x14

        unsigned char type; // Offset: 0x18

    }; // Size: 0x1C

    idHUDEvent_UpdateDamageToEnemy::damageToEnemy_t info; // Offset: 0x0

}; // Size: 0x1C

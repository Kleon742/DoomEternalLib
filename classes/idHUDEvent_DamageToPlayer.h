struct idHUDEvent_DamageToPlayer
{
    struct damageToPlayer_t
    {
        int val; // Offset: 0x0

        float x; // Offset: 0x4

        float y; // Offset: 0x8

        float z; // Offset: 0xC

        int health; // Offset: 0x10

        int armor; // Offset: 0x14

    }; // Size: 0x18

    idHUDEvent_DamageToPlayer::damageToPlayer_t info; // Offset: 0x0

}; // Size: 0x18

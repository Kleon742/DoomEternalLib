struct idHUDEvent_CharacterStatusEvent
{
    struct characterStatusUpdate_t
    {
        int spawnId; // Offset: 0x0

        float x; // Offset: 0x4

        float y; // Offset: 0x8

        float z; // Offset: 0xC

        float destroyTime; // Offset: 0x10

        unsigned char type; // Offset: 0x14

    }; // Size: 0x18

    idHUDEvent_CharacterStatusEvent::characterStatusUpdate_t info; // Offset: 0x0

}; // Size: 0x18

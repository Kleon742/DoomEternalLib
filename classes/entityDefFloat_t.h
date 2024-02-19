struct entityDefFloat_t
{
    // the AI type that this value applies to
    aiMonsterType_t aiType; // Offset: 0x0

    // the player demon type that this value applies to
    demonType_t demonType; // Offset: 0x8

    // the value
    float val; // Offset: 0xC

}; // Size: 0x10

struct logicKeyEvent_t
{
    // Unique identifier
    unsigned int id; // Offset: 0x0

    // Key
    logicKey_t key; // Offset: 0x4

    // State
    logicKeyState_t state; // Offset: 0x8

}; // Size: 0xC

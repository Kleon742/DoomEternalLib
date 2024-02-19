struct idShared_Default : idAIState
{
    // subweb to enter
    aiSubWeb_t animwebSubweb; // Offset: 0x130

    // desired firemode
    aiFireMode_t fireMode; // Offset: 0x134

    // whether to even allow focus tracking
    bool allowFocusTracking; // Offset: 0x138

    // if true, focus on enemy
    bool focusOnEnemy; // Offset: 0x139

}; // Size: 0x140

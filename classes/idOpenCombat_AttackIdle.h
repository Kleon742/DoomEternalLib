struct idOpenCombat_AttackIdle : idAIState
{
    // firemode AI should take when in idle
    aiFireMode_t idleFireMode; // Offset: 0x130

    // if false, don't let AI turn in this state
    bool allowTurning; // Offset: 0x134

}; // Size: 0x138

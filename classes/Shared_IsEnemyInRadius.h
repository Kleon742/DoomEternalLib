struct Shared_IsEnemyInRadius : idAIStateTransition
{
    // radius to check {{ units = m }}
    float radius; // Offset: 0xF8

    // whether to use 2d checks
    bool use2Dchecks; // Offset: 0xFC

}; // Size: 0x100

struct idMancubusCombat_MoveTowardEnemy : idAIState
{
    idEntityPtr_ThreadSafe < idEntity > objectEntity; // Offset: 0x130

    int allowStrafing; // Offset: 0x148

    // {{ units = m }}
    float arrivalTolerance; // Offset: 0x14C

    float boundsScaleXY; // Offset: 0x150

    float boundsScaleZ; // Offset: 0x154

    bool enemyPathBlocked; // Offset: 0x158

    // move cycle postfix
    idAtomicString overrideMoveCyclePostfix; // Offset: 0x160

}; // Size: 0x168

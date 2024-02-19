struct botMoveGoalInfo_t
{
    bool processMoveActionFlags; // Offset: 0x0

    bool moveIsReached; // Offset: 0x1

    bool moveIsErrored; // Offset: 0x2

    bool hasValidMoveGoal; // Offset: 0x3

    bool stopAtMovePoint; // Offset: 0x4

    // {{ units = m }}
    idVec3 nextMovePoint; // Offset: 0x8

    BotTraversalType nextMovePointTraversalType; // Offset: 0x14

    bool nextMovePointIsGoal; // Offset: 0x18

    idBitFlag32 botMoveActionFlags; // Offset: 0x1C

    botMoveStance_t moveStance; // Offset: 0x20

    botMoveStance_t idleStance; // Offset: 0x24

}; // Size: 0x28

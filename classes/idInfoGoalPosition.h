struct idInfoGoalPosition : idInfo
{
    // radius of node ( tether ) {{ units = m }}
    float radius; // Offset: 0xB90

    // if true, AI will be given awareness of player as an enemy. NOTE: This MUST be true for AI to use run or sprint walkStates!
    bool forceCombat; // Offset: 0xB94

    // force AI to use this walk state to move to the goal position.
    walkState_t walkState; // Offset: 0xB98

}; // Size: 0xBA0

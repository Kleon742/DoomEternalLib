struct idShared_RepositionMajor : idAIState
{
    // nocomment
    float secondsTillNextCheck; // Offset: 0x130

    // if true, get message data from parent fsm
    bool getDataFromParent; // Offset: 0x134

    // desired firemode
    aiFireMode_t fireMode; // Offset: 0x138

    // Override for the walk state
    walkState_t overrideWalkState; // Offset: 0x13C

    // flags to control how walkstate is automatically updated
    walkstateManagementFlags_t walkstateManagementFlags; // Offset: 0x140

    // Focus on the enemy while walking.
    bool focusOnEnemy; // Offset: 0x144

    // Override for the animweb node 'move' postfix. Node will need to be named 'walk<_overrideName>_movement'.
    idStr overrideMovePostfix; // Offset: 0x148

    // if non-empty, AI will use ONLY this animation as the destination idle
    idAnimWebPath_Atomic destIdleAnim; // Offset: 0x178

    // additional move flags
    moveFlags_t moveFlags; // Offset: 0x1B8

}; // Size: 0x1C0

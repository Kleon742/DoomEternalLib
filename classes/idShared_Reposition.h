struct idShared_Reposition : idAIState
{
    int timerSlot; // Offset: 0x130

    // nocomment
    walkState_t walkstate; // Offset: 0x134

    // flags to control how walkstate is automatically updated
    walkstateManagementFlags_t walkstateManagementFlags; // Offset: 0x138

    // desired firemode
    aiFireMode_t fireMode; // Offset: 0x13C

    // additional move flags
    moveFlags_t moveFlags; // Offset: 0x140

    // if non-empty, AI will use ONLY this animation as the destination idle
    idAnimWebPath_Atomic destIdleAnim; // Offset: 0x148

    // if true, get message data from parent fsm
    bool getDataFromParent; // Offset: 0x188

}; // Size: 0x190

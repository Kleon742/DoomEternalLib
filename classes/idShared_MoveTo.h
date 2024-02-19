struct idShared_MoveTo : idAIState
{
    // entity
    idAtomicString entityMemoryKey; // Offset: 0x130

    // origin
    idAtomicString originMemoryKey; // Offset: 0x138

    // axis
    idAtomicString axisMemoryKey; // Offset: 0x140

    // arrival tolerance
    idAtomicString arrivalToleranceMemoryKey; // Offset: 0x148

    // entity align to rotation
    idAtomicString entityAlignToRotationMemoryKey; // Offset: 0x150

    // adsfjl
    aiArrivalOrientation_t arriveOrientation; // Offset: 0x158

    // if > 0, use this isntead of what incoming IO data says
    float overrideArriveRadius; // Offset: 0x15C

    // if true, get message data from parent fsm
    bool getDataFromParent; // Offset: 0x160

    // desired firemode
    aiFireMode_t fireMode; // Offset: 0x164

    // Override for the walk state
    walkState_t overrideWalkState; // Offset: 0x168

    // flags to control how walkstate is automatically updated
    walkstateManagementFlags_t walkstateManagementFlags; // Offset: 0x16C

    // additional move flags
    moveFlags_t moveFlags; // Offset: 0x170

    // if non-empty, AI will use ONLY this animation as the destination idle
    idAnimWebPath_Atomic destIdleAnim; // Offset: 0x178

}; // Size: 0x1B8

struct idShared_MoveTowardEntity : idAIState
{
    // Name of the temp memory key that specifies the entity to move to
    idAtomicString memoryEntityKeyName; // Offset: 0x130

    // Name of the temp memory key that specifies an offset from entity to move to
    idAtomicString memoryEntityOffsetKeyName; // Offset: 0x138

    // nocomment
    bool allowStrafing; // Offset: 0x140

    // nocomment
    bool desireStrafing; // Offset: 0x141

    // nocomment {{ units = m }}
    float arrivalRadius; // Offset: 0x144

    // optional IO key for arrival radius
    idAtomicString arrivalRadiusKeyName; // Offset: 0x148

    // nocomment {{ units = m }}
    float arrivalHeight; // Offset: 0x150

    // nocomment {{ units = m }}
    float navTolerance; // Offset: 0x154

    // nocomment {{ units = m }}
    float verticalNavTolerance; // Offset: 0x158

    // nocomment
    walkState_t walkstate; // Offset: 0x15C

    // desired fire control mode
    aiFireMode_t fireMode; // Offset: 0x160

    // how to auto-control our walkstate, used when walkstate is MAX
    walkstateManagementFlags_t walkstateManagementFlags; // Offset: 0x164

    // if true, focus on enemy rather than facing the move target
    bool focusOnEnemy; // Offset: 0x168

    // additional move flags
    moveFlags_t moveFlags; // Offset: 0x170

}; // Size: 0x178

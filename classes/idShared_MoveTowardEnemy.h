struct idShared_MoveTowardEnemy : idAIState
{
    idEntityPtr_ThreadSafe < idEntity > objectEntity; // Offset: 0x130

    // nocomment
    bool allowStrafing; // Offset: 0x148

    // nocomment
    bool desireStrafing; // Offset: 0x149

    // nocomment {{ units = m }}
    float arrivalRadius; // Offset: 0x14C

    // nocomment {{ units = m }}
    float arrivalHeight; // Offset: 0x150

    // nocomment {{ units = m }}
    float navTolerance; // Offset: 0x154

    // nocomment {{ units = m }}
    float verticalNavTolerance; // Offset: 0x158

    // nocomment
    float boundsScaleXY; // Offset: 0x15C

    // nocomment
    float boundsScaleZ; // Offset: 0x160

    // if true, check to see if path is blocked and restart
    bool restartIfBlocked; // Offset: 0x164

    bool enemyPathBlocked; // Offset: 0x165

    // nocomment
    walkState_t walkstate; // Offset: 0x168

    // nocomment
    bool charge; // Offset: 0x16C

    // desired fire control mode
    aiFireMode_t fireMode; // Offset: 0x170

    // how to auto-control our walkstate
    walkstateManagementFlags_t walkstateManagementFlags; // Offset: 0x174

    // additional move flags
    moveFlags_t moveFlags; // Offset: 0x178

    // move cycle postfix
    idAtomicString overrideMoveCyclePostfix; // Offset: 0x180

    // minimum distance to enemy to use overriden postfix {{ units = m }}
    float minDistanceToOverrideMoveCyclePostFix; // Offset: 0x188

    // if >= 0, use dynamic melee position goal outside this radius {{ units = m * m }}
    float dynamicRadius; // Offset: 0x18C

}; // Size: 0x190

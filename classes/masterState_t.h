struct masterState_t
{
    bool hasMaster; // Offset: 0x0

    bool isOrientated; // Offset: 0x1

    bool manualUpdate; // Offset: 0x2

    bool clearWhenFinished; // Offset: 0x3

    bool skipFutureLatch; // Offset: 0x4

    bool isAttached; // Offset: 0x5

    idVec3 localOrigin; // Offset: 0x8

    idMat3 localAxis; // Offset: 0x14

    idVec3 manualMasterOrigin; // Offset: 0x38

    idMat3 manualMasterAxis; // Offset: 0x44

    idPhysics::motionType_t oldMotionType; // Offset: 0x68

}; // Size: 0x6C

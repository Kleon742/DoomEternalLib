struct idHavokPhysics_Base : idPhysics
{
    idHavokPhysics* havokPhysics; // Offset: 0x80

    idHavokBodyId bodyId; // Offset: 0x88

    idMat3 bodyAxis; // Offset: 0x8C

    idVec3 bodyOrigin; // Offset: 0xB0

    idVec3 centerOfMass; // Offset: 0xBC

    idBounds bodyBoundsLocal; // Offset: 0xC8

    idBounds bodyBoundsWorld; // Offset: 0xE0

    idVec3 bodyLinearVelocity; // Offset: 0xF8

    idMat3 futureAxis; // Offset: 0x104

    idVec3 futureOrigin; // Offset: 0x128

    motionProperties_t motionProperties; // Offset: 0x134

    motionType_t motionType; // Offset: 0x14C

    masterState_t masterState; // Offset: 0x150

    idHavokShapePointer shape; // Offset: 0x1C0

    bool customjob; // Offset: 0x0

    bool isActive; // Offset: 0x0

    bool isBodyAdded; // Offset: 0x0

    bool disablePlyrJump; // Offset: 0x0

    bool disableDash; // Offset: 0x0

    bool hasFuture; // Offset: 0x0

    bool continuousMotion; // Offset: 0x0

    bool neverContinuousMotion; // Offset: 0x0

    bool enableNetworkModeCheck; // Offset: 0x0

    int masterId; // Offset: 0x1CC

    float waterLevel; // Offset: 0x1D0

    // networking {{ units = m }}
    idVec3 networkOrigin; // Offset: 0x1D4

    idMat3 networkAxis; // Offset: 0x1E0

    networkMode_t networkMode; // Offset: 0x204

}; // Size: 0x208

struct aiMoveModifiers_t
{
    // override move speed
    idRange < float > moveSpeed; // Offset: 0x0

    // desired walkstate during this stage
    walkState_t desiredWalkstate; // Offset: 0x8

    // explicit move cycle to play during this stage
    idAnimWebPath_Atomic overrideCycle; // Offset: 0x10

    // additional move flags
    moveFlags_t moveFlags; // Offset: 0x50

    // whether we should straf facing action target
    bool faceActionTarget; // Offset: 0x58

    // whether we should aim at action target
    bool aimAtActionTarget; // Offset: 0x59

    // whether we should look at action target
    bool lookAtActionTarget; // Offset: 0x5A

    // whether we should look for a firing cycle
    bool fireAtActionTarget; // Offset: 0x5B

}; // Size: 0x60

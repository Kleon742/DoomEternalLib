struct idHavokPhysics_Parametric : idHavokPhysics_RigidBody
{
    // ------------------------ parametric physics state ------------------------
    parametricPState_t_Havok current; // Offset: 0x250

    parametricPState_t_Havok saved; // Offset: 0x4F0

    // {{ __its = m / s }} {{ __its = radians / s }}
    idVec6 spatialVelocity; // Offset: 0x790

    int blockingPhysicsId; // Offset: 0x7A8

    idBounds absBounds; // Offset: 0x7AC

    // ------------------------ pusher ------------------------ idPush *pusher;
    bool isPusher; // Offset: 0x7C4

    // idClipModel *clipModel;
    int pushFlags; // Offset: 0x7C8

    // ------------------------ master ------------------------
    bool hasMaster; // Offset: 0x7CC

    bool isOrientated; // Offset: 0x7CD

    // ------------------------ world orientation ------------------------
    bool hasWorldOrientation; // Offset: 0x7CE

    idMat3 worldAxis; // Offset: 0x7D0

    // {{ units = m }}
    idVec3 worldOrigin; // Offset: 0x7F4

}; // Size: 0x800

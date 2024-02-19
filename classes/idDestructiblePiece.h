struct idDestructiblePiece
{
    // Physics body.
    idHavokPhysics_RigidBody* body; // Offset: 0x0

    // Fx Handle
    idHandle < unsigned long long , unsigned long long , UINT64_MAX > fxHandle; // Offset: 0x8

    // Part index
    int id; // Offset: 0x10

    // Part name
    idStr name; // Offset: 0x18

}; // Size: 0x48

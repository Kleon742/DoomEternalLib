struct idDestructibleConstraint
{
    // piece to connect from
    idAtomicString pieceContrainFrom; // Offset: 0x0

    // piece to connect to
    idAtomicString pieceContrainTo; // Offset: 0x8

    // offset that we pivot around.
    idVec3 constraintPivot; // Offset: 0x10

    // cone limits of the constraint.
    idAngles constraintLimits; // Offset: 0x1C

    // constraint friction.
    float friction; // Offset: 0x28

    // maximum amount of twist.
    float maxTwist; // Offset: 0x2C

}; // Size: 0x30

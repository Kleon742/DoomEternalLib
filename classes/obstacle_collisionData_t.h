struct obstacle_collisionData_t
{
    // Name of the sub mesh. This will be used to determine collision.
    idStr meshName; // Offset: 0x0

    // Name of the joint the sub model is associated with
    idStr jointName; // Offset: 0x30

    // damage to apply if part crushes something it touches
    idDeclDamage* crushDamage; // Offset: 0x60

    // {{ units = m }}
    idVec3 startingJointPos; // Offset: 0x68

    idMat3 startingJointAxis; // Offset: 0x74

    // {{ units = m }}
    idVec3 startingClipCenter; // Offset: 0x98

    // Query for each piece
    idHavokGatherQueryId touchQuery; // Offset: 0xA8

    bool shouldGather; // Offset: 0xB0

}; // Size: 0xB8

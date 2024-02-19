struct idDragEntity
{
    // entity being dragged
    int physicsId; // Offset: 0x0

    // id of body being dragged
    int bodyId; // Offset: 0x4

    // dragged point relative to physics object {{ units = m }}
    idVec3 localPhysicsPoint; // Offset: 0x8

    // dragged point in player space {{ units = m }}
    idVec3 localPlayerPoint; // Offset: 0x14

    idManagedClassPtr < idEntity > selected; // Offset: 0x20

}; // Size: 0x40

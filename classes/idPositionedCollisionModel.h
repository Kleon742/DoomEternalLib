struct idPositionedCollisionModel
{
    idCollisionModel* model; // Offset: 0x0

    // Joints for sphere model.
    idJointMat* modelJoints; // Offset: 0x8

    // Position of model. {{ units = m }}
    idVec3 modelOrigin; // Offset: 0x10

    // Orientation of model.
    idMat3 modelAxis; // Offset: 0x1C

    // The entity that owns this model / physics object.
    idSpawnId modelSpawnId; // Offset: 0x40

    // Identifier of the physics object containing this model.
    int modelPhysicsId; // Offset: 0x44

    // Identifier of this model on the physics object.
    int modelBodyId; // Offset: 0x48

    // If != 0, this overrides all contents on the model.
    int modelContentsOverride; // Offset: 0x4C

    // The model origin and axis should be copied from the results of this query.
    idCollisionQuery modelQuery; // Offset: 0x50

}; // Size: 0x58

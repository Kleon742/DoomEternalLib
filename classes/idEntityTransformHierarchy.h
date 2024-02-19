struct idEntityTransformHierarchy
{
    // The name of the parent entity.
    idStr parentEntityName; // Offset: 0x0

    // The position relative to the parent's position.
    idVec3 localPosition; // Offset: 0x30

    // The rotation relative to the parent's rotation.
    idQuat localRotation; // Offset: 0x3C

    // The scale relative to the parent's scale.
    idMat3 localScale; // Offset: 0x4C

}; // Size: 0x70

struct idCachedJoint
{
    // index of the cached joint
    idIndex < short , invalidJointIndex_t , - 1 > jointIndex; // Offset: 0x0

    // frame number this cached joint is on
    float frameNum; // Offset: 0x4

    // model-space translation of the joint {{ units = m }}
    idVec3 trans; // Offset: 0x8

    // model-space rotation of the joint
    idQuat rot; // Offset: 0x14

}; // Size: 0x24

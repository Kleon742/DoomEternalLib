struct fkEffector_Cache_t
{
    // used for lookup
    fkChainAddress_t address; // Offset: 0x0

    // used for lookup
    int effectorIndex; // Offset: 0x10

    // used for lookup
    int trackingParmsIndex; // Offset: 0x14

    // used for lookup
    idMD6Anim* anim; // Offset: 0x18

    // frame used to construct pose, < 0 implies ANIM_AND_FK inheritance
    int poseFrame; // Offset: 0x20

    // treated as end of chain for effectors that don't want entire chain
    idIndex < short , invalidJointIndex_t , - 1 > endJoint; // Offset: 0x24

    // this is always valid
    tagData_t tagData; // Offset: 0x28

    // cached off
    idIndex < short , invalidJointIndex_t , - 1 > tagParentJoint; // Offset: 0x48

    // this can be invalid -- if so, we want the effector to inherit all anim data from parent
    idIndex < short , invalidJointIndex_t , - 1 > chainParentJoint; // Offset: 0x4A

    idMat3 chainParentOffset_rotation; // Offset: 0x4C

    // {{ units = m }}
    idVec3 chainParentOffset_translation; // Offset: 0x70

}; // Size: 0x80
